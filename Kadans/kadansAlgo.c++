#include <iostream>
#include <vector>
using namespace std;


// Maximum Subarray Sum Using Kadans Algorithm

int main() {
    int n=5;
    int arr[5] = {1,2,3,4,5};

    int cSum=0;
    int maximum=-1000; //(INT_MIN)
    for(int i=0; i<n; i++)
    {
           cSum += arr[i];
           maximum = max(cSum, maximum);
           if(cSum<0)
           cSum=0;
    }
        cout<<"max subarray sum = "<<maximum<<endl;
        return 0;
}
