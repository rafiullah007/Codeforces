n, k, l, c, d, p, nl, np = map(int, input().split())

reqToast = (k * l) // nl 
reqLime = c * d          
reqSalt = p // np     

a = reqToast
b = reqLime
c = reqSalt

print(min(a, b, c) // n) 
