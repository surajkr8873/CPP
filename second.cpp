#include <iostream>
#include <typeinfo>
using namespace std;

int main() {
    int age = 17;
    string name = "suraj";
    float number = 33.5;
    bool issafe = true;
    double price = 3.99;

    cout << typeid(age).name() << endl;
    cout << typeid(name).name() << endl;
    cout << typeid(number).name() << endl;
    cout << typeid(issafe).name() << endl;
    cout << typeid(price).name() << endl;

    return 0;
}