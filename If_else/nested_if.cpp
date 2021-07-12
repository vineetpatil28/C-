#include<iostream>
using namespace std;

int main() {
    int x,y;
    cin>>x>>y;

    if( x == y) {
        cout<<"both the numbers are equal.";
    }
    else {
        if (x > y) {
            cout<<"X in greater than Y";
        }
        else {
            cout<<"Y is Grater than X";
        }
    }

    return 0;
}