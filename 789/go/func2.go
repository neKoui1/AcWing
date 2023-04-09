package main

import "fmt"

func BinarySearch(nums []int, target int, isLeft bool) (res int) {
	left, right := 0, len(nums)-1
	res = -1
	for left <= right {
		mid := (left + right) >> 1
		if nums[mid] > target {
			right = mid - 1
		} else if nums[mid] < target {
			left = mid + 1
		} else {
			res = mid
			if isLeft {
				right = mid - 1
			} else {
				left = mid + 1
			}
		}
	}
	return
}

func main() {
	n, q, k := 0, 0, 0
	fmt.Scanf("%d%d", &n, &q)
	nums := make([]int, 0)
	for i := 0; i < n; i++ {
		x := 0
		fmt.Scanf("%d", &x)
		nums = append(nums, x)
	}
	for q != 0 {
		q--
		fmt.Scanf("%d", &k)
		fmt.Printf("%d %d\n", BinarySearch(nums, k, true), BinarySearch(nums, k, false))
	}
}
