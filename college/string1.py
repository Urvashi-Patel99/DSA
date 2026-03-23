def removeFirst(s):
  stack = []

  for r in s:
    if stack and stack[-1]==r:
      stack.pop()
    else:
      stack.append(r)
  return "".join(stack)      

print(removeFirst("abab"))