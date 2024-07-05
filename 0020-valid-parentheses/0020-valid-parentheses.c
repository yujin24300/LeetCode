bool isValid(char* s) {
    char stack[10000];
    int top = -1;
    
    for(int i = 0; i < strlen(s); i++){
        if(s[i] == '(' || s[i] == '{' || s[i] == '[')
            stack[++top] = s[i];
        else{
            if(top == -1)
                return false;

            if((s[i] == ')' && stack[top--] != '(') || (s[i] == '}' && stack[top--] != '{') || (s[i] == ']' && stack[top--] != '['))
                    return false;
        }
    }
    if(top > -1)
        return false;
    return true;
}