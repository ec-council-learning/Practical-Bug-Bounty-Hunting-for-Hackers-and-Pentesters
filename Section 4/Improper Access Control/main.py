f = open("userid.txt","r")

userId = int(f.read())

if userId == 1:
    print("Basic user")
elif userId == 0:
    print("Admin user")
