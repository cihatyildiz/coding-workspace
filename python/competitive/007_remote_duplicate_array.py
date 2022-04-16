
def remote_duplicates(sorted_numbers):
    
    removed = []

    for num in range(0, len(sorted_numbers)):
        if sorted_numbers[num] not in removed:
            removed.append(sorted_numbers[num])

    return removed

a = [1,2,2,3,3,3,6,6,8,8,8,8,8,88]

b = remote_duplicates(a)
print(b)