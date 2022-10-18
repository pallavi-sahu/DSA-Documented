#include<bits/stdc++.h>
using namespace std;

vector<int> vec;
stack<int> stk;
vector<int> stockspan(vector<int> v){
     stk.push(0);
     vec.push_back(1);

     for(int i=1; i<v.size(); i++){
        while(stk.size()>0 && v[i]>v[stk.top()]){
            stk.pop();
        }

        if(stk.empty()){
            vec.push_back(i+1);
        }
        else vec.push_back(i-stk.top()); 


     stk.push(i);
     }
       return vec;

     }

int main(){
    vector<int> v = {2,5,9,3,1,12,6,8,7};
    stockspan(v);
    for(int i=0; i<vec.size(); i++){
        cout << vec[i] << endl;
    }
    return 0;
}
