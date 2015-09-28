#### Kotlin and JNI example


### Build Kotlin
Build and compile kotlin with [Kotlin CLI.](https://github.com/JetBrains/kotlin/releases/tag/build-0.13.1514)
If you use IntelliJ, you can also use Kotlin plugin for compilation.

### Build C/C++
Build and compile C/C++ source to SO/DLL library with Clang, GCC or Visual Studio.

### Run program with JVM
One way to run the program is:
* navigating to build folder ```out/production/kolin-jni-example```
* copy your native dll file to this directory.
* run ```java -cp ".;path/to/kotlin-runtime.jar" sam.SamPackage```
    