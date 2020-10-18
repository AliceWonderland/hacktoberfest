def linear_search(num, arr):
  ind = -1
  for i in range(len(arr)):
    if arr[i] == num:
      ind = i
      break
  return "Number {} found at index {}".format(num, ind)

arr = [1, 2, 3, 4, 5, 6, 7, 8]
num_to_search = 4
print(linear_search(num_to_search, arr))
