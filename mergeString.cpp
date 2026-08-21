#include<iostream>
using namespace std;
string mergeAlternatively(string word1,string word2){
    string result="";
    int i=0;
    while(i<word1.length() || i<word2.length()){
        if(i<word1.length()){
            result +=word1[i];
        }
        if(i<word2.length()){
            result +=word2[i];
        }
        return result;
    }
} 
int main(){
    string word1,word2;
    cin>>word1>>word2;
    cout<<mergeAlternatively(word1,word2);
    return 0;
}