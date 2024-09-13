#include <bits/stdc++.h> 
int pairSum(vector<int> &arr, int n, int target){
	 int ans=0;
	for(int i=0;i<arr.size();i++){
		for(int j=i+1;j<arr.size();j++){
                  if (arr[i] + arr[j] == target) {
                    ans++;
                  }
                }
        }
                if(ans==0)
		{
			return -1;
		}
		else
		return ans;
	
	// Write your code here.
}
