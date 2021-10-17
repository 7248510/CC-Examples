#include <format>
#include <iostream>
//https://en.cppreference.com/w/cpp/utility/format/format
//cl /EHsc format.cc /sdl /W4 /std:c++latest
int main(){
    std::cout << std::format("{} {}! {} {}", "Hello", "world", "printing", "format");
}