package main

import "fmt"

const INF = 0x3f3f3f3f

func Max(i, j int) int {
	if i > j {
		return i
	}
	return j
}

func main() {
	var n int
	fmt.Scanf("%d", &n)
	nums := make([][]int, n+1)
	dp := make([][]int, n+1)
	for i := range nums {
		nums[i] = make([]int, n+1)
	}
	for i := range dp {
		dp[i] = make([]int, n+1)
	}
	for i := 1; i <= n; i++ {
		for j := 1; j <= i; j++ {
			fmt.Scan(&nums[i][j])
		}
	}
	for i := 0; i < n+1; i++ {
		for j := 0; j < n+1; j++ {
			dp[i][j] = -INF
		}
	}
	dp[1][1] = nums[1][1]

	for i := 1; i <= n; i++ {
		for j := 1; j <= i; j++ {
			dp[i][j] = Max(dp[i][j], Max(nums[i][j]+dp[i-1][j], nums[i][j]+dp[i-1][j-1]))
		}
	}
	ans := -INF
	for j := 1; j <= n; j++ {
		ans = Max(ans, dp[n][j])
	}
	fmt.Println(ans)
}
