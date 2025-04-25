s = (3,5,1,3,7)
print(s)

a = [2,5,2,1,7]
print(a)

#set in python
c = {2 ,1 ,2, 4,1}
print(c)
print(type(c))

#empty set gives type of dictionary

d = {}
print(type(d))

#syntax for empty set is
e = set()
print(type(e))

#union of two sets
s1 = {2,1,4,5,2,6}
s2 = {1,4,3,6,9 , 8}
print(s1.union(s2))
s1.update(s2)
print(s1,s2)
