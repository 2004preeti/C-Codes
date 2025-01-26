#include <bits/stdc++.h> 
int findSecondLargest(int n, vector<int> &arr)
{    
    sort(arr.begin(),arr.end());  
     int temp = arr[n-1];
     int ind = n-1;
     for(int i=ind-1;i>=0;i--){
         if (arr[i] < temp) {
             temp = arr[i];
              break;
              }

    }

    if (temp != arr[n - 1]) {
        return temp;

    }

    else{
        return -1;

    }

}
