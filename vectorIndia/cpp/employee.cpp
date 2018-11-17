class Employee : public Person
{
protected :
string id;
float salary;
string pos;
public:
Employee();
Employee(int,string,string,string,float,string);
~Employee();
void Display();
};

Employee :: Employee()
{
cout<<"IN Employee Default Constructor"<<endl;
cout<<"Enter the id ";
cin>>id;
cout<<"Enter the position :";
cin>>pos;
cout<<"Enter the salary ";
cin>>salary;
}

Employee :: Employee(int a, string n, string g,string i, float p,string q):Person(a,n,g)
{
cout<<"in Employee para constructor "<<endl;
id =i;
pos =q;
salary = p;
}


Employee :: ~Employee()
{

}

void Employee :: Display()
{
cout<<"Employee Display "<<endl;
Person :: Display();
cout<<" id:" << id<<endl;
cout<<"position "<<pos<<endl;
cout<<"salary "<<salary<<endl;
}
