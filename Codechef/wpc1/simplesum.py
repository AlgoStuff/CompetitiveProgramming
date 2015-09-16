#/***********************************************************************/
#//  																		
#//	INFINITUM 					                                    	
#//	Rakesh Mahadasa														
#//	National Institute of Technology , Calicut						
#//	problem link : http://www.codechef.com/WPC1401/problems/IITK1P07
#//	Concept : Inverse Modulo Arthimetic , Extended Eulidean Algorithm
#//	Reference :	http://en.wikibooks.org/wiki/Algorithm_Implementation/Mathematics/Extended_Euclidean_algorithm
#//																		
#/***********************************************************************/

def egcd(a, b):
    x,y, u,v = 0,1, 1,0
    while a != 0:
        q, r = b//a, b%a
        m, n = x-u*q, y-v*q
        b,a, x,y, u,v = a,r, u,v, m,n
    gcd = b
    return gcd, x, y

def modinv(a, m):
    gcd, x, y = egcd(a, m)
    if gcd != 1:
        return None  # modular inverse does not exist
    else:
        return x % m


t = input()
while t:
	x, m, n = [int(x) for x in raw_input().split()]
	modinv_res = modinv(x-1,n)
	if(modinv_res == None):
		print(0)
	else:	
		print(((pow(x,m+1,n)-(1%n))*modinv_res)%n)
	t-=1            