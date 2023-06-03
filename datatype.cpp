#include <iostream>
using namespace std;

int main() {

    int a; //variable nu declaration
    a = 54; //variable nu initialisation
    
    cout<<"size of int"<<sizeof(a)<<endl;

    float b;
    cout<<"size of float"<<sizeof(b)<<endl;

    char c;
    cout<<"size of char"<<sizeof(c)<<endl;

    bool d;
    cout<<"size of bool"<<sizeof(d)<<endl;

// integer ni size modify karva mate size modifiers vapray chhe. 
//Jema Short int ma 2 byte rokay ane tema limited integer store thay
//long int ma 8 byte rokay ane tema normal int karta double integer store thay
    short int si; 
    long int li;

    cout<<"size of shortint"<<sizeof(si)<<endl;
    cout<<"size of longint"<<sizeof(li)<<endl;

    return 0;
}