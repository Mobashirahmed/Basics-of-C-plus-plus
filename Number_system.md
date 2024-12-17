Decimal number system refers to the combination of characters [0, q, 2, 3, 4, 5, 6, 7, 8, 9].
Binary number system consits of 0s and 1s.

Conversion of Decimal to Binary
step1: Begin
step2: say n = 10
step3: divide n by 2
step4: store remainder in ans
step5: repeat steps 2 and 3 till n!=0
step6: store the reverse of ans in Bin
step7: print Bin as the Binary equivalent of n
step8: End

We also Know that when a number x&1 => 1 suggests x is odd.
And when that number x&1 => 0 suggests x is even.
    To extract the last bit we'll use; bit = x&1

To remove the last bit we can use right shift by 1 .ie; equivalent to divding by 2.
    To remove the last bit we'll use; n = n>>1

We've to update the answer = 0, to store the converted decimal value.
    we can use, answer = (10^i * answer) + bit
    Or for reverse; answer = (10^i * bit) + answer