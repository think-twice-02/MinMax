/**
  ******************************************************************************
  * @file    main.c
  * @author  Fares Hajlaoui
  * @brief   supporting multiple platforms 
  * @version V9.10.1
  * @date    26-10-2022
  *****************************************************************************/
/* Includes ------------------------------------------------------------------*/

/* Macros --------------------------------------------------------------------*/

#define INTEL
#define MIN
 
#define OTHERS
#define MAX 

/* Private function prototypes -----------------------------------------------*/
static  int min(int  var1 , int var2);
static  int max(int  var1 , int var2);
/* Private functions ---------------------------------------------------------*/

/**
  * @brief  Main program
  * @param  var1 and var2 
  * @retval None
  */

int main(void)
{
#ifdef MIN
 int ResultMin=min(10,1);
#endif
 
 #ifdef MAX
int ResultMax=max(101,11);
#endif

  while (1)
  {
   
  }
  
}

#ifdef MAX                            /* Function call for MAX, will return the maximum of two variables */
static  int max(int var1 , int var2) {
  return(((var1) > (var2)) ? (var1) : (var2)); 
}
#endif

#ifdef MIN                             /* Function call for MIN, will return the minimum of two variables */
static  int min(int var1 , int var2) {
  return(((var1) < (var2)) ? (var1) : (var2)); 
}
#endif

/**************************************END OF FILE**************************************/