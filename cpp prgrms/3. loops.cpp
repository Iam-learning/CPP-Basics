#include <iostream>
using namespace std;

int main(){
    //For loop 
    //Sum of numbers till n
    
    int n;
    cout << "Enter a Nummber Limit: ";
    cin >> n;

    int sum=0;
    for(int counter=1;counter<=n;counter++){
        sum = sum + counter;
    }
    cout << "sum of numbers till " << n << " is : " << sum << endl; 

    //While Loop

    int num;
    cout << "Enter a positive number to keep going: ";
    cin >> num;

    while(num>0){
        cout << num << endl;
        cin >> num;
    }

    //Do While Loop

    int z;
    cin>>z;

    do{
        cout << z <<endl;
        cin >> z;
    }while (n>0);
    

    return 0;
}