/*
 * Complete the 'getWays' function below.
 *
 * The function is expected to return a LONG_INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER n
 *  2. LONG_INTEGER_ARRAY c
 */

long long Get(int target, int index, vector<long>c, vector<vector<long long>>& dp){
    if(index ==0) return target % c[0] == 0;
    if(dp[index][target]!=0) return dp[index][target];
    
    long long take = 0;
    long long noTake= Get(target,index-1,c,dp);
    
    if(c[index] <= target){
        take = Get(target - c[index] , index , c, dp);
    }
    
    
    return dp[index][target] = take + noTake;
    
}

long getWays(int n, vector<long> c) {
    int size = c.size();
    vector<vector<long long>> dp(size, vector<long long>(n+1,0));
    return Get(n, size-1,c,dp);
}