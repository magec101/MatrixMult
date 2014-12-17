/* Generated file, do not edit */

#ifndef CXXTEST_RUNNING
#define CXXTEST_RUNNING
#endif

#include <cxxtest/TestListener.h>
#include <cxxtest/TestTracker.h>
#include <cxxtest/TestRunner.h>
#include <cxxtest/RealDescriptions.h>
#include <cxxtest/TestMain.h>
#include <cxxtest/XmlPrinter.h>

int main( int argc, char *argv[] ) {
 int status;
    CxxTest::XmlPrinter tmp;
    CxxTest::RealWorldDescription::_worldName = "cxxtest";
    status = CxxTest::Main< CxxTest::XmlPrinter >( tmp, argc, argv );
    return status;
}
bool suite_MatrixMultTest_init = false;
#include "/var/www/html/codeit/workspace/MatrixMult/src/MatrixMultTest.h"

static MatrixMultTest suite_MatrixMultTest;

static CxxTest::List Tests_MatrixMultTest = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_MatrixMultTest( "/var/www/html/codeit/workspace/MatrixMult/src/MatrixMultTest.h", 5, "MatrixMultTest", suite_MatrixMultTest, Tests_MatrixMultTest );

static class TestDescription_suite_MatrixMultTest_test_Unit_Test_1 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MatrixMultTest_test_Unit_Test_1() : CxxTest::RealTestDescription( Tests_MatrixMultTest, suiteDescription_MatrixMultTest, 15, "test_Unit_Test_1" ) {}
 void runTest() { suite_MatrixMultTest.test_Unit_Test_1(); }
} testDescription_suite_MatrixMultTest_test_Unit_Test_1;

static class TestDescription_suite_MatrixMultTest_test_Unit_Test_2 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MatrixMultTest_test_Unit_Test_2() : CxxTest::RealTestDescription( Tests_MatrixMultTest, suiteDescription_MatrixMultTest, 20, "test_Unit_Test_2" ) {}
 void runTest() { suite_MatrixMultTest.test_Unit_Test_2(); }
} testDescription_suite_MatrixMultTest_test_Unit_Test_2;

#include <cxxtest/Root.cpp>
const char* CxxTest::RealWorldDescription::_worldName = "cxxtest";
