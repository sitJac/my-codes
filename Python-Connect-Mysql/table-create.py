import mysql.connector

mysql_connection = mysql.connector.connect(
    user = "root",
    password = "123456",
    host = "localhost",
    database = "pythondb"
)

cursor = mysql_connection.cursor()
cursor.execute("CREATE TABLE Students (StudentID int PRIMARY KEY, Name VARCHAR(255), City VARCHAR(255))")