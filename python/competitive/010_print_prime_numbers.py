#!/usr/local/bin/python3

def prime_numbers():

    count = 2
    p_numbers = []
    p_ctrl=False
    while count<100:
        if count == 2:
            print(str(count))
            count += 1
            continue
        for x in range(2, count-1):
            if count % x == 0:
                p_ctrl = True
                pass
        if p_ctrl == False:
            print(str(count))
        else:
            p_ctrl = False

        count += 1

    return

prime_numbers()