#include <iostream>
using namespace std;

#define Length 40

int main (){

    // there are two ways of defining consts
    // by using #define preprocessor or by using const keyword

    const int Hight = 20;

    cout << Length * Hight;

    return 0;
}