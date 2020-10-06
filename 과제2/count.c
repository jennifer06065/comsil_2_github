#include "Header.h"

void count (int* count_ztn){
    int page, k, j;
    
    getchar();
    scanf("%d", &page);
    for (int i=1; i<=page; i++){
	j=i;
    	while(j!=0){
	    k=j%10;
	    (count_ztn[k])++;
	    j=j/10;
	}
    }
}
