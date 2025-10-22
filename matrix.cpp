#include "matrix.h"
#include <iostream>
using namespace std;

void printMatrix(const vector<vector<int>>& mat) {
    for (int i = 0; i < mat.size(); i++) {
        for (int j = 0; j < mat[i].size(); j++) {
            cout << mat[i][j] << " ";
        }
        cout << "\n";
    }
}

vector<vector<int>> readMatrixFromFile(ifstream& file, int N) { //reading values from file into matrix (1)
    vector<vector<int>> mat(N, vector<int>(N));
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            file >> mat[i][j];
        }
    }
    return mat;
}

vector<vector<int>> addMatrices(const vector<vector<int>>& A, const vector<vector<int>>& B) { //adding two matrices and displaying result (2)
    int N = A.size();
    vector<vector<int>> C(N, vector<int>(N));
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            C[i][j] = A[i][j] + B[i][j];
        }
    }
    return C;
}

vector<vector<int>> multiplyMatrices(const vector<vector<int>>& A, const vector<vector<int>>& B) { //multiply two matrix and display result (3)
    int N = A.size();
    vector<vector<int>> C(N, vector<int>(N, 0));
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            for (int k = 0; k < N; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
    return C;
}

void sumDiagonals(const vector<vector<int>>& mat) { //getting sum of matrix diagonal elements (4)
    int N = mat.size();
    int mainSum = 0, secSum = 0;
    for (int i = 0; i < N; i++) {
        mainSum += mat[i][i];
        secSum += mat[i][N - 1 - i];
    }
    cout << mainSum << " " << secSum << "\n";
}

void swapRows(vector<vector<int>>& mat, int r1, int r2) { //swap matrix rows and display (5)
    swap(mat[r1], mat[r2]);
}

void swapColumns(vector<vector<int>>& mat, int c1, int c2) { //swap columns and display (6)
    for (int i = 0; i < mat.size(); i++) {
        swap(mat[i][c1], mat[i][c2]);
    }
}

void updateElement(vector<vector<int>>& mat, int row, int col, int value) { //update matrix and display (7)
    mat[row][col] = value;
}
