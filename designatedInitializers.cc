#include <iostream>
#include <string>
#include <format>
class operatingSystem {
public:
	std::string OS = "Unknown";
	double versionNumber = 0.00;
	std::string currentUser = "Unknown User";
	double extraValue;
};
//Visual Studio 2022 compiler requires the latest features instead of C++ 20
int main()
{
	operatingSystem getCurrent{"Windows 10", 3.14, "Caleb",0.57}; //All the values need to be used. I was able to compile it without a problem but it may be different if you are on not compiling with MSVC
	std::cout << std::format("Operating System: {}\nVersion number: {}\nCurrent User:{}\nextraValue:{}\n",
		getCurrent.OS,getCurrent.versionNumber, getCurrent.currentUser, getCurrent.extraValue);
	std::cout << std::format("Designed Initializer\n");
	operatingSystem designatedInit {
		.OS = "Linux",
		.versionNumber = 45.345,
		.currentUser = "Server",
		.extraValue = 99.34
	};
	std::cout << std::format("Operating System: {}\nVersion number: {}\nCurrent User:{}\nextraValue:{}",
		designatedInit.OS, designatedInit.versionNumber, designatedInit.currentUser, designatedInit.extraValue);
}
