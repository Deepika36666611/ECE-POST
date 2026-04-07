#include <iostream>
using namespace std
int main()
{
char op;
float num1,num2;
cout<<"Enter the first number:";
cin>>num1;
cout<<"Enter the second number:";
cin>>num2;
if(op=='+')
cout<<"Result:"<<num1+num2;
else if(op=='-')
cout<<"Result:"<<num1-num2;
else if(op==*)
cout<<"Result:"<<num1*num2;
else if(op==/)
cout<<"Result:"<<num1/num2;
else
cout<<"invalid";
return 0;
}
