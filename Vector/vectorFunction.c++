#include <iostream>
#include <vector>
using namespace std;

int main() {
    
    vector<char> v = {'h', 'i', 'h', 'a', 'r', 's', 'h'};
    vector<int> vec;
    //Size Function 
    cout<<"Size = "<<v.size()<<endl;

    //PushBack Function
    cout<<"Size Before Push = "<<vec.size()<<endl;
    vec.push_back(10);
    cout<<"Size After Push = "<<vec.size()<<endl;

    //PopBack Function
    vec.push_back(30);
    vec.push_back(70);
    vec.push_back(20);
    cout<<"Size Before Pop = "<<vec.size()<<endl;
    vec.pop_back();
    cout<<"Size After Pop = "<<vec.size()<<endl;
    
    //Front and Back Function
    cout<<"Front Value = "<<vec.front()<<endl;
    cout<<"Back Value = "<<vec.back()<<endl;

    //At Function
    cout<<"Vector At Value = "<<vec.at(1)<<endl;

    //Size VS Capacity
    cout<<"Vector Size = "<<vec.size()<<endl;
    cout<<"Vector Capacity = "<<vec.capacity()<<endl;
    vec.push_back(90);
    vec.push_back(50);
    cout<<"Vector After Push Size = "<<vec.size()<<endl;
    cout<<"Vector After Push Capacity = "<<vec.capacity()<<endl;
}