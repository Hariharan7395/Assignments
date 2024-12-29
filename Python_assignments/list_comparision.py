user_input=input("Enter the inputs to the list: ")
user_list=list(map(int,user_input.split()))
if user_list[0]==user_list[-1]:
    print("The first and last element in the list is same")
else:
    print("The first and last element in the list is not same")
