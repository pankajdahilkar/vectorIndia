class Student : public Person
{
protected :
string id;
float per;
string qual;
public:
Student();
Student(int,string,string,string,float,string);
~Student();
void Display();
};

Student :: Student()
{
cout<<"IN Student Default Constructor"<<endl;
cout<<"Enter the id ";
cin>>id;
cout<<"Enter the qualification :";
cin>>qual;
cout<<"Enter the percentage ";
cin>>per;
}

Student :: Student(int a, string n, string g,string i, float p,string q):Person(a,n,g)
{
cout<<"in Student para constructor "<<endl;
id =i;
qual =q;
per = p;
}


Student :: ~Student()
{

}

void Student :: Display()
{
cout<<"Student Display "<<endl;
Person :: Display();
cout<<" id:" << id<<endl;
cout<<"Qualification "<<qual<<endl;
cout<<"Percentage "<<per<<endl;
}
