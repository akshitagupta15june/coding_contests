from collections import Counter
string=Counter(input())
#print(string)
string=Counter(string.values())
#print(string)
if len(string.keys())==1:
    print("YES")

elif len(string.values())==2:
    key1,key2=string.keys()
    if string[key1]==1 and (key1-1==key2 or key1-1==0):
        print("YES")
    elif string[key2]==1 and (key2-1==key1 or key2-1==0):
        print("YES")
    else:
        print("NO")

else:
    print("NO")
    
