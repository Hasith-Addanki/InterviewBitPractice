vector<int> Solution::maxset(vector<int> &A) {
    int n = A.size();
    vector<int> Ans;
    
    int l_m=-1, r_m=-1;
    long ans_m = -1;
    long sum = 0;
    int l=0, r=0;
    for(int i=0;i<n;i++){
        if(A[i]<0){
            sum = 0;
            l = i+1;
        }
        else{
            sum += A[i];
            if(ans_m<0){
                ans_m = sum;
                l_m = i;
                r_m = i;
            }
            else if(ans_m==sum){
                if((r_m-l_m)<(r-l)){
                    r_m = r;
                    l_m = l;
                }
            }
            else if(ans_m<sum){
                ans_m = sum;
                l_m = l;
                r_m = r;
            }
        }
        r = i+1;
    }

    if(l_m>-1 && r_m>-1){
        for(int i=l_m;i<=r_m;i++)   Ans.push_back(A[i]);
    }
    return Ans;
}
