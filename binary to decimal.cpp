int binary_to_decimal(string str) {
    int ans = 0;
    int base = 1;  

   
    for (int i = str.size() - 1; i >= 0; i--) {
        if (str[i] == '1') {
            ans += base;  
        }
        base = base * 2;  
    }

    return ans;
