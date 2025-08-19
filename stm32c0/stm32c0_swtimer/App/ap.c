/*
 * ap.c
 *
 *  Created on: Aug 4, 2025
 *      Author: wh31028
 */
#include "ap.h"


static void infoCli(uint8_t argc, const char **argv);

void ledISR(void *arg)
{
  ledToggle(_DEF_CH1);
}

void testISR(void *arg)
{
  static uint32_t count = 0;
  uartPrintf(_DEF_CH1,"count %d\n",count++);
}


void apInit(void)
{
  cliInit();
  swtimerInit();
  ledInit();
  pwmInit();
  adcInit();
  buttonInit();
  uartInit();

  cliAdd("info", infoCli);

  uint8_t timer_ch;

  if(swtimerGetCh(&timer_ch)== true)
  {
    swtimerSet(timer_ch,
               ledISR,
               NULL,
                SWTIMER_LOOP,
                500);
    swtimerStart(timer_ch);
  }


}

void apMain(void)
{
  uint32_t pre_time = 0;

  ledSetDuty(_DEF_CH1, 100);
  while(1)
  {
    if(millis()-pre_time >= 500)
    {
      pre_time = millis();
//      ledToggle(_DEF_CH1);

    }


    cliMain();

  }
}



void infoCli(uint8_t argc, const char **argv)
{
  bool ret = false;

  if(argc == 1 && cliIsStr(argv[0],"test"))
  {
    cliPrintf("infoCli run test \n");
    ret = true;
  }

  if(argc == 2 && cliIsStr(argv[0],"print"))
  {
    uint8_t count;

    count = (uint8_t)cliGetData(argv[1]);
    for(int i=0;i<count;i++)
    {
      cliPrintf("print %d/%d\n",i+1,count);
    }
    ret = true;
  }

  if(argc ==1 && cliIsStr(argv[0],"button"))
  {
    while(cliKeepLoop())
    {
      for(int i=0;i<BUTTON_MAX_CH;i++)
      {
        cliPrintf("%d", buttonGetPressed(i));
      }
      cliPrintf("\n");
      delay(100);
    }
    ret = true;
  }

  if(ret == false)
  {
    cliPrintf("info test\n");
    cliPrintf("info print 0~10\n");
    cliPrintf("info button\n");
  }
}

