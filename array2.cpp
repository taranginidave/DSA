// /largest element

#include<iostream>
#include<climits>
 using namespace std;
 int main(){
    int num[]={34,100,78,-5};
    int n=4;
    int largest= INT_MIN;
    for(int i=0;i<n;i++){
        if(num[i]>largest){
        largest = num[i];
    }
}
cout<<"largest element is"<<largest;
}

