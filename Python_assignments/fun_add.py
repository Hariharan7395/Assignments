#outer function
def outer_fun(input1,input2):
    #inner function
    def inner_fun():
        return a+b
    #outer function adding 5 to the result
    result=inner_fun()+5
    return result

a=10
b=20
result=outer_fun(a,b)
print("Addition of two number is: ",result)
