#include <bits/stdc++.h> 
#include <iostream>
using namespace std;

int main() {
    //Write your code here
    int base,pow,result,i;

    cin >> base >> pow;;

    result = 1;

    for(i = 0;i < pow;i++) result *= base;
    
    cout << result <<endl;

    return 0;
}