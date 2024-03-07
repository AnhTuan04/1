#include <iostream>
#include <fstream>
using namespace std;

int main(){
    ifstream inp("InpMax.txt");
    ofstream outp("OutMax.txt");
    int N;
    inp >> N;
    if (N < 2 || N > 1000) {
        inp.close();
        outp.close();
    }
    int maxNegative = 0;
    int maxPositive = 0;
    int currentNumber;

    inp >> currentNumber;
    if (currentNumber < 0) {
        maxNegative = currentNumber;
    } else if (currentNumber > 0) {
        maxPositive = currentNumber;
    }

    for (int i = 1; i < N; ++i) {
        inp >> currentNumber;

        if (currentNumber < 0 && (maxNegative == 0 || currentNumber < maxNegative)) {
            maxNegative = currentNumber;
        } else if (currentNumber > 0 && (maxPositive == 0 || currentNumber > maxPositive)) {
            maxPositive = currentNumber;
        }
    }

    outp << maxNegative << " " << maxPositive;

    inp.close();
    outp.close();
    return 0;
}