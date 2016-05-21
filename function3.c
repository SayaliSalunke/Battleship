

/*prints array on screen
  arguments: array pointer, 
  	     row count, 
	     column count
*/

void print_board(char **arr, int row, int col){
	int i, j;
	for(i = 0; i < row; i++){
		for(j = 0; j < col; j++){
			printf("%c  ", arr[i][j]);	
		}	
		printf("\n");
	}
}
