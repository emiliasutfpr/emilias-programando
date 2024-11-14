n=int(input())
barM=[]
barL=[]
m,l=map(int,input().split())
for i in range(m):
    linha=input()
    barM.append(linha.split())
for i in range(l):
    linha=input()
    barL.append(linha.split())
cm,cl=map(int,input().split())
a=int(input())
cartaM=barM[cm-1][a-1]
cartaL=barL[cl-1][a-1]
if cartaM>cartaL:
    print('Marcos')
elif cartaL>cartaM:
    print('Leonardo')
else:
    print('Empate')