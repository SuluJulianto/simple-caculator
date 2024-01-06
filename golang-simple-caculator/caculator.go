package main

import (
	"fmt"
	"strconv"
	"strings"
)

func main() {
	var calculate string
	fmt.Print("Enter a math operation: ")
	fmt.Scanln(&calculate)

	if strings.Contains(calculate, "+") {
		numbers := strings.Split(calculate, "+")
		num1, _ := strconv.Atoi(strings.TrimSpace(numbers[0]))
		num2, _ := strconv.Atoi(strings.TrimSpace(numbers[1]))
		answer := num1 + num2
		fmt.Printf("%s = %d\nYour answer is %d\n", calculate, answer, answer)
	} else if strings.Contains(calculate, "-") {
		numbers := strings.Split(calculate, "-")
		num1, _ := strconv.Atoi(strings.TrimSpace(numbers[0]))
		num2, _ := strconv.Atoi(strings.TrimSpace(numbers[1]))
		answer := num1 - num2
		fmt.Printf("%s = %d\nYour answer is %d\n", calculate, answer, answer)
	} else if strings.Contains(calculate, "**") {
		numbers := strings.Split(calculate, "**")
		base, _ := strconv.Atoi(strings.TrimSpace(numbers[0]))
		exponent, _ := strconv.Atoi(strings.TrimSpace(numbers[1]))
		answer := 1
		for i := 0; i < exponent; i++ {
			answer *= base
		}
		fmt.Printf("%s = %d\nYour answer is %d\n", calculate, answer, answer)
	} else if strings.Contains(calculate, "*") {
		numbers := strings.Split(calculate, "*")
		num1, _ := strconv.Atoi(strings.TrimSpace(numbers[0]))
		num2, _ := strconv.Atoi(strings.TrimSpace(numbers[1]))
		answer := num1 * num2
		fmt.Printf("%s = %d\nYour answer is %d\n", calculate, answer, answer)
	} else if strings.Contains(calculate, "//") {
		numbers := strings.Split(calculate, "//")
		num1, _ := strconv.Atoi(strings.TrimSpace(numbers[0]))
		num2, _ := strconv.Atoi(strings.TrimSpace(numbers[1]))
		answer := num1 / num2
		fmt.Printf("%s = %d\nYour answer is %d\n", calculate, answer, answer)
	} else if strings.Contains(calculate, "/") {
		numbers := strings.Split(calculate, "/")
		num1, _ := strconv.ParseFloat(strings.TrimSpace(numbers[0]), 64)
		num2, _ := strconv.ParseFloat(strings.TrimSpace(numbers[1]), 64)
		answer := num1 / num2
		fmt.Printf("%s = %.2f\nYour answer is %.2f\n", calculate, answer, answer)
	} else if strings.Contains(calculate, "%") {
		numbers := strings.Split(calculate, "%")
		num1, _ := strconv.Atoi(strings.TrimSpace(numbers[0]))
		num2, _ := strconv.Atoi(strings.TrimSpace(numbers[1]))
		answer := num1 % num2
		fmt.Printf("%s = %d\nYour answer is %d\n", calculate, answer, answer)
	} else {
		fmt.Println("The math operation is not recognized.")
	}
}
