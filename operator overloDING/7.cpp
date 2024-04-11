#include <iostream>
using namespace std;

class Complex {
   private:
    int real;
    int imag;

   public:
    Complex(int r = 0, int i = 0) : real(r), imag(i) {}

    bool operator == (Complex const &obj) {
        return (real == obj.real && imag == obj.imag);
    }
};

int main() {
    Complex c1(5, 6);
    Complex c2(5, 6);
    if (c1 == c2) {
        cout << "Equal" << endl;
    } else {
        cout << "Not Equal" << endl;
    }
    return 0;
}
