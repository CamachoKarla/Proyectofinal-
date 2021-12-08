/* Este en un programa que con ayuda del teorema de pitagoras nos dara valores 
como un cateto y la hipotensam del triangulo, ademas que calcula el angulo que 
forma dos lados del triangulo rectagulo con ayuda de las razones trigonometricas*/

#include <stdio.h>
#include <stdlib.h>
#define _USE_MATH_DEFINES
#include <math.h>

int main (void)
{
   	 // Se introducen las variables que se van a ingresas//

   	 int operacion;
   	 float a, b, resultado;
   	 printf ("Ingresa el valor de a: ");
   	 scanf ("%f", &a);
   	 (void) getchar ();
   	 printf ("Ingresa el valor de b: ");
   	 scanf ("%f", &b);
   	 (void) getchar ();
	//Se selecionara la opcion que se quiere enonctrar
   	 printf ("Selecciona el valor de operacion.\n");
   	 printf ("\t1.- \265ngulo\n");
   	 printf ("\t2.- Hipotenusa\n");
   	 printf ("\t3.- Cateto opuesto\n");
   	 printf ("\t4.- Cateto adyacente\n");
   	 printf ("\t: ");
   	 do {
		/*Estas son las opercaciones que va arealizar el programa, dependiendo de 
		la opción que haya sido colocada*/

  	              scanf ("%d", &operacion);
        		(void) getchar ();
        		if (operacion<1||operacion>4)
        			printf ("Valor incorrecto. Ingr\202salo nuevamente.: ");
	       } while (operacion<1||operacion>4);
       	resultado=0;
    	//la operacion para sacar el ángulo sera tangente*/
    	if(operacion==1&&b!=0)
    		resultado=atan(a/b)*180.0/M_PI;
    	if(operacion==1&&b==0)
        		printf ("Error\n");
    	if(operacion==2)
    	    	resultado=sqrt(a*a+b*b);
   	if(operacion==3&&a>=b)
   		resultado=sqrt(a*a-b*b);
    	if(operacion==3&&a<b)
        		printf ("Error\n");
    	if(operacion==4&&b>=a)
        		resultado=sqrt(b*b-a*a);
    	if(operacion==4&&b<a)
        		printf ("Error\n");
    	printf ("Valor de resultado: %g\n", resultado);
    	putchar ("\n");
    	system ("pause");
    
		return 0;
}