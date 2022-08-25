#include <iostream>
using namespace std;


int decimalToBinary(int n){
    int ans=0;
    int x=1;

    while(x<=n){
        x= x*2;
    }
    x/=2;
    while(x>0){
        int l = n/x;
        n = n - l*x;
        x/=2; 
        ans = ans*10 +l;
    }
    return ans;

}

int main() {

    int n;
    cin>>n;

    cout<<decimalToBinary(n)<<endl;
    return 0;
}