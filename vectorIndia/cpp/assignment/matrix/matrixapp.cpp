#include<iostream>
using namespace std;
#include"matrix.h"
#include"matrix.cpp"

main()
{
matrix m1;
matrix m2(3,3);
cout<<"matrix m2="<<endl;
m2.Display();

matrix m3(3,3);
cout<<"matrix m3="<<endl;
m3.Display();

m1 = m2 +m3;

cout<<"m1 = m2 +m3"<<endl;
m1.Display();


matrix m4;
m4 = m1-m2;

cout<<"m4 = m1-m2  "<<endl;

m4.Display();
}
