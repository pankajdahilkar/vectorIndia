//Arrayapp.cpp
#include<iostream>
using namespace std;

#include"array.h"
#include"array.cpp"

main()
{
Array A1;
Array B1(5);
cout<<"B1=";
B1.Display();

Array B2(5);
A1=B1+B2;
cout<<"B2=";
B2.Display();
cout<<"A1=";
A1.Display();

Array A2;
A2=A1-B1;
cout<<"A2=A1-B1";
A2.Display();
}
