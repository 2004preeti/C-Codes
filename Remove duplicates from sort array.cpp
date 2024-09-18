int removeDuplicates(vector<int> &arr, int n) {
	if(n==0||n==1){
		return n;
	
	}
	int k = 0;
	for(int i=0;i<n;i++) {
		if(arr[i]!=arr[k]){
			k++;
			arr[k]=arr[i];
		}

	} 
	return k+1;
}
