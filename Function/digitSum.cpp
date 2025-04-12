#include <iostream>
using namespace std;

int digitSum(int n){
    int ds=0;
    int num=0;
    while(n>0) {
        int num=n%10;
        n/=10;
        ds+=num;
    }
    return ds;
}

int main() {
    cout<<digitSum(134)<<endl;
}