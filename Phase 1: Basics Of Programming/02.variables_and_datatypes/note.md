Module 2: Variables and Datatypes
====================================

## Variables

> 🟤 A variable is a place that has some meomory allocated to it. It is used to store some user data to it.

### Variable Declaration
Here rules to declare variable in c++ : 

● **data_type :** First write what type of data can be store in variable.Some example of variable data type is "float", "double", "int" etc. <br />
● **variable_name :** Name gaven to the variable.

```cpp
data_type variable_name;

// example : 
int x;
```

We can assign value in variable in two way. <br />
● By using variable initialization. <br />
● By taking input.

```cpp
data_type variable_name = value;

// example : 
int x = 20;
```

### Rules of defining variable in C++
● Variable name can not start with number. <br />
● Space and special character are not allowed except underscore ( _ ). <br />
● C++ keywords (reserved words) must not be used as a variable name. <br />

> 🟢 **Reserved Keywords** is a bunch of word which has a different meaning for compiler.Example : `for`, `while`, `if`, `else` etc

<rh />

## DataTypes
All variable use data-type during declaration to restrict the type of data to be stored. 

Here predefine datatypes : <br />

● **int :** integer value. <br />
● **unsigned int :** Can store only positive invegers. <br />
● **float, double :** Decimal number. <br />
● **char :** Character values. (including special characters) <br />
● **unsigned char:** character values. <br />
● **bool :** boolean values. (true or false) <br />
● **long :** Contains integer values but with the larger size. <br />
● **unsigned long :** Contains large positive integers or 0. <br />
● **short :** Contains integer values with smaller size. <br />

Examples : 
```cpp
int price = 500; // integer (whole number)

float interestRate = 5.99f; // floating point number

char myLetter = 'D'; // character

bool isPossible = true; // bolean

string myText = "Coding Ninjas"; // string
```

### auto keyword in C++

The `auto` keyword specifies that the type of the declared variable will automatically be deduced from its initializer. It would set the variable type to initialize that variables value type or set the function return type as the value to be returned.

```cpp
auto a = 11; // will set the variable a as int type
auto b  7.65; // will set the variable b as float
auto c = "abcdefg"; // will set the variable c as string
```

<hr />

## Scope of a Variable

Scope of a variable refers to the region of availabile of access. There are mainly two types of variable scopes : 

- Local Scope
- Global Scope

#### Local Variable

> 🟢 variable declared within the body of a function or a block are said to have **local variables**.

```cpp
void person(){
    string gender = "Male";
    // this gender variable is a local variable.
    // it is not accessable to outside of the person function
}
```
### Global Variable

> 🟢 The variables whose scope is not limited to any block or function are said **global variable**.. Example : 

```cpp
#include <iostream>

using namespace std;

int g; // declare global variable

int main(void){
    g = 10; // using global variable
    cout << g;

    return 0;
}
```

<hr />

## Type of Variables
There are three type of variable based on scope : 

● Local Variable <br />
● Instance Variable <br />
● Static Variable <br />

### ● Local Variable : 
The Variables declare in a block or function called **local variables.**. This type of variable destroy after the block or function. Here example : 

```cpp
void function(){
    // local variable
    int marks = 50;
    marks = marks + 2;
    count << "Student obtained " << marks << "marks" << endl.
    return;
}
```

### ● Instance Variables
Instance variables are non-static variables and belong to an instance of a class and are declared in a class outside any method, constructor, or block, These variables are created when an object of the class is created and destoryed when the object is destroyed. Example : 
```cpp
class A {
    int a; // by default private instance variable
    int b ;
    public:
        int c; // public instance variable
    void function (){
        a = 10;
        cout << a << endl;
    }
};
```

### ● Static Variables
Static variable are declared using the keyword `static`, within a class outside any method, constructor, or block. Space is allocated only once for static variables.The static variables are created at the start of the program and get destroyed at the end of the program i.e the lifetime of a static variable is the lifetime of the program. Example : 

```cpp
class A{
    static int var; // static variable
    void func(){
        ++var;
    }
};
```

<hr />

## Overflow and Underflow

> 🟢 Overflow occurs when we assign a value to more than its range, and underflow is the opposite of the overflow.

> 🟢 C++ compiler dosen't throw any errors. It simply chanes the value.

Example : 
```cpp
#include <iostream>

using namespace std;

int main(void){
    int int_max = 2147483647;
    int int_min = -2147483648;

    cout << "int_max : " << int_max << endl;
    cout << "int_min : " << int_min << endl;
    
    int_max += 6;
    int_min += 6;

    cout << "After increment by 6 of int_min and int_max : " << endl;
    cout << "int_max : " << int_max << endl;
    cout << "int_min : " << int_min << endl;

    return 0;
}

/*
Output : 
int_max : 2147483647
int_min : -2147483648
After increment by 6 of int_min and int_max : 
int_max : -2147483643
int_min : -2147483642
*/
```

<hr />

## Typecasting
> 🟢 Converting an expression of a given data type into another data type is known as **type-casting or type-conversion**. There are two types of tyep conversions.

**● Implicit Type Convertion :** <br />
It is automatically performed by the compiler itself to ensure that the calculations between the same data types take place and avoid any loss of data. Such type of conversions take place when more than one data type is present in an expression. The order of automatic type conversion for smallest to largest data type (left to right) for this type conversion is given as : 

```
bool -> char -> short int -> int -> unsigned int -> long -> unsigned -> long long -> float -> double -> long double
```

Example : 

```cpp
#include <iostream>

using namespace std;

int main(void){
    int number = 200;
    char letter = 'c';
    float dec = 0.7;
    int res1 = number + letter; // here letter is implicitly convert to int
    // ASCII value of 'c' i.e. 99
    cout << res1 << " ";
    float res2 = res1 + dec ; // here res1 is implicitly converted to float
    cout << res2 << endl;

    return 0;
}

/*
Output : 
299 299.7
*/
```

**● Explicit Type Convertion :** <br />
Thsi process  is also called **typecasting**. and it is user-defined. Here the user can typecast the result to make it of a particular data type which may lead to data loss and is also known as forcefull fasting. Syntax : 

```cpp
(<type>) <expression>;
```
Example : 

```cpp
#include <iostream>

using namespace std;

int main(void){
    double dbl = 3.6;
    int res = (int) dbl - 10; // here dbl is explicity converted to int i.e value of
    // dbl become 5

    cout << "res : " << dbl << endl; 
    return 0;
}

/*
Output : 
res : 3.6
*/
```


<hr />
<br />

[< 1.Introduction to C++](./../01.introduction_to_cpp/note.md) | [Phase 1](./../phase_1.md) | [3.Input/Output in C++ >](./../03.input_output_in_cpp/note.md)
----------------