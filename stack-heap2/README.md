Based on https://courses.engr.illinois.edu/cs225/fa2022/resources/stack-heap/

Compile and run:
```
g++ stack2.cpp && size a.out && ./a.out
```

Check memory leaks:
```
valgrind --leak-check=full --tool=memcheck --leak-check=yes --track-origins=yes -s ./a.out
```

Example of avoiding memory leaks:
```
g++ heap2.cpp && size a.out && ./a.out
valgrind --leak-check=full -s ./a.out
```
