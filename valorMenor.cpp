#include <iostream>
#include <array>
using namespace std;


int sum(int a[], int i, int m)
{
    int length = m;
    int n= length-1;
    int low;
    int aux;

    
    if(i == n)
    {
        return low = a[i];
    }
    else
    {
        low = sum( a , i+1,m);
        if(a[i]<low)
        {
            aux = a[i];
        }
        else
        {
            aux = low;
        }
    }
    return aux;
};
 int sumaList(int n)
 {
     return n;
 }

int main()
{
  int lista1[]={4,3,5,1};
  int leng = sizeof(lista1)/sizeof(int);
  cout<<sum(lista1,0,leng)<<endl;
}
