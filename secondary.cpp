#include <iostream>

int getNum()
{

std::cout << "Enter your number:" << std::endl;

int gnum;
std::cin>> gnum;
return gnum;

}

int getOp()
{
    
    std::cout << "Choose your operation" << std::endl;
    std::cout << "(1.+; 2.-; 3.*; 4./):" << std::endl;
    
    int gop;
    std::cin>>gop;
    return gop;

}

int calcResult(int num1, int gop, int num2)
{

    if (gop == 1)
        return (num1 + num2);

    if (gop == 2)
        return (num1 - num2);

    if (gop == 3)
        return (num1 * num2);

    if (gop == 4)
        return (num1 / num2);

    return 0;

}

void finalResult(int result)
{

    std::cout << "result = " << result << std::endl;

}