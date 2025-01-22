def NoWUB(ans):
    
    res = ' '.join(ans.replace("WUB", " ").split())
    return res

ans = input().strip()

print(NoWUB(ans))
