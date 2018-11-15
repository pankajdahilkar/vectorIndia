class Student
{
	protected:
		int age;
		string id;
		string name;
	public:
		Student();
		~Student();
		void Display();

};

Student :: Student()
{
	cout<<"In student default :"<<endl;
	cout<<"Enter the age :";
	cin>>age;

	cout<<"Enter the name :";
	cin>>name;

	cout<<"Enter the id :";
	cin>>id;
}

Student :: ~Student()
{
	cout<<"Student Destructor "<<endl;
}

void Student :: Display()
{
	cout<<"Age "<<age<<endl;

	cout<<"Name "<<name<<endl;
	cout<<"Id : "<<id<<endl;
}

