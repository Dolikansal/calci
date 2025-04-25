num = int(input("Enter the number: "))

if num < 0:
    print("Invalid number")
elif num == 0 or num == 1:
    print("Not a prime number")
else:
    for n in range(2, num + 1):  
        for i in range(2, int(n ** 0.5) + 1):  
            if n % i == 0:
                break  
        else:
            print(f"{n} is a prime number") 
