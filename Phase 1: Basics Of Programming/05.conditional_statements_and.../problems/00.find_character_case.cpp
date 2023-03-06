#include <iostream>

using namespace std;

int main() {
    //Write your code here
    char c;
    int status = -1;

    cin >> c;

    if(c >= 'a' && c <= 'z'){
        status = 0;
    }else if(c >= 'A' && c <= 'Z'){
        status = 1;
    }

    cout << status << endl;
    return 0;
}