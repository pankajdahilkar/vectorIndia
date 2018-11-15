class matrix
{
int **p;
int row,col;
public:
matrix();
~matrix();
matrix(int r,int c);
matrix(matrix &);
matrix & operator +(matrix &);
matrix & operator -(matrix &);
matrix & operator *(matrix &);
void Display();
void operator =(matrix);
};

