#input list from the user
list1=list(map(int,input("Enter the first list elements: ").split()))
list2=list(map(int,input("Enter the second list elements: ").split()))

#creating the empty result
new_list=[]

#adding odd numbers from list1
for num in list1:
    if num%2 != 0:
        new_list.append(num)

#adding even numbers frm list2
for num in list2:
    if num%2 == 0:
        new_list.append(num)

#output of the resultant list
print(f"The new list is : {new_list}")
