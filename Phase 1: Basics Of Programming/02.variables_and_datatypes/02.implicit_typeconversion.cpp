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