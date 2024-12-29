#input list from the user
user_input=int(input("Enter the number: "))
#Convert the integer to a string and reverse it
num_list=list(map(int,str(user_input)))
#reverse the list
num_list.reverse()
#output of the list
print(f'The list of digit is: {num_list}')
