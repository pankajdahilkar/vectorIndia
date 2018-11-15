#include<iostream>
#include<cstdlib>
using namespace std;

#include"array1.h"
#include"array1.cpp"

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

Array *p=NULL;
p=(Array *)calloc(1,sizeof(Array));
free(p);
p=NULL;
}
