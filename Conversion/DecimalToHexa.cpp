#include <iostream>
#include<bits/stdc++.h>
using namespace std;


string decimalToHexa(int n){
    string ans="";
    int x=1;

    while(x<=n){
        x= x*16;
    }
    x/=16;
    while(x>0){
        int l = n/x;
        n = n - l*x;
        x/=16; 
        if(l<=9){
            ans = ans + to+string(l);
        }
        else{
            char c ='A' + l -10;
            ans.pushback(c);
        }
    }
    return ans;

}

int main() {

    int n;
    cin>>n;

    cout<<decimalToHexa(n)<<endl;
    return 0;
}