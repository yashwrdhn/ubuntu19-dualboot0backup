


'''
You are given an array (ARR) of length N, consisting of integers. You have to find the sum of the subarray (including empty subarray) having maximum sum among all subarrays.
A subarray is a contiguous segment of an array. In other words, a subarray can be formed by removing 0 or more integers from the beginning, and 0 or more integers from the end of an array.

https://www.codingninjas.com/codestudio/guided-paths/data-structures-algorithms/content/118820/offering/1381870
'''

def maxSubarraySum(arr, n) :
  currSum = 0
  maxSum = -99999
    
  for x in arr:
    currSum += x
        
    currSum = max(0, currSum)
    maxSum = max( maxSum, currSum)
        
  return maxSum 



