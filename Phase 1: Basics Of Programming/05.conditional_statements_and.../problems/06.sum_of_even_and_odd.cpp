#include <iostream>
using namespace std;

int ctod(char c){ // char to digit
    return (int)(c - '0');
}

int main() {
    //Write your code here
    string n;
    int e,o,i,d;

    cin >> n;
    e = 0;
    o = 0;
    for(i = 0;i < n.length();i++){
        d = ctod(n[i]);

        if(d & 1) o += d;
        else e += d;
    }

    cout << e << " " << o << endl;
    return 0;
}