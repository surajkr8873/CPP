#include <iostream>
using namespace std;


// CONDITIONAL STATEMENT :- 

// CONDITIONAL STATEMENT :-

// conditional statement are used to mamke decisions in a program based on a given condition 
// it helps a program decide to do when a conditionn is true or false

// types of conditional statement
// i >> if statement
// ii >> else statement
// iii >> else if statement

int main(){
    int a = 65;
    
    if (a > 9){
        cout << "a is greater than 98\n";
    }
    return 0;
}

// ii >> elsse statement

int main(){
    int n = 5;
    int m = 6;

    if ( n > m){
        cout << "n is greater" << n << endl;
    }
    else{
        cout << "m is greater " << m << endl;
    }
    return 0;
}

// else if statement 

int main(){
    string color = "green";
    
    if (color == "red"){
        cout << "stop >> " << color << endl;
    }
    else if (color == "green"){
        cout << "Go >> " << color << endl;
    }
    else if (color == "yellow"){
        cout << "go slow >> " << color << endl;
    }
    else{
        cout << "color not match\n";
    }
    return 0;
}

// ternary statement :- 
//  single line of conditional statement code 

int main (){
    int n = 5;

    cout << (n >= 0) ? "positive" : "negative/n";
    return 0;
}