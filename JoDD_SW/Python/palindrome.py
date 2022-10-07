from re import I


a=int(input("Enter a : "))
n=i=j=0
j=a
print("j==",j)

while(a):
    i=a%10
    n=(n*10)+i
    a//=10

print(n)
if(j==n):
    print("YES")
else :
    print("No")
    