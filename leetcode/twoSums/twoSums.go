package solution

func TwoSum(nums []int, target int) []int {
	map_idx := make(map[int]int)

	for i := 0; i < len(nums); i++ {
		cmpl := target - nums[i]
		if v, ok := map_idx[cmpl]; ok {
			return []int{v, i}
		}
		map_idx[nums[i]] = i
	}
	return []int{0, 0}
}
