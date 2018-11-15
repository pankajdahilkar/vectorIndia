Bank ::Bank()
{
cout<<"Enter the accno:"<<endl;
cin>>accno;
cout<<"Enter the name:"<<endl;
cin>>name;
cout<<"Enter the bal:"<<endl;
cin>>bal;
}

Bank ::~Bank()
{
cout<<"Bank destructor:"<<endl;
}

void Bank ::menu()
{
int choice;
float amt;
while(1)
{
cout<<"1.Deposit 2.withdrawal 3.Balenq:"<<endl;
cout<<"Enter the choice :"<<endl;
cin>>choice;
switch(choice)
{
case 1:cout<<"Enter the amt to be deposited "<<endl;
cin>>amt;
Deposit(amt);
break;
case 2:cout<"Enter the amt to be Withdrawal "<<endl;
cin>>amt;
if(withdrawal(amt))
cout<<"withdrawal successful:"<<endl;
else
cout<<"Withdrawal failed:"<<endl;
break;
case 3:Balenq();
break;
}
}
}

void Bank ::Deposit (float amt)
{
bal+=amt;
}

int Bank ::Withdrawal(float amt)
{
if(amt<=bal){
{
bal-=amt;
return 1;
}
return 0;
}


void Bank::Balenq()
{
cout<<"Balance available in ur acc :"<<bal<<endl;
}

int Bank
