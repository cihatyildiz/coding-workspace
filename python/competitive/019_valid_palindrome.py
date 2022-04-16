"""
Given a string, determine if it is a palindrome, considering only alphanumeric characters and ignoring cases.

Note: For the purpose of this problem, we define empty string as valid palindrome.

Example 1:

Input: "A man, a plan, a canal: Panama"
Output: true
Example 2:

Input: "race a car"
Output: false
"""

def valid_palindrome(s):
    s = s.strip(' ,:')
    s = s.lower()

    print(s)
    if len(s)/2 != 0:
        return False
    
    for x in range(0, len(s)/2):
        if s[x] != s[-x]:
            return False
    
    return True

print(valid_palindrome("A man, a plan, a canal: Panama"))