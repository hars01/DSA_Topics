#include<iostream>
using namespace std;

int main() {
    int a=5;
    cout<<&a<<endl;
    int *b=&a;
    cout<<*b<<endl;
    cout<<&b<<endl;
    cout<<b<<endl;
    int **c=&b;
    cout<<c<<endl;
    cout<<&c<<endl;
    cout<<**c<<endl;

}
  