#include <iostream>
using namespace std;

int Lsearch(int a[], int sz, int t)
{
    for(int i=0; i<sz; i++) {
        if(a[i]==t){
            return i;
        }
    }
    return -1;
}

int main() {
    int arr[] = {4,5,8,2,4,1,0,5};
    int a = Lsearch(arr, 8, 0);
    int b = Lsearch(arr, 8, 4);
    cout<<"index = "<<a<<endl;
    cout<<"index = "<<b;

}