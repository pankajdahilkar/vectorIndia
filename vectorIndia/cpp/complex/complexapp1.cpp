#include<iostream>
using namespace std;

#include"complex.h"
#include"complex.cpp"

main()
{
int r,i;
cout<<"enter the real val :"<<endl;
cin>>r;
cout<<"Enter the img val :"<<endl;
cin>>i;

complex e1(r,i);
cout<<"Enter the real val :"<<endl;
cin>>r;
cout<<"Enter the img val :"<<endl;
cin>>i;

complex e2(r,i);
complex e3,e4;
e3=e1+e2;
e4=e1-e2;
cout<<"e1 :";
e1.Display();
cout<<"e2 :";
e2.Display();
cout<<"e3 :";
e3.Display();
cout<<"e4 :";
e4.Display();
}
