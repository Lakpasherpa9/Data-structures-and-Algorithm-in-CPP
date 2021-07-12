#include<iostream>
using namespace std;

int main()
{
	int a[3][3],b[3][3],c[3][3];
	cout<<"2*2 matrix multiplication using Strassen's Algorithm"<<endl;
	cout<< "Enter the values of Matrix A "<<endl;
	for(int i=1; i<=2; i++)
	{
		for(int j=1; j<=2; j++)
		{
			cout<<"a"<<i<<j<<"=" ;
			cin>>a[i][j];
		}
	}
	 cout<< "Enter the values of Matrix B "<<endl;

  	 for(int i=1; i<=2; i++)
        {
                for(int j=1; j<=2; j++)
                {
                        cout<<"b"<<i<<j<<"=" ;
                        cin>>b[i][j];
                }
        }
	int p1,p2,p3,p4,p5,p6,p7;
	p1=(a[1][1]+a[2][2])*(b[1][1]+b[2][2]);
	p2=b[1][1]*(a[2][1]+a[2][2]);
	p3=a[1][1]*(b[1][2]-b[2][2]);
	p4=a[2][2]*(b[2][1]-b[1][1]);
	p5=b[2][2]*(a[1][1]+a[1][2]);
	p6=(b[1][1]+b[1][2])*(a[2][1]-a[1][1]);
	p7=(b[2][1]+b[2][2])*(a[1][2]-a[2][2]);
	
	//Calculation of C matrix
	
	c[1][1]=p1+p4-p5+p7;
	c[1][2]=p3+p5;
	c[2][1]=p2+p4;
	c[2][2]=p1+p4-p2+p6;

	 cout<< "The values of Matrix c is = "<<endl;

         for(int i=1; i<=2; i++)
        {
                for(int j=1; j<=2; j++)
                {
                        cout<<"c"<<i<<j<<" = "<<c[i][j]<<endl;
                }
        }
	
	

return 0;
}


			
