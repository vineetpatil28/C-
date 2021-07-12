#include<iostream>
using namespace std;

int main() {
    int x,y;
    cin>>x>>y;

    if( x == y) {
        cout<<"both the numbers are equal.";
    }
    else if (x > y) {
        cout<<"X is greater than Y.";
    }
    else {
        cout<<"Y is greater than X.";
    }

    return 0;
}