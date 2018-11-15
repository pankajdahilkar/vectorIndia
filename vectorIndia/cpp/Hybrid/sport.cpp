class Sport : virtual public Student
{
protected : string sgrade;
public : Sport();
~Sport();
void Display();
};

Sport :: Sport()
{
cout<<"Sport Default constructor";

}
