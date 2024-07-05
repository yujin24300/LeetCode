int romanToInt(char* s) {
    int len = strlen(s);
    int res = 0;

    for(int i = 0; i < len; i++){
        if(s[i] == 'I'){
            if(s[i+1] == 'V' || s[i+1] == 'X')
                res -= 1;
            else
                res += 1;
        }
        else if(s[i] == 'V')
            res += 5;
        else if(s[i] == 'X'){
            if(s[i+1] == 'L' || s[i+1] == 'C')
                res -= 10;
            else
                res += 10;
        }
        else if(s[i] == 'L')
            res += 50;
        else if(s[i] == 'C'){
            if(s[i+1] == 'D' || s[i+1] == 'M')
                res -= 100;
            else
                res += 100;
        }
        else if(s[i] == 'D')
            res += 500;
        else if(s[i] == 'M')
            res += 1000;
    }

    return res;
}