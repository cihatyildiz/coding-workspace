
def remote_duplicates(sorted_numbers):
    acount = 0

    while True:
        if sorted_numbers[acount] == sorted_numbers[acount + 1]:
            sorted_numbers.remove(acount + 1)
            continue
        else:
            acount += 1

    return len(sorted_numbers)

a = [1,2,2,3,3,3,6,6,8,8,8,8,8,88]

b = remote_duplicates(a)
print(b)