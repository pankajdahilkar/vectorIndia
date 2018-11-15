#include<iostream>
#include<cstdlib>
#include<cstring>
#include<cstdio>
using namespace std;
class Shopping;

#include"bank.h"
#include"shopping.h"
#include"bank.cpp"
#include"shopping.cpp"

main()
{
	Bank bobj;
	Shopping sobj;
	sobj.menu(bobj);
	bobj.menu();
}
