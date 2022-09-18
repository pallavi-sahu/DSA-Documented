#include<bits/stdc++.h>
#include<algorithm>
#include<string>
#include<stack>
#include<algorithm>
using namespace std;

stack<char> stk;
bool balancedbracket(string s){
     for(int i=0; i<s.size(); i++){
        if(stk.empty())
        stk.push(s[i]);
        else{
            if(stk.top()=='('&&s[i]==')' || stk.top()=='{'&&s[i]=='}' || stk.top()=='['&&s[i]==']') stk.pop();
            else stk.push(s[i]);
        }
     }
    
    
    if(stk.empty()) return true; 
    else return false;
}


int main(){
    balancedbracket("((())");
    if(stk.empty()) cout<<"true"; 
    else cout<< "false";
    return 0;
}