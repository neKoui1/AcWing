package main

import "fmt"

func LeftBorder(nums []int, target int) int {
	left, right := 0, len(nums)-1
	for left < right {
		mid := left + ((right - left) >> 1)
		if nums[mid] >= target {
			right = mid
		} else {
			left = mid + 1
		}
	}
	if nums[left] == target {
		return left
	} else {
		return -1
	}
}

func RightBorder(nums []int, target int) int {
	left, right := 0, len(nums)-1
	for left < right {
		mid := left + ((right - left) >> 1) + 1
		if nums[mid] <= target {
			left = mid
		} else {
			right = mid - 1
		}
	}
	if nums[right] == target {
		return right
	} else {
		return -1
	}
}

func main() {
	n, q, k := 0, 0, 0
	fmt.Scanf("%d%d", &n, &q)
	nums := make([]int, 0)
	for i := 0; i < n; i++ {
		x := 0
		fmt.Scan(&x)
		nums = append(nums, x)
	}
	for q != 0 {
		q--
		fmt.Scanf("%d", &k)
		fmt.Printf("%d %d\n", LeftBorder(nums, k), RightBorder(nums, k))
	}
}
