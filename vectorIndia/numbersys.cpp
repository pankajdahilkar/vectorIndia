#include<iostream>
#include<cstdlib>
//#include<iomanip>
#include<cmath>
#include<cstring>
using namespace std;
class number
{
	protected:
		int dec_data,oct_num;
		long int bin_data;
		string hex_num;		
	public: 
		number()
		{
			dec_data=0;
			oct_num=0;
			bin_data=0;
			//hex_num=0;
		}
		virtual void conv_dec()=0;
		virtual void conv_bin()=0;
		virtual void conv_oct()=0;
		virtual void conv_hex()=0;
		~number()
		{
		}
};

class decimal: public number
{
	private:
		int dec_data;
	public:
		decimal()
		{
			cout<<"enter the decimal data: ";
			cin>>dec_data;
			cout<<"data entered is: "<<dec_data<<endl;
		}
		void conv_dec(){}
		void conv_bin()
		{
			long int bin_data=0;
			int rem,i=1,dec_dat=dec_data;
			//cout<<"the binary value is: ";
			while(dec_dat!=0)
			{
				rem=dec_dat%2;
				dec_dat=dec_dat/2;
				bin_data=bin_data+rem*i;
				i=i*10;
			}
			cout<<"dec->binary value is: "<<bin_data<<endl;

		}
		void conv_oct()
		{
			int rem,i=1,oct_num=0,oct=dec_data;
			while(oct!=0)
			{
				rem=oct%8;
				oct/=8;
				oct_num+=rem*i;
				i*=10;
			}	
			cout<<"dec->octal value is: "<<oct_num<<endl;	

		}
		void conv_hex()
		{
			int dech=dec_data,r;
			string hex_num;
			char hex[]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
			while(dech!=0)
			{
				r=dech%16;
				hex_num=hex[r]+hex_num;
				dech/=16;
			}
			cout<<"dec->hex_dec value is: "<<hex_num<<endl;

		}

};
//-------------------------------------------------------------------------------------------------------
class binary : public number
{
	private:
		string bin_data;
		int dec_val;
	public:
		binary()
		{
KL:	cout<<"enter the binary data(0's &1's): ";
	cin>>bin_data;
	for(int i=0;i<bin_data.length();i++)
		if(bin_data[i]!='0'&& bin_data[i]!='1')
			goto KL;
		}
		void conv_bin(){}
		void conv_dec()
		{
			int dec_data=0,base=1;
			int len=bin_data.length();
			for(int i=len-1;i>=0;i--)
			{
				if(bin_data[i]=='1')
					dec_data+=base;
				base=base*2;
			}
			dec_val=dec_data;
			cout<<"bin->decimal value is: "<<dec_data<<endl;
		}
		void conv_oct()
		{
			int oct=dec_val,rem,oct_num=0,i=1;
			while(oct!=0)
			{
				rem=oct%8;
				oct/=8;
				oct_num+=rem*i;
				i*=10;
			}
			cout<<"bin->octal value is: "<<oct_num<<endl;
		}
		void conv_hex()
		{
			int dech=dec_val,r;
			string hex_num;
			char hex[]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
			while(dech!=0)
			{
				r=dech%16;
				hex_num=hex[r]+hex_num;
				dech/=16;
			}
			cout<<"bin->hex_dec value is: "<<hex_num<<endl;
		}

};
//-------------------------------------------------------------------------------------------------------------------
class octal : public number
{
	private:
		int oct_data;
		int dec_temp;
	public:
		octal()
		{
			cout<<"enter the octal data: ";
			cin>>oct_data;
			cout<<"data entered is: "<<oct_data<<endl;
		}
		void conv_oct(){}		
		void conv_dec()
		{
			int dec_data,oct=oct_data,i=0,rem;
			while(oct!=0)
			{
				rem=oct%10;
				oct/=10;
				dec_data+=rem*pow(8,i);
				++i;
			}
			dec_temp=dec_data;
			cout<<"oct->decimal value is: "<<dec_data<<endl;
		}
		void conv_bin()
		{

			long int bin_data=0;
			int rem,i=1,dec_data=dec_temp;
			cout<<"the binary value is: ";
			while(dec_data!=0)
			{
				rem=dec_data%2;
				dec_data=dec_data/2;
				bin_data=bin_data+rem*i;
				i=i*10;
			}
			cout<<"oct->binary value is: "<<bin_data<<endl;

		}
		void conv_hex()
		{
			int dech=dec_temp,r;
			string hex_num;
			char hex[]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
			while(dech!=0)
			{
				r=dech%16;
				hex_num=hex[r]+hex_num;
				dech/=16;
			}
			cout<<"oct->hex_dec value is: "<<hex_num<<endl;
		}

};
//---------------------------------------------------------------------------------------------------
class hex_dec: public number
{
	private:
		string hex_data;
		int dec_tmp;
	public:
		hex_dec()
		{
			cout<<"enter the hex-dec value: ";
			cin>>hex_data;
			cout<<"entered data is: "<<hex_data<<endl;
		}
		void conv_hex(){}		
		void conv_dec()
		{
			int dec_num=0,len,base=1;
			string hex=hex_data;
			len=hex.length();
			for(int i=len-1;i>0;i++)
			{
				if(hex[i]>='0' && hex[i]<='9')
				{
					dec_num+=(hex[i]-48)*base;
					base=base*16;
				}
				else if(hex[i]>='A' && hex[i]<='F')
				{
					dec_num+=(hex[i]-55)*base;
					base=base*16;
				}
			}
			dec_tmp=dec_num;
			cout<<"hex->dec value is: "<<dec_num<<endl;

		}
		void conv_bin()
		{
			long int bin_data=0;
			int rem,i=1,dec_data=dec_tmp;
			cout<<"the binary value is: ";
			while(dec_data!=0)
			{
				rem=dec_data%2;
				dec_data=dec_data/2;
				bin_data=bin_data+rem*i;
				i=i*10;
			}
			cout<<"hex->binary value is: "<<bin_data<<endl;

		}

		void conv_oct()
		{
			int rem,i=1,oct_num=0,oct=dec_tmp;
			while(oct!=0)
			{
				rem=oct%8;
				oct/=8;
				oct_num+=rem*i;
				i*=10;
			}	
			cout<<"hex->octal value is: "<<oct_num;	
		}

};
//---------------------------------------------------------------------------------------------------
int main()
{
	number *num=NULL;
	int ch;
	while(1)
	{
		cout<<"**--conversion program--***"<<endl<<"choose the type of data to enter"<<endl;
		cout<<"0.exit__1.decimal__2.binary__3.octal__4.hex_dec"<<endl;
		cin>>ch;
		//	while(3)
		//	{
		switch(ch)
		{
			case 0:return 123;
			case 1:num=new decimal;
			       num->conv_bin();
			       num->conv_oct();
			       num->conv_hex();
			       break;
			case 2:num=new binary;
			       num->conv_dec();
			       num->conv_oct();
			       num->conv_hex();
			       break;
			case 3:num=new octal;
			       num->conv_dec();
			       num->conv_bin();
			       num->conv_hex();
			       break;
			case 4:num=new hex_dec;
			       num->conv_dec();
			       num->conv_bin();
			       num->conv_oct();
			       break;
			default:cout<<"wrong choice !!__(enter valid one)"<<endl;

		}
		/*	if(num)
			{
			num->conv_dec();
			num->conv_bin();
			num->conv_hex();
			}
		 */
	}
	delete []num;
	num=NULL;
	cout<<"**--done--**"<<endl;
	}
