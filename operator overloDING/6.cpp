#include <iostream>
using namespace std;

class Matrix {
   private:
    int mat[2][2];

   public:
    Matrix(int a[2][2]) {
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 2; j++) {
                mat[i][j] = a[i][j];
            }
        }
    }

    Matrix operator * (Matrix const &obj) {
        Matrix result;
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 2; j++) {
                result.mat[i][j] = 0;
                for (int k = 0; k < 2; k++) {
                    result.mat[i][j] += mat[i][k] * obj.mat[k][j];
                }
            }
        }
        return result;
    }

    void display() {
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 2; j++) {
                cout << mat[i][j] << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    int a[2][2] = {{1, 2}, {3, 4}};
    int b[2][2] = {{5, 6}, {7, 8}};
    Matrix m1(a);
    Matrix m2(b);
    Matrix m3 = m1 * m2;
    m3.display();
    return 0;
}
