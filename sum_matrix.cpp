#include <iostream> 
#include <array>

using namespace std;

#define SIZE 3

int A[]= {1,2,3,1,2,3,1,2,3};
int B[]= {1,2,3,1,2,3,1,2,3};


int sumMatrixA(int mat[], int n){

    return sumMatrixA(A,n-1)+sumMatrixA(B,n-1);

}




int main(){

    
    cout<<sumMatrixA(A,9);
    return 0;
}