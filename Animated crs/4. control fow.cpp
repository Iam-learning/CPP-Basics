#include <iostream>
using namespace std;

int main(){

    // int pocketMoney = 3000;

    // for(int i=1; i<=30; i++){
    //     if(i%2==0){
    //         continue;
    //     }
        
    //     if(pocketMoney == 0){
    //         break;
    //     }

    //     cout << "go out today!!!" << endl;
        
    //     pocketMoney = pocketMoney - 300;
    // }

    // ----------------------------------------

    // for(int i=1; i<=100; i++){
        
    //     if(i%3==0){
    //         continue;
    //     }

    //     cout << i << endl;

    // }

    // ----------------------------------------

    int i;
    int n,a,b;
    
    cout << "enter number range to be chkd: " << endl;
    cin >> a >> b;

    for(int num =a; num <=b; num++){
    
    for(i=2;i<num;i++){

        if(num%i==0){
        
            break;
        }
    }

    if(i==num){

    cout << num << " number is prime" << endl;

    }

    }
    
    

    return 0;
}