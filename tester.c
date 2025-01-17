#include <stdio.h>
#include <unistd.h>

/*int main()
{
	char *test1 =  "LALal";
	long test2 = 8188818818;
	char *test3 = NULL;

	printf("Thies is %p stricly for the %s, for the %ld purposes %s of the test ", test3, test1, test2, test3);
	return(0);



} */


void ft_putstr( char *s)
{
	while(*s)
	{
		write(1, s, 1);
		s++;
	}

}

int main()
{
	char *s ="KAKKAKA";
	ft_putstr(s);
	return(0);
}

