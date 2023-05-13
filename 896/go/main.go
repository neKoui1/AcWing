package main

import (
	"fmt"
	"sort"
)

func main() {
	dp := make([]int, 0)
	n := 0
	fmt.Scanf("%d", &n)
	nums := make([]int, n)
	for i := 0; i < n; i++ {
		fmt.Scan(&nums[i])
	}
	for i := 0; i < n; i++ {
		if index := sort.SearchInts(dp, nums[i]); index < len(dp) {
			dp[index] = nums[i]
		} else {
			dp = append(dp, nums[i])
		}
	}
	fmt.Println(len(dp))
}
