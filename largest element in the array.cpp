#include <bits/stdc++.h> 
int largestElement(vector<int> &arr, int n) {
    int res = 0;
    for(int i=1;i<n;i++){
        if(arr[i]>res){
            res = arr[i];
        }
    }
    return res;
}
