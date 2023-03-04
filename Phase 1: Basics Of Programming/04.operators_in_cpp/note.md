Module 4: Operators in C++
=================

Operator in C++ are the special symbol-specific operations on one or more 
operands upon which it returns a result. Here C++ Operators name : 

- *[Arithmatic Operators](#arithmetic-operators)*
- *[Unary Operators](#unary-operators)*
- *[Relational Operators](#relational-operators)*
- *[Logical Operators](#logical-operators)*
- *[Bitwise Operators](#bitwise-operators)*
- *[Assignment Operators](#assignment-operators)*
- *[Misc Operators](#misc-operators)*

<hr />

## Arithmetic Operators
Arithematic Operators are used for perform common mathematical operations. 

**● Addition Operator (+):** It is used to add two number. <br />
**● Subtraction Operator (-):** It is used to subtract two number. <br />
**● Multiplication Operator (\*):** It is used to multiply two numbers. <br />
**● Division Operator (/):** It is used to divide two numbers. Mind that it gives the quotient. <br />
**● Modulus Operator (%):** It is use to figure out remainder from the division operation. <br />


Example : 

```cpp
#include <iostream>

using namespace std;

int main(){
    int a = 50, b = 20;

    cin >> a >> b;

    int addition = a + b;
    int subtraction = a - b;
    int mul = a * b;
    int division = a / b;
    int modulus = a%b;

    cout << "Addition : " << addition << endl;
    cout << "Subtraction : " << subtraction << endl;
    cout << "Mul : " << mul << endl;
    cout << "Division : " << division << endl;
    cout << "Modulus : " << modulus << endl;
    return 0;
}

/*
Output : 
35 20
Addition : 55
Subtraction : 15
Mul : 700
Division : 1
Modulus : 15
*/
```

<hr />

## Unary Operators
Unary operators are the types of operators that require only one operand. They from various operations on single operands, such as incrementing or decrementing the value by one.

**● Unary Minus Operator(-):** This operator can used to convert a negative value into a positive valeu and vice-versa.

```cpp
#include <iostream>

using namespace std;

int main(){
    int num1 = 10;
    num1 = -num1; // converting  positive to negative number
    cout << "num1 : " << num1 << endl;

    int num2 = -20;
    num2 = -num2; // converting negative to positive number
    cout << "num2 : " << num2 << endl;

    return 0;
}

/*
Output : 
num1 : -10
num2 : 20
*/
```
**● Unary Not Operator(!):** This operator is used to convert "true" to "false" and vice versa.<br />

Example : 
```cpp
#include <iostream>

using namespace std;

int main(){
    int a = 10, b = 1;
    cout << "!(a < b) = " << !(a < b) << endl;
    cout << "(a < b) = " << (a < b) << endl;
    return 0;
}

/*
output : 
!(a < b) = 1
(a < b) = 0
*/
```

**● Increment Operator(++):** This operator used to increment the value by 1. There are two type of increment : <br />

+ **Post-Increment Operator:** Posti increment operator is used to increment the variable's value after it has been evaluated for use in the expression.
+ **Pre-Increment Operator:** Pre increment operator is used to increment the variable's value before it's evaluted in the expression.

```cpp
#include <iostream>

using namespace std;

int main(){
    int num = 10;
    cout << "Post increment : num++ = " << num++ << endl;
    cout << "Pre increment : ++num = " << ++num << endl;

    return 0;
}

/*
Output : 
Post increment : num++ = 10
Pre increment : ++num = 12
*/
```

**● Decrement Operator(++):** This operator is used to decrement the value by 1. There are two types of dcrement operators like increment operator : <br />

- **● Post-Decrement Operator :** Post decrement operator is used to decrement the value of the variable after it has been evaluated for use in the expression.
- **●Pre-Decrement Operator :** Pre dcrement operator is used to decrement the value of the variable before it's evaluated in the expression.

```cpp
#include <iostream>

using namespace std;

int main(){
    int num = 10;

    cout << "Post Decrement : num-- = " << num-- << endl;;
    cout << "Pre Decrement : --num = " << --num << endl;
    return 0;
}

/*
Output : 
st Decrement : num-- = 10
Pre Decrement : --num = 8
*/
```

**● Bitwise Complement (~):** This operator is used to return the one's complement representation of the input value.

```cpp
#include <iostream>

using namespace std;

int main(){
    int num1 = 6;
    int num2 = -2;

    cout << num1 << "'s bitwise complement : " << ~num1 << endl;
    cout << num2 << "'s bitwise complement : " << ~num2 << endl;
    return 0;
}

/*
Output :
6's bitwise complement : -7
-2's bitwise complement : 1
*/
```

<hr />


## Relational Operators
The Relational opreators used to check the relationship between two operands.

| Operator     | name      | Description | 
|--------------|-----------|-------------|
| ==           | Equal     | Check two operands are equal or not |
| !=           | Not Equal | Check two operands are not equal or same |
| >            | Greater than | Check left operator is greater than right operator |
| >=           | Greater than or Equal | Check left operator is greater than or equal to right operator. |
| <            | Less than | Check left operator is less than right opreator. |
| <=          | Less than or Equal | Check left operator is less than or equal to right operator. |

<hr />

## Logical Operators
These operators are used to perform logical operation such as OR,AND and NOT operation. Here all logical operator : 

| Logical Operator | Name      | Description                |
| ---------------- | --------- | -------------------------- |
| &&               | AND       | return true if all condition is true |
| \|\|               | OR        | return true if one of condition is true |
| !                | Not       | Reverse the operand value. If the operand's value is true, it returns false(0), and if the value of the operand is false, it returns true(1). |

The syntax : 

| Logical Operator | Syntax   |
| ---------------- | -------- |
| &&               | x && y   |
| \|\|               | x \|\| y   |
| !                | !x       |

The truth table for logical operators : 

| X      | Y      | X && Y  | X \|\| Y    | !(X)     | !(Y)   |
|--------|--------|---------|-------------|----------|--------|
| T      | T      | T       | T           | F        | F      |
| T      | F      | F       | T           | F        | T      |
| F      | T      | F       | T           | T        | F      |
| F      | F      | F       | F           | T        | T      |

<hr />

## Bitwise Operators
The bitwise operators are used to peform bit manipulation on numbers. There are various types of bit oprators that are used in C++: 

| Bitwise Operator | Name   | Example    | Description                   |
| ---------------- | ------ | ---------- | ----------------------------- |
| &                | AND    | x & y| AND operate on every bit of two number |
| \|               | OR     | x\|y  | OR operate on every bit of x and y |
| ~                | NOT    | ~x    | Inverts all bit                   |
| ^                | XOR    | x^y   | XOR operate on every bit of x and y |
| <<               | Left Shift  | x << a | shift bit from x to 'a' number of place from left |
| >>               | Right Shift | x >> a | shift bit from x to 'a' number of place from right |

<hr />


## Assignment Operators
Here all assignment operator in C++ with Example : 

| Assignment Operators | Example | Description                     |
| -------------------- | ------- | ------------------------------- |
| +=                   | x += a  | x = x + a                       |
| -=                   | x -= a  | x = x - a                       |
| *=                   | x *= a  | x = x * a                       |
| /=                   | x /= a  | x = x / a                       |
| %=                   | x %= a  | x = x % a                       |

<hr />

## Misc Operators
Apart from the above operators, some operators are available in C++ to perform some specific tasks, They are explained below : 

**● sizeof operator :** This operator determines a variable's size. Sizeof operator can also be used to determine the size of a data type.  <br />

Example : 

```cpp
#include <iostream>

using namespace std;

int main(){
    int a;

    cout << "sizeof(int) : " << sizeof(int) << endl;
    cout << "sizeof(char) : " << sizeof(char) << endl;
    cout << "sizeof(float) : " << sizeof(float) << endl;
    cout << "sizeof(double) : " << sizeof(double) << endl;
    cout << "sizeof(a) : " << sizeof(a) << endl;

    return 0;
}

/*
Output : 
sizeof(int) : 4
sizeof(char) : 1
sizeof(float) : 4
sizeof(double) : 8
sizeof(a) : 4
*/
```

**● Comma Operator (,) :** It is a binary operator that evaluates its first operand and discards the result. It then evaluates the second operand and returns this value.

Example : 

```cpp
#include <iostream>

using namespace std;

int main(){
    int x,y;
    y = 100;
    x = (y+10, 99+y);

    cout << "with breakets value of x : " << x << endl;

    x = y + 10, 99 + y;
    cout << "Without breakets value of x : " << x << endl;

    return 0;
}

/*
with breakets value of x : 199
Without breakets value of x : 110
*/
```

**● Conditional Operators :** Here syntax of conditional operator : 

```cpp
expression ? expression_one : expression_three;
```

Here expression 1 is the condition to be evaluated. If the condition (Expression) is True, then we will execute and return the result of expression_one, otherwise return the expression_three.

Example  : 
```cpp
#include <iostream>

using namespace std;

int main(){
    int a = 1, b;
    b = (a < 10) ? 2 : 5; 

    cout << "b : " << b << endl;

    return 0;
}

/*
Ouptut : 
b : 2
*/
```

**● Pointer Operator :** There are two pointer operator : 

- **&:** It refers to the address (memory location) in which the operand is stored.
- **\*:** It is a pointer operator.

Example : 
```cpp
#include <iostream>

using namespace std;

int main(){
    int a = 1, *b;
    b = &a;
    cout << "b : " << b << endl;
    cout << "&b : " << &b << endl;
    cout << "*b : " << *b << endl;

    return 0;
}

/*
output : 
b : 0x7ffdbf1ca2ac
&b : 0x7ffdbf1ca2a0
*b : 1
*/
```



<hr />
<br />

[< 3.Input/Output in C++](./../03.input_output_in_cpp/note.md) | [Phase 1](./../phase_1.md) | [5.Conditional Statements and .. >](./../05.conditional_statements_and.../note.md)
---------------