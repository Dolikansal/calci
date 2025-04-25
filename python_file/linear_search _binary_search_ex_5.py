def linear_search(arr, x):
    if not arr:
        return "array is empty"
    
    for i in range(len(arr)):
        if arr[i] == x:
            return i

    return "no match found"


def binary_search(arr , x):
    if not arr:
        return "array is empty"
    
    start = 0
    end = len(arr)-1 
    while start <= end:
        mid = start + (end - start)//2
        if arr[mid] == x:
            return mid
        elif arr[mid] > x:
            end = mid - 1
        else:
            start = mid + 1

    return "no match found" 




array = list(map(int, input("enter the array").split(',')))
key = int(input("enter the key "))
res = linear_search(array , key)
print(f"ans is : {res}")

result = binary_search(array, key)
print(f"ans is: {result}")