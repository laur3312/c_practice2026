#include <iostream>

class Counter {
public:
    static int count;


    Counter() {
        count = count + 1;
    }

    static void show_count();
};

int Counter::count = 0;

void Counter::show_count() {
    std::cout << "Count: " << Counter::count << std::endl;
}

int main() {
    Counter object1;
    Counter object2;

    Counter::show_count(); // Выведет 2

    return 0;
}