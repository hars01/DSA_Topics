#include <iostream>
using namespace std;

int main() {
    int m[5]={10,40,50,30,20};
    m[0]=100; //Yaha Value Update bhi hogi

    cout<< sizeof(m) <<endl;
    cout<< sizeof(m)/sizeof(int) <<endl;
    
    cout<< m[0] <<endl;
    cout<< m[1] <<endl;
    cout<< m[2] <<endl;
    cout<< m[3] <<endl;
    cout<< m[4] <<endl;
    
}