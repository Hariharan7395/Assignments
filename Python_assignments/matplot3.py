import matplotlib.pyplot as plt

#Input data
months=[1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12]
bathing_soap=[50, 60, 70, 80, 90, 100, 110, 120, 130, 140, 150, 160]
facewash=[30, 40, 50, 60, 70, 80, 90, 100, 110, 120, 130, 140]
plt.figure(figsize=(10, 6))
#plotting the results in graph
# Subplot for Bathing Soap
plt.subplot(2, 1, 1)
plt.plot(months,bathing_soap,marker='o',color='b')
plt.title('Bathing Soap Sales')
plt.ylabel('Units Sold')
# Subplot for Facewash
plt.subplot(2, 1, 2)
plt.plot(months,facewash,marker='s',color='g')
plt.title('Facewash Sales')
plt.xlabel('Month Number')
plt.ylabel('Units Sold')

plt.tight_layout()
plt.show()

