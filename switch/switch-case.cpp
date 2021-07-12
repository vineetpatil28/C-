#include<iostream>
using namespace std;

int main() {
    char button;
    cout<<"input a character: ";
    cin>>button;

    switch(button)
    {
    case 'a':
        cout<<"hello"<<endl;
        break;
    case 'b':
        cout<<"Namaste"<<endl;
        break;
    case 'c':
        cout<<"salut"<<endl;
        break;
    case 'd':
        cout<<"Hola"<<endl;
    case 'e':
        cout<<"ciao"<<endl;
        break; 
    default:
        cout<<"I am still learing more!"<<endl; 
    }
    return 0;
}