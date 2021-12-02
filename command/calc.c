/***************************calculator*********************************/
#include<stdio.h>
#define CALC_NUM(x) (x-'0')
void main()

{
	printf("***************************************************\n");
	printf("*               Calculator                        *\n");
	printf("***************************************************\n");
	printf("*                                                 *\n");
	printf("*              Enter e to quit                    *\n");
	printf("*                                                 *\n");
	printf("***************************************************\n\n");
	while(1){	
	char result;

	char bufr[128];
	read(0, bufr, 128);

	printf("bufr 0  %d buf 1 %c ;\n",bufr[0],bufr[1]);
	switch(bufr[1])

	{

    case '+':result=CALC_NUM(bufr[0])+CALC_NUM(bufr[2]);break;

	case '-':result=CALC_NUM(bufr[0])-CALC_NUM(bufr[2]);break;

	case '*':result=CALC_NUM(bufr[0])*CALC_NUM(bufr[2]);break;

	case '/':result=CALC_NUM(bufr[0])/CALC_NUM(bufr[2]);break;
	

	}
	if(bufr[0]=='e')
		break;
	else
		printf("%d %c %d = %d\n",CALC_NUM(bufr[0]),bufr[1],CALC_NUM(bufr[2]),result);
	}

}
