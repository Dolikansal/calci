def power_num(num , p):
    if p == 0 :
        return 1
    ans = 1 
    for i in range(1, p+1):
        ans = ans * num
    
    return ans

a, p = map(int ,input("enter the number: ").split())
res = power_num(a,p)
print(f"power of {a} is: {res}")