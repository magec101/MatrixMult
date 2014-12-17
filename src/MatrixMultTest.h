#include <cxxtest/TestSuite.h>

extern void matrixMultMain(int argc, const char** argv, int result[][3]);

class MatrixMultTest : public CxxTest::TestSuite
{

public:
	void setUp() {
	} 

	void tearDown(){
	}

    void test_Unit_Test_1(){
		TS_SKIP("Unit tests are skipped, please author unit tests, if required");
	}


   void test_Unit_Test_2()
	{
		int vector1[3][3] = { 1,2,3,4,5,6,7,8,9 };
		int vector2[3][3] = { 1,2,3,4,5,6,7,8,9 };
		int result[3][3];  
		const char* largv[] = {"1","1", "2", "3", "4", "5", "6", "7", "8", "9", "1", "2", "3", "4", "5", "6", "7", "8", "9", "" };
		
		int output[3][3] = { 1,4,9,16,25,36,49,64,81 } ;
	
	
		matrixMultMain(19, largv, result);
		/*int marks[10] = {50,50,50,50,50,50,50,50,50,50};
		float Avg=0.0;
		Avg = AvgMarksMain(marks);
		*/
	
	//	TS_ASSERT_EQUALS(10,10);
	
		TS_ASSERT_SAME_DATA(output, result, 9*sizeof(int));
	}
}; 