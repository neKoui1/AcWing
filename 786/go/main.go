package main

import "fmt"

func QuickSort(a []int, l, r int) {
	if l >= r {
		return
	}
	key, i, j := a[(l+r)>>1], l-1, r+1
	for i < j {
		i++
		for a[i] < key {
			i++
		}
		j--
		for a[j] > key {
			j--
		}
		if i < j {
			a[i], a[j] = a[j], a[i]
		}
	}
	QuickSort(a, l, j)
	QuickSort(a, j+1, r)
}

func main() {
	n, k := 0, 0
	fmt.Scanf("%d", &n)
	fmt.Scanf("%d", &k)
	a := make([]int, 0)
	for i := 0; i < n; i++ {
		x := 0
		fmt.Scan(&x)
		a = append(a, x)
	}
	QuickSort(a, 0, n-1)
	fmt.Println(a[k-1])
}
