Module 03: Input/Output in C++
=================

## Taking Input from Console

Here two type of way to taking input from console. 

- *[cin](#cin)*
- *[getline](#getline)*

### cin
cin is a predefined variable use for taking input from the keyword with the extraction operator `>>`.

All examples : 

```cpp
int x;
cin >> x; // get user input from the keyboard
cout << x; // output x
```

Example 2 :
```cpp
#include <iostream>

using namespace std;

int main(){
    string name;

    cout << "Enter the name : ";
    
    // in that case get start input when 
    // enter the charactacter except space and end
    // with space
    // other word it take only one word
    cin >> name;

    cout << "Hello, " << name << "!" << endl;

    return 0;
}

/*
Enter the name : Arabi Arrowbeen
Hello, Arabi!
*/
```

<hr />

### getline
`getline` is a standard library function used to read a string or a line from an input stream. It is used when input strings with spaces between them or process multiple strings at once.

The getline() function extracts characters from the input stream and appends them to the string object until the delimiting character is encountered. The syntax : 

```cpp
istream& getline(istream& is,string& str);
```
The second declaration is almost the same as that of the first one. The only difference is that the latter have a delimitation character by defaulting a new line `\n` character.

```cpp
#include <iostream>

using namespace std;

int main(){
    string name;

    cout << "What is your name : ";

    getline(cin,name);

    cout << "Hello, " << name << endl;
    return 0;
}

/*
What is your name : Arabi Arrowbeen
Hello, Arabi Arrowbeen
*/
```

<hr />

## cout
The c++ `cout` is used to produce output on the standard output device, usually the display screen or console.

`cout` is a pre-defined variable that displays same output or text using the insertion operator `<<`.

Example : 
```cpp
cout << "Hello, World!" << endl;
// Output : Hello, World!
```

**endl :** It is used to insert a new line character.

Example : 
```cpp
cout << "Hello," << endl;
cout << "World!" << endl;
/*
Output :
Hello,
World!
*/
```

To print the variable value, 

```cpp
cout << Variable_name;
```

Example : 
```cpp
#include <iostream>

using namespace std;

int main(void){
    int age = 21;
    string first_name = "Arabi";
    string last_name = "Arrowbeen";

    cout << "MY name is " << first_name << " " << last_name << endl;
    cout << "My age is " << age << endl;

    return 0;
}

/*
Output : 
MY name is Arabi Arrowbeen
My age is 21
*/
```

<hr />
<br />

[< 2.Variables and Datatypes](../02.variables_and_datatypes/note.md) | [Phase 1](./../phase_1.md) | [4.Operators in C++ >](./../04.operators_in_cpp/note.md)
--------------