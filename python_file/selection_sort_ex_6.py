def selection_sort(arr):
    if not arr:
        return "array is empty"
    
    for i in range(len(arr)):
        mini = arr[i]  
        mindex = i     
        for j in range(i + 1, len(arr)):  
            if arr[j] < mini:
                mini = arr[j]
                mindex = j
        
        if mindex != i:
            arr[i], arr[mindex] = arr[mindex], arr[i]
    
    return arr

nums = list(map(int, input("enter the numbers: ").split()))
ans = selection_sort(nums)
print(f"sorted array is: {ans}")