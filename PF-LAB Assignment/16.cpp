#include <iostream>
using namespace std;

class Counter {
    static int count;

public:
    Counter() {
        count++;
    }

    static void displayCount() {
        cout << "Count: " << count << endl;
    }
};

int Counter::count = 0;

int main() {
    Counter obj1, obj2, obj3;
    Counter::displayCount();
    return 0;
}
