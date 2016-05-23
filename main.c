#include <stdio.h>
int main() {
	char shiprow, shipcol;
	int bombrow, bombcol, i, j;
	char field[5][5];
	for(i = 0; i < 5; i++) {
		for(j = 0; j < 5; j++) {
			field[i][j] = '~';
		}
	}	
	random(&shiprow, &shipcol);
	shiprow = 1;
	shipcol = 1;
	i = 1;
	while(i < 25) {
		printf("\n\n________________________________________________________________________________________________"); 
		fflush(stdin);
		printf("\n\n Bomb at :");
		scanf("%d%d", &bombrow, &bombcol);
		while((bombrow > 4) || (bombcol > 4)) {

		if((bombrow == shiprow) && (bombcol == shipcol)) {
			printf("\n\n Congratulations!! :-D");
			printf("\n You won!!");
			return 0;
		}
		else {
			field[bombrow][bombcol] = 0;
		}	
		print_board(&field);
		i++;
	}
	printf("\n\n Game Over");
	return 0;
}
