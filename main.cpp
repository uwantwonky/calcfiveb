#include <iostream>
#include<string>

using std::cout;
using std::endl;
using std::cin;

int num1;
int num2;


int getNum()
{
int gnum;
cout<<"Enter your number:"<<endl;
cin>> gnum;
return gnum;
}

int getOp()
{
    int gop;
    cout << "Choose your operation" << endl;
    cout<< "(1.+; 2.-; 3.*; 4./):"<<endl;
    cin>>gop;
    return gop;
}

int add()
{
    return (num1 + num2);
}

int minus()
{
    return (num1 - num2);
}

int multiple()
{
    return (num1 * num2);
}

int slash()
{
    return (num1 / num2);
}

int main() 
{

    int num1 = getNum();

    int num2 = getNum();

    int op = getOp();

    switch(op)
    {
        case 1 :

        cout<<add() << endl;
        break;

        case 2:
        cout<<minus() << endl;
        break;

        case 3 :
        cout<<multiple() << endl;
        break;

        case 4:
        cout<<slash() << endl;
        break;
    }

    return 0;
}