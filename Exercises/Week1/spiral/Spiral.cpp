#include <bits/stdc++.h>
using namespace std;
typedef int32_t i32;
typedef int64_t i64;
typedef uint32_t u32;
typedef uint64_t u64;
#define float fliesskommazahlensindboese
#define double einfachnichtbenutzen

int main() {
    int32_t cols, rows;
    cin >> cols >> rows;

    vector<vector<int32_t>> matrix(rows, vector<int32_t>(cols));

    for (int32_t i = 0; i < rows; ++i)
        for (int32_t j = 0; j < cols; ++j)
            cin >> matrix[i][j];

    int32_t top = 0, bottom = rows - 1;
    int32_t left = 0, right = cols - 1;

    // Spiral print
    while (top <= bottom && left <= right) {
        // Left to Right
        for (int32_t j = left; j<= right; ++j)
            cout << matrix[top][j] << " ";
        ++top;

        // Top to bottom
        for (int32_t i = top; i <= bottom; ++i)
            cout << matrix[i][right] << " ";
        --right;

        // Right to Left
        if (top <= bottom) {
            for (int32_t j = right; j >= left; --j)
                cout << matrix[bottom][j] << " ";
            --bottom;
        }

        // Bottom to Top
        if (left <= right) {
            for (int32_t i = bottom; i >= top; --i)
                cout << matrix[i][left] << " ";
            ++left;
        }
    }
    cout << endl;
}