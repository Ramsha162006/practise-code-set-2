#include <iostream>
#include <vector>
using namespace std;

void setZeroes(vector<vector<int>>& matrix) {
    int rows = matrix.size();
    int cols = matrix[0].size();
    bool col0 = false;

    // Step 1: mark rows and cols
    for (int i = 0; i < rows; i++) {
        if (matrix[i][0] == 0) col0 = true;  // check 1st column separately
        for (int j = 1; j < cols; j++) {
            if (matrix[i][j] == 0) {
                matrix[i][0] = 0;   // mark row
                matrix[0][j] = 0;   // mark column
            }
        }
    }

    // Step 2: update matrix (bottom-up to avoid overwriting markers)
    for (int i = rows - 1; i >= 0; i--) {
        for (int j = cols - 1; j >= 1; j--) {
            if (matrix[i][0] == 0 || matrix[0][j] == 0) {
                matrix[i][j] = 0;
            }
        }
        if (col0) matrix[i][0] = 0;  // update first column at the end
    }
}

int main() {
    vector<vector<int>> mat = {
        {1, 2, 3},
        {4, 0, 6},
        {7, 8, 9}
    };

    setZeroes(mat);

    for (auto row : mat) {
        for (auto val : row) {
            cout << val << " ";
        }
        cout << endl;
    }
}
