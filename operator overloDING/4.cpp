#include <iostream>
using namespace std;

class Complex {
   private:
    int real;
    int imag;

   public:
    Complex(int r = 0, int i = 0) : real(r), imag(i) {}

    Complex operator + (Complex const &obj) {
        Complex result;
        result.real = real + obj.real;
        result.imag = imag + obj.imag;
        return result;
    }

    void display() {
        cout << real << " + i" << imag << endl;
    }
};

int main() {
    Complex c1(1, 2);
    Complex c2(3, 4);
    Complex c3 = c1 + c2;
    c3.display();
    return 0;
}
