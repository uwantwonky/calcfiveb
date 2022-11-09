#include <iostream>

double getNum()
{

std::cout << "Enter your number:" << std::endl;

double gnum;
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

double calcResult(double num1, int gop, double num2)
{
switch(gop)
{
    case 1:
    return num1 + num2;
    break;

    case 2:
    return num1 - num2;
    break;

    case 3:
    return num1 * num2;
    break;

    case 4:
    return num1 / num2;
    break;
}
    return 0;
}

void finalResult(double result)
{
    std::cout << "result = " << result << std::endl;
}
