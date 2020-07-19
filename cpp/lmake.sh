#!/bin/bash
#echo "파라미터 개수 : $#"
#echo "첫 번째 파라미터 : $1"
#echo "모든 파라미터 내용 : $@"
CTARGET="1868"

rm ./${CTARGET}.exe
make SRC=${CTARGET} OSENV=LINUXOS