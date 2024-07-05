bool isPalindrome(int x) {
    unsigned int y = 0;
    int tmp = x;
    while(tmp > 0){
        y = (y*10) + (tmp%10);
        tmp /= 10;
    }
    return (x == y);
}