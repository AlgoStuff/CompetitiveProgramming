n, L, D = [int(i) for i in raw_input().split()]
p = [float(x) for x in raw_input().split()]
p.append(1)
p.insert(0, 1)
d = [int(x) for x in raw_input().split()]
d.insert(0,0)
d.append(D)
dlen = len(d)
plen = len(p)
last = d[dlen - 1]
pro = [0]*dlen
pro[0] = 1
for x in range(0, dlen):
  for y in range(x+1, dlen):
    if d[y] - d[x] > L:
      break
    else:
      pro[y] = max(pro[y], pro[x]*p[y])

print("%.6f" % pro[plen-1])
