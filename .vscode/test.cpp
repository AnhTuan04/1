#include <iostream>
#include <fstream>
using namespace std;
int main() {
    ifstream inf("InpSortRow.txt");
    ofstream otf("OutSortRow.txt");
    int n,t,m, a[100][100];
    inf >>m>>n;
    for (int i=0; i<m; i++)
    for (int j=0; j<n; j++)
    inf >>a[i][j];
    for (int i=0; i<m;i++)
    for (int j=0; j<n-1; j++)
    for (int b=j+1; b<n; b++)    
    if (a[i][j] < a[i][b]) {
        t=a[i][b];
        a[i][b]= a[i][j];
        a[i][j]=t;

    }

    for (int i=0; i<m; i++){
    for (int j=0; j<n; j++)
    otf <<a[i][j] <<" ";
    otf << endl;}
    inf.close();
    otf.close();
    return 0;
}