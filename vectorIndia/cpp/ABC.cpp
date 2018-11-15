class ABC
{
	int data;
	public:
	ABC()
	{
		cout<<"Enter the data:"<<endl;
		cin>>data;
	}
	friend void print (ABC &,XYZ &);
};


class XYZ
{
	int Xdata;
	public:
	XYZ()
	{
		cout<<"Enter the Xdata:"<<endl;
		cin>>Xdata;
	}
	friend void print(ABC &,XYZ &);
};

void print(ABC &Aobj,XYZ &Xobj)
{
	cout<<"Aobj.data :"<<Aobj.data<<endl;
	cout<<"xobj.Xdata :"<<Xobj.Xdata<<endl;
}
