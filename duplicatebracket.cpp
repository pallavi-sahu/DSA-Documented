#include<bits/stdc++.h>
#include<algorithm>
#include<string>
#include<stack>
using namespace std;

stack<char> stk;
bool duplicatebracket(string s){
     for(int i=0; i<s.size(); i++){
        if(s[i]==')'){
             if(stk.top()=='(') return true;
             else {
                while(stk.top()!='(') 
                     stk.pop();
            }
            stk.pop();
        }
        else stk.push(s[i]);
     }
     return false;
}

 int main(){
     duplicatebracket("((a+b)+(c+d))");
     return 0;

 }