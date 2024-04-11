#include <iostream>
using namespace std;

class Complex {
   private:
    int real;
    int imag;

   public:
    Complex(int r = 0, int i = 0) : real(r), imag(i) {}

    friend istream &operator >> (istream &input, Complex &c) {
        input >> c.real >> c.imag;
        return input;
    }
};

int main() {
    Complex c1;
    cin >> c1;
    cout << c1.real << " + i" << c1.imag << endl;
    return 0;
}
