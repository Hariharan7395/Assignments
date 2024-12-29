import matplotlib.pyplot as plt

#Data for the plot
months=[1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12]
total_profit=[20000, 25000, 30000, 35000, 40000, 45000, 50000, 60000, 70000, 80000, 85000, 90000]
#plotting the results in graph
plt.figure(figsize=(8,5))
plt.plot(months,total_profit,marker='o',linestyle='-',color='b')
plt.xlabel('Month Number')
plt.ylabel('Total Profit')
plt.title('Monthly Total Profit')
plt.grid(True)
plt.show()

