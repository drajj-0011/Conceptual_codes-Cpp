#include<bits/stdc++.h>
using namespace std;
class solution{
    public:
    int climbStair(int n){
        if(n==1){
            return 1;
        }
        int a=1;
        int b=2;
        for(int i=3;i<=n;i++){
            int c=a+b;
            a=b;
            b=c;

        }
        return b;
    }
};
int main(){
    int n;
    cin>>n;
    solution s;
    cout<<s.climbStair(n);
    return 0;
}