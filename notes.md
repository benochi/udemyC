# 8 bits per byte decimal to binary

(01010010) = 82

# Hexadecimal format starts with 0x

ie: 0x82

MSB / LSB separated into two parts.
8 is MSB, 2 is LSB

we convert this into binary since its 8 bit split in two
8 = 1000
2 = 0010
MSB + LSB = Binary(0b10000010) 0b is used in C to denote binary form
with 16bits, we split into 4 parts, find equivalent binary
IE 0x3A4F
0011, 1010, 0100, 1111
0b0011101001001111
or decimal 14927

IE 0x7B2C
0b0111101100101100

# Hexadecimal chart:

0000 = 0
0001 = 1
0010 = 2
0011 = 3
0100 = 4
0101 = 5
0110 = 6
0111 = 7
1000 = 8
1001 = 9
1010 = A
1011 = B
1100 = C
1101 = D
1110 = E
1111 = F

# How computers store numbers in binary

## decimal numbering system

### also called base 10 numbers(ten possibilities)

0 - 9, 10-19, etc.

## Binary numbering system

### also called base 2

Two states 0 or 1 - like a switch, or transistor(on/off).
0 = 0
1 = 1
10 = 2
11 = 3
100 = 4
101 = 5
110 = 6
111 = 7

# binary range

8 bit(2^8) = 256(0-255)
16 = 65536
32 = 4294967296
64 = 18446744073709551616
