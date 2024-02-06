def catalan(n, dp):
    if dp[n] != -1:
        return dp[n]

    if n <= 1:
        dp[n] = 1
        return dp[n]

    res = 0
    for i in range(n):
        res += catalan(i, dp) * catalan(n-i-1, dp)

    dp[n] = res
    return dp[n]


t = int(input())

for _ in range(t):
    n = int(input())

    dp = [-1] * (n+1)

    print(catalan(n, dp))
