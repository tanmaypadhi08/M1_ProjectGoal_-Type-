#include "Sci_calc.h"
#include "unity.h"
void setUp()
{
}
void tearDown()
{
}
/////////////////
void test_sum(void)
{
  TEST_ASSERT_EQUAL(5.0, add(2.0,3.0));  // sum test case
  TEST_ASSERT_EQUAL(18.0, add(9.0,9.0));
}

void test_sub(void)
{
  TEST_ASSERT_EQUAL(99.0, sub(100.0,1.0));  // sub test case
  TEST_ASSERT_EQUAL(1.0, sub(10.0,9.0));
}

void test_product(void)
{
  TEST_ASSERT_EQUAL(20000.0, product(10000.0,2.0));  // product test case
  TEST_ASSERT_EQUAL(8.0, product(8.0,1.0));
}

void test_div(void)
{
  TEST_ASSERT_EQUAL(1.0, div(2.0,2.0));  // div test case
  TEST_ASSERT_EQUAL(10000.0, div(8000000.0,800.0));
}

void test_sqr(void)
{
  TEST_ASSERT_EQUAL(25.0, sqr(5.0));  // sqr test case
  TEST_ASSERT_EQUAL(998001.0,sqr(999.0));
}

void test_k_m(void)
{
  TEST_ASSERT_EQUAL(1.0, k_m(1024.0));  // k_m test case
  TEST_ASSERT_EQUAL(1024.0,k_m(1048576.0));
}

void test_m_k(void)
{
  TEST_ASSERT_EQUAL(1024.0, m_k(1.0));  // m_k test case
  TEST_ASSERT_EQUAL(1048576.0,m_k(1024.0));
}

void test_m_g(void)
{
  TEST_ASSERT_EQUAL(1.0, m_g(1024.0));  // m_g test case
  TEST_ASSERT_EQUAL(1024.0,m_g(1048576.0));
}

void test_g_m(void)
{
  TEST_ASSERT_EQUAL(1024.0, g_m(1.0));  // g_m test case
  TEST_ASSERT_EQUAL(1048576.0,g_m(1024.0));
}

void test_r_d(void)
{
  TEST_ASSERT_EQUAL(1.0, r_d(75.3235));  // r_d test case
  TEST_ASSERT_EQUAL(13276.0,r_d(1000000.0));
}

void test_d_r(void)
{
  TEST_ASSERT_EQUAL(75.3235, d_r(1.0));  // d_r test case
  TEST_ASSERT_EQUAL(999994.786,d_r(13276.0));
}

void test_r_e(void)
{
  TEST_ASSERT_EQUAL(1.0, r_e(85.7558));  // r_e test case
  TEST_ASSERT_EQUAL(11661.0,r_e(1000000.0));
}

void test_e_r(void)
{
  TEST_ASSERT_EQUAL(85.7558, e_r(1.0));  // e_r test case
  TEST_ASSERT_EQUAL(999998.384,e_r(11661.0));
}

void test_cm_m(void)
{
  TEST_ASSERT_EQUAL(1.0, cm_m(100.0));  // cm_m test case
  TEST_ASSERT_EQUAL(1000000.0,cm_m(100000000.0));
}

void test_m_cm(void)
{
  TEST_ASSERT_EQUAL(100.0, m_cm(1.0));  // m_cm test case
  TEST_ASSERT_EQUAL(100000000.0,m_cm(1000000.0));
}

void test_m_km(void)
{
  TEST_ASSERT_EQUAL(1.0, m_km(1000.0));  // m_km test case
  TEST_ASSERT_EQUAL(100000.0,m_km(100000000.0));
}

void test_km_m(void)
{
  TEST_ASSERT_EQUAL(1000.0, km_m(1.0));  // km_m test case
  TEST_ASSERT_EQUAL(1000000000.0,km_m(1000000.0));
}


int main(void){
  UNITY_BEGIN();
  RUN_TEST(test_sum);
  RUN_TEST(test_sub);
  RUN_TEST(test_product);
  RUN_TEST(test_div);
  RUN_TEST(test_sqr);
  RUN_TEST(test_k_m);
  RUN_TEST(test_m_k);
  RUN_TEST(test_m_g);
  RUN_TEST(test_g_m);
  RUN_TEST(test_r_d);
  RUN_TEST(test_d_r);
  RUN_TEST(test_r_e);
  RUN_TEST(test_e_r);
  RUN_TEST(test_cm_m);
  RUN_TEST(test_m_cm);
  RUN_TEST(test_m_km);
  RUN_TEST(test_km_m);

  return UNITY_END();
}