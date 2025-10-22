#include <vector>
#include <fstream>
using namespace std;

//declaring all 7 fn
void printMatrix(const vector<vector<int>>& mat);
vector<vector<int>> readMatrixFromFile(ifstream& file, int N);
vector<vector<int>> addMatrices(const vector<vector<int>>& A, const vector<vector<int>>& B);
vector<vector<int>> multiplyMatrices(const vector<vector<int>>& A, const vector<vector<int>>& B);
void sumDiagonals(const vector<vector<int>>& mat);
void swapRows(vector<vector<int>>& mat, int r1, int r2);
void swapColumns(vector<vector<int>>& mat, int c1, int c2);
void updateElement(vector<vector<int>>& mat, int row, int col, int value);