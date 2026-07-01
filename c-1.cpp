#include <iostream>
using namespace std;
#include <cstring>

int main(int argc, char** argv) {
	 cout<<"HOlaaa"<<endl;
	 
	 // Diseñar un programa que permite leer Altura de 3 Alumnoss 
	 //Diseñar un programa que  grafique una lineal
	 //Primero, el modelo es mx+b=y
	 //para que sea mas facil digerir por parte del usuario
	//tiene que tener nombres amigables, 
	//ejemplo mb puede ser personas asistentes q asistiran al evento
	//y m puyede ser las personas que se van despues de cada hora
	//osea la constante de decrecimiento
	//Para que este numero no acceda a los negativos, debe haber un condicional que frene antes de llegar a lo negativos
	//porque no existen asistidores negativos
	//cnatidad de gente asistiran: cuantas perrsonas se van por hora x

	//EJEMPLO:
	//asistiran 200 personas a la boda y se iran 20 por hora una vez sean las 23
	//
	
	
	int people;//Personas
	int peopleDegree;//Pendiente
	int horaPastel;//Hora inicial
	int horaX;//Lo usaremos de Iterador
	int horaFinal=1;//Hora donde se almacena
	int ResetCheck;
	char HoraDN[3]="PM";
	int test=0;

	cout<<"Ingrese la cantidad de personas que asistiran:";
	cin>> people;

	cout<<"ingrese la cantidad de personas que se iran por hora";
	cin>>peopleDegree;

	cout<<"Ingrese la hora a la cual cortan la torta(Pm)";
	cin>>horaPastel;
	
	//Nose que paso
	while (test>0){   
		while (people-20*horaX==0){
			
			horaX++;

		}
		test=people-20*horaX++;
		}
	horaFinal=horaPastel+horaX;



	if (horaFinal>24)
		{
			horaFinal=horaFinal-24;
			ResetCheck++;
		
			if (strcmp(HoraDN,"PM")==0)
			{
				strcpy(HoraDN,"AM");
			}
			else{
				strcpy(HoraDN,"PM");
			
			// necesitamos 1: se reste 24 horas
			//switchee a Am y Pm, empieza en pm
			}
				 
		}
	
	cout<<"Aqui ya se veria todo";
	cout<<"A las "<<horaFinal<<" Se fueron todos los Que asistieron al evento"<<endl;

	//Solo falta defininir, una estrucutura para corroborar que este bien hecho
	//La hora es ultra importante
	
	
	return 0;
}