arr = list(map(int, input().split()))

for i in range(10):
    a = ((arr[i] + arr[i+1]) % 10)
    arr.append(a)
    print(arr[i], end=" ")