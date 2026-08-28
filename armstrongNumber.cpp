/* ARMSTRONG NO OF 3 DIGITS:

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int original=n;
    int sum=0;
    while(n!=0){
        int digit=n%10;
        sum=sum+digit*digit*digit;
        n=n/10;
    }
    if(sum==original){
        cout<<"Armstrong Number";
    }else{
        cout<<"Not a Armstrong Number";
    }
}
    */

    //ARMSTRONG OF N DIGITS:

    #include<bits/stdc++.h>
    using namespace std;
    int main(){
        int n;
        cin>>n;
    int original=n;
    int count =0;
    int x=n;
    while(x!=0){
        count++;
        x=x/10;
    }
    int sum=0;
    int digit;
    n=original;
    while(n!=0){
        digit=n%10;
        sum=sum+pow(digit,count);
        n=n/10;
    }
    if(sum==original){
        cout<<"Armstrong Number";

    }else{
        cout<<"Not an Armstrong Number";
    }
    return 0;
}