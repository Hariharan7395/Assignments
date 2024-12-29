from datetime import datetime, timedelta

#printing current date and time
current_datetime=datetime.now()
print("Current Date and Time: ",current_datetime)

#convert string to date time object
date_string="2024-12-27 16:00:00"
date_object=datetime.strptime(date_string,"%Y-%m-%d %H:%M:%S")
print("\nDatetie object is: ",date_object)

#Subtracting a week from given date
given_date=datetime(2024,12,27)
new_date=given_date-timedelta(days=1)
print("\nNew date is: ",new_date)

#Finding the day of the week of the given date
day_of_week=given_date.strftime("%A")
print("\nDay of the week: ",day_of_week)

#Adding a week and 12hrs to the gievn date
new_date1=given_date + timedelta(days=7, hours=12)
print("\nNew date is: ",new_date1)

#Calculating the number of days btw two given dates
date1=datetime(2024,12,27)
date2=datetime(2025,1,10)
date_diff=date2-date1
print("\nNumber of days between the two dates is: ",date_diff.days)
