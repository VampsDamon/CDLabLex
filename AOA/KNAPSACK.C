#include <stdio.h>

int max(int a, int b) {
    return (a > b) ? a : b;
}

int knapsack(int W, int wt[], int val[], int n) {
    int dp[100],i,w;
    for ( i = 0; i <= W; i++) dp[i] = 0;

    for ( i = 0; i < n; i++)
	for ( w = W; w >= wt[i]; w--)
	    dp[w] = max(dp[w], val[i] + dp[w - wt[i]]);

    return dp[W];
}

int main() {
    int val[] = {60, 100, 120};
    int wt[] = {10, 20, 30};
    int W = 50;
    int n = sizeof(val) / sizeof(val[0]);

    int result = knapsack(W, wt, val, n);
    printf("Maximum value: %d\n", result);
    //  getch();
    return 0;
}