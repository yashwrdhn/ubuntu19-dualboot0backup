'''
You have been given an A array consisting of N integers. All the elements in this array are guaranteed to be unique. For each position i in the array A you need to find the position should be present in, if the array was a sorted array. You need to find this for each i and print the resulting solution.

input :  5
		 5 4 3 2 1

output : 5 4 3 2 1

explanation :  5 would be present on 5th pos in sorted array.

'''

def InsertionSort(nums, n):

	for i in range(n):
	    temp = nums[i]
	    j = i
	    while j > 0 and temp < nums[j-1]:
	    	nums[j] = nums[j-1]
	    	j -= 1 
	    nums[j] = temp
	return nums;


def BinarySearch(nums, x):
	
	low = 0
	high = len(nums)

	while low <= high:
		mid = int ( low + (high-low)/2)

		if nums[mid] == x:
			return mid

		elif nums[mid] > x:
			high = mid - 1
		else:
			low = mid + 1

	return -1



n = int( input())
nums = [ int(x) for x in input().split() ]

nums2 = [ x for x in nums ]

#first get sorted array
nums = InsertionSort(nums, n)


pos = []
for x in nums2 : 
	index = BinarySearch(nums, x)
	pos.append(index + 1)


for x in pos:
	print(x, end=' ')
