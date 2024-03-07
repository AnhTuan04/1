#include <iostream>
using namespace std;
bool songuyento(int n){
    if (n <= 1) {
        return false;
    }
     for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main(){

int a,b,i;
int sum = 0;
    cout <<" Nhap hai so a va b :";
    cin >> a >>b;
    for(i=a+1;i<=b-1;i++){
        if(i>1 && !songuyento(i))
        sum +=i;

    }
cout<<"Tong cua hop so la: "<< sum;

 return 0;
}