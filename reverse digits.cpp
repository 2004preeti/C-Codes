public:
		long long int reverse_digit(long long int n)
		{
		    long rev=0;
		    while(n>0)
		    {
		        rev=(rev*10)+n%10;
		        n=n/10;
		        
		    }
		    return rev;
    }
