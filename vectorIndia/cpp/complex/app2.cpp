#include<iostream>
using namespace std;
 
#include "complex.h"
#include"complex.cpp"

main()
{
 complex e1(10,-20);
cout<<"e1 :";
e1.Display();
complex e2;
e2=++e1;
cout<<"e1 :";
e1.Display();
cout<<"e2 :";
e2.Display();

}
