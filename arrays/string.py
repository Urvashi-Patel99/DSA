def palin(s):
  n=len(s)
  max_len=0
  start =0

  for r in range(n):
     for g in range(r,n):
        if s[r:g+1]==s[r:g+1][::-1] and g-r+1>max_len:
           max_len = g-r+1
           start = r


  return s[start:start+max_len]

print(palin("forgeeksskeegfor"))
print(palin("geeks"))         