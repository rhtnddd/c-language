import sys
sys.setrecursionlimit(10**6)

n=[0]*10001
def f(a):
    if a<2:
        return a
    elif n[a]==0:
        n[a]=f(a-1)+f(a-2)
    return n[a]
a=int(input())
print(f(a))