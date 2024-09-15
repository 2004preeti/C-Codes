int primeSum(int N) {
    int m, sum = 0;
     while (N > 0) {
        m = N % 10;  
        
        if (m == 2 || m == 3 || m == 5 || m == 7) {
            sum += m; 
        }
        N /= 10;  
    }
    
    return sum;  
}
