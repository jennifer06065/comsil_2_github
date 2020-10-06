#include "Header.h"

void readtestcase(int* testcase, int** all_test_case){

    
    for (int i=0; i<testcase[0]; i++) {
	all_test_case[i]=malloc(sizeof(int)*10);
	for (int j=0; j<10; j++)
	    all_test_case[i][j]=0;
    }

}
