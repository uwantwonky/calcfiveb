#include <iostream>
#include "secondary.h"


int main() 
{
    int num1 = getNum();

    int gop = getOp();

    int num2 = getNum();

    int result = calcResult(num1, gop, num2);

    finalResult(result);

    return 0;
}