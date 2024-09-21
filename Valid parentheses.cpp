bool isValidParenthesis(string ex)

{
    stack<char>s;
    for(int i=0;i<ex.length();i++){
        char ch = ex[i];

        if (ch=='(' || ch=='{' || ch=='[') {
          s.push(ch);
        }
    
    else{
          if (s.empty()) {
            return false;
          }
          char top=s.top();
          if ((ch == '}' && top == '{')||
          (ch == ']' && top == '[')||
          (ch == ')' && top == '(')
          ) {
            s.pop();
          } else {
            return false;
          }

        } 
    

    
    }
    return s.empty();
}
