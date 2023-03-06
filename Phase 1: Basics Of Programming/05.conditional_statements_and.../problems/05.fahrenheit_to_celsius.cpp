#include <iostream>

using namespace std;

int ftoc(int f){
    return (int)((5.0/9.0)*(((double)f)-32.0));
}

int main(void){
    double start,end,steps;

    cin >> start;
    cin >> end;
    cin >> steps;

    for(;start <= end;start+=steps){
        cout << start << '\t' << ftoc(start) << endl;
    }
    return 0;
}