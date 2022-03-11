import mysql.connector

mysql_connection = mysql.connector.connect(
    user = "root",
    password = "123456",
    host = "localhost",
    database = "pythondb"
)
cursor = mysql_connection.cursor()
cursor.execute("SELECT * FROM Students")

students = cursor.fetchall()
for student in students:
    print(student)

mysql_connection.close()