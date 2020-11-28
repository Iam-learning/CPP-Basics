# <img src="https://upload.wikimedia.org/wikipedia/commons/thumb/1/18/ISO_C%2B%2B_Logo.svg/306px-ISO_C%2B%2B_Logo.svg.png" width=40 height=44> C++ Basics
made this repo to take c++ notes lol

This repo contains rough explaination and examples about different topics in C++

Installation guide [here](https://github.com/HarshitKumarOjha/CPP-Basics/blob/main/Basics/Installation%20guide.md)

## Topics :

0. [Basic Structure](https://github.com/HarshitKumarOjha/CPP-Basics#0basics-structure)

1. [Comments](https://github.com/HarshitKumarOjha/CPP-Basics#1comments)

2. [Variables](https://github.com/HarshitKumarOjha/CPP-Basics#2variables)

3. [Data Types](https://github.com/HarshitKumarOjha/CPP-Basics#3data-types)

4. [Input & output](https://github.com/HarshitKumarOjha/CPP-Basics#4inputoutput)

5. [Conditional statements](https://github.com/HarshitKumarOjha/CPP-Basics#5conditional-statements)

6. [Switch case](https://github.com/HarshitKumarOjha/CPP-Basics#6switch-case)

7. [Loops](https://github.com/HarshitKumarOjha/CPP-Basics#7-loops)

8. [Functions](https://github.com/HarshitKumarOjha/CPP-Basics#8functions)

9. [Arrays](https://github.com/HarshitKumarOjha/CPP-Basics#9arrays)

10. [Type Casting](https://github.com/HarshitKumarOjha/CPP-Basics#10type-casting)

11. [Strings](https://github.com/HarshitKumarOjha/CPP-Basics#11strings)

12. [Pointers](https://github.com/HarshitKumarOjha/CPP-Basics#12pointers)

<hr>

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

## 9.Arrays

- You can write arrays in 2 ways
  
```cpp
    int arr[3] = {1,3,6};
            or
    int arr[] = {3,6,9};
    cout<<arr[1];
```

- making array using for loop

```cpp
    int marks[6];
    for (int i = 0; i < 6; i++)
    {
        cout<<"Enter the marks of "<<i<<"th student"<<endl;
        cin>>marks[i];
    }

     for (int i = 0; i < 6; i++)
    {
        cout<<"marks of "<<i<<"th student is "<<marks[i]<<endl;
        
    }
```

output:

```
Enter the marks of 0th student
10
Enter the marks of 1th student
23
Enter the marks of 2th student
1
Enter the marks of 3th student
24
Enter the marks of 4th student
5
Enter the marks of 5th student
67
marks of 0th student is 10
marks of 1th student is 23
marks of 2th student is 1
marks of 3th student is 24
marks of 4th student is 5
marks of 5th student is 67
```

### 2D arrays

```cpp
    int arr2d[2][3] ={
        {1,2,3},
        {4,5,6}
    };
    
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout<<"The value at "<<i<<","<<j<<" is "<<arr2d[i][j]<<endl;
        }
    }
```

output:

```
The value at 0,0 is 1
The value at 0,1 is 2
The value at 0,2 is 3
The value at 1,0 is 4
The value at 1,1 is 5
The value at 1,2 is 6
```

## 10.Type Casting

converting on datatype to another.

```cpp
    int a = 343;
    
    float b = 84.32;

    cout<<(float)a/34<<endl;
    cout<<(int)b;
```

output:

```
10.0882
84
```

## 11.Strings

To use string functions we have to add `#include <string>` at the header.

```cpp
    string name = "Skidee";
    
    cout<<"The name is "<<name<<endl;
    cout<<"The length of name is "<<name.length()<<endl;
    cout<<"The name is "<<name.substr(1,4)<<endl;
    cout<<"The name is "<<name.substr(0,2)<<endl;
```

output:

```
The name is Skidee
The length of name is 6
The name is kide
The name is Sk
```

## 12.Pointers

Pointers are the special type of datatype who stores the address of a variable.

```cpp
    int a = 34;    //u can also use float in case u have floating point value
    int* ptra;
    ptra = &a;     //&a means address of a
    

    cout<<"value of a is "<<a<<endl;
    cout<<"value of a is "<<*ptra<<endl;    //*ptra means value at ptra
    
    cout<<"address of a is "<<&a<<endl;
    cout<<"address of a is "<<ptra<<endl;
```

output:

```
value of a is 34
value of a is 34
address of a is 0x61ff18
address of a is 0x61ff18
```

<hr>
# contribute

Feel free to contribute in this repo <3

![lol](https://i.imgur.com/yPz3acs.gif)
