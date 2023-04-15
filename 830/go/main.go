package main

import "fmt"

func main() {
	stk := make([]int, 0)
	n := 0
	fmt.Scanf("%d", &n)
	for i := 0; i < n; i++ {
		x := 0
		fmt.Scan(&x)
		for len(stk) != 0 && stk[len(stk)-1] >= x {
			stk = stk[:len(stk)-1]
		}
		if len(stk) != 0 {
			fmt.Printf("%d ", stk[len(stk)-1])
		} else {
			fmt.Printf("-1 ")
		}
		stk = append(stk, x)
	}
}
