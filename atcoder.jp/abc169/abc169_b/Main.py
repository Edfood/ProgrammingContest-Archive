import sys
read = sys.stdin.buffer.read
readline = sys.stdin.buffer.readline
readlines = sys.stdin.buffer.readlines
 
def solve():
  n = int(readline())
  num_list = list(map(int, input().split()))

  for a in num_list:
    if a == 0:
      print(0)
      return


  base = 10**18
  ans = 1

  for a in num_list:
    ans *= a
    if ans > base:
      print(-1)
      return

  print(ans)

solve()