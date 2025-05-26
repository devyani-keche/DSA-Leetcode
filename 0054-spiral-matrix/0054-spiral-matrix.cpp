class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> arr; // No fixed size, dynamically grow the vector
        int i;

        // Traverse the first row
        for (i = 0; i < matrix[0].size(); i++) {
            arr.push_back(matrix[0][i]);
        }

        // Traverse the last column
        for (i = 1; i < matrix.size(); i++) {
            arr.push_back(matrix[i][matrix[0].size() - 1]);
        }

        // Traverse the last row (from right to left)
        if (matrix.size() > 1) { // Ensure there are at least 2 rows
            for (i = matrix[0].size() - 2; i >= 0; i--) {
                arr.push_back(matrix[matrix.size() - 1][i]);
            }
        }

        // Traverse the first column (from bottom to top)
        if (matrix[0].size() > 1) { // Ensure there are at least 2 columns
            for (i = matrix.size() - 2; i >= 1; i--) {
                arr.push_back(matrix[i][0]);
            }
        }

        vector<vector<int>> matrix1;

        // Extract the inner matrix
        if (matrix.size() > 2 && matrix[0].size() > 2) {
            for (int i = 1; i < matrix.size() - 1; i++) {
                vector<int> row;
                for (int j = 1; j < matrix[i].size() - 1; j++) {
                    row.push_back(matrix[i][j]);
                }
                matrix1.push_back(row);
            }
        }

        // Recursive call for the inner matrix and appending its result to arr
        if (!matrix1.empty()) {
            vector<int> innerSpiral = spiralOrder(matrix1);
            arr.insert(arr.end(), innerSpiral.begin(), innerSpiral.end());
        }

        return arr;
    }
};
