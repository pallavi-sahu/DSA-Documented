#include<bits/stdc++.h>
#include<algorithm>
#include<string>
#include<stack>
using namespace std;

stack<string> stk;
bool balancedbracket(string s){
     for(int i=0; i<s.size(); i++){
        if(stk==empty())
        stk.push(s[i]);
        else{
            if(stk.top()=='('&&s[i]==')' || stk.top()=='{'&&s[i]=='}' || stk.top()=='['&&s[i]==']') stk.pop();
            else stk.push(s[i]);
        }
     }

    if(stk==empty()) return true;
    else return false;


}

int main(){
    balancedbracket("((a+b)+(c+d))");
    return 0;
}