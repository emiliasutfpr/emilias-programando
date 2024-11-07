while(True):
    try:
        n=input()
    except EOFError:
        break
    n=int(n)
    b=[]
    for i in range(n):
        l=input()
        b.append(l)
    b.sort()
    for item in b:
        print(item)
        