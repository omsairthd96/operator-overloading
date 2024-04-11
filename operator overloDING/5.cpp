#include <iostream>
using namespace std;

class Fraction {
   private:
    int num;
    int den;

   public:
    Fraction(int n = 0, int d = 1) : num(n), den(d) {}

    Fraction operator / (Fraction const &obj) {
        Fraction result;
        result.num = num * obj.den;
        result.den = den * obj.num;
        return result;
    }

    void display() {
        cout << num << "/" << den << endl;
    }
};

int main() {
    Fraction f1(3, 4);
    Fraction f2(5, 6);
    Fraction f3 = f1 / f2;
    f3.display();
    return 0;
}
