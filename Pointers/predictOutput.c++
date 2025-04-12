#include<iostream>
using namespace std;

int main() {
    int a=5;
    int *p=&a;
    int **q=&p;
    
    cout<<p<<endl; // -> 0x61ff08
    cout<<q<<endl; // -> 0x61ff04
    cout<<*q<<endl; // -> *0x61ff04 -> 0x61ff08
    cout<<*p<<endl; // -> *0x61ff08 -> 5
    cout<<**q<<endl;// -> **0x61ff04 -> *0x61ff08 -> 5

}
  