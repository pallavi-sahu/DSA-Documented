#include<bits/stdc++.h>
using namespace std;

int main(){
  vector<int>p(5,-1); 
  int maxm=INT_MIN;
  for(auto i:p){
    maxm = max(maxm,i);
  }
  cout<<maxm<<endl;
}
