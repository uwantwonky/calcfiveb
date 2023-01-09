#include <iostream>
#include "secondary.h"


int main() 
{
    double num1 = getNum();

    char gop = getOp();

    double num2 = getNum();

    double result = calcResult(num1, gop, num2);

    finalResult(result);

    return 0;
}
