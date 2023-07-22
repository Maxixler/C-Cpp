import random

def merge_sort(arr):
    if len(arr) > 1:
        mid = len(arr)
        left = arr[:mid]
        right = arr[mid:]
        merge_sort(left)
        merge_sort(right)
        i = j = k = 0
        while i < len(left) and j < len(right):
            if left[i] < right[j]:
                arr[k] = left[i]
                i += 1
            else:
                arr[k] = right[j]
                j += 1
            k += 1

        while i < len(left):
            arr[k] = left[i]
            i += 1
            k += 1

        while j < len(right):
            arr[k] = right[j]
            j += 1
            k += 1


random_list = [random.randint(1, 100) for _ in range(10)]
print("Siralanmadan �nce:", random_list)
merge_sort(random_list)
print("Siralandiktan sonra:", random_list)

