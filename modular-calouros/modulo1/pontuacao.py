n = (int(input()))
##Entrada
s=bin(n)
##Transformação para binário, utilizando uma biblioteca do python
p=s.count('1')
##Contagem de ‘1’s presentes no valor binário e consequentemente o resultado das modalidades
print(p)