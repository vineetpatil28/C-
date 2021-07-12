#include<iostream> //Header file for taking input and printing output
using namespace std;
//main = execution of code begins form main function
int main() {
    int a;
    a = 12;

    cout << "size of int "<< sizeof(a)<<endl;

    float b;
    cout<<"size of float "<<sizeof(b)<<endl;

    char c;
    cout <<"size of char "<<sizeof(c)<<endl;

    bool d;
    cout <<"size of bool "<<sizeof(d)<<endl;
    
    short int si;
    long int li;
    cout <<"size of shortint "<<sizeof(si)<<endl;
    cout <<"size of longint "<<sizeof(li)<<endl;
//return0 is used Exit status of a function 
    return 0; 
}