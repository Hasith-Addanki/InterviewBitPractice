// int Solution::solve(vector<int> &A, int B) {
//     int max_sum = 0;
//     int n = A.size();
//     int sum = 0;
//     for(int i=0;i<n+B-1;i++){
//         if(i<B){
//             sum += A[i];
//             max_sum = sum;
//         }
//         else{
//             sum += A[i%n] - A[(i-B)];
//             max_sum = max(max_sum, sum);
//         }
//     }
//     return max_sum;
// }
/*
5 -2 3 1 2
3 
loop till 5+3-1
once box filled
5
5, -2 :3
5, -2, 3 : 6 -> max = 6     i=2
-2, 3, 1 : 2 -> max = 6     i=3
3, 1, 2  : 6 -> max = 6     i=4
1, 2, 5  : 8 -> max = 8     i=5     5-3=2
2, 5, -2 : 5 -> max = 5     i=6     6-3=3
*/

/*
        WRONG WRONG
        ONLY FROM THE ENDS

        4,3
        i = n-(B-1)
*/

int Solution::solve(vector<int> &A, int B) {
    int max_sum = 0;
    int n = A.size();
    int sum = 0;
    for(int i=0;i<B;i++){
        sum += A[i];
    }
    max_sum = sum;
    for(i = B-1;i>=0;i--){
        sum += A[i+n-B] - A[i];
        max_sum = max_sum>sum ? max_sum:sum;
    }
    return max_sum;
}

















