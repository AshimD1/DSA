#include <iostream>
using namespace std;

int reverse(int n){
    int ans =0;
    while(n>0){
        int ld=n%10;
        ans = ans*10 +ld;
        n = n/10;
    }
    return ans;
}

int addBinary(int a,int b){
    int ans=0;
    int pc = 0;

    while(a>0 && b>0){
       if(a%2==0 && b%2==0){
          ans = ans*10 + pc;
          pc =0; 
       }
       else if((a%2==0 && b%2==1) || (a%2==1 && b%2==0)){
           if (pc ==1){
               ans = ans *10 +0;
               pc = 1;
           }
           else{
               ans = ans*10 +1;
               pc=0;
           }
       }
       else{
           ans = ans*10 +pc;
           pc=1;
       }
       a =a/10;
       b= b/10;
  
    }
    while(a>0){
        if(pc==1){
            if(a%2==0){
            ans = ans*10 +0;
            pc = 1;
            }
        else{
            ans = ans*10 + 1;
            pc = 0;
            }
        }
        else{
            ans = ans*10 +(a%2);
            a =a/10;
        }
    }
    while(b>0){
        if(pc==1){
            if(b%2==0){
            ans = ans*10 +0;
            pc = 1;
            }
        else{
            ans = ans*10 + 1;
            pc = 0;
            }
        }
        else{
            ans = ans*10 +(a%2);
            b =b/10;
        }
    }
    if(pc==1){
        ans = ans*10 +1;
    }
    ans = reverse(ans);
    return ans;

}

int main() {

    int a,b;
    cin>>a>>b;

    cout<<addBinary(a,b)<<endl;
    return 0;
}