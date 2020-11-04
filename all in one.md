# All stuff from [Basics](https://github.com/HarshitKumarOjha/CPP-Basics/tree/main/Basics) in one markdown file 

## 0.Basics structure

```cpp
#include <iostream>
using namespace std;

int main(){
    cout<<"Hello World :D"<<endl;
return 0;
}
```

## 1.Comments

```cpp
    //single line comment
```
```cpp
    /*multiline
    comment*/
```    

## 2.Variables

variable naming rules :

- can't use number at the beginning. Example: `int 2ndB = "80"`
- can't use special symbols.
- can't use any name of keyword.

camel case notation:

```cpp
int marksInMaths=83;
```

if i'll type `cout<<mim;` the intellisence will show `marksInMaths`

## 3.Data Types:

Data types according to their size :

```cpp
    short a;
    int b =89;
    long c;
    long long d;
    float const score = 45.32;  //once I assign a value of score, I can't re assign it in any part of programme bcz i wroe that `const` thing before the variable name
    double score2 = 45.322;
    long double score3 = 45.333;
```

printing example :

```cpp 
  cout<<"the score is "<<score<<endl;
```

## 4.Input/Output

steps:
- create a variable
- Input a value in it
- Print it

```cpp
    int a, b;

    cout<<"Enter a number "<<endl;
    cin>>a;

    cout<<"Enter second number "<<endl;
    cin>>b;
    
    basic arithmatic operations:
    
    
    cout<<"a + b is "<< a + b<<endl;
    cout<<"a - b is "<< a - b<<endl;
    cout<<"a * b is "<< a * b<<endl;
    cout<<"a / b is "<<(float)a / b<<endl; //if 4 will be divided as an integer with 3 then it will giv 1, to show the floar/actual value we have to type cast it to float
```
