
def string_to_integer(str_data):

    num_started = False
    str_num = ""
    for chx in str_data:
        if chx == "-" or chx.isdigit():
            str_num = str_num + chx
            if num_started == False: 
                num_started = True
        elif not chx.isdigit() and num_started == True:
            break
        elif chx.isalpha() and num_started == False:
            str_num = "0"
            break
        else:
            continue

    return str_num

mydata1 = "42"
mydata2 = "     -42"
mydata3 = "4193 with words"
mydata4 = "words and 987"

print(string_to_integer(mydata4))