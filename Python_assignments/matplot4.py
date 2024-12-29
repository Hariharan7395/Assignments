import matplotlib.pyplot as plt

#Input data
months=[1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12]
bathing_soap_sales=[50, 60, 70, 80, 90, 100, 110, 120, 130, 140, 150, 160]
#plotting the results in graph
plt.figure(figsize=(8, 5))
plt.bar(months,bathing_soap_sales,color='purple')
plt.xlabel('Month Number')
plt.ylabel('Bathing Soap Sales')
plt.title('Monthly Bathing Soap Sales')
# Saving the plot
plt.savefig('bathing_soap_sales.png')
plt.show()

