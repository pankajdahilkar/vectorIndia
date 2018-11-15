complex::complex()
{
real=0;
img=0;
}

complex::complex(int a,int b)
{
real = a;
img = b;
}

void complex::Display()
{
cout <<real;
if(img>=0)
cout<<"+";
cout<<img<<"i"<<endl;
}

complex complex::operator +(complex e)
{
complex temp;
temp.real=real+e.real;
temp.img=img+e.img;
return temp;
}

complex complex ::operator -(complex e)
{
complex temp;
temp.real=real-e.real;
temp.img=img-e.img;
return temp;
}

complex complex ::operator ++()
{
++ real;
++ img;
return *this;
}

