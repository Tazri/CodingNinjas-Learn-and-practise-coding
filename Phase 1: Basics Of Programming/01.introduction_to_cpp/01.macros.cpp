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