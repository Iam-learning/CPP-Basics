#include <iostream>
using namespace std;

int main(){

    char button;
    cout << "Input a character: " << endl;
    cin >> button ;

    switch(button){

    case 'a':
        cout << "Hello";
        break;
    case 'b':
        cout << "Namaste";
        break;
    case 'c':
        cout << "konichiwa";
        break;
    case 'd':
        cout << "Hola";
        break;
    default :
        cout << "I'm still learning more";
        break;

    }

    return 0;
}