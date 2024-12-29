import numpy as np

#creating an array
array=np.array([[34,43,73],[82,22,12],[53,94,64]])
#odd rows and even columns
result_array=array[::2,1::2]
print("Odd row and even column elements: ")
print(result_array)
