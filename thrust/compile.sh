#!/bin/bash
# usage: 1|2
set -e

nvcc -o test demo$1.cu

#nvvp ./test
#nvprof ./test

./test
