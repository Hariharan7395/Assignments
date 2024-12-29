import matplotlib.pyplot as plt

#Data for products
months=[1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12]
product_a=[20, 30, 40, 50, 60, 70, 80, 90, 100, 110, 120, 130]
product_b=[25, 35, 45, 55, 65, 75, 85, 95, 105, 115, 125, 135]
product_c=[15, 25, 35, 45, 55, 65, 75, 85, 95, 105, 115, 125]
#plotting the results in graph
plt.figure(figsize=(10,6))
plt.plot(months,product_a,marker='o',label='Facecream Sales Data')
plt.plot(months,product_b,marker='s',label='Facewash Sales Data')
plt.plot(months, product_c,marker='^',label='Toothpaste Sales Data')
plt.xlabel('Month Number')
plt.ylabel('Units Sold')
plt.title('Monthly Sales Data')
plt.legend()
plt.grid(True)
plt.show()

