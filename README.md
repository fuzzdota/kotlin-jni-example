## Kotlin and JNI example

### How to get started ?
1) Create kotlin source files: Main.kt and NativeSample.kt. See files in ```src``` folder.

2) Notice in NativeSample.kt, I import "NativeSample" library. This is the name of my dll/so file. It should be changed to match your project.

3) Create native header file by running the following command:
```javah -jni -cp ".;path/to/kotlin-runtime.jar" sam.NativeSample```
* Make sure javah is in your system path. More on [javah](http://docs.oracle.com/javase/7/docs/technotes/tools/windows/javah.html)
* sam.NativeSample is the class name that contains native calls.

4) Once the header file is generated (see ```jni/sam_NativeSample.h```), you can create the implementation file for your header (see ```jni/sam_NativeSampleImp```).

5) That is it. Follow the build/run instructions below. 

### Build Kotlin
Build and compile kotlin with [Kotlin CLI.](https://github.com/JetBrains/kotlin/releases/tag/build-0.13.1514): `kotlinc -include-runtime -d kotlin-jni.jar Main.kt NativeSample.kt`
If you use IntelliJ, you can also use Kotlin plugin for compilation.

### Build C/C++
- Build and compile C/C++ source to SO/DLL library with Clang, GCC or Visual Studio.: `gcc -shared -fPIC -I <path to>/jre/include -I <path to>/java-8-openjdk-amd64/include/linux sam_NativeSampleImp.cpp sam_NativeSample.h`
- The shared library needs to named like `lib[Name].so` in order for the JVM to find it.  So: `mv a.out libNativeKotlinSample.so`

### Run program with JVM
One way to run the program is:
* LD_LIBRARY_PATH=<path to shared library> java -jar kotlin-jni.jar
    
