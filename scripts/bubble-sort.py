# Time Complexity: O(n2)
# Even if the array is sorted, it will complete the loops.

def bubbleSort(arr):
    for i in range(len(arr)):
        for j in range(len(arr)-1):
            if arr[j] > arr[j+1]:
                arr[j], arr[j+1] = arr[j+1], arr[j]

    return arr

print(bubbleSort([5,3,2,1,9,4]))