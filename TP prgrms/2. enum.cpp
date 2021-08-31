#include <iostream>
using namespace std;

enum week {mon, tue, wed, thurs, fri, sat, sun};


int main(){

    enum week day;
    day = wed;
    cout<<day;

    return 0;
}