
def max_sum_sub_bf(arr, K):
    max_val  = 0
    for x in range(len(arr) - K + 1):
        sss = 0
        for i in range(x, x + K):
            sss += arr[i]
        max_val = max(max_val, sss)
    return max_val

def max_sum_sub_slidingw(data, K):
    max_val = 0
    w_sum = 0
    s_point, e_point = 0, 0
    for e_point in range(len(data)):
        w_sum += data[e_point]
        if e_point >= K-1:
            max_val = max(max_val, w_sum)
            w_sum -= data[s_point]
            s_point += 1
    return max_val
            
aa = [2, 1, 5, 1, 3, 2]
K=3 

print(max_sum_sub_bf(aa, K))
print(max_sum_sub_slidingw(aa,K))
