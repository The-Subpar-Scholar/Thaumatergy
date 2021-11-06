import os

for filename in os.listdir("C:\\Users\\ojgpr\\CLionProjects\\Thaumatergy\\resource\\Params"):
    if filename.endswith(".h"):
        print("#include \"Params/"+filename+'"')