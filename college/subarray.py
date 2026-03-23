

def smallestSum(arr,x):
  n = len(arr)
  min_len = n+1
  curr_sum = 0
  start = 0
  subarray=[]

  for last in range(n):
    curr_sum+=arr[last]

    while curr_sum>x:
      min_len= min(min_len,last-start+1)
      curr_sum -=arr[start]
      subarray = arr[start:last+1]
      start+=1


  if min_len == n+1 :
    return 0
  else:
    return (min_len,subarray)
    
arr = [1, 4, 45, 6, 0, 19]
x = 51
print(smallestSum(arr, x))    



      

