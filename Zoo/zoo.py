val1, val2, val3 = map(int, input().split())
ah, ac, aa = map(int, input().split())

pa1, pa2 = map(int, input().split())
ra1, ra2 = map(int, input().split())
ma, maa = map(int, input().split())

ta = int(input())

temp = min(val1, val2, val3)
if temp == val1:
 a1 = ah * temp
 x = ah
elif temp == val2:
 a1 = ac * temp
 x = ac
else:
 a1 = aa * temp
 x = aa

# print(a1, x)

temp = max(val1, val2, val3)
if temp == val1:
 a2 = pa1 * pa2 * val1
 y = pa1 * pa2
elif temp == val2:
 a2 = ra1 * ra2 * val2
 y = ra1 * ra2
else:
 a2 = ma * maa * val3
 y = ma * maa
# print(a2, y)

z = ta - (x + y)
arr = []
arr.append(val1)
arr.append(val2)
arr.append(val3)
sor_arr = sorted(arr)
a3 = z * sor_arr[1]
# print(a3, z)

print(a1 + a2 + a3)
