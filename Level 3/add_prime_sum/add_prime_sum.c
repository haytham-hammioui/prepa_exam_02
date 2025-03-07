#include <unistd.h>

int ft_atoi(char *str){
        int i = 0;
        int r = 0;
        while (str[i] >= '0' && str[i] <= '9'){
                r = r * 10 + str[i] - '0';
                i++;
        }
        return (r);
}

int is_prime(int i){
        int n = 2;
        while(n < i){
                if(i % n== 0)
                        return 0;
                n++;
        }
        return 1;
}

void ft_putnbr(int x){
        if(x > 9)
                ft_putnbr(x / 10);
        char c = x% 10 + '0';
        write(1, &c, 1);
}

int prime(int i){
        int sum = 0;
        int n = 2;
        while(n <= i){
                if(is_prime(n))
                        sum += n;
                n++;
        }
        return(sum);
}

int main(int ac, char **av){
        if(ac != 2 || av[1][0] == '-'){
                write(1, "0\n", 2);
                return (0);
        }
        int x = ft_atoi(av[1]);
        ft_putnbr(prime(x));
        write(1, "\n", 1);
}
