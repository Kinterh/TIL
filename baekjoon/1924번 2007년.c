#include <stdio.h>

int main(void)
{
	int m, d, total=0;
	scanf("%d %d", &m, &d);
	for (int i = 1; i < m; i++)
	{
		if (i == 1 || i == 3 || i == 5 || i == 7 || i == 8 || i == 10 || i == 12)total += 31;
		else if (i == 4 || i == 6 || i == 9 || i == 11)total += 30;
		else if (i == 2)total += 28;
	}
	total += d;
	switch (total % 7)
	{
	case 0:printf("SUN"); break;
	case 1:printf("MON"); break;
	case 2:printf("TUE"); break;
	case 3:printf("WED"); break;
	case 4:printf("THU"); break;
	case 5:printf("FRI"); break;
	case 6:printf("SAT"); 
	}
}