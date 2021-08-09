#include<iostream.h>
#include<conio.h>
class matrix
{
	private:
		int **x;
		int row;
		int col;
	public:
		matrix(){}
		matrix(int,int);
		void setmatrix(void);
		void showmatrix(void);
		void addmatrix(matrix,matrix);
		~matrix();
};

matrix::matrix(int r,int c)
{
	row=r;
	col=c;
	x=new int *[row];
	for(int i=0;i<row;i++)
	{
		x[i]=new int[col];
	}
}

void matrix:: setmatrix(void)
{
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
			cin>>x[i][j];
		}
	}
}
void matrix:: showmatrix(void)
{
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
			cout<<"\t"<<x[i][j];
		}
	cout<<"\n";
	}
}
void matrix:: addmatrix(matrix x1,matrix x2)
{
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
			this->x[i][j]=x1.x[i][j]+x2.x[i][j];
		}
	}
}

matrix::~matrix()
{
	for(int i=0;i<row;i++)
	{
		delete x[i];
	}
delete x;
}

void main()
{
int r,c;
clrscr();
cout<<"\nEnter Type of Matrix : \n";
cin>>r>>c;

matrix a(r,c),b(r,c),res(r,c);
clrscr();
cout<<"\nEnter "<<r<<" X "<<c<<" A Matrix :\n";
a.setmatrix();
cout<<"\nEnter "<<r<<" X "<<c<<" B Matrix :\n";
b.setmatrix();

res.addmatrix(a,b);

cout<<"\nResult Matrix :\n";
res.showmatrix();
getch();
}


