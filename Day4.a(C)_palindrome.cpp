#Palindrome program

#include<iostream>
using namespace std;
int main()
{
  int num,origi,reverse=0,reminder;
cout<<"Enter a number:";
cin>>num;
origi=num;
while(num !=0)
{
reminder=num%10;
reverse=reverse*10+reminder;
num/=10;
}
if(origi==reverse)
  cout<<"Palindrome";
else
  cout<<"Not palindrome";
return 0;
}
