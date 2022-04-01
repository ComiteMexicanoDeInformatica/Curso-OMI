inp = input()

open_count = 0

if inp[0]==')':
    print('NO')
else:
    for c in inp:
        if c == '(':
            open_count+=1
        else:
            open_count-=1
    if open_count==0:
        print('SI')
    else:
        print('NO')
