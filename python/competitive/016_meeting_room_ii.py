'''
Given an array of meeting time intervals consisting of start and end times [[s1,e1],[s2,e2],...] (si < ei), find the minimum number of conference rooms required.

Example 1:

Input: [[0, 30],[5, 10],[15, 20]]

starts = [ 0, 5, 15]
ends = [10, 20, 30]

Output: 2
Example 2:

Input: [[7,10],[2,4]]
Output: 1
'''

def meeting_room(intervals):
    starts = []
    ends = []
    for sub in intervals:
        starts.append(sub[0])
        ends.append(sub[1])
    
    starts.sort()
    ends.sort()

    s,e = 0,0 # start and end pointer
    max_room, counter = 0,0
    while s < len(starts):
        if starts[s] < ends[e]:
            counter += 1
            max_room = max(counter, max_room)
            s += 1
        else:
            counter -= 1
            e += 1

    return max_room

print(meeting_room([[0, 30],[5, 10],[15, 20]]))