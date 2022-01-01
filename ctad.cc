#include <iostream>
#include <format>
#include <utility>
#include <array>
int addNumbers(int num1, int num2) {
	std::cout << std::format("The function name is {}", __func__) << std::endl;
	return num1 + num2; 
};

int main()
{
	std::pair<double, int> myPair{ 1.25, 5 }; //This is directly from the book. The code samples are downloadable, but I prefer to type and compile.
	int sum{ addNumbers(43,46) };
	std::cout << std::format("The values added up are: {}", sum) << std::endl;
	//CTAD begin = "class template argument deduction"
	std::pair ctadPair{ 1.25, 6 };
	std::array<int, 5> arr{ 0,1,2,3,4 };
	std::array arrCTAD{ 0,2,5,9,7,56 };
	std::cout << std::format("Array non CTAD Third position value: {}", arr[2]) << std::endl;
	std::cout << std::format("Array non CTAD size: {}", arr.size()) << std::endl;
	std::cout << std::format("Array CTAD size: {}", arrCTAD.size()) << std::endl;
	std::cout << std::format("Array CTAD Third position value: {}", arrCTAD[2]) << std::endl;
	std::cout << std::format("{} {}", myPair.first, myPair.second) << std::endl; //Output the first and second pair
	std::cout << std::format("{} {}", ctadPair.first, ctadPair.second) << std::endl; //Output the first and second pair
}


//https://en.cppreference.com/w/cpp/language/class_template_argument_deduction
//https://devblogs.microsoft.com/cppblog/how-to-use-class-template-argument-deduction/
