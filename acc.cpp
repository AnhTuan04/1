#include <iostream>
#include <fstream>

using namespace std;

void swapRows(int* row1, int* row2, int N) {
    for (int i = 0; i < N; ++i) {
        int temp = row1[i];
        row1[i] = row2[i];
        row2[i] = temp;
    }
}

void sortRowsDescending(int matrix[][1000], int M, int N) {
    for (int i = 0; i < M; ++i) {
        for (int j = 0; j < M - 1 - i; ++j) {
            if (matrix[j][0] < matrix[j + 1][0]) {
                swapRows(matrix[j], matrix[j + 1], N);
            }
        }
    }
}

int main() {
    ifstream inputFile("InpSortRow.txt");
    ofstream outputFile("OutSortRow.txt");

    if (!inputFile || !outputFile) {
        cout << "Error opening files." << endl;
        return 1;
    }

    int M, N;
    inputFile >> M >> N;

    if (M < 2 || N < 2 || M > 1000 || N > 1000) {
        cout << "Invalid input for M or N." << endl;
        inputFile.close();
        outputFile.close();
        return 1;
    }

    int matrix[1000][1000];

    // Read the matrix from the file
    for (int i = 0; i < M; ++i) {
        for (int j = 0; j < N; ++j) {
            inputFile >> matrix[i][j];
        }
    }

    // Sort each row in descending order
    sortRowsDescending(matrix, M, N);

    // Write the sorted matrix to the output file
    outputFile << M << " " << N << endl;
    for (int i = 0; i < M; ++i) {
        for (int j = 0; j < N; ++j) {
            outputFile << matrix[i][j] << " ";
        }
        outputFile << endl;
    }

    inputFile.close();
    outputFile.close();

    return 0;
}
