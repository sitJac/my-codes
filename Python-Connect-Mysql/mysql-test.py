import mysql.connector

mysql_connection = mysql.connector.connect(
    host = "localhost",
    user = "root",
    password = "123456"
)

print(mysql_connection)