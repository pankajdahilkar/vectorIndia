#include<iostream>
using namespace std;
#include"student.cpp"
#include"ECE.cpp"
#include"sport.cpp"
#include"result.cpp"

main()
{
Result robj;
robj.Cal_tot();
robj.Cal_grade();
robj.Display();
}

