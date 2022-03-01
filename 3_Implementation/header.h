//sci_calc.c
/**
 * @file Sci_calc.c
 * @author Tanmay Padhi
 * @brief 
 * @version 0.1
 * @date 2022-02-27
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include<stdio.h>
/**
 * @brief Here the function will calculate the sum of given parameters
 * 
 * @param num1 
 * @param num2 
 * @return float 
 */
float add(float num1,float num2)
{
return num1+num2;
}

/**
 * @brief Here the function will calulate the difference of two given parameters
 * 
 * @param num1 
 * @param num2 
 * @return float 
 */
float sub(float num1,float num2)
{
return num1-num2;
}

/**
 * @brief Here the function will find the product
 * 
 * @param num1 
 * @param num2 
 * @return float 
 */

float product(float num1,float num2)
{
return num1*num2;
}

/**
 * @brief Here the function will find the division of two parameters
 * 
 * @param num1 
 * @param num2 
 * @return float 
 */

float div(float num1,float num2)
{
return num1 / num2;
}

/**
 * @brief Here the function will find the square of two number
 * 
 * @param num1 
 * @return float 
 */

float sqr(float num1)
{
return num1*num1;
}

/**
 * @brief Here the function will convert kb to mb
 * 
 * @param kb 
 * @return float 
 */

float k_m(float kb)
{
return kb/1024;
}

/**
 * @brief Here the function will convert from mb to kb
 * 
 * @param mb 
 * @return float 
 */

float m_k(float mb)
{
return mb*1024;
}

/**
 * @brief Here the function will convert from mb to kb
 * 
 * @param mb 
 * @return float 
 */
float m_g(float mb)
{
return mb/1024;
}

/**
 * @brief Here the function will convert frm gb to mb
 * 
 * @param gb 
 * @return float 
 */
float g_m(float gb)
{
return gb*1024;
}

/**
 * @brief Here the function will convert from rupee to dollar
 * 
 * @param rupee 
 * @return float 
 */
float r_d(float rupee)
{
return rupee/75.3235;
}
/**
 * @brief Here the function will convert from dolar to rupee
 * 
 * @param dolr 
 * @return float 
 */
float d_r(float dolr)
{
return dolr*75.3235;
}

float r_e(float rupee)
{
return rupee/85.7558;
}

float e_r(float euro)
{
return euro*85.7558;
}

float cm_m(float cm)
{
return cm/100;
}

float m_cm(float m)
{
return m*100;
}

float m_km(float m)
{
return m/1000;
}

float km_m(float km)
{
return km*1000;
}


