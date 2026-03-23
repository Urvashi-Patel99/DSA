arr = [1,2,0,4,3,0,5,0]

for x in arr:
  if x==0:
    arr.remove(x)
    arr.append(0)
print(arr)    