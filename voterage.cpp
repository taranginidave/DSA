#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"enter age :";
    cin >> age;
    if(age>=18){
        cout<<"you can vote\n"<<endl;
    }
    else{
        cout<<"you can't vote\n"<<endl;
    }
    return 0;
}