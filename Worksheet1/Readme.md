Worksheet answers

Q7
Output: 3 3.4 3
- for avg1 it happens when they divide and since they are int in this case thy stay that way.
- for avg2 it happens because total is explicitly changed into double.
- for avg3 the division happens within a parenthesis and since they're int it becomes 3; then changes to double.

Q8

Output: 2 -2 3 -2 
solution to rounding:
(int) (v >= 0 ? v + 0.5 : v - 0.5) where v is your input this is the same as saying:

int x;
if (v > = 0){
    x = (int)(v + 0.5);
}
else{
    x = (int)(v - 0.5);
}

Q9 in QU9.cpp
First output c 2

Q10
 2 2.5 2.5

Q11
0 1 1 
- 0 because float is a single precison(4 bytes, 7 decimals) and double is double precision(8 bytes, 12-17 decimals).
- essentially we are comparing not only the data stored but also the size in the memory.

Q12 
In Q12.exe

Q13 

12 8 2

Q14

6

Q15

5 7 14 15 5

Q16

in Q16.exe
Version b could go wrong when the value is too large to fit in int.

Q17

12 5.5