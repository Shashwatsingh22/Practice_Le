#!/usr/bin/python3

import cgi
import subprocess

print("content-type: text/html")
print()
mydata=cgi.FieldStorage()

work = mydata.getvalue("service")
#subser= mydata.getvalue("subser")

if work == "launch_instance_master":
    subprocess.getoutput("sudo . dynamic.sh && ansible-plabook ./using_role/launch_instance_master.yml")

elif work == "launch_instance_slave":
    subprocess.getoutput("sudo . dynamic.sh && ansible-plabook ./using_role/launch_instance_slave.yml")

elif  work == "setup_cluster":
    subprocess.getoutput("sudo . dynamic.sh && ansible-playbook ./using/role/setup_cluster.yml")
    