#include <iostream>

using namespace std;

int main(void){
    double dbl = 3.6;
    int res = (int) dbl - 10; // here dbl is explicity converted to int i.e value of
    // dbl become 5

    cout << "res : " << dbl << endl; 
    return 0;
}

/*
Output : 
res : 3.6
*/