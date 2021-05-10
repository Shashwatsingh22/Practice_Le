import re

def count_update(file,local):
    log=file.readlines()
    for line in log:
        if line:
            regex = re.search(r'\s\d{3}\s', line)
            code=regex.group().strip()
            local[code]+=1

main_result=ict={'200': 0 , '304': 0, '404': 0, '301': 0, '206': 0, '500': 0,'403': 0, '416': 0}

file=open('data.log','r')
count_update(file,main_result)
file.close()
print(main_result)
