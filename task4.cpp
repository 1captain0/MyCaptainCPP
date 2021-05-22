#include<iostream>
using namespace std;

int main(){
    int a[5];
    cout<<"Enter elements : ";
    for(int i=0;i<5;i++){
        cin>>a[i];
    }
    int *p = a;
    cout<<"You entered : ";
    for(int i=0;i<5;i++,p++){
        cout<<" "<<*p;
    }
}