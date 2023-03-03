#include <iostream>

using namespace std;

int main(){
    double capital,year;
    double interest;
    int simple_interest;

    cin >> capital;
    cin >> interest;
    cin >> year;

    simple_interest = (capital*year*interest)/100;

    cout << simple_interest << endl;
    return 0;
}