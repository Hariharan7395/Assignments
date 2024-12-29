from operator import itemgetter
#Input tuple
tuple1=(('a',44),('b',25),('c',9),('d',52))
#sorting the tuple
sorted_tuple=sorted(tuple1,key=itemgetter(1))
print(f'Sorted Tuple: {sorted_tuple}')
