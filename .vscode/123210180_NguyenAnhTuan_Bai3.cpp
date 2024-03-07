#include<iostream>
#include<fstream>
using namespace std;
void InsertionSort(int A[],int N){
    int j,P; int tmp;
    for(P=1;P<N;P++){
        tmp = A[P];
        for (j=P; j>0 && A[j-1]<tmp;j--)
            A[j]=A[j-1];
        A[j]=tmp;
    }
}

int main(){

ifstream inp("InpSortRow.txt");
ofstream outp("OutSortRow.txt");
    int m,n;
    inp >>m>>n;
    int a[m][n];
      if (m < 2 || n > 1000) {
        inp.close();
        outp.close();
    }
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            inp>>a[i][j];
    for(int i=0;i<n;i++) InsertionSort(a[i],n);
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++)
            outp<<a[i][j]<<" ";
            outp<< endl;
    
}
 inp.close();
 outp.close();
return 0;
}
