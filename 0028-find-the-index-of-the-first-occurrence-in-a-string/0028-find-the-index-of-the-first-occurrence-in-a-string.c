int strStr(char* haystack, char* needle) {
    int n = strlen(needle);
    int idx = -1;
    char* p = haystack;

    for(int i = 0; i < strlen(haystack); i++){
        if(strncmp(p+i, needle, n) == 0){
            idx = i;
            break;
        }
    }

    return idx;
}