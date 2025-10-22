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

    cout << "\n#1: \n"; //for better output printing
    vector<vector<int>> A = readMatrixFromFile(file, N);
    vector<vector<int>> B = readMatrixFromFile(file, N);
    file.close();
    cout << "\nMatrix 1:\n";
    printMatrix(A);
    cout << "\nMatrix 2:\n";
    printMatrix(B);

    cout << "\n#2: \n";
    vector<vector<int>> added = addMatrices(A, B);
    printMatrix(added);

    cout << "\n#3: \n";
    vector<vector<int>> multiplied = multiplyMatrices(A, B);
    printMatrix(multiplied);

    cout << "\n#4: \n";
    sumDiagonals(A);

    cout << "\n#5: \n";
    swapRows(A, 0, 1); //A is matrix changing and 0,1 is row indicies to swap
    printMatrix(A);

    cout << "\n#6: \n";
    swapColumns(A, 0, 1); //A is matrix changing and 0,1 is col indicies to swap
    printMatrix(A);

    cout << "\n#7: \n";
    updateElement(A, 0, 0, 100); //to show the matrix changed
    printMatrix(A);

    return 0;

}