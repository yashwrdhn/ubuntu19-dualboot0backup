'''
Q. find state of array after performing x steps of selection sort algorithm,

'''


# n,x = [int(x) for x in input().split()]
# nums = [ int(x) for x in input().split() ]

n,x = 5,2
nums = [2,1,3,4,5]

for i in range(x):
    mini = i
    for j in range(i+1,n):
        if nums[j] < nums[mini]:
            mini = j
    
    nums[mini], nums[i] = nums[i], nums[mini]

for i in range(n):
    print(nums[i], end=' ')
