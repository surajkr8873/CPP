// LOOP

#include <iostream>
using namespace std;

// A loop is a programming structure that is used to execute a block of code repeatedly until a given conditon becomes false

// 
// types of loop
// i     >> for loop
// ii    >> while loop
// iii   >> do while 

// while loop 
// the while loop executes a block of code repeaatedly as long as the given condition is true

int main(){
    int count = 1;

    while (count <= 5){
        cout << count << endl;
        count = count + 1;
    }
    return 0;
}

// for loop 
// the for loop is used when we know how many times we wants to execute a block of code

int main(){
    for (int i = 1; i <= 5; i++){
        cout << i << endl;
    }
    return 0;
}

// do while loop
// the do while loop executes the code at least once before checking the condition

int main(){
    int i = 1;
    do{
        cout << i << endl; 
        i++;
    }
    while (i <= 0);
    return 0;
}

// nested loop 
// A nested loop is a loop inside another loop. it is used to execute a set of statement repeatedly with another loop.

int main(){
    for (int i = 1 ; i < 3 ; i++){
        for (int j = 1 ; j < 3 ; j++){
            cout << i << " " << j << endl;
        }
    }
    return 0;
}