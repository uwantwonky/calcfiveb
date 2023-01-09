#include <iostream>

double getNum()
{

std::cout << "Enter your number:" << std::endl;

double gnum;
std::cin>> gnum;
return gnum;

}

char getOp()
{
    
    std::cout << "Choose your operation" << std::endl;
    
    char gop;
    std::cin>>gop;
    return gop;

}

double calcResult(double num1, int gop, double num2)
{
switch(gop)
{
    case '+':
    return num1 + num2;
    break;

    case '-':
    return num1 - num2;
    break;

    case '*':
    return num1 * num2;
    break;

    case '/':
    return num1 / num2;
    break;
}
    return 0;
}

void finalResult(double result)
{
    std::cout << "result = " << result << std::endl;
}
