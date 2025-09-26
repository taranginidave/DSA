// second largest element
#include<iostream>
#include<climits>
using namespace std;
int main(){
    int num[] = {1, 2, 3, 4};
    int n=4;
    int largest=INT_MIN;
    int sec_largest = INT_MIN;
    
    for (int i = 0; i < n; i++) {
        if (num[i] > largest) {
            sec_largest = largest;
            largest = num[i];
        }
        // else(){

        // }
}
cout<<"secondlargest element is"<<sec_largest;
}
