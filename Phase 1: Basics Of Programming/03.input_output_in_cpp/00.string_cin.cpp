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