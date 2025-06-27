n, m = map(int, input().split())

for i in range(1, n + 1):
    if i % 2 == 1:
        # row fully #
        print('#' * m)
    elif i % 4 == 0:
        # at the beginning #
        print('#' + '.' * (m - 1))
    else:
        # at the end #
        print('.' * (m - 1) + '#')
