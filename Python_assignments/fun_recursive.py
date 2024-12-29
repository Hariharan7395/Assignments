#Recusrsive fun to calculate the sum frm 0 to given n
def recursive_sum(n):
    if n==0:
        return 0
    else:
        return n + recursive_sum(n-1)

#calculating the sum
print("Give the value for n: ")
n=int(input())
result=recursive_sum(n)
print("Sum of numbers from 0 to n is: ",result)
