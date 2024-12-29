employees=['Kelly','Emma']
default={"designation":'Developer',"Salary":8000}
#initialising the dictionary with default values
employee_dict={employee:default.copy() for employee in employees}
print(employee_dict)
