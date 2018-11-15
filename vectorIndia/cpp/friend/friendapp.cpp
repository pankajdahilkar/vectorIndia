#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;

class student;

#include"faculty.h"
#include"student.h"

#include"faculty.cpp"
#include"student.cpp"

main()
{
	faculty fobj1;
	fobj1.Display();
	faculty fobj2;
	fobj2.Display();

	student arr[5];
	for(int i=0;i<5;i++)
	{
		cout<<"Enter the mark for"<<i+1<<"student"<<endl;
		fobj1.UpLoadMarks(arr[i]);
	}

	for(int i=0;i<5;i++)
	{
		cout<<"Details of"<<i+1<<"student"<<endl;
		arr[i].Display();
	}
//	arr[0].myfacultydetails(fobj1);
}

