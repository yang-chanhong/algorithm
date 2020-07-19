#!/bin/bash
#echo "파라미터 개수 : $#"
#echo "첫 번째 파라미터 : $1"
#echo "모든 파라미터 내용 : $@"

rm ./$1.exe
make SRC=$1 OSENV=LINUXOS