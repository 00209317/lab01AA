#include <iostream> 

using namespace std;


int potencia(int a, int b){
    if(b==0)
        return 1;
    else
        return potencia(a,b-1) * a;
}
int main(){

    cout<<potencia(2,2)<<endl;
    cout<<potencia(2,4)<<endl;

    cout<<potencia(4,2)<<endl;

    return 0;
}


