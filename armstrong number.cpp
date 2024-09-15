string armstrongNumber(int n) {
    int a = 0, temp = n;
    
    
    while(temp != 0) {
        int d = temp % 10;
        a += d * d * d;
        temp /= 10;
    }
    
    
    if(a == n) {
        return "true";  
    } else {
        return "false"; 
    }
    }
