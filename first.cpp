#include <iostream>
using namespace std;

// variable , data type & operator 
// c++ >> is a case sensitive language
// cpp >> c++ is a general-pupose, high programming language used to develop software. games, operating system, applications and other program.

// our fir code

int main(){
    cout << "suraj kumar";
    return 0;
}

// VARIABLE :-
// variable is a container to store data.

// EG :-
// age = 17
// name = 'suraj'
// name and age >> variable .
// 17 and suraj(in quote) >> data .

// DATATYPE :-

// 5 TYPES

//        i    >> int    >> 1, 2 , 3, -5, 0 , 9 (4 byte)
//        ii   >> char   >> "suraj", "aman" (a - z) (A -Z) (character) (1 byte)
//        iii  >> float  >> (decimal value) (2.5, 5.2)(4 byte)
//        iv   >> bool   >> (TRUE or FALSE) (1 byte)
//        v    >> double >> (same as float but it contain doublle number) (8 byte)

// to check datatype

int main(){
    int age = 17;
    char name = 'suraj';
    float number = 33.5f;
    bool issafe = true;
    double price = 3.99;


    cout << typeid(age).name() << endl;
    cout << typeid(name).name() << endl;
    cout << typeid(number).name() << endl;
    cout << typeid(issafe).name() << endl;
    cout << typeid(price).name() << endl;

    return 0;
} 

// OPERATOR :-

// TYPE 
//    i    >> arithmatic operator
//    ii   >> relational operator
//    iii  >> logical operator

//  1. >> Artithmatic operator
//     >> +, -, *, /

int main(){
    int a = 7 , b = 10;

    cout << a + b  << endl;
    cout << a - b  << endl;
    cout << a * b  << endl;
    cout << a / b  << endl;

    return 0;
}

//  2. >> relational operator (true or false value)
//   >> <, >, <=, >=, !=

int main(){
    int a = 9 , b = 7;

    cout << (a < b) << endl;
    cout << (a > b) << endl;

    return 0;
}

//   3. logical operator
//  >> and (&&)
//  >> or (||)
//  >> not (!)

int main(){
    int a = 10 , b = 77;

    cout << (a > b && b > 45) << endl;
    cout << (a > b || b > 45) << endl;
    cout << !(a < b) << endl;

    return 0;
}

// UNARY OPERATOR :- 
//      increment++
//      decrement--

int main(){
    int a = 10;
    a++;
    cout << a << endl;
    a--;
    cout << a << endl;

    return 0;
}

// input from user

int main(){
    int age;
    cout << "enter your Age :";
    cin >> age;

    cout <<"your age is :" << age << endl;


    return 0;
}

