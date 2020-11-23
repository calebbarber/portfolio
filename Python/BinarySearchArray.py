def search(arr, low, high, x):
    if high >= low:
        mid = (high + low) // 2
        
        if arr[mid] == x: return mid
        elif arr[mid] > x: return search(arr, low, mid-1, x)
        else: return search(arr, mid+1, high, x)
        
    else: return -1

arr = [5, 17, 26, 40, 56, 69, 85]
x = input("Enter number: ")

res = search(arr, 0, len(arr)-1, x)

if res != -1:
    print "Element", x, "is present at index", str(res)

else:
    print "Element ", x, "is not found in list"