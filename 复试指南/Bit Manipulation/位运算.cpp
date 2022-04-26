/*

& AND           only1 & 1 = 1
| OR            only0 | 0 = 0
^ XOR           if the same 0,otherwise 1
~ NOT           ~0=1  ~1=0
<< Left Shift   00001<<3 = 01000
>> Right Shift  10000>>4 = 00001


① whether kth bit is set(==1)
    i & (i<<k) == 1
② set the kth bit(→1)
    i = (i | (1<<k))
③ unset the kth bit(→0)
    i = i ^ (1<<k)
④ count how many bits are set(==1)
    Integer.bitCount()
*/