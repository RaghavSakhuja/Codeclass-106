# write random numbers in in.txt

import random

with open('in.txt', 'w') as f:
    n=10
    f.write(str(n)+'\n')
    for i in range(n):
        f.write(str(random.randint(0, 100))+" ")
    f.write('\n')

    n=10
    f.write(str(n)+'\n')
    for i in range(n):
        f.write(str(random.randint(0, 100))+" ")
    f.write('\n')

    n=5
    f.write(str(n)+'\n')
    
    for i in range(n*2):
        f.write(str(random.randint(0, 100))+" ")
    f.write('\n')

    n=5
    m=5
    f.write(str(n)+' '+str(m)+'\n')
    for i in range(n):
        for j in range(m):
            f.write(str(random.randint(0, 100)%2)+" ")
        f.write('\n')

