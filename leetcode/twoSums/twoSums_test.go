package solution

import (
	"reflect"
	"testing"
)

const stdErr = "Expected value: %v. Current value: %v"

func TestTwoSums(t *testing.T) {
	tests := []struct {
		nums   []int
		target int
		expect []int
	}{
		{[]int{2, 7, 11, 15}, 9, []int{0, 1}},
		{[]int{3, 2, 4}, 6, []int{1, 2}},
		{[]int{3, 3}, 6, []int{0, 1}},
	}

	for _, test := range tests {
		curr := TwoSum(test.nums, test.target)
		if !reflect.DeepEqual(curr, test.expect) {
			t.Error(stdErr, test.expect, curr)
		}
	}
}
