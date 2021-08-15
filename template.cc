//Learning templates
//cl /EHsc /W4 /sdl template.cc | ./template.exe
//cl /EHsc /W4 /sdl template.cc && template.exe
//Powershell^^ cmd^
#include <iostream>
#include <string>
#include <algorithm>
//Begin generic template
template <class Target>
Target Run(Target repeat)
{
  return repeat;
}

void genericTemplate(){
  auto return1 = 123;
  int return2 = 456;
  float return3 = 345;
  std::string return4 = "Hello world";
  std::cout << Run(return1) << std::endl;
  std::cout << Run(return2) << std::endl;
  std::cout << Run(return3) << std::endl;
  std::cout << Run(return4) << std::endl;
}

//Begin Class template
template <class classEx>
class templateExample {
  private:
    classEx userName;
    classEx password;
  public:
    templateExample(classEx cred1, classEx cred2) //This is the constructor
    {
      userName = cred1;
      password = cred2;
    }
    void output() {
      std::cout << "CRED1: " << userName << std::endl;
      std::cout << "CRED2: " << password << std::endl;
    }
    classEx userNameOutput() {return userName;}
    classEx passwordOutput() {return password;}
    ~templateExample() {
      std::cout << "Destructing class template" << std::endl;
    }
};

void classTemplate() {
  templateExample<std::string> newInstance("admin","password");
  std::cout << "Username: " << newInstance.userNameOutput() << std::endl;
  std::cout << "Password: " << newInstance.passwordOutput() << std::endl;
  newInstance.output();
  templateExample<int> numberInstance(45,78);
  std::cout << "Username: " << numberInstance.userNameOutput() << std::endl;
  std::cout << "Password: " << numberInstance.passwordOutput() << std::endl;
  numberInstance.output();
}

//Begin sort template
template <class numSort>
numSort sortNum(numSort num1, numSort num2)
{
  std::cout << "The maximum value is " << std::max(num1,num2) << std::endl;
  std::cout << "The minimum value is " << std::min(num1,num2) << std::endl;
  if (num1==num2){std::cout << "Numbers are the same"; return num1;}
  return 0;
}

void sortEx()
{
  auto test1=7248510;
  auto test2=-56;
  sortNum(test1,test2);
}

int main()
{
  std::cout << "Class template example" << std::endl;
  classTemplate();
  std::cout << "Generic template example:" << std::endl;
  genericTemplate();
  std::cout << "Sort max/min" << std::endl;
  sortEx();
}
