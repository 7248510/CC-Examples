//The first chapter in Professional C++ covers these concepts
#include <iostream>
#include <compare>


using namespace std;

int main()
{
    

    cout << "Hello World!\n";
    int testvariable{ 0 };
    std::strong_ordering result{ testvariable <=> 0 };
    if (result == std::strong_ordering::less) { cout << "Less than " << testvariable << " 0" << endl;};
    if (result == std::strong_ordering::greater) { cout << "Greater than " << testvariable << " 0" << endl; };
    if (result == std::strong_ordering::equal) { cout << "The variables are equal." << endl;};

    //Named comparision 
    //Using compare
    int x = { 55 };
    std::strong_ordering result2 { x <=> 600}; //Space ship operator can compare three results  
    if (is_lt(result2)) { cout << "variable x is less than the testing condition" << endl; }
    if (is_gt(result2)) { cout << "variable x is greater than the testing condition" << endl; }
    if (is_eq(result2)) { cout << "variable x is equal than the testing condition" << endl; }
}
