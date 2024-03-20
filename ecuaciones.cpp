#include<stdio.h>
#include<windows.h>
int Conversiones(int signo)
{
	switch(signo)
	{
		case '+':{
			signo=-1;
			break;
		}
		case '-':{
			signo=+1;
			break;
		}
		case '*':{
			signo=1/1;
			break;
		}
		case'/':{
			signo=1*1;
			break;
		}
	}
	return signo;
}
void proceso (float b/*ax*/, char c/*signo*/, float d/*b*/, float f /*c*/)
{
	float x;
	//paso 1 pasar a b
	c=Conversiones(c);
	printf(" \n\n\t %c", c);
	x=(f+(c*d));
		if(b==0)
	{
		printf("No se va a poder, NINGUN NUMERO SE PUEDE DIVIDIR ENTRE 0");
	}
	else
	{
		x=(x/b);
		printf("\n\n\tEl valor es: %f", x);
	}
	
}
main()
{
	int signoresul='+', signoax='+', signob='+';
	float val1=0, val2=0, val3=0;
	/*printf("Ingrese el signo");
	scanf("%c", &signo);
	signo=Conversiones(signo);
	printf("El signo es: %c", signo);*/
	printf("\n\n\t Te ense�are a realizar ecuaciones: \n\n\t");
	printf(" Ax+B=C \n\n\t");
	printf("\n\n\tIngrese el valor de 'Ax' (primer factor):  \n\n\t");
	scanf(" %f", &val1);
	printf("\n\n\t %f X", val1);
	printf("\n\n\tIngrese el signo de 'B' (segundo factor)\n\n\t");
	scanf(" %d", &signob);
	printf("\n\n\t  %f X %c", val1, signob);
	printf("\n\n\tIngrese el valor de 'B' (segundo factor):  \n\n\t");
	scanf(" %f", &val2);
	printf("\n\n\t %f X %c %f", val1, signob, val2);

	printf("\n\n\t %fX %c %f = ", val1, signob, val2);
	printf("\n\n\tIngrese el valor de 'C' (resultado):  \n\n\t");
	scanf(" %f", &val3);
	system("CLS");
	printf("\n\n\t %f X %c %f = %f", val1, signob, val2, val3);
	
	proceso(val1, signob, val2, val3 );
}
