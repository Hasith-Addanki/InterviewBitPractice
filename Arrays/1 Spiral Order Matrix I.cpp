vector<int> Solution::spiralOrder(const vector<vector<int> > &A) {
    int row_s = 0;
    int col_s = 0;
    int row_e = A.size()-1;
    int col_e = A[0].size()-1;
    
    vector<int> ans;
    while(row_s<=row_e && col_s<=col_e){
        // right
        for(int i = col_s; i <= col_e; i++){
            ans.push_back(A[row_s][i]);
        }
        row_s++;
        // down
        for(int i = row_s; i<= row_e; i++){
            ans.push_back(A[i][col_e]);
        }
        col_e--;
        // left
        if(row_s<=row_e){
             for(int i = col_e; i>= col_s; i--){
                ans.push_back(A[row_e][i]);
            }
            row_e--;
        }        
       
        // up
        if(col_s<=col_e){
            for(int i = row_e; i>= row_s; i--){
                ans.push_back(A[i][col_s]);
            }
            col_s++;
        }
        
    }
    return ans;
}
