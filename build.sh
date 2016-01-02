for opt in "0" "1" "2" "s"
do
	gcc -O${opt} -m32 -o "./out-df-O${opt}-32" ./df-exp.c
        gcc -O${opt} -m32 -DVOLATILE -o "./out-df-O${opt}-32-volatile" ./df-exp.c
        gcc -O${opt} -m64 -o "./out-df-O${opt}-64" ./df-exp.c
        gcc -O${opt} -m64 -DVOLATILE -o "./out-df-O${opt}-64-volatile" ./df-exp.c
done

