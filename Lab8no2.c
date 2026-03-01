#include <stdio.h>
int checkscore(char std[]);
int sq1(char std[]);
int hardest(char std[][10]);

int main() {
    int i,j;
    char ss[8], s[10], ans[8][10]={
        	{'A','B','A','C','C','D','E','E','A','D'},
			{'D','B','A','B','C','A','E','E','A','D'},
			{'E','D','D','A','C','B','E','E','A','D'},
			{'C','B','A','E','D','C','E','E','A','D'},
			{'A','B','D','C','C','D','E','E','A','D'},
			{'B','B','E','C','C','D','E','E','A','D'},
			{'B','B','A','C','C','D','E','E','A','D'},
			{'E','B','E','C','C','D','E','E','A','D'}};

	for(i = 0; i < 8; i++){
		for(j = 0;j < 10;j++){
			s[j] = ans[i][j];
		}
		printf("std %d => %d\n", (i+1), checkscore(s));
	}
	
	for(i = 0; i < 8; i++){
		ss[i] = ans[i][0];
	}
	printf("number of no.1 stat => %d\n", sq1(ss));
	
	printf("show no. of hardest => %d\n", hardest(ans));
}

int checkscore(char std[]){
	char keys[10] = {'D','B','D','C','C','D','A','E','A','D'};
	int score = 0, i;
	
	for(i = 0;i < 10; i++){
		if(std[i] == keys[i]){
			score++;
		}
	}
	return score;
}

int sq1(char std[]){
	int score = 0, i;
	
	for(i = 0;i < 8; i++){
		if(std[i] == 'D'){
			score++;
		}
	}
	return score;
}

int hardest(char std[][10]){
	int score = 0, i, j, s = 10, q;
	char keys[10] = {'D','B','D','C','C','D','A','E','A','D'};
	
	for(j = 0;j < 10;j++){
		for(i = 0; i < 8; i++){
			if(std[i][j] == keys[j]){
				score++;
			}
		}
		if(score < s){
			s = score;
			q = j;
		}
		score = 0;
	}
	
	return q + 1;
}
