import sys

inp = ""

for line in sys.stdin:
    inp += line
    
    inp = inp.split("144")
    inp = '.'.join(inp)
    inp = inp.split("14")
    inp = '.'.join(inp)
    inp = inp.split("1")
    inp = '.'.join(inp)
    inp = inp.split(".")
    inp = ''.join(inp)
    
    if (len(inp) > 0):
        print("NO")
    else:
        print("YES")
