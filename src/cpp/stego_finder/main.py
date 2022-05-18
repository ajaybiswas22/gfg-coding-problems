import numpy as np
def c_search(x):
	for a in range(4):
		for b in range(4):
			for c in range(4):
				for d in range(4):
					for e in range(4):
						for f in range(4):
							for g in range(4):
								for h in range(4):

									res = (a**(b+c)) + (d**(e+f)) - (g**h)
									if(res == x):
										return [a,b,c,d,e,f,g,h]
	return [None,None,None,None,None,None,None,None]

X = []
for i in range(256):

	a,b,c,d,e,f,g,h = c_search(i)

	X.append([a,b,c,d,e,f,g,h])

print(X)
