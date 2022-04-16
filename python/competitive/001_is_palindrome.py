import re

def isPalindrome(s):

	strs = s.lower()
	retval = False

	l, r = 0, len(strs)-1

	if strs == strs[::-1]:
		return True
	else:
		return False

if isPalindrome("AmanaplanacanalPanama") == True:
	print("String is palindrome...")
else:
	print("String is NOT palindrome...")
