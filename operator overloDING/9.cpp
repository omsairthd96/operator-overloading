#include <iostream>
using namespace std;

class Complex {
   private:
    int real;
    int imag;

   public:
    Complex(int r = 0, int i = 0) : real(r), imag(i) {}

    friend ostream &operator << (ostream &output, const Complex &c) {
        output << c.real << " + i" << c.imag;
        return output;
    }
};

int main() {
    Complex c1(5, 6);
    cout << c1 << endl;
    return 0;
}
