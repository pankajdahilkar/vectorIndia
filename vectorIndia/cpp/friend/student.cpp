student::student()
{
char ch[5];
cnt++;
cout<<"Enter the name:"<<endl;
cin>>name;
strcpy(id,"V18HE2");
ch[0]=name[0];
ch[1]='\0';
strcat(id,ch);
sprintf(ch,"%d",cnt);
strcat(id,ch);
}

void student::myfacultydetails(faculty f)
{
cout<<"my faculty name:"<<f.name<<endl;
cout<<"subject:"<<f.subject<<endl;
}


student::~student()
{
cout<<"student Dstructor"<<endl;
}
void student::Display()
{
cout<<"id:"<<id<<endl;
cout<<"name:"<<name<<endl;
cout<<"marks:";
for(int i=0;i<6;i++)
cout<<marks[1]<<" ";
}
