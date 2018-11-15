class complex
{
int real,img;
public:complex();
complex(int,int);
void Display();
complex operator +(complex);
complex operator -(complex);
complex operator ++();
complex operator ++(int);
};

