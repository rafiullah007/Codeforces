#Rafiullah Al Naim
def Calculation(n):
    
    bills = [100, 20, 10, 5, 1]
    count = 0 

    for i in bills:
        count += n // i  
        n %= i 
    return count


n = int(input())

print(Calculation(n))
