N = new files dir
UP = update files - "UP-RD: rd update 0.1"
SV = "SV-T03: added task1,2,3"

gcc -std=c11 -Wall -Werror -Wextra file_name.c -o file_name
./hello

clang-format -n file_name.c
clang-format -i file_name.c