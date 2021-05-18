"""
Here In We need not take the Help of the Array or any DataStructure to Manage the Value
for the Large Number Becoz internally Java and Python are Designed in such a so that they will
Manage the Memory Dynamically.
So, Thats Why as you here give the Large number python will calculate the Result and Also give the 
ans fastly.
"""
#!/usr/bin/python
def soln(num):
	if num == 0:
		return 1
	else:
		return num*soln(num-1)

num=int(input())
print(soln(num))