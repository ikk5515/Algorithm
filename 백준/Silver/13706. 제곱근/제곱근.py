# BOJ_13706_제곱근
def binary_search(f, l):
    tmp = l
    while True:
        mid = (f + l) // 2
        if (mid ** 2) == tmp:
            return mid
        if (mid ** 2) > tmp:
            l = mid
        if (mid ** 2) < tmp:
            f = mid
a = int(input())
print(binary_search(1, a))