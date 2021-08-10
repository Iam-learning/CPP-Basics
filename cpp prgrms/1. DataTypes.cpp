#include <iostream>
using namespace std;

int main(){
    // data tyes and modifiers

    int a; //declaration
    a=12; //initialisation

    // << : insertion operator
    // >> : extraction operator

    cout << "Size of int is " << sizeof(a) << endl;

    float b;
    cout << "Size of float is " << sizeof(b) << endl;

    char c;
    cout << "Size of char is " << sizeof(c) << endl;

    bool d;
    cout << "Size of bool is " << sizeof(d) << endl;

    short int si;
    cout << "Size of ShortInt " << sizeof(si) << endl;

    long int li;
    cout << "Size of LongInt " << sizeof(li) << endl;

    int amount1;
    cout << "give first number ";
    cin >> amount1;
    

    int amount2;
    cout << "give second number ";
    cin >> amount2;
    

    int total = amount1 +amount2;
    cout << "sum of given numbers " << total <<endl;
    return 0;

}