void insertAtBottom(stack<int> &s, int element) {
    if (s.empty()) {
        s.push(element);  
        return;
    }
    
    int num = s.top();  
    s.pop();  
    
    
    insertAtBottom(s, element);
    s.push(num);
}


void reverseStack(stack<int> &s) {
    if (s.empty()) {
        return;  
    }
    
    int num = s.top();  
    s.pop();  
   
    reverseStack(s);

    insertAtBottom(s, num);
}
