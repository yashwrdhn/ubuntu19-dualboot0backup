'''
find the number of inversion using modified merge sort.
inversion means i < j  && A[i] >  A[j]

'''

n = 2
nums = [100,1]

def merge(nums, start, mid, end):
	p = start
	q = mid+1
	arr = []

	while  p <= mid and q <= end:

		if nums[p] < nums[q]:
			arr.append( nums[p])
			p += 1
		else:
			arr.append(nums[q])
			q += 1

	while p <= mid:
		arr.append( nums[p])
		p += 1

	while q <= end:
		arr.append( nums[q])
		q += 1

	for i in range( len(arr)):
		nums[start+i] = arr[i]


def merge_sort(nums, start, end):

	if start < end:
		mid = start + (end-start)//2

		merge_sort( nums, start, mid)
		merge_sort(nums, mid+1, end)

		merge(nums, start, mid, end)



merge_sort(nums,0,n-1)

print( nums)