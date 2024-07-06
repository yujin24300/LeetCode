int lengthOfLastWord(char* s) {
    int cnt = 0;

    for(int i = strlen(s) - 1; i >= 0; i--){
        if(cnt != 0 && s[i] == ' ')
            break;
        if(s[i] != ' ')
            cnt++;
    }

    return cnt;
}