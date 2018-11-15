//Array.cpp
Array :: Array()
{
	p=NULL;
	size=0;
}

Array :: Array(int j)
{
	size=j;
	p=new int[size];
	cout<<"Enter Array element"<<endl;
	for(int u=0;u<size;u++)
	{
		cin>>p[u];
	}
}

Array & Array :: operator +(Array &e1)
{
	static Array temp;
	temp.size=size;
	temp.p=new int [size];
	if(size!=e1.size)
	{
		cout<<"Error:size of two array is same:"<<endl;
		return temp;
	}
	for(int c=0;c<size;c++)
	{
		temp.p[c]=p[c]+e1.p[c];
	}
	return temp;
}

Array & Array :: operator -(Array &e1)
{
	static Array temp;
	temp.size=size;
	temp.p=new int[size];
	if(size!=e1.size)
	{
		cout<<"Error:size of two array is same:"<<endl;
		return temp;
	}
	for(int c=0;c<size;c++)
	{
		temp.p[c]=p[c]-e1.p[c];
		-e1.p[c];
	}
	return temp;
}

Array & Array :: operator ++()
{
static Array temp;
temp.size=

}
void Array ::Display()
{
	cout<<"  [";
	for(int i=0;i<size;i++)
	{
		cout<<" "<<p[i]<<",";
	}
	cout<<"]"<<endl;
}

Array :: ~Array()
{
	delete[]p;
	p=NULL;
}

void Array :: operator =(Array obj)
{
	size=obj.size;
	p=new int [size];
	for(int c=0;c<size;c++)
	{
		p[c]=obj.p[c];
	}
}

Array :: Array(Array & obj)
{
	size=obj.size;
	p=new int[size];
	for(int i=0;i<size;i++)
		p[i]=obj.p[i];
}
