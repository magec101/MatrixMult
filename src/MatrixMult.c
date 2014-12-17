#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void input_vector(int vector[][3]);
void input_vector_CL1(int argc, const char** argv, int vector[][3]);
void MatrixMultpOperation(int vector1[][3], int vector2[][3], int result[][3]);

void matrixMultMain(int argc, const char** argv, int result[][3])
{
	int vector1[3][3];
	int vector2[3][3];

	if (argc < 2)  {
    	input_vector(vector1);
    	input_vector(vector2);
    } else {
		input_vector_CL1(argc, argv,vector1);
		input_vector_CL1(argc, argv,vector2);
    }
    	
    MatrixMultpOperation(vector1, vector2, result);
}

void MatrixMultpOperation(int vector1[][3], int vector2[][3], int result[][3])
{
	/* your code goes here */
	
	int i,j;
	
	for (i=0; i<3; i++) {
		for (j=0; j<3; j++)
		     result[i][j] = vector1[i][j] * vector2[i][j];
	}
    
    return;
    /*your code goes here*/
}

void input_vector(int vector[][3])
{
	int i, j;
	for (i=0; i<3; i++)
    {
    	for (j=0; j<3; j++)
    	{
    		scanf("%d", &vector[i][j]);
    	}
     }
}

void input_vector_CL1(int argc, const char** argv,int vector[][3] )
{
	static int k = 1;
	
	int i, j;

	for (i=0; i<3; i++)
	{
    	for (j=0; j<3; j++)
    	{
  //  		if (argv[k] != NULL)
    		if ( k < argc)
    		{
    			printf("Val is %s\n", argv[k]);
    			vector[i][j]= atoi(argv[k]);
    			k++;
    		}
    	}
    }
}

#ifndef __CXX_TEST_MAIN__

int main(int argc, const char** argv)
{
  int result[3][3];
  int i, j;
  
  matrixMultMain(argc, argv, result);
  
/*
  for (i=0; i<3; i++)
  {
		for (j=0; j<3; j++)
		{    
		        printf("%d  ", result[i][j]);
		}
		printf("\n");
  }
*/
/*
  for (i=0; i<3; i++)
  {
		for (j=0; j<3; j++)
		{    
		     if (j == 2)
		     	printf("%d", result[i][j]);
		     else
		        printf("%d  ", result[i][j]);
		}
		if (i != 2)
			printf("\n");

  }
*/
    //matrixMultMain(argc, argv);
    return 0;
}

#endif