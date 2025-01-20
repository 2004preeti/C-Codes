int countDigits(int n){
	int res = 0;
	int m = n;

        while (n>0) {
			int digit = n%10;
			if(digit!=0 && m%digit==0){
				res++;
			}
			n/=10;
        }
        return res;

}
