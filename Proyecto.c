#include <stdio.h>
#include <unistd.h>
#include <string.h>


void main()
{
    ///Utilice n para que ingreses la tarea 1, m para cuantas tareas, r para las respuestas, a para los nombres de las tareas
    //i para los ciclos for al igual que j,x y g, dia para el dia en que te metes a la agenda, y para los dias de entrega, z para el mes de la agenda
    int n,m,r,a,i,j,x,dia,y,z,g;  
    char tareas[20][100];
    int dias[200];
    int meses[20];
    FILE *pr;
   
    
    
    printf("\t\t\t\t\tWenos dias a sus tareas mensuales :v \t\n\n\tCuantas tareas tiene?\t"); ///inicio de todo, el numero de tareas 
    scanf("%d", &m); // "m" Sera la referencia para todo los demas fors, ya que estipulara hasta cuando te preguntaran de cada cosa 
    
    if(m > 0 && m < 101)
	{
		puts("\n\tTodo bien :), tu puedes campeon\n");
	}
	else
	{
		puts("Dato invalido, vuelva a ejecutar la agenda e introduzca un numero entero :)");
		exit(-1); /// esto lo puse por si te equivocas o no pones algo bien, tengas que reiniciar el programa
	}
  	system("PAUSE()"); /// esto para que no sea inmediata la respuesta despues de ingresar algo
    
    for(x=m;x==m;x++)
    {
	
		for(n=1;n<=m;n++) ///Aqui ingresas el nombre de las tareas 
		{
			system("cls");  /// PAra limpiar la consola y no se vea todo amontonado 
	        printf("\t\t\t\t\tTareas Mensuales\t\n\n\tIngrese el nombre de la tarea %d:\t ", n);
	        scanf("%s",&tareas[n]);   /// aqui guardo cada cosa que ingresas en un espacio del array 
	        printf("\n\tUsted escribio: %s? \n\t1- Si\n\t2- No\n\t\n\tIngrese 1 o 2: \t", tareas[n]);  
	        scanf("%i",&r);
	        if(r==2)
			{
	        	n--;
			}
			else if(r==1)
			{
				continue; /// si esta todo bien, saltas al siguiente cilo for
			}
			else
			{
				printf("\nOpcion incorrecta, seleccione una opcion valida  e introduzca de nuevo la tarea\n");
				n--;
				system("PAUSE()");
			}	
			     
		}
		for(g=1;g<=1;g++) ///Este es para el dia en que se ingresa a la agenda
		{
		
			system("cls");
			printf("\t\t\t\t\tAgenda Mensual\t\n\n\tQue dia es hoy?\t ");
			scanf("%d",&dia);
			
			
			if(dia > 0 && dia < 32 )
			{
				printf("\n\tUsted escribio: %d? \n\t1- Si\n\t2- No\n\t\n\tIngrese 1 o 2: \t", dia);  
	        	scanf("%d",&r);
	    
					if(r==2)
					{
		        	g--;
					}
					else if(r==1)
					{
					continue;
					}
					else
					{
					printf("\nOpcion o valor incorrecto, introduzca de nuevo el dia y seleccione una opcion valida\n\n");
					g--;
						system("PAUSE()");
					}
					 
			}
			else
			{
				printf("\nOpcion o valor incorrecto, introduzca de nuevo el dia y seleccione una opcion valida\n\n");
				g--; /// algo parecido en otros ciclos, es para que puedas ingresas de nuevo la opcion en caso de que te hayas equivocado o puesto una opcion mal
				system("PAUSE()");
			}
		}
		 
			
		  
		for(i=1;i<=m;i++) ////Este es para el dia de las tareas
		{
			system("cls");
			
	        printf("\t\t\t\t\tTareas Mensuales\t\n\n\tPara que dia es la tarea de %s:\t ", tareas[i]);
	        scanf("%d",&y);
	      	dias[i]=y;
	      			
	        	if(y > 0 && y < 32 && y>=dia)/// aqui el dia de entrega de la tarea tiene que ser mayor o igual al dia en que ingresas, no acepta tareas de antes del dia de ingreso
				{
					printf("\n\tUsted escribio: %d? \n\t1- Si\n\t2- No\n\t\n\tIngrese 1 o 2: \t", dias[i]);  
	        		scanf("%d",&r);
	        
					if(r==2)
					{
		       		i--;
					}
					else if(r==1)
					{
					continue;
					}
					else
					{
					printf("\nOpcion o valor incorrecto, introduzca de nuevo el dia y seleccione una opcion valida\n\n");
					i--;
					system("PAUSE()");
					}
				}
				else
				{
					printf("\nOpcion o valor incorrecto, introduzca de nuevo el dia y seleccione una opcion valida\n\n");
					i--;
					system("PAUSE()");
				}
			
		}
		
		
		for(j=1;j<=1;j++) //// Este es para estabelecer el mes
		{
			system("cls");
	        printf("\t\t\t\t\tTareas Mensuales\t\n\n\tPara que mes son las tareas?\t");
	        scanf("%d",&z);
			if(z > 0 && z < 13)
			{
				printf("\n\tUsted escribio: %d? \n\t1- Si\n\t2- No\n\t\n\tIngrese 1 o 2: \t", z);  
	        	scanf("%d",&r);
	        
				if(r==2)
				{
	        	j--;
				}
				else if(r==1)
				{
				continue;
				}
				else
				{
					printf("\nOpcion o valor incorrecto, introduzca de nuevo el mes y seleccione una opcion valida\n\n");
					j--;
					system("PAUSE()");
				}
			}
			else
			{
				printf("\nOpcion o valor incorrecto, introduzca de nuevo el mes y seleccione una opcion valida \n\n");
				j--;
				system("PAUSE()");
			}
			     
		}
	}
	
	
    system("cls");
    
	printf("\t\t\t\t\tTareas Mensuales\t\n\n\tSus tareas pendientes a la fecha de %d / %d / 2021 son: \n\n",dia,z); 
	 
	for(i=1,j=1;i<=m;i++,j++)///Esto te dice la importancia de cada tarea dependiendo del dia ingresado y el dia de entrega de la tarea 
	{
		printf("\t%s: ",tareas[j]);
		printf("para el ");
		printf("%d / %d / 2020\n",dias[i],z);
		
		if(dias[i]>=dia && dias[i]<dia+2)/// si hay una diferencia de 2 dias entre el dia que ingresas y la entrega, te marcara la primera condicional 
		{
			printf("\tLa tarea de %s es urgente, hazla ya!!!\n\n",tareas[j]);
		}
		else if(dias[i]>dia && dias[i]<dia+7)/// aqui es para una diferencia de 7 dias 
		{
			printf("\tLa tarea de %s la puedes hacer despues de esa partidad de Lol.\n\n",tareas[j]);
		}
		else
		{
			printf("\tLa tarea de %s la puedes dejar pa el ultimo dia, ok no, ve haciendo progresos ;).\n\n",tareas[j]); //// este ya es para más de 7 dias 
		}
	}
	
	pr = fopen("Proridades.txt","w+");
	fprintf(pr,"\t\t\t\t\tTareas Mensuales a la fecha de %d / %d / 2021\t\n\n",dia,z);
	for(i=1,j=1;i<=m;i++,j++)///Este ciclo te mandara el resultado a un archivo txt para no perder tus pendientes 
	{
		
		fprintf(pr,"\t%s: ",tareas[j]);
		fprintf(pr,"para el ");
		fprintf(pr,"%d / %d / 2020\n",dias[i],z);
		
		if(dias[i]>=dia && dias[i]<dia+2)/// si hay una diferencia de 2 dias entre el dia que ingresas y la entrega, te marcara la primera condicional 
		{
			fprintf(pr,"\tLa tarea de %s es urgente, hazla ya!!!\n\n",tareas[j]);
		}
		else if(dias[i]>dia && dias[i]<dia+7)/// aqui es para una diferencia de 7 dias 
		{
			fprintf(pr,"\tLa tarea de %s la puedes hacer despues de esa partidad de Lol.\n\n",tareas[j]);
		}
		else
		{
			fprintf(pr,"\tLa tarea de %s la puedes dejar pa el ultimo dia, ok no, ve haciendo progresos ;).\n\n",tareas[j]); //// este ya es para más de 7 dias 
		}
		
	}
	fprintf(pr,"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
	fprintf(pr,"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
	fprintf(pr,"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
	fprintf(pr,"\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\tTelera and Bolillo Associated");

	fclose(pr);
	
	printf("\tSe ha generado un archivo Prioridades.txt con sus pendientes del mes.\n");
	printf("\tBusquelo en la carpeta en la cual ejecuto este programa.\n");
	
}
  
  
