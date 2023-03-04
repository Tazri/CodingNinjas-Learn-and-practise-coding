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