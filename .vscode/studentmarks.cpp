#include<iostream>
using namespace std;
int main(){
    int marks;
    cout<<"enter marks :";
    cin >> marks;
    if(marks>=90){
        cout<<"A\n"<<endl;
    }
    else if (marks>=80 && marks<90){
        cout<<"B\n"<<endl;
        }
    else{
        cout<<"C\n"<<endl;}
    return 0;
}