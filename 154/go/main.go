package main

import (
	"fmt"
)

func getMinNum(nums []int) int {
	min := 9223372036854775807
	for _, v := range nums {
		if v < min {
			min = v
		}
	}
	return min
}

func getMaxNum(nums []int) int {
	max := -9223372036854775808
	for _, v := range nums {
		if v > max {
			max = v
		}
	}
	return max
}

func print(nums []int) {
	for _, v := range nums {
		fmt.Printf("%d ", v)
	}
	fmt.Println()
}

func main() {
	n, k := 0, 0
	fmt.Scan(&n, &k)
	nums := make([]int, 0)
	queue := make([]int, 0)
	min := make([]int, 0)
	max := make([]int, 0)
	for i := 0; i < n; i++ {
		x := 0
		fmt.Scan(&x)
		nums = append(nums, x)
		if i < k {
			queue = append(queue, x)
		}
	}
	for i := 0; i < n-k; i++ {
		min = append(min, getMinNum(queue))
		max = append(max, getMaxNum(queue))
		queue = queue[1:]
		queue = append(queue, nums[i+k])
	}
	min = append(min, getMinNum(queue))
	max = append(max, getMaxNum(queue))
	print(min)
	print(max)
}
