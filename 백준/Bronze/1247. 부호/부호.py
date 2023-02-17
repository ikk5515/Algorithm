# BOJ_1247_부호
for i in range(0, 3):
    n = int(input())
    sum = 0
    for j in range(0, n):
        a = int(input())
        sum += a
    if sum == 0:
        print('0')
    elif sum > 0:
        print('+')
    else:
        print('-')
