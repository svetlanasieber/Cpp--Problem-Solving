#include <iostream>
#include <vector>

using namespace std;

void readMatrix(vector< vector< int > > & matrix, size_t& size) {
    cin >> size; cin.ignore();
    for (size_t r = 0; r < size; r++) {
        vector<int> row;
        row.resize(size);
        for (size_t c = 0; c < size; c++)
            cin >> row[c];
        matrix.push_back(row);
    }
}

void print(const vector<vector<int>>& vec2D) {
    for (auto& row : vec2D) {
        for (auto& elem : row) {
            std::cout << elem;
        }
        cout << endl;
    }
    cout << endl;
}

bool isDiagonalPos(size_t & row, size_t & col, size_t & size) {
    if (row == col)
        return true;
    if (col == (size - row - 1))
        return true;

    return false;
}

int main()
{
    size_t n;
    vector< vector<int> > matrix;
    readMatrix(matrix, n);
         
    // print(matrix);

    int sumOfOdd = 0;
    for (size_t r = 0; r < n; r++) {
        
        for (size_t c = 0; c < n; c++) {
            if (!isDiagonalPos(r, c, n)) {
                if (matrix[r][c] % 2 == 1)
                    sumOfOdd += matrix[r][c];
            }
            
        }
    }
    cout << "The sum is: " << sumOfOdd << endl;

    return 0;
}

