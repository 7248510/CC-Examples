#include <iostream>
#include <memory>
#include <string>
//Terminal assumes your on Linux. Command prompt shouldn't behave like bash
//g++ -Wall pointers.cc -o pointers && ./pointers
void uniqPointers()
{
  int allocCount = 3;
  std::unique_ptr<std::string> my_ptr{new std::string{"Create unique pointer's"}};
  std::unique_ptr<std::string[]> myArray{new std::string[allocCount]}; //arg count
  myArray[0] = {"Hello"};
  myArray[1] = {"World"};
  myArray[2] = {"Unique pointers rule"};
  std::cout << "Unique Pointer value: " << *my_ptr << std::endl;
  std::cout << "Begin Unique pointer loop";
  for (int i=0; i < allocCount; i++) {
    std::cout <<"\n" << myArray[i];
  }
  std::cout << std::endl << std::endl; //For the terminal
}

typedef std::pair<std::string, std::string> currentPair;
void sharedPointers()
{
  std::shared_ptr<currentPair> Batch(new currentPair("Hello", "World"));
  std::cout << "First value: " << Batch->first << std::endl;
  std::cout << "Second value: " << Batch->second << std::endl; //To understand the operator see the arrow class
  //C++ Crash course page 358 Main difference = Able to copy shared pointers
  std::shared_ptr<int> a{new int{808}};
  auto b = std::make_shared<int>(*a);
  std::cout << "A value: " << a << std::endl;
  std::cout << "A pointer value: " << *a << std::endl;
  std::cout << "Copying A value to B" << std::endl;
  std::cout << "B value: " << b << std::endl;
    std::cout << "B pointer value: " << *b << std::endl;
  std::cout << "\n"; //For the terminal
  //^Declared differently, but the outcome is the same
}
//Understanding the arrow operator.
//These examples should be easier to comprehend
class arrowLearn{
  public:
    int setVar = 0;
    void outputVal() {std::cout << setVar << std::endl; return;} //return val
    void outputDetails(std::string username, std::string email) {
      std::cout << "Username value:" << username << std::endl;
      std::cout << "email value:" << email << std::endl;
  }
};
void arrow()
{
  arrowLearn clock;
  arrowLearn* clock_ptr = &clock;
  clock_ptr -> outputDetails("7248510", "test@test.com"); //Value of outputDetails
  std::cout << "Class memory location " << clock_ptr << std::endl; //This value will change due to ASLR
  std::cout << "Default output value: ";
  clock_ptr -> outputVal();
  clock_ptr -> setVar = 5;
  std::cout << "Changed output value: ";
  clock_ptr -> outputVal();
  std::cout << "Pointer value " << clock_ptr << std::endl;
}

int main()
{
  std::cout << "Shared pointers:" << std::endl;
  sharedPointers();
  std::cout << "Unique pointers:" << std::endl;
  uniqPointers();
  std::cout << "Arrow operator:" << std::endl;
  arrow();
  std::cout << "\n"; //Terminal
}
