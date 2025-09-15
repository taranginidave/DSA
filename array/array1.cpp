#include<iostream>
#include<climits>
using namespace std;

int main(){
    int num[] = {1,24,-6,5};
    int n=4;
    int smallest = INT_MAX;

    for(int i=0; i<n; i++){
      if(num[i]< smallest){
        smallest = num[i];
    }
}
cout<<"Smallest element is"<<smallest;
}

