// Example program
#include <iostream>
#include <array>
using namespace std;

void sumaMatrix( int a[3][3] , int b[3][3] , int c[3][3], int i, int j, int n)
{
    if(i<n)
    {
        if(j<n)
        {
            c[i][j]=a[i][j]+b[i][j];
		    j++;
		    sumaMatrix(a,b,c,i,j,n);
        }
         j=0;
	     i++;
	     sumaMatrix(a,b,c,i,j,n);
    }
}


int main()
{
    int a[3][3]={{1,2,3},{1,2,3},{1,2,3}};
    int b[3][3]={{1,2,3},{1,2,3},{1,2,3}};
    int c[3][3];
    
    sumaMatrix(a,b,c,0,0,3);
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            cout<< c[i][j]<<"\t";
        }
        cout<<'\n';
    }    
}