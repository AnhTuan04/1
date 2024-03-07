#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Nhap gia tri n: ";
    cin>> n;
    for(int i=0;i<=n;i++){
        for(int j=0;j<=i;j++){
            int factorial_i=1;
            for(int k=1;k<=i;k++){
                factorial_i = factorial_i*k;
            }
            int factorial_j=1;
            for(int k=1;k<=j;k++){
                factorial_j = factorial_j*k;
            }
            int factorial_ij=1;
            for(int k=1;k<=i-j;k++){
                factorial_ij = factorial_ij*k;
            }
            int C=factorial_i/(factorial_ij*factorial_j);
             
            cout<< C;
        }
        cout<<endl;
    }

    return 0;
}