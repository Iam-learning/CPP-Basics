#include <iostream>
using namespace std;

int main (){

    int a, b, c;
    
    cout<<"Enter a number "<<endl;
    cin>>a;

    cout<<"Enter second number "<<endl;
    cin>>b;

    cout<<"Enter second number "<<endl;
    cin>>c;
    
    if (a>b) {
        if (a>c) {
            cout << a << " is the greatest." << endl;
        }
        else{
            cout << c <<" is the greatest." << endl;
        }
    }
    else{
        if (b>c){
            cout << b <<" is the greatest." << endl;
        }
        else{
            cout << c <<" is the greatest." << endl;
        }
    }

    cout << "----------------" << endl;

    int num;
    
    cout << "Input to check a numbers is even or odd : ";
    
    cin >> num;

    if(num%2 == 0){ //% is called modulo which returns the remainder.
        cout << num << " is Even" << endl;
    }
    else
    {
        cout << num << " is Odd" <<endl;
    }
    

    return 0;
}