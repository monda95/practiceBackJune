def num():
    N, X = map(int, input().split())
    N = list(map(int, input().split()))
    for i in N:
        if X > i:
            print(i)

num()