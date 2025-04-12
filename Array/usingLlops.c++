#include <iostream>
using namespace std;

int main() {
    int m[5]={10,40,50,30,20};
    int size= sizeof(m)/sizeof(int);
    m[0]=100; //Yaha Value Update bhi hogi

    for(int i=0; i<size; i++)
    {
        cout<< m[i] << endl;

    }



}