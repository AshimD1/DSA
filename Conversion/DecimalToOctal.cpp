#include <iostream>
using namespace std;


int decimalToOctal(int n){
    int ans=0;
    int x=1;

    while(x<=n){
        x= x*8;
    }
    x/=8;
    while(x>0){
        int l = n/x;
        n = n - l*x;
        x/=8; 
        ans = ans*10 +l;
    }
    return ans;

}

int main() {

    int n;
    cin>>n;

    cout<<decimalToOctal(n)<<endl;
    return 0;
}