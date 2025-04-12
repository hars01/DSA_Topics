#include <iostream>
using namespace std;
 
int main() {
    int n[] = {5,15,22,1,-15,24};
    int size=6;

    int smallest = 1000; //INT_MAX;

    for(int i=0; i<size; i++) {
        if(n[i]<smallest) {
            smallest = n[i];
        }
    }

    cout << "smallest = " << smallest << endl;
    return 0;
}