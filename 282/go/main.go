package main

import "fmt"

func Min(i, j int) int {
	if i < j {
		return i
	}
	return j
}

func main() {
	n := 0
	fmt.Scanf("%d", &n)
	nums := make([]int, n+1)
	for i := 1; i < n+1; i++ {
		fmt.Scan(&nums[i])
		nums[i] += nums[i-1]
	}
	dp := make([][]int, n+1)
	for i := range dp {
		dp[i] = make([]int, n+1)
	}
	for i := 1; i < n+1; i++ {
		for j := 1; j < n+1; j++ {
			if i != j {
				dp[i][j] = 0x3f3f3f3f
			} else {
				dp[i][j] = 0
			}
		}
	}
	for l := 2; l <= n; l++ {
		for i := 1; i+l-1 <= n; i++ {
			j := i + l - 1
			for k := i; k < j; k++ {
				dp[i][j] = Min(dp[i][j], dp[i][k]+dp[k+1][j]+nums[j]-nums[i-1])
			}
		}
	}

	fmt.Println(dp[1][n])
}
