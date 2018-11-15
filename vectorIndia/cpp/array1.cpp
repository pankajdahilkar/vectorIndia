Array::Array(Array & obj)
{
size=obj.size;
ptr=new int[size];
for(int i=0;i<size;i++)
ptr[i]=obj.ptr[i];
}

Array::Array()
{
ptr=NULL;
size=0;
}

Array::~Array()
{
cout<<"in array destructor:"<<endl;
delete[]ptr;
ptr=NULL;
}


Array::Array(int s)//parameterised
{
size=s;
ptr=new int [size];
cout<<"Enter the elements :"<<endl;
for(int i=0;i<size;i++)
cin>>ptr[i];
}

void Array::Getdata()
{
cout<<"element of array :"<<endl;
for(int i=0;i<size;i++)
cout<<ptr[i]<<" ";
cout<<endl;
}

void Array::sort()
{
int i,j,temp;
for(i=0;i<size-1;i++)
{
for(j=0;j<size-1-i;j++)
{
if(ptr[j]>ptr[j+1])
{
temp=ptr[j];
ptr[j]=ptr[j+1];
ptr[j+1]=temp;
}
}
}
}
