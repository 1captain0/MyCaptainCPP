#include<iostream>
using namespace std;

bool isPrime(int n){
    for(int i=2;i<n;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}


void primeSum(int n){
    bool flag = 0;
    for(int i=2,j=n-2;i<=j;i++,j--){
        if(isPrime(i)&&isPrime(j)){
            if(i+j==n){
                cout<<n<<" = "<<i<<" + "<<j<<endl;
                flag = 1;
            }
        }
    }
    if(flag==0){
        cout<<"Number cannot be expressed as sum of two primes";
    }
}


int main(){
    int n;
    cin>>n;
    primeSum(n);
}