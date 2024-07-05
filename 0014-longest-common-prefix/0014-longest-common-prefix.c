char* longestCommonPrefix(char** strs, int strsSize) {
    int len = strlen(strs[0]);
    static char res[200] = "";
    strcpy(res, strs[0]);

    if(strsSize == 1)
        return res;
    
    for (int i = 0; i < len; i++) {
        for (int j = 1; j < strsSize; j++) {
            if (strs[j][i] != res[i]) {
                res[i] = '\0';
                break;
            }
        }
        if(res[i] == '\0')
            break;
    }
    return res;
}