#include <iostream>
using namespace std;

int sum(int a, int b){
    int c=a+b;
    return c;
}

int main() {
    int a=sum(6,8);
    cout<<a;
}