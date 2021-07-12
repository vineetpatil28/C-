#include<iostream>
using namespace std;

int main() {
    int n1,n2;
    cout<<"Input 2 numbers: ";
    cin >> n1 >> n2;

    char op;
    cout<<"input an oprater";
    cin >> op;

    switch (op)
    {
    case '+':
        cout<< n1 + n2 << endl;
        break;
    case '-':
        cout<< n1 - n2 << endl;
        break;
    case '*':
        cout<< n1 * n2 << endl;
        break;
    case '/':
        cout<< n1 / n2 << endl;
        break;
    default:
        cout<<"Enter another oprator" << endl;
        break;
    } 
    return 0;
}