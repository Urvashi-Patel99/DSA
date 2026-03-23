def removeAllOccurences(num,val):
  while val in num:
    num.remove(val)
    return len(num)

arr=[3,2,2,3]
val = 3

newarr= removeAllOccurences(arr,val)

print(newarr)
