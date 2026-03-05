#include <iostream>
#include <vector>
using namespace std;

class Solution {
    public:
    void setmatrixtozero(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();

        int firstRowzero = false; int firstColumnzero=0;

        for (int j=0; j<n; j++) {
            if (matrix[0][j] == 0) {
                firstRowzero = true;
            }
        }

        for (int i=0; i<m; i++) {
            if (matrix[i][0] == 0) {
                firstColumnzero = true;
            }
        }

        for(int i=1; i<m; i++ ) {
            for (int j=1; j<n; j++) {
                if (matrix[i][j] == 0) {
                    matrix[i][0] = 0;
                    matrix[0][j] = 0;
                }
            }
        }

        if(firstRowzero)
        {
            for (int j=0; j<n; j++) {
                matrix[0][j] = 0;
            }
        }

        if(firstColumnzero)
        {
            for (int i=0; i<m; i++) {
                matrix[i][0] = 0;
            }
        }
    }

};

int main() {
    vector<vector<int>> matrix = {{0,1,2,0},{3,4,5,2},{1,3,1,5}};
    Solution obj;
    obj.setmatrixtozero(matrix);
    for (auto row : matrix) {
        for (auto val : row) {
            cout << val << " ";
        }
        cout << endl;
    }
}