.comment "just a basic living prog"  #     first comment
   .name   "zork"

#aff r99
#live %-3
#and-1,%0
#r 1
#aff r-1
# some comment
#ld 6     ,       r8
#xor 5,%-4,r5
#sub r1, r2, r3
#lfork %:l2
#l2: sti r1,%:live,%1
#and          r1,%0,r1
#live: live%1
#zjmp %:live
# comment
#aff r-1
loop:
        sti r1, %:live, %1
live:
        live %0
        ld %0, r2
        zjmp %:loop
