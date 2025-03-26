
#include<iostream>
using namespace std;

// In giải pháp dưới dạng (hàng, cột)
void printSolution(int cols[8]) {
    for (int row = 0; row < 8; row++) {
        cout << "Hau tai hang " << row << ", cot " << cols[row] << endl;
    }
    cout << "-----------------" << endl;
}

// Kiểm tra vị trí (row, col) có an toàn không
bool isSafe(int cols[8], int row, int col) {
    for (int i = 0; i < row; i++) {
        // Cùng cột hoặc cùng đường chéo
        if (cols[i] == col || abs(cols[i] - col) == abs(i - row)) {
            return false;
        }
    }
    return true;
}

// Giải bài toán 8 hậu
void solveNQueens(int cols[8], int row) {
    if (row == 8) {
        printSolution(cols);
        return;
    }

    for (int col = 0; col < 8; col++) {
        if (isSafe(cols, row, col)) {
            cols[row] = col; // Đặt hậu tại (row, col)
            solveNQueens(cols, row + 1);
            // Không cần reset cols[row] vì sẽ ghi đè ở lần đặt tiếp theo
        }
    }
}

int main() {
    int cols[8]; // Mảng lưu vị trí cột của các hậu (chỉ số là hàng)

    // Giải và in tất cả giải pháp
    solveNQueens(cols, 0);

    return 0;
}