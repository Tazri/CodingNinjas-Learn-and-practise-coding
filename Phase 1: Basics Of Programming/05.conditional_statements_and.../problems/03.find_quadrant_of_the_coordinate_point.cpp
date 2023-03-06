#include <bits/stdc++.h> 
#include <iostream>
using namespace std;

#define first "1st Quadrant"
#define second "2nd Quadrant"
#define third "3rd Quadrant"
#define forth "4th Quadrant"
#define xaxis "x axis"
#define yaxis "y axis"
#define origin "Origin"

int main() {
    //Write your code here
    int x,y;
    cin >> x >> y;


    if(x == 0 && y== 0) cout << origin << endl;
    else if(y == 0) cout << xaxis << endl;
    else if(x == 0) cout << yaxis << endl;
    else if(x > 0 && y > 0) cout << first << endl;
    else if(x < 0 && y > 0) cout << second << endl;
    else if(x < 0 && y < 0) cout << third << endl;
    else if(x > 0 && y < 0) cout << forth << endl;
    
    return 0;
}