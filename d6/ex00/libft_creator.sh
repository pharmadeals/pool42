gcc -c *.c -Wall -Wextra -Werror
ar r libft.a *.o
ranlib libft.a
rm *.o
