n=int(input())
a=list(map(int,input().split()))
m=int(input())
b=list(map(int,input().split()))

a.sort()
b.sort()
c=a

for i in a:
    try:
        b.remove(i)
        c.remove(i)
    except:
        pass
for ii in (b+c):
    print(ii,end=" ")