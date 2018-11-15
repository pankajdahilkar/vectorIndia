class ECE : virtual public Student
{
protected: float marks[6];
public : 
ECE();
~ECE();
void Display();
};

ECE::ECE()
{
cout<<"ECE default constructor"<<endl;

cout<<"Enter the marks :";
for(int a=0;a<6;a++,cout<<"subject"<<a+1<<" :")
cin>>marks[a];
}

ECE :: ~ECE()
{

cout<<"In destructor ECE"<<
}

void ECE :: Display()
{
cout<<"Marks :";
for(int i=0;i<6;i++)
cout<<marks[i]<<" ";
cout<<endl;

}
