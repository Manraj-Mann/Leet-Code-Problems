import subprocess

subprocess.call(["git", "status"])
i = input()
subprocess.call(["git"  , "add" , "."])
i = input()
subprocess.call(["git"  , "commit" , "-m" , '''"added"'''])
i = input()
subprocess.call(["git"  , "push"])
