objs=userComplexe.o complexe.o
c=gcc
f=-Wall
userComplexe: $(objs)
            $(c) $(f) $(objs) -o useComplexe -lm
 userComplexe.o: userComplexe.c complexe.c
            $(c) $(f) $(objs) -c useComplexe.c
 complexe.o:complexe.c complexe.h
            $(c) $(f) -c complexe.c
