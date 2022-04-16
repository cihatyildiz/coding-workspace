# todo: add description here

def add_binary1(bin1, bin2):
	ret_val = bin(int(bin1) + int(bin2))
	return ret_val

def add_binary3(bin1, bin2):
	result = ''
	curr = 0

	carry = '0'
	while curr < max(len(bin1), len(bin2)):
		a = bin1[-1 - curr] if curr < len(bin1) else '0'
		b = bin2[-1 - curr] if curr < len(bin2) else '0'

		if int(a) >1 or int(b) >1: return False

		val = int(a) + int(b) + int(carry)
		carry = '1' if val > 1 else '0'

		curr += 1

	if carry == '1': result = carry + result

	return result

a = "11"
b = "1"
print(add_binary1(a,b))
print(add_binary3(a,b))

