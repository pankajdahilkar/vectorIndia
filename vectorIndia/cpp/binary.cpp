//ass1
#include<iostream>
#include<string>
#include<math.h>
using namespace std;

class Binary
{
	string data;

	int checkinput(string str)
	{
		int i=0;
		while(str[i])
		{
			if(str[i] !='1' && str[i] !='0' && str[i]!='\0')
				return 0;
			i++;
		}
		return 1;
	}

	int toDec(string str)
	{
		int len = str.length();
		len--;
		//cout<<"string length "<<len<<endl;
		int temp=0,pwr=0,base=1;
		do
		{
			temp = temp +( (str[len]-48)*base);
			base*=2;

		}while(len--);
		return temp;
	}

	int toOct(string str)
	{
		int num = toDec(str),rem,base=1,sum=0;
		while(num)
		{
			rem = num%8;
			sum = rem*base+sum;
			base*=10;
			num/=8;
		}
		return sum;
	}

	void toHex(string str)
	{
		int num = toDec(str),rem;
		string hextable="0123456789ABCDEF";
		string hexv;
//		cout<<num<<endl;
		while(num)
		{
			rem=num%16;
			hexv+=hextable[rem];
			num=num/16;
//			cout<<num<<endl;	
		}
//		cout<<hexv<<endl;
		for(rem=hexv.length()-1;rem>=0;rem--)
			cout<<hexv[rem];

	}

	//	public:
	void setdata()
	{
IN: cout<<"Enter Binary data ";
    cin>>data;
    if(!checkinput(data))
    {
	    cout<<"Error : Enter input containing only 1 and 0s"<<endl;
	    goto IN;
    }
    return;
	}
	public:
	void Menu()
	{
		int choice;
		setdata();
		while(1)
		{
			cout<<"1.Binary 2.Decimal 3.Hex 4.Octal 5. return"<<endl;
			cin>>choice;
			switch(choice)
			{
				case 1: cout<<"Binary : "<<data<<endl;
					break;
				case 2: cout<<"Decimal : "<<toDec(data)<<endl;
					break;
				case 4:std::cout<<"octal: ";
				       cout<<toOct(data);
				       cout<<endl;
				       break;
				case 3:std::cout<<"HEX: ";
				       toHex(data);
				       cout<<endl;
				       break;
				case 5: return;
			}

		}

	}

};


main()
{
	Binary var1;
	var1.Menu();
}
