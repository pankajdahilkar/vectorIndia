faculty::faculty()
{ cnt++;
cout<<"Enter the name :"<<endl;
cin>>name;
cout<<"Enter the subject:"<<endl;
cin>>subject;
id=cnt+100;
}
faculty::~faculty()
{
cout<<"faculty destructor:"<<endl;
}
void faculty::Display()
{

cout<<"id:"<<id<<endl;
cout<<"Name:"<<name<<endl;
cout<<"subject:"<<subject<<endl;
}
void faculty::UpLoadMarks(student & sobj)
{
cout<<"Enter the marks:"<<endl;
for(int i=0;i<6;i++)
cin>>sobj.marks[i];
}
