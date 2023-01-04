import subprocess

try : 
    subprocess.call(["git", "status"])
    subprocess.call(["git"  , "add" , "."])
    subprocess.call(["git"  , "commit" , "-m" , '''"added"'''])
    subprocess.call(["git"  , "push"])
except Exception as e : 
    print("ERROR : " , str(e))