#include <iostream>
using namespace std;

void sample(int n){
    n=n*2;
    cout<<n<<endl;
}

int main() {
    int a=5;
    sample(a);
    cout<<a<<endl;
}