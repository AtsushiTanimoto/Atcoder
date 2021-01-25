m = int(input())

if m<100:
    a = 0
elif m<=5000:
    a = m//100
elif m<=30000:
    a = 50+m//1000
elif m<=70000:
    a = 80+(m//1000-30)//5
else:
    a = 89

print("{:02d}".format(a))