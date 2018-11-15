//Array.h
class Array
{
int *p,size;
public:
Array();
~Array();
Array (int);
Array(Array &);
Array & operator +(Array &);
Array & operator -(Array &);
Array & operator ++(Array &);
void operator =(Array);
void Display();
};
