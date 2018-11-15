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
		int temp=0,pwr=0;
		do
		{
			temp = temp +( (str[len]-48)*pow(2,pwr));
			pwr++;

		}while(len--);
		return temp;
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
				case 4:std::cout<<"octal: "<<std::oct<<toDec(data)<<endl;
				       break;
				case 3:std::cout<<"HEX: "<<std::hex<<toDec(data)<<endl;
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
