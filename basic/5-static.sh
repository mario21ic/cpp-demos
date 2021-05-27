#!/bin/bash
set -e

gcc -static -o circuloSta circulo.c
ldd circuloSta
