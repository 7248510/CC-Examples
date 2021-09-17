void whileExample()
{
    int x{0};
    std::cout << "While example:\n";
    std::cout << "Counting up: ";
    //While the condition is true execute until false
    while(x < 5) {
        std::cout << x << "\n";
        x+=1;
    }
}

void doWhileExample()
{
    int doCount{10};
    std::cout << std::endl << "Do while example:\n";
    std::cout << "Counting down: ";
    //Do this while the condition is true.
    do {
        doCount -=1;
        std::cout << doCount << std::endl;
    }
    while(doCount > 0); 
}

void forExample()
{
    int forCount{4};
    int loopCount = 0;
    std::cout << std::endl << "For loop example" << std::endl;
    std::cout << "Counting up: ";
    for (loopCount; loopCount < forCount; loopCount++) {
        std::cout << loopCount << std::endl;
    }
}