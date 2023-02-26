#!/bin/bash
set -xe

g++ $1 -o a.out
valgrind --track-origins=yes -s --leak-check=full ./a.out
