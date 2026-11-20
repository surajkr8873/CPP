// // FUNCTION

#include <iostream>
using namespace std;

// A function is a block of code that performs a specific task. it helps us reuse code instead of writing the same code again and again

void printhello(){
    cout << "hello\n";
}


int main(){
    //function call
    printhello();
    return 0;

}

// Q >> create a function and add two number ==================================================================

void sum(){
    int a = 5;
    int b = 10;
    cout << a + b << endl;
}

int main(){
    // function call / invoke
    sum();
    return 0;
}

// // Q >> calculate sum of number from 1 to n. ==================================================================

int sumN(int n){
    int sum = 0;

    for (int i = 1; i <= n; i++){
        sum += i;
    }
    return sum;
}

int main(){
    //function call
    cout << sumN(5) << endl;
    cout << sumN(10) << endl;
    return 0;
}

// Q >> calculate n factorial ===============================================================================

int factorialN(int n){
    int fact = 1;

    for (int i =1; i <= n; i++){
        fact *= i;
    }
    return fact;
}

int main(){
    //function call
    cout << factorialN(5) << endl;
    return 0;
}

// pass by value ============================================================================================

// Pass by value means passsing a copy of a variable to a function instead of passing the original variable

void change(int x) {
    x = 50;
}

int main() {
    int a = 10;
    change(a);

    cout << a;
    return 0;
}

