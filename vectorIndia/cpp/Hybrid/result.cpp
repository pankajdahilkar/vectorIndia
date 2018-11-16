class Result : public ECE,Sport
{
	float tot,per;
	string grade;
	public : Result();
		 ~Result();
		 void Cal_tot();
		 void Cal_grade();
		 void Display();

};

Result :: Result()
{
cout<<"Result Default constructor"<<endl;
tot=per=0;
}

Result ::~Result()
{
cout<<"Result destructor :"<<endl;
}

void Result :: Cal_tot()
{
for(int i=0;i<6;i++)
tot += marks[i];
per=tot/6;
} 

void Result :: Cal_grade()
{
if (per <40)
	grade =string("C");
else if(per >=40 && per<50)
	grade = string("B");
else if(per >=50 && per<60)
	grade = string("B+");
else if(per >=60 && per<70)
	grade = string("A");
else grade = string("A+");
}

void Result :: Display()
{
cout<<"Age  : "<<age<<endl;
cout<<"name : "<<name<<endl;
cout<<"id : "<<id<<endl;
cout<<"Marks : ";
for(int i=0;i<6;i++)
cout<<marks[i]<<" ";
cout<<endl;
cout<<"Total :"<<tot<<endl;
cout<<"Percentage :"<<per<<endl;
cout<<"Grade : "<<grade<<endl;
cout<<"Sport Grade "<<sgrade<<endl;
}
