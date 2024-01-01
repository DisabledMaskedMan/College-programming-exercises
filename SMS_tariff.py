import math

sum = 0
try :
	while True :
		num = int(input())
		if num > 70:
      sum += math.ceil(num / 70)
		else :
			sum += 1
except EOFError :
  pass

print("%.1f元" % (sum * 0.1))
