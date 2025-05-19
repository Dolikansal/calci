def insertion_sort(arr):
    if not arr:
        return "array is empty"
    for i in range(len(arr)):
        for j in range(i+1, len(arr)):
            if j >=0 and arr[j] < arr[j-1]:
                arr[j], arr[j-1] = arr[j-1], arr[j]

    return arr

array = list(map(int, input("enter the array: ").split()))
ans = insertion_sort(array)
print(ans)