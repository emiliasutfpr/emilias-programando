trocas = 0
n,m,tocando =map(int,input().split())


favorita = [-1]*m
visitado = [0]*m
tocando -= 1
for i in range(n):
    a,b = map(int,input().split())
    a -= 1
    b -= 1
    if favorita[b] == -1:
        favorita[b] = a


while visitado[tocando] == 0 and favorita[tocando] != -1:
    trocas += 1
    visitado[tocando] = 1
    tocando = favorita[tocando]


if visitado[tocando]:
    print(-1)
else:
    print(trocas)