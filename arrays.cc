#include <iostream>

int main()
{
    //& is the reference operator
    int pass1{5};
    int pass2{25};
    constexpr int compileTime{45}; //To be evaluated at compile time, allows placement of read only memory. Calculated by compiler(10)
    int &refVal1 = pass1; //Reference pass1's value
    int *pointerVal = &pass2;
    std::cout << "Pointer value: " << *pointerVal << std::endl; 
    std::cout << "Pointer memory address: " << pointerVal << std::endl;
    std::cout << "Reference value: " << refVal1;

    int tenNumbers[] = {0,34,52,75,23,54,75,234,543,87};
    for (auto loopThrough : tenNumbers) {
        std::cout << "Each number: " << loopThrough << std::endl;
    }
    std::cout << "Output array values" << std::endl;
    for (auto &x : {34,56,56,345,65,563,34}) {
        std::cout << "Output : " << x << std::endl;
    }
    int addTo[] = {0,1,2,3,4,5};
    std::cout << "Add one value to the array" << std::endl;
    for (auto &x : addTo) {
        std::cout << "Original value: " << x << " ";
        std::cout << "Modified value x+=1 : " << ++x << std::endl;
    }
}
