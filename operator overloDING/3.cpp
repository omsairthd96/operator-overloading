#include <iostream>
using namespace std;

class Count {
   private:
    int value;

   public:

    Count() : value(5) {}

    // Overload -- when used as postfix
    void operator -- (int) {
        value--;
    }

    int getValue() {
        return value;
    }
};

int main() {
    Count count1;

    // Call the "void operator -- (int)" function
    count1--;

    cout << "Count: " << count1.getValue() << endl;
    return 0;
}
