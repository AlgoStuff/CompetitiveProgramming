import fractions
gcd = fractions.gcd
while 1:
    try:
        a,b,c=[int(x) for x in raw_input().split(',')]
        is_trimurty = False
        if a*a == b*b+c*c or b*b == a*a+c*c or c*c == a*a+b*b:
            is_trimurty = True
        if not is_trimurty:
            print("NO")
        else:
            if gcd(a,gcd(b,c)) == 1:
                print("YES")
            else:
                print("NO")
                
    except:
        break