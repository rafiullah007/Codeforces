def main():
    t = int(input())

    for _ in range(t):
        a = list(map(int, input().split()))
        a.sort(reverse=True) 

        sum1 = 0
        sum2 = 0

        for i in range(len(a)):
            if i == 0 or i % 2 == 0:
                sum1 += a[i]
                
            else: 
                sum2 += a[i]

        print(f"{sum1} {sum2}")
        

if __name__ == "__main__":
    main()
