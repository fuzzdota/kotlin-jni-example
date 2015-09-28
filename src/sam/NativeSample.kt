package sam

class NativeSample {
    init {
        System.loadLibrary("NativeKotlinSample")
    }
    external fun sayHello();

    external fun sendANum(arg: Int);

    external fun sendAString(arg: String);

    external fun getANum(): Int;

    external fun getAString(): String;
}