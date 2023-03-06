#include <iostream>
#include <algorithm> // include for `for_each`

using namespace std;

int print_even(int n){
    if(!(n & 1)) cout << n << " ";
}

int main(void){
    int arr[5] = {1,2, 3, 4,5};

    cout << "The array contains even number are : " << endl;

    for_each(arr,arr+5,print_even);
    return 0;
}

/*
Output : 
The array contains even number are : 
2 4
*/