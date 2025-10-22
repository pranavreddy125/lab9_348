#include <iostream>
#include <fstream>
#include <vector>
#include "matrix.h"
using namespace std;
int main(){
    string filename;
    cout << "enter the filename: ";
    cin >> filename;

    ifstream file(filename);
    if (!file.is_open()){
        cout << "there was an error opening the file...\n";
        return 1;
    }
    int N;
    file >> N;

    vector<vector<int>> A = readMatrixFromFile(file, N);
    vector<vector<int>> B = readMatrixFromFile(file, N);
    file.close();

    printMatrix(A);
    printMatrix(B);

    vector<vector<int>> added = addMatrices(A, B);
    printMatrix(added);

    vector<vector<int>> multiplied = multiplyMatrices(A, B);
    printMatrix(multiplied);

    sumDiagonals(A);

    swapRows(A, 0, 1); //A is matrix changing and 0,1 is row indicies to swap
    printMatrix(A);

    swapColumns(A, 0, 1); //A is matrix changing and 0,1 is col indicies to swap
    printMatrix(A);

    updateElement(A, 0, 0, 100); //to show the matrix changed
    printMatrix(A);

    return 0;

}