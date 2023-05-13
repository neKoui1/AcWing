package main

import "fmt"

func Max(i, j int) int {
	if i > j {
		return i
	}
	return j
}

func main() {
	n := 0
	ans := 1
	fmt.Scanf("%d", &n)
	nums := make([]int, n)
	dp := make([]int, n)
	for i := 0; i < n; i++ {
		fmt.Scan(&nums[i])
		dp[i] = 1
	}
	for i := 1; i < n; i++ {
		for j := 0; j < i; j++ {
			if nums[j] < nums[i] {
				dp[i] = Max(dp[j]+1, dp[i])
				ans = Max(dp[i], ans)
			}
		}
	}
	fmt.Println(ans)
}
