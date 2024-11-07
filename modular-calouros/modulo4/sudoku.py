n=int(input())


bool_l=False
bool_c=False
bool_q=False
for k in range(n):
    #leitura
    sudo=[]
    for i in range(9):
        l=input()
        m=l.split()
        sudo.append(m)
    print('Instancia '+ str(k+1))
    #verifica linha
    for y in range(9):
        linha=set(sudo[y])
        if(len(linha)<9):
            bool_l=False
        else:
            bool_l=True
   
    #verifica coluna
    for r in range(9):
        coluna=set()
        for q in range(9):
            coluna.add(sudo[q][r])
        if(len(coluna)<9):
            bool_c=False
        else:
            bool_c=True
   
    #verifica quadrado
    for s in range(1,8,3):
        for t in range(1,8,3):
            quadrad=set()
            for j in range(-1,2):
                for k in range(-1,2):
                    quadrad.add(sudo[s+j][t+k])
            if(len(quadrad)<9):
               bool_q=False
            else:
                bool_q=True
    if bool_l and bool_c and bool_q:
        print('SIM')
    else:
        print('NAO')
