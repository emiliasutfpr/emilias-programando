t = int(input())

while t > 0:
    t -= 1 

    n, k = map(int, input().split())

    odd = ((k + (n % 2)) // 2) % 2 

    print("NO" if odd else "YES") 
