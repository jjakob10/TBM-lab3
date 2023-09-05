all:
	gcc -Wall -g -o main *.c


sel:
	gcc -Wall -g -o main item.c selection_sort.c main.c

ins:
	gcc -Wall -g -o main item.c insertion_sort.c main.c

bb:
	gcc -Wall -g -o main item.c bubble_sort.c main.c

ss:
	gcc -Wall -g -o main item.c shaker_sort.c main.c

clean:
	rm -f main

run_sel: sel
	time ./main < in/unif_rand/1Kunif_rand.txt

run_ins: ins
	time ./main < in/unif_rand/1Kunif_rand.txt

run_bb: bb
	time ./main < in/unif_rand/1Kunif_rand.txt

run_ss: ss
	time ./main < in/unif_rand/1Kunif_rand.txt


