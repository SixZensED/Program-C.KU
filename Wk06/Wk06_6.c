#include <stdio.h>

main() {
	int score[3][4] = {{10,20,15,18},{15,19,18,20},{12,18,20,19}};
	int i,j,odd = 0, even = 0;
	int days;
	
	for (i= 0;i< 3;i++) {
		for (j = 0;j<4;j++) {
			if (score[i][j] %2 == 1) {
				odd++;
			} else {
				even++;
			}
		}
	}
	printf("odd : %d\n",odd);
	printf("even : %d\n",even);
	getch();
}
