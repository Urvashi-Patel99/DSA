#given a string s,remove all its adjacent duplicate char recursively,until there are no adjacent duplicate left 
#ip = "geeksforgeek"
#op= "gksforgk"

# s= "abccbccba"
#op = ""

def vanishduplicate(s):
  stack = []
  for r in s:
    if stack and stack[-1]==r:
      stack.pop()
    else:
      stack.append(r)

  return "".join(stack) 

print(vanishduplicate("geeksforgeek")) 
print(vanishduplicate("abccbccba"))  





