#include<iostream>
using namespace std;
class palindrome{
    public:
bool palindromeNum(int x){
while(x<0){
    return false;
}
int original=x;
long long reversed=0;
while(x>0){
    int digit=x%10;
    reversed=reversed*10+digit;
    x=x/10;
}
return original==reversed;
}

};
int main(){
    palindrome p;
    cout<<boolalpha<<p.palindromeNum(121);
    return 0;
}
