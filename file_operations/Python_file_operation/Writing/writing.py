with open('test.txt','r') as reader:
    #print(reader.readlines())
    content = reader.readlines()
    with open('test.txt','w') as writer:
        for line in reversed(content):
            writer.write(line)
    