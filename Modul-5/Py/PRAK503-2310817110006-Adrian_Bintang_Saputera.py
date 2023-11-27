def maksimal(a, b):
    return max(a, b)

def minimal(a, b):
    return min(a, b)

batas = int(input())
maks = float('-inf')
minim = float('inf')

nilai_list = list(map(int, input().split()))

for nilai in nilai_list:
    maks = maksimal(maks, nilai)
    minim = minimal(minim, nilai)

print(f"{maks} {minim}")