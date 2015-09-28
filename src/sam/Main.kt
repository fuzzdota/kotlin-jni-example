package sam

fun main(args: Array<String>) {
    NativeSample().sayHello()
    println("")
    NativeSample().sendANum(99);
    println("")
    NativeSample().sendAString("Oh hi there! Kotlin is here")
    println("")
    var num = NativeSample().getANum();
    var str = NativeSample().getAString();
    println("Got a num dude $num")
    println("Got a str dude $str")
}