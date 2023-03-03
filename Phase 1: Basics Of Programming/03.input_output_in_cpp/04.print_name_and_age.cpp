#include <iostream>

using namespace std;

int main(){
    string name;
    int age;

    getline(cin,name);
    cin >> age;

    // printing name and age
    cout << "The name of the person is "<< name <<" and the age is "<< age <<"." << endl;
    return 0;
}