#include <iostream>
using namespace std;

enum week {mon, tue, wed, thurs=6, fri, sat, sun};


int main(){

    enum week day;
    day = wed;
    cout<<day<<endl;
    cout<<thurs<<endl;
    cout<<fri<<endl;

    /*
    There are multiple advantages of using enum over macro when many related named constants have integral values.
    a) Enums follow scope rules.
    b) Enum variables are automatically assigned values. Following is simpler
    */

   /*Macros be like:
    #define Working 0
    #define Failed 1
    #define Freezed 2
    */


    return 0;
}