#include<bits/stdc++.h>
using namespace std;

int area(int array[],int n){
     vector<int> lb;
     vector<int> rb;

vector<int> lb(int array[]){
	stack<int> stk;
	stk.push(0);
	lb.push_back(-1);
	for(int i=1; i<array.size(); i++){
	   while(array[i]<array[stk.top()]){
                 stk.pop();
 	        }
	if(stk.empty()) lb.push_back(-1);
        else lb.push_back(stk.top());
       }
      return lb;
}
vector<int> rb(int array[]){
         stack<int>stk;
         stk.push(array.size()-1)
         rb.push_back(-1);
	for(int i=array.size()-2; i<=0; i--){
             while(array[i]<array[stk.top()]){
	    stk.pop(); 
            }
          if(stk.empty()) rb.push_back(-1);
	  else rb.push_back(stk.top());
	}
       return rb;
}

 int maxarea = 0;
     for(int i=0; i<n; i++){
	int width = rb[i]-lb[i]-1;
        int area = width*array[i];
	 if(area>maxarea){
           maxarea = area;
         }
}
   return maxarea;
}
int main(){
    int arr[7] = {6, 2, 5, 4, 5, 1, 6};
    area(arr,7);
    cout << area;
    return 0;
}
 
