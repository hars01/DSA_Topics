#include <iostream>
using namespace std;

int swap(int &a, int &b) {  //Yaha pe hume &a (address format) karke hi bhejna padega kyuki agar kewal a karke bhejeng to yaha value me change toh hoga par dikhega nahi
    int temp=a;
    a=b;
    b=temp;
}

void reverseArray(int a[], int sz) {
           int st=0, end=sz-1;

           while(st<end)
           {
            swap(a[st], a[end]);
            st++;
            end--;
           }
}

int main() {
    int ar[] = {4, 5, 7, 2, 6, 9, 0};
    int sz = 7;

    reverseArray(ar, sz);

    for(int i=0; i<sz; i++)
    {
        cout<<ar[i]<<" ";
    }
    cout<<endl;

}