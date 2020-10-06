#include "Header.h"

int main(){
    int testcase[1];
    scanf("%d", testcase);
    int** count_all_case=malloc(sizeof(int*) * testcase[0]);

    readtestcase(testcase, count_all_case);

    for (int i=0; i<testcase[0]; i++){
    	count(count_all_case[i]);
    }
    for (int i=0; i<testcase[0]; i++){
    	print_case(count_all_case[i]);
    }
    for (int i=0; i<testcase[0]; i++)
	free(count_all_case[i]);
	
    free(count_all_case);
}



