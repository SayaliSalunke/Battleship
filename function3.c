

/*prints array on screen*/

void printField(char **arr){
	int i, j;
	for(i = 0; i < 5; i++){
		for(j = 0; j < 5; j++){
			printf("%c  ", arr[i][j]);	
		}	
		printf("\n");
	}
}
