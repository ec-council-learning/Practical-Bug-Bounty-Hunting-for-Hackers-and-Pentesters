import mysql.connector

f = open("log.txt","w")

host = input("Enter the host domain: ")
user = input("Enter the username: ")
password = input("Enter the password: ")

mydb = mysql.connector.connect(
    host=host,
    user=user,
    password=password
)

f.write("Connected to database: " + host + "With user: " + user + "and password: " + password + "\n")
f.write("Connection successful!")

mycursor = mydb.cursor()
mycursor.execute("CREATE DATABASE IF NOT EXISTS login")
mycursor.execute("CREATE TABLE IF NOT EXISTS login.user(username varchar(50), password varchar(50))")
mycursor.execute("INSERT INTO login.user VALUES ('test','password1')")

mydb.commit()

f.close()
