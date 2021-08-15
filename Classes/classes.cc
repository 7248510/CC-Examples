#include "classes.hh"
//cl /EHsc /sdl /W4 classes.cc && classes.exe
void execute() {
    convertTimes defaultOpt;
    std::cout << " Calulation value: " << defaultOpt.hourstoSeconds(2.6) << std::endl;
    std::cout << " Calulation value: " << defaultOpt.minutetoSeconds(0);
}

void testingClasses() {
    test::hello();
    test::className test2;
    test2.x = 53; //public variable can be assigned.
    //test2.z = 5888; //Cannot access due to the variable being protected.
    std::cout <<"Test 2 public variable value: "<< test2.x << std::endl;
    //std::cout << test2.y; //cannot access because it's a private variable
    //std::cout << test2.z; //cannot access because it's a protected variable
    privatePub::Pub testAh;
    testAh.testPriv();
    privatePub::callTest test3;
    test3.testPriv();
    test::Derived test4;
    test4.repeatPub();
    test4.repeatProtected();
}
int main()
{
    execute();
    testingClasses();
}
