
def find_avarage_of_subarrays_bf(data, K):
    result = []

    for i in range(0, len(data)-K+1):
        sum = 0.0
        for x in range(i, i + K):
            sum += data[x]
        result.append(sum/K)
    
    return result

def find_avarage_of_subarrays_2pointer(data, K):
    result = []
    window_sum, s_point = 0.0, 0
    for e_point in range(0, len(data)):
        window_sum += data[e_point]
        if e_point >= K-1:
            result.append(window_sum/K)
            window_sum -= data[s_point]
            s_point += 1

    return result

test = [1, 3, 2, 6, -1, 4, 1, 8, 2]
window = 5
print(find_avarage_of_subarrays_bf(test, window))
print(find_avarage_of_subarrays_2pointer(test, window))
