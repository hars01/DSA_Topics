#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> vec = {1,2,3};
    cout<<vec[0];

    vector<int> ve(5,0);
    cout<<ve[0];
    cout<<ve[1];
    cout<<ve[2];
    cout<<ve[3];
    cout<<ve[4];
    cout<<endl;

    // Use of for each loop
    vector<char> v = {'h', 'i', 'h', 'a', 'r', 's', 'h'};

    for(char val : v) {
        cout<<val;
    }

}