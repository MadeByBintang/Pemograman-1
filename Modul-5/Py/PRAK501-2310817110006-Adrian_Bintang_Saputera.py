def max_bilangan(a, b, c, d):
    return max(a, b, c, d)

print(max_bilangan(*map(int, input().split())))