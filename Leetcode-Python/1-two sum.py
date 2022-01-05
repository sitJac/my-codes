def twoSum(nums, target) :
    for i in nums:
        j = target - i
        start_index = nums.index(i)
        next_index  = nums.index(i) + 1

        temp_nums = nums[next_index: ]
        if j in temp_nums:
            return (nums.index(i), temp_nums.index(j) + next_index)

nums = [2,7,11,15]
target = 9
result = twoSum(nums, target)
print(result)