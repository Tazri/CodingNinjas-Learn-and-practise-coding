#include <iostream>

using namespace std;

int main(void){
    int n,fact,i;

    cin >> n;

    if(n < 0) cout << "Error" << endl;
    else{
        fact = 1;
        for(i = 2;i <= n;i++)fact*=i;
        cout << fact << endl;
    }
    
    return 0;
}