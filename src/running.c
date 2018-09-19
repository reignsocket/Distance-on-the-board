

#include <stdio.h>
#include <math.h>

void main()
{
	int nCases, i;
	scanf("%d", &nCases);
	for(i = 0; i < Casesn; i++){
		char begin[5], end[5];//Use begin and end to store the start and end positions of the pieces, respectively.
		scanf("%s %s", begin, end);
		int x, y;//Use x and y to store the distance between the start and end positions in the x and y directions, respectively.
		x = abs(begin[0] - end[0]);
		y = abs(begin[1] - end[1]);
		if(x == 0 && y == 0) printf("0 0 0 0\n"); //The starting and ending positions are the same, and all the pieces are taken 0 steps.
		else{
			if(x < y)
				printf("%d", y);//King's steps
			else
				printf("%d", x);
			if(x == y || x == 0 || y == 0)
				printf(" 1");//Queen's steps
			else
				printf(" 2");
			if(x == 0 || y == 0)
				printf(" 1"); //Car's steps
			else
				printf(" 2");
			if(abs(x - y) % 2 != 0)
				printf(" Inf\n"); //Elephant's steps
			else if(x == y)
				printf(" 1\n");
			else
				printf(" 2\n");

		}
	}
}
