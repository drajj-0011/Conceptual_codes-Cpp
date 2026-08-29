#include<iostream>
using namespace std;
int main(){
string s;
cin>>s;
int current=1;
int maximum=1;
for(int i=1;i<s.length();i++){
    if(s[i]==s[i-1]){
        current=current+1;

    }else{
        current=1;

    }
    if(current>maximum){
        maximum=current;
    }
}
cout<<maximum;
return 0;
}
