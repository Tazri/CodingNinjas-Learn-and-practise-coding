#include <iostream>
using namespace std;

int main() {
    //Write your code here
    int n, result,i;
    result = 0;
    cin >> n;

    for(i = 0;i <= n;i+=2) result += i;

    cout << result << endl;

    return 0;
}