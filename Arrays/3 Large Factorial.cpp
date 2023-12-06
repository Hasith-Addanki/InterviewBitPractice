string Solution::solve(int A) {
    int res[500];
    res[0] = 1;
    int rSize = 1;

    for(int i=2;i<=A;i++)
        rSize = multiply(i, res, rSize);
    string ans = "";
    for(int i=0;i<rSize;i++)
        ans = (res[i]+'0') + ans;

    return ans;
}

int multiply(int val, int res[], int rSize){
    int carry = 0;
    int prod = 0;
    for(int i = 0;i<rSize;i++){
        prod = val*res[i] + carry;
        res[i] = prod%10;
        carry = prod/10;
    }

    while(carry){
        res[rSize] = carry%10;
        carry /= 10;
        rSize++;
    }

    return rSize;
}

// 6!
// res     1
// rsize   1
// *2      2
// *3      6
// *4      4   2   rsize -2
// *5      0   2   1   rsize -3
// *6      0   2   7   rsize -3