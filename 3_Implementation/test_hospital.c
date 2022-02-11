#include"unity.h"

void setup()
{

}
 
 void teardown()
 {

 }

void test_checker()
{
    int cn=1;
    int expected_result=1;
    int actual_result=1;

checker();
}


 int test_main()
 {
     UNITY_BEGIN();

     RUN_TEST(test_checker);

     return UNITY_END();
 }