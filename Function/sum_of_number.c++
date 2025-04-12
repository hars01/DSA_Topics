#include <iostream>
using namespace std;

int sumN(int n){
    int s=0;
    for(int i=1; i<n; i++)
    {
        s+=i;
    }
    return s;
}

int main() {
    cout<<"Sum of n numbers = "<<sumN(6);
}