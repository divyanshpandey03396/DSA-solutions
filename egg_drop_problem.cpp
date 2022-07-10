int eggDrop(int n, int k){
    int dp[n+1] = {0}, m;
    for(m=0; dp[n] < k; m++){
        for(int x = n; x > 0; x--){
            dp[x] += dp[x-1] + 1;
        }
    }
    return m;
}