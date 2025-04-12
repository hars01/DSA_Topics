#include <iostream>
#include <vector>
using namespace std;


// Maximum Subarray Sum Using Brute Force

int main() {
    int n=5;
    int arr[5] = {1,2,3,4,5};
    
    int maximum=-1000; //(INT_MIN)
    for(int st=0; st<n; st++)
    {        int cSum=0;
        for(int end=st; end<n; end++)
        {
           cSum += arr[end];
           maximum = max(cSum, maximum);
        }
        cout<<"max subarray sum = "<<maximum<<endl;
        return 0;
    }
}
