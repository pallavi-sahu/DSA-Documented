#include<bits/stdc++.h>
using namespace std;


stack<int> stk;
vector<int> vec;

// brute force
// vector<int> nextgreaterelement(vector<int> V){
//      for(int i=0; i<V.size(); i++){
//         for(int j=i+1; j<V.end(); j++){
//             if(V[j]<V[i]) j++;
//             else if(V[j]>V[i]) vec.push_back(V[j]);
//             else vec.push_back(-1);
//         }
//      }
    
//      return vec;
// }

// using stack


vector<int> nextgreaterelement(vector<int> V){
    int n = V.size();
    vec = vector<int>(n,0);
    stk.push(V[n-1]);
    vec[n-1]=-1;

    for(int i=n-2; i>=0; i--){
       
       while(stk.size()>0 && V[i]>stk.top()){
           stk.pop();
       }
       
       if(stk.empty()){
           vec[i]=-1;
       }
       else vec[i]=stk.top();
       
       
      stk.push(V[i]);
     
    }
      return vec;
}

int main(){

    vector<int> v = {2,5,9,3,1,12,6,8,7};
    nextgreaterelement(v);
    for(int i=0; i<vec.size(); i++){
        cout << vec[i] << endl;
    }
    return 0;

}
