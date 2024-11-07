N = int(input())  #diâmetro bola
A, L, P = map(int, input().split())  #altura largura profundidade caixa

#bola cabe na caixa
if N <= A and N <= L and N <= P:
    print("S")
else:
    print("N")
