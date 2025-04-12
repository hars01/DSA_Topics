#include <iostream>
#include <vector>
using namespace std;

//Brute Force Approach

vector<int> pairSum(vector<int>arr, int target) {
    vector<int> ans;
    int n=arr.size();
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++) 
        {
            if(arr[i]+arr[j]==target)
            {
                ans.push_back(i);
                ans.push_back(j);
                return ans;
            }
        }
    }
}

//Optimised Way
vector<int> waySum(vector<int>arr, int target) {
    vector<int> ans;
    int n=arr.size();
    int pSum=0;
    int i=0, j=n-1;
    while(i<j){
        pSum=arr[i]+arr[j];
        if(pSum>target)
        j--;
        else if(pSum<target)
        i++;
        else {
            ans.push_back(i);
            ans.push_back(j);
            return ans;
        }
    }
}


int main() {
    vector<int> nums = {2,7,11,15};
    int t=9;
    vector<int> ans = pairSum(nums, t);
    cout<< ans[0] <<", "<<ans[1] << endl;

    vector<int> res = waySum(nums, t);
    cout<< res[0] <<", "<<res[1] << endl;
    return 0;
}