#include <iostream>
#include<string>

using std::cout;
using std::endl;
using std::cin;


int getNum()
{
int gnum;
cout<<"Enter your number:"<<endl;
cin>> gnum;
return gnum;
}

char getOp()
{
    char gop[];
    cout<<"Enter your operation";
    cin>>gop;
    return gop;
}

int add()
{
    int num1;
    int num2;
    return num1 + num2;
}

int slash()
{   

    return num1 / num2;
}



int main() 
{
    std::cout << getOp() << std::endl;

    return 0;
}