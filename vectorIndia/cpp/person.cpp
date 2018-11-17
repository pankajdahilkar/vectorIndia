class Person
{
	protected: int age;
		   string name;
		   string gender;
	public :   Person();
		   Person(int,string,string);
		   ~Person();
		   void Display();
};

Person :: Person()
{
	cout<<"in Person Default constructor "<<endl;
	cout<<"Enter Name : ";
	cin>>name;
	cout<<"Enter Age : ";
	cin>>age;
	cout<<"Enter gender : ";
	cin>>gender;
}

Person :: Person(int a,string n , string g)
{
	cout<<"In person Parametric constructor"<<endl;
	age=a;
	name=n;
	gender=g;
}

Person :: ~Person()
{
	cout<<"Person Class Destructor"<<endl;
}


void Person :: Display()
{
	cout<<"Name : "<<name<<endl;
	cout<<"Gender : "<<gender<<endl;
	cout<<"Age : "<<age<<endl;

}
