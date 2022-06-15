
#include "main.h"

#define A	142
#define B	126
#define C	213
#define D	210
#define E	190
#define F	178
#define G	211
#define A2	118


void SystemClock_Config(void);
static void MX_GPIO_Init(void);
static void MX_TIM2_Init(void);


void BuzzerPlayNote(int prescalerfornote, int NoteDurationMs)
{
	HAL_TIM_PWM_Start(&htim2,TIM_CHANNEL_2);

		for(int i = 0; i<NoteDurationMs ; i++)
		{
			TIM2->PSC = prescalerfornote; //change prescaler for have the frequency of our note
			HAL_Delay(1);
		}
		TIM2->PSC=0;
	HAL_TIM_PWM_Stop(&htim2,TIM_CHANNEL_2);

}



int main(void)
{
  
  HAL_Init();

 
  SystemClock_Config();

 
  MX_GPIO_Init();
  MX_TIM2_Init();
 
 
  while (1)
  {

		//example
	  BuzzerPlayNote(A,500);
	  HAL_Delay(100);
	  BuzzerPlayNote(B,500);
	  HAL_Delay(100);
	  BuzzerPlayNote(C,500);
	  HAL_Delay(100);
	  BuzzerPlayNote(D,500);
	  HAL_Delay(100);
	  BuzzerPlayNote(E,500);
	  HAL_Delay(100);
	  BuzzerPlayNote(F,500);
	  HAL_Delay(100);
	  BuzzerPlayNote(G,500);
	  HAL_Delay(100);
	  BuzzerPlayNote(A2,500);


  }

}

