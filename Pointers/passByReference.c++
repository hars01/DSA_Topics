#include<iostream>
using namespace std;

void changeA(int a) { //pass by value
    a=20;
}

void changePtr(int *a) { //pass by reference using Pointers
    *a=20;
} 

void changeByAlias(int &b) { //pass by reference using Alias
    b=20;
}

int main() {
    int a=10;

    cout<<"Without Function : "<<a<<endl;
    changeA(a);
    cout<<"Call by value : "<<a<<endl;
    changePtr(&a);
    cout<<"Call by reference using Pointers : "<<a<<endl;
    changeByAlias(a);
    cout<<"Call by reference using Alias : "<<a<<endl;

}