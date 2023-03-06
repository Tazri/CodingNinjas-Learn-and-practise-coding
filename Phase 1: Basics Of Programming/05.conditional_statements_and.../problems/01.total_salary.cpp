#include <bits/stdc++.h> 
#include <iostream>

using namespace std;

int main() {
    //Write your code here
    float basic,hra,da,allow,pf,total_salary;
    int ans;
    char grade;

    cin >> basic >> grade;

    hra = 0.2*basic;
    da =  0.5*basic;
    pf = 0.11*basic;

    if(grade ==  'A'){
        allow = 1700;
    }else if(grade == 'B'){
        allow = 1500;
    }else{
        allow = 1300;
    }

    total_salary = basic + hra + da + allow - pf;
    ans = round(total_salary);

    cout << ans << endl;

    return 0;
}