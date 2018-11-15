matrix :: matrix()
{
	p=NULL;
	row=0;
	col=0;
}

matrix :: matrix(int r,int c)
{
	row=r;
	col=c;
	cout<<"Enter the element of matrix :";
	p=new int*[row];
	for(int i=0;i<c;i++)
		p[i]=new int [row];
	for(int j=0;j<r;j++)
		for(int k=0;k<c;k++)
			cin>>p[j][k];
}


void matrix::Display()
{
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
			cout<<p[i][j]<<" ";

		cout<<endl;
	}
}


matrix & matrix :: operator +(matrix & m1)
{
	static matrix temp;
	temp.row=m1.row;
	temp.col=m1.col;
	if(row!=m1.row && col!=m1.col)
	{
		cout<<"Matrix are not equal :";
		return temp;
	}
	temp.p=new int*[row];
	for(int i=0;i<row;i++)
		temp.p[i]=new int [col];
	for(int j=0;j<row;j++)
		for(int k=0;k<col;k++)
			temp.p[j][k]=p[j][k]+m1.p[j][k];
	return temp;
}

matrix & matrix :: operator *(matrix & m1)
{
	static matrix temp;
	if(col != m1.row)
	{
		cout<<"ERROR : column of first matrix is not equal to rows in second matrix "<<endl;
		exit(0);
	}

	temp.col = m1.col;
	temp.row=row;
	temp.p=new int*[temp.row];
	for(int i=0;i<temp.row;i++)
		temp.p[i]=new int[temp.col];
 
	for(int j=0;j<temp.row;j++)
		for(int k=0;k<temp.col;k++)
		temp.p[i][j]=0;






}
matrix & matrix :: operator -(matrix & m1)
{
	static matrix temp;
	temp.row=m1.row;
	temp.col=m1.col;
	if(row!=m1.row && col!=m1.col)
	{
		cout<<"Matrix are not equal :";
		return temp;
	}
	temp.p=new int*[row];
	for(int i=0;i<row;i++)
		temp.p[i]=new int [col];
	for(int j=0;j<row;j++)
		for(int k=0;k<col;k++)
			temp.p[j][k]=p[j][k]-m1.p[j][k];
	return temp;
}

void matrix :: operator =(matrix m1)
{
	row = m1.row;
	col = m1.col;
	p=new int*[row];
	for(int i=0;i<row;i++)
		p[i]=new int[col];
	for(int j=0;j<row;j++)
		for(int k=0;k<col;k++)
			p[j][k]=m1.p[j][k];

}

matrix :: matrix(matrix &m1)
{

	row = m1.row;
	col = m1.col;
	p=new int*[row];
	for(int i=0;i<row;i++)
		p[i]=new int[col];
	for(int j=0;j<row;j++)
		for(int k=0;k<col;k++)
			p[j][k]=m1.p[j][k];
}

matrix :: ~matrix()
{
	delete[]p;
	p=NULL;
}
