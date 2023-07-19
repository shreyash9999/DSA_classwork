# num = int(input("Enter the number: "))
# n1,n2 = 0,1
# sum =0
# if (num <=0):
#     print("Enter num greater then 0!!")
# else:
#     for i in range(0,num):
        
#         n1=n2
#         n2=sum
#         sum=n1+n2
#         print (sum, end=" ")
def fib(n):
    if n<=1:
        return n
    return fib(n-1)+fib(n-2)

n= int(input("get the inp"))
print(fib(n))