def maxi (arr):
    max = arr[0]

    if not arr:
        return "array is empty"
    
    for i in arr:
        if i > max:
            max = i

    return max

nums = list(map(int, input("enter the array: ").split()))
ans = maxi(nums)
print(f"maximun element in array is: {ans}")