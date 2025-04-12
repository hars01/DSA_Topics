#include <iostream>
using namespace std;

void changeArr(int a[], int size) {
    cout<<"in function\n";
    for(int i=0; i<size; i++)
    {
        a[i]=2*a[i];
    }
}

int main() {
    int a[]={1,2,3};
    changeArr(a, 3);

    cout<<"in main\n";
    for(int i=0; i<3; i++) {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return 0;
}