import sys
arguments = sys.argv
print(f'number of arguments passed :{len(arguments)}')
i = 0
for x in arguments:
    print(f'argument {i} : {x}')
    i+=1