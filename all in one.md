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


## 5.Conditional statements

```cpp
    int age;
    
    cout<<"Enter your age: ";
    cin>>age;


    if(age>150 || age<1){
        cout<<"invalid age";
    }
    else if(age>=18){
        cout<<"You can vote"<<endl;
    }
    else{
        cout<<"You can't vote";
    } 
    
```

## 6.Switch case

Basic structure:

```cpp
switch (expression)
{
case constant-expression :
     code 
    break;

default:
    break;
}

```
If there will be no break it will run all rest of the cases, 

A default case is someting which will run every time when program runs.

Example:

```cpp
   switch (age)
    {
    case 12:
        cout<<"You are 12 years old"<<endl;
        break; //break prevents execution of other cases.

    case 18:
        cout<<"You are 18 years old"<<endl;
        break;     
    
    default:
        cout<<"You are neither 12 nor 18 years old";
        break;
    }
```

## 7. Loops

### - While loop

it is a simple loop. it runs until the condition is false.

```cpp
int index = 0;
    
    while(index<34){
        cout<<"this is index number "<<index<<endl;
        index = index + 1;
    }
```    

### - Do while

It runs atleast one time

basic structure:

```cpp
    do
    {
        /* code */
    } while (/* condition */);
```    

Example :

```cpp
 int index = 0;

    do
    {
        cout<<"this is index number "<<index<<endl;
        index = index+1;

    } 
    while (index>33);
    
```    

output:

`this is index number 0`

### - For loop

```cpp
for (int i = 0; i <= 34; i++)
    {
        cout<<"the value of i is "<<i<<endl;
    }
    
```

Output :

```
the value of i is 0
the value of i is 1
the value of i is 2
...
the value of i is 34
```

## 8.Functions

```cpp
#include <iostream>
using namespace std;

//creating a function :
int sum(int a, int b){
    int c;
    c = a + b;
    return c;
}

int main(){

   //calling the funtion:
   int a,b;

    cout<<"Enter number A: "<<endl;
    cin>>a;
    
    cout<<"Enter number B: "<<endl;
    cin>>b;

    cout<<"The function returned: "<<sum(a,b);

return 0;
}
```
