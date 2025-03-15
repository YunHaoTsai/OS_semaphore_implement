編譯：
gcc -o p1 p1.c sem.c
gcc -o p2 p2.c sem.c
gcc -o p3 p3.c sem.c

執行：
./p1 &
./p2 &
./p3 &

邏輯：
為了不要讓 p1 偷跑我用了 sem_start 並把他扣至 -1 讓 p2, p3 都執行到整個才會開始 run

關於如何讓 p3 輸出兩次：
在 p1 時讓 sem_p1 扣至 -1
在 p2 時 讓 sem_p3 加至 2
p3 每輪皆把 sem_p1 +1 

