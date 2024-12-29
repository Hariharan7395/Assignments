import numpy as np

#input array
array=np.array([[34,43,73],[82,22,12],[53,94,23]])
#new column to insert
new_column=np.array([10,10,10])
#Deleting the second column and inserting new column
result_array=np.insert(array,1,new_column,axis=1)
print("Array after replacing the second column: ")
print(result_array)
