Module 1: Introduction to C++
==============================

## Feature of C++

The important feature of c++ : 

● Simple <br />
● Portability <br />
● Powerful and Fast <br />
● Rich Library <br />
● Platform Dependent <br />
● Mid-level programming language <br /> 
● Structured programming language <br />
● Object-Oriented <br />
● Case Sensitive <br />
● Compiler Based <br />
● Syntax based language <br /> 
● Pointers <br />
● Dynamic Memory Management <br />

## Headers
C++ code start with inclusion of headers file. The header file is a where contain necessary variable and function to use. It's save the time and work. Here c++ start with : 

```cpp
#include <iostream>
using namespace std;
```

<hr />

### #include <iostream>
Here `iostream` is a header file where contain necessary variable and function. `#include` keyword user for inclusion the hearder file in c++ program. `iostream` header file contain below important function : 
    
● **cin** : used to take input. (cin mean character in)
● **cout** : used to take output. (cout mean character out)

### namespace
`namespace` defines which input/output from is to be used.

> 🟢 Semicolon (;) is used for terminating a C++ Statements. 

<hr />

## main function
Here a example of code : 

```cpp
int main(){
    statement1;
    statement2;
}
```

Here :

● **int** : This is a return type. <br />
● **main** : This is the portion of any C++ code.This is the line at which the program will begin executing.<br />
● **{}** : All the code written inside the curly braces is said to be in one block, also known as a particular function scope.

<hr />

## Compile and Run
For compiling and running `CPP` program in linux following are the command lines : 
```bash
$ g++ filename.cpp
$ ./a.out
```

For compiling and running `CPP` program in windows following are the command lines : 

```shell
$ gcc filename.cpp
$ filename
```

<hr />

## Marcos in C++ 

**Marcos** are a piece of code in a program that is given same name. Whenever the compiler encounters this name, the compiler replaces the name with the actual piece of code. The `#define` directive is used to define a macro.

> 🟢 **Note :** There are no semicolor(;) at the end of macros.

Example : 
```cpp
#define name code
```

> 🔴 We can pass arguments to macros.Macros define with arguments work similarly as functions.

Syntax : 
```cpp
#define name(argument_list) code
```
Example : 
```cpp
#include <iostream>

using namespace std;

#define pi 3.14
#define sqr(r) r*r

int main(void){
    double r;
    double result;

    cout << "Enter Radius of Circle : ";
    cin >> r;

    result = pi*sqr(r);
    cout << "Area : " << result << endl;

    return 0;
}

/*
output : 
Enter Radius of Circle : 78
Area : 19103.8
*/
```

## Comments
**Comments** is a line which ignore compiler and remove when compiling source code. Comment use for took down hint for other programmer to read the code.

Here C++ has a two type of comment : 
```cpp
// single line comment
/*
Multiline comment
*/
```

<hr />
<br />


[< Phase 1](./../phase_1.md) | [02.Variables and datatypes >](../02.variables_and_datatypes/note.md)
---------------