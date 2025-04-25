def GCD(num1, num2):
    while num1 != num2:
        if num1 > num2:
            num1 = num1 - num2
        else :
            num2 = num2 - num1

    return num1

a, b = map(int , input("enter the first number: "  ).split())
ans = GCD(a,b)
print(f"gcd of two numbers is: {ans} ")