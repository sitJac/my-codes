import mysql.connector

mysql_connection = mysql.connector.connect(
    user = "root",
    password = "123456",
    host = "localhost",
    database = "pythondb"
)

sql = "INSERT INTO Students() VALUES(%s, %s, %s)"
students = [
    (1, "Amy", "Shanghai"),
    (2, "Tom", "Beijing"),
    (3, "Lihua", "NewYork")
]

cursor = mysql_connection.cursor()

for student in students:
    cursor.execute(sql, student)

mysql_connection.commit()