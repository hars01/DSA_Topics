#include<iostream>
#include<vector>
using namespace std;

int main() {
    int a=20;
    int *p=&a;

    cout << p << endl;
    p++;
    cout << p << endl; //heaxdecimal form me changes hoga +4 ka
    p=p+2;
    cout << p << endl;
    
    int * p2;  //100
    int * p1 = p2 +2;  //108
    cout<<p1-p2<<endl;

    cout<<p1<<endl;
    cout<<p2<<endl;
    cout<<(p1<p2)<<endl;
    cout<<(p1>p2)<<endl;

}  