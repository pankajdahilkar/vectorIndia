class Sport : virtual public Student
{
protected : string sgrade;
public : Sport();
~Sport();
void Display();
};

Sport :: Sport()
{
cout<<"Sport Default constructor"<<endl;
cout<<"Enter sport Grade ";
cin>>sgrade;
}

void Sport :: Display()
{
cout<<"Sport Display"<<endl;
Student :: Display();
cout<<sgrade<<endl;
}

Sport :: ~Sport()
{
cout<<"In sports Destructor"<<endl;

}
