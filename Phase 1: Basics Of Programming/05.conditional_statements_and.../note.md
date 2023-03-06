Module 5: Conditional Statements and ...
=================

## Conditional
A C++ conditional statement redirets a program's flow to execute additional code. I know about conditional statement in c++ before. So I write down only syntax of all conditional statement : 

**If Condition syntax :**
```cpp
if(condition){
    // statements
}
```

> 🔴 If we do not provide the curly braces '{' and '}' after if (condition), then by default, the if statement will consider the first immediate statement it to be inside its block.

**If else Condition syntax :**
```cpp
if(condition){
    // statement if condition is true
}else{
    // statement if condition is not true
}
```


**Nested If Statement :**
```cpp
if(condition){
    // nested if
    if(condition){
        // statement
    }
}
```
**If-else-If statement :**
```cpp
if(condition1){
    // statement if condition1 is true
}else if(condition2){
    // statement if condition2 is true
}else if(condition3){
    // statement if condition3 is true
}
...
else{
    // statement if all condition become false
}
```

**Switch Statement Syntax :**
```cpp
switch(expression){
    case constant1:
        // statements
        break;
    case constant2:
        // statements
        break;
    case constant3:
        // statements
        break;
        .....
    default:
        // statement
}
```

**Jump Statement :**

``cpp
break;
// in c++ when encountered the break, statement terminates the loop or switch statement,

continue;
// The continue statement is used to skip the current iteration of the loop, and the control of the program goes to the next iteration.
```

**Goto statments :**
```cpp
goto label;
.
.
.
label:
```

**return statement :**
The `return` statement is used to terminate a function's execution and transfer program control back to the calling function.

```cpp
return [expression];
```

## Loop
I know about loop in C++ before. Here I write down the only syntax of loop. But here divde the loop two part : 

- **Entery Controlled Loops**
- **Exit Controlled Loop**

**Syntax of For Loop :**
```cpp
for(initialization expression; condition expressiont;update expression){
    // body of loop
}
```

**Syntax of while loop :**
```cpp
// initialization;
while(condition){
    // statements
    // update_expressions;
}
```

**Syntax of do-while loop :**
```cpp
// initialization
do{
    // statements
    // update_expression;
}while(condition);
```

**Syntax of for_each loop :**
```cpp
for_each(InputIterator first, InputIterator last,Function fn)
```
Here,

- **first -** Input iterator to the initial position.
- **last -** Final iterator to the final position.
- **fn -** Unary function  that accepts an element in the range as an argument.

> 🔴 Must be include `algorithm` header file for use `for_each`.

Example : 
```cpp
#include <iostream>
#include <algorithm> // include for `for_each`

using namespace std;

int print_even(int n){
    if(!(n & 1)) cout << n << " ";
}

int main(void){
    int arr[5] = {1,2, 3, 4,5};

    cout << "The array contains even number are : " << endl;

    for_each(arr,arr+5,print_even);
    return 0;
}

/*
Output : 
The array contains even number are : 
2 4
*/
```

<hr />
<br />

[< 4.Operators in C++](./../04.operators_in_cpp/note.md) | [Phase 1](./../phase_1.md) | [6.Function in C++ >](./../06.function_in_cpp/note.md)
----------------