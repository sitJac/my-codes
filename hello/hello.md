## Build and Link:
- step1: gcc -c math.c & gcc -c main.c
- step2: gcc math.o main.o -o main2

## Dynamically Linked：
- step1：math.c, math.h, main.c
- step2: gcc -shared -fPIC math.c -o libmath.so
- step3: gcc main.c -lmath -L. -o main
- step4: export LD\_LIBRARY\_PATH="$(pwd)"
