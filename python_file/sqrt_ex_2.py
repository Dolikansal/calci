def sqrt_num(num):
    for i in range(1 , num //2):
        if i*i == num:
            return i
        else:
            return "complete square root not exist of the number"
    return -1

a = int(input("enter the number: "))
res = sqrt_num(a)
print(f"square root of {a} is:  {res}")