#include<iostream>
using namespace std;

#include"array.h"
#include"array.cpp"

main()
{
Array obj1(5);
cout<<"obj1:";
obj1.Getdata();

Array obj2=obj1;
cout<<"obj2:";
obj2.Getdata();
obj2.sort();
cout<<"obj2 after sort:";
obj2.Getdata();
cout<<"obj1:";
obj1.Getdata();
}
