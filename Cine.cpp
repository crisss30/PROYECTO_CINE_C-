#include<iostream>
#include<fstream>
#include<string>
#include <iomanip>
#include<cstring>
using namespace std;
struct Boleto
{
	int pelicula;
	int sala;
	int horario;
	int combos;
	int asientofi;
	int asientoco;
  double paentradas1;
  double paentradas2;
	double paentradas3;
  int canentradas;
  double pacombo1;
  double pacombo2;
  double pacombo3;
  int cancombo;
  double totalpagar1;
  double totalpagar2;
  double totalpagar3;
};
Boleto ticket;
const string  NOM_ARCHIVO_SALA1= "Sala1.1.txt";
const string  NOM_ARCHIVO_SALA2= "Sala2.2.txt";
const string  NOM_ARCHIVO_SALA3= "Sala3.3.txt";
const string  NOM_ARCHIVO= "Boleteria.txt";
char menu();
void cartelera();
void registar();
int calidad();
void funcion_2D();
void funcion_2D_sub();
void funcion_2D_prime();
void Imprimir(char b[][12]);
void Limpiar(char b[][12]);
void grabar(char b[][12], char sala);
void grabar_boleto();
void leer_butaca(char b[][12], char sala);
void dulce_cine();
void mostrar_boleta();
void listar_boleta();
int main()
{
char butacas[6][12];
Limpiar(butacas);
int peli;
char opc;
do{
 
 opc = menu();
 system("cls");
 switch (opc)
 { 	
  case '1':
  system("cls");
  cartelera();
  break;
  
  case '2':
  system("cls");
  registar();
  int ca=calidad();
  bool salir=true;
  switch(ca)  {
  
  case 1:  
  system("cls");
  funcion_2D();
 
   while(salir)
  	{
  		int opd, resp;
          int f,c;
          system("cls");
          cout<<"\t------------------------------------------"<<endl;
          cout<<"\t[1] VER BUTACAS\n\t[2] RESERVAR BUTACAS\n\t[3] ELIMINAR\n\t[4]SALIR\n\tIngrese opcion: ";
          cout<<"\n\t------------------------------------------"<<endl;
          cin>>opd;
 		switch(opd){
          case 1:
               Imprimir(butacas); system("pause"); break;
          case 2:
               do{
                    cout<<"Reservar \n ";
                    leer_butaca(butacas,ca);
                    Imprimir( butacas );
                    cout<<"Ingrese la fila: ";
                    cin>>f;
					ticket.asientoco=f;
					cout<<"\nIngrese la columna:";
					cin>>c;
					ticket.asientoco=c;
                    if(f > 0 && f <= 6 && c > 0 && c <= 12){
                    if( butacas[f - 1][c - 1] == '*' ){
                         cout<<"Butaca no disponible.\n";
                         cin.get();
                    }
                    else{
                         butacas[f - 1][c - 1] = '*';
                         Imprimir( butacas );
                         grabar(butacas,ca);
                    }
               }
               cin.get();
               cout<<"Continuar(s/n): ";
               resp = cin.get();
          }while(resp == 's'); break;
          case 3:
               cout<<"Se limpiaron las butacas.\n";
               Limpiar(butacas); system("pause"); break;
          case 4:
          	salir = false;
          	break;
          }
		  }
          
          break;
 
  case 2:   
  system("cls");
  funcion_2D_sub();
  while(salir)
  {
 		 int opd, resp;
          int f,c;
          system("cls");
          cout<<"\t------------------------------------------"<<endl;
          cout<<"\t[1] VER BUTACAS\n\t[2] RESERVAR BUTACAS\n\t[3] ELIMINAR\n\t[4]SALIR\n\tIngrese opcion: ";
          cout<<"\n\t------------------------------------------"<<endl;
          cin>>opd;
 		switch(opd){
          case 1:
               Imprimir(butacas); system("pause"); break;
          case 2:
               do{
                    cout<<"Reservar \n ";
                    leer_butaca(butacas,ca);
                    Imprimir( butacas );
                    cout<<"Ingrese la fila: ";
                    cin>>f;
					ticket.asientoco=f;
					cout<<"\nIngrese la columna:";
					cin>>c;
					ticket.asientoco=c;
                    if(f > 0 && f <= 6 && c > 0 && c <= 12){
                    if( butacas[f - 1][c - 1] == '*' ){
                         cout<<"Butaca no disponible.\n";
                         cin.get();
                    }
                    else{
                         butacas[f - 1][c - 1] = '*';
                         Imprimir( butacas );
                         grabar(butacas,ca);
                    }
               }
               cin.get();
               cout<<"Continuar(s/n): ";
               resp = cin.get();
          }while(resp == 's'); break;
          
          case 3:
               cout<<"Se limpiaron las butacas.\n";
               Limpiar(butacas); system("pause"); break;
          case 4:
          	salir = false;
          	break;
          
		  }
		}                 
	
    
  break;
 
  case 3:    
  system("cls");
  funcion_2D_prime();
 while(salir){
  int opd, resp;
          int f,c;
          system("cls");
        cout<<"\t------------------------------------------"<<endl;
          cout<<"\t[1] VER BUTACAS\n\t[2] RESERVAR BUTACAS\n\t[3] ELIMINAR\n\t[4]SALIR\n\tIngrese opcion: ";
          cout<<"\n\t------------------------------------------"<<endl;
          cin>>opd;
 switch(opd){
          case 1:
               Imprimir(butacas); system("pause"); break;
          case 2:
               do{
                    cout<<"Reservar \n ";
                    leer_butaca(butacas,ca);
                    
                    Imprimir( butacas );
                    cout<<"Ingrese la fila: ";
                    cin>>f;
					ticket.asientoco=f;
					cout<<"\nIngrese la columna:";
					cin>>c;
					ticket.asientoco=c;
                    if(f > 0 && f <= 6 && c > 0 && c <= 12){
                    if( butacas[f - 1][c - 1] == '*' ){
                         cout<<"Butaca no disponible.\n";
                         cin.get();
                    }
                    else{
                         butacas[f - 1][c - 1] = '*';
                        
                         Imprimir( butacas );
                
                         grabar(butacas,ca);
                    }
               }
               cin.get();
               cout<<"Continuar(s/n): ";
               resp = cin.get();
          }while(resp == 's'); break;
          case 3:
               cout<<"Se limpiaron las butacas.\n";
               Limpiar(butacas); system("pause"); 
			   break;
          case 4:
          	salir = false;
          	break;
          }
		  }
		  
         
}
break;
}
if(opc=='3')
{
	system("cls");
 	dulce_cine();
}
 else if( opc=='4')
 {
 	system("cls");
 	mostrar_boleta();
 }
 else if( opc=='5')
 {
 	system("cls");
 	listar_boleta();
 }
 system("pause");
system("cls");
}while (opc!='6');
}
void cartelera ()
{
cout<<"\n\t\t\t[CGV CHEONGHAM]"<<endl;
cout<<"\t==============================================="<<endl;
cout<<"\n\t1. GUAZON"<<endl;
cout<<"\t2. EL ARO: CAPITULO FINAL"<<endl;
cout<<"\t3. SR. LINK"<<endl;
cout<<"\t4. FROZEN"<<endl;
cout<<"\t5. APOCALIPSIS ZOMBIE: EL FIN DEL MUNDO"<<endl;
cout<<"\n\t=============================================="<<endl;
}
void registar()
{
int peli;

cout<<"\t----------------------------------------"<<endl;
cout<<"\n\tBienvenido al cine CGV CHEONGHAM"<<endl;
cout<<"\n\t-------------------------------------"<<endl;
cout<<"\t¿ Que pelicula desea ver ? : ";
cin>>peli;
ticket.pelicula = peli;
}
int calidad()
{
	
int ca, ce;
cout<<"\t======================================"<<endl;
cout<<"\n\t1. 2D, REGULAR DOB.............17.00."<<endl;
cout<<"\t2. 2D, REGULAR SUB.............20.50."<<endl;
cout<<"\t3. 2D, PRIME DOB...............39.00."<<endl;
cout<<"\n\t====================================="<<endl;
cout<<"\n\t ¿EN QUE CALIDAD DESEA VER"<<endl;
cout<<"\t   LA PELICULA ?: ";
cin>>ca;
ticket.sala = ca;
cout<<"\t¿Cuantas de entradas que va comprar?: ";
cin>>ce;
ticket.canentradas = ce;
return ca;
}
void funcion_2D()
{
int fun;
cout <<"\n\n\t[ HORARIO 2D,REGULAR DOB ]" << endl;
cout <<"\t================================"<< endl;
cout<<"\n\t1. 1:20 pm"<<endl;
cout<<"\t2. 2:20 pm"<<endl;
cout<<"\t3. 4:00 pm"<<endl;
cout <<"\n\t================================"<< endl;
cout<<"\n\t¿QUE HORARIO VA ELERGIR? : ";
cin>>fun;
ticket.horario=fun;
}
void funcion_2D_sub()
{
int fun;
cout <<"\n\n\t[ HORARIO 2D,REGULAR SUB ]" << endl;
cout <<"\t================================"<< endl;
cout<<"\n\t1. 5:20 pm"<<endl;
cout<<"\t2. 7:20 pm"<<endl;
cout<<"\t3. 9:00 pm"<<endl;
cout <<"\n\t================================"<< endl;
cout<<"\n\t¿QUE HORARIO VA ELERGIR? : ";
cin>>fun;
ticket.horario=fun;
}
void funcion_2D_prime()
{
int fun;
cout <<"\n\n\t[ HORARIO 2D, PRIME DOB ]" << endl;
cout <<"\t================================"<< endl;
cout<<"\t1. 7:20 pm"<<endl;
cout<<"\t2. 9:00 pm"<<endl;
cout<<"\t3. 10:40 pm"<<endl;
cout <<"\n\t================================"<< endl;
cout<<"\n\t¿QUE HORARIO VA ELERGIR? : ";
cin>>fun;
ticket.horario=fun;
}
char menu()
{
cout<<"\n\t\t\t[CGV CHEONGHAM]"<<endl;
cout<<"\t==============================================="<<endl;
cout<<"\t[1] Mostrar Cartelera"<<endl;
cout<<"\t[2] Elegir Pelicula "<<endl;
cout<<"\t[3] Dulceria  "<<endl;
cout<<"\t[4] Vender boleto"<<endl;
cout<<"\t[5] Listar ventas"<<endl;
cout<<"\t[6] Fin de la compra"<<endl;
cout<<"\tIngresar opcion : ";
char opc;

fflush(stdin);

opc=getchar();
}

void Imprimir(char b[][12])
{
	    system("cls");
    cout<<"-------------------------------------------"<<endl;
    cout<<"\t\tPANTALLA"<<endl;
    cout<<"-------------------------------------------"<<endl;
 

     for(int i = 1; i <= 12; i++)

          cout<<setw(3)<<right<<i;

     cout<<endl;

     for(int i = 0; i < 6; i++){

          for(int j = 0; j < 12; j++){

               if(j == 0)

                    cout<< (char)('A' + i) << " ";

               cout<< setw(3) << left <<b[i][j];

          }

          cout<<endl<<endl;

     }

}
void grabar(char b[][12],char sala)
{

   string nombresala;
     
    if(sala == '1')      
	nombresala=NOM_ARCHIVO_SALA1;
	if(sala == '2')      
	nombresala=NOM_ARCHIVO_SALA2;
	if(sala == '3')      
	nombresala=NOM_ARCHIVO_SALA3;
    ofstream wEscribir;
    wEscribir.open(nombresala.c_str(),ios::out);
     for(int i = 0; i < 6; i++)
	 {

          for(int j = 0; j < 12; j++)
		  {
			 wEscribir<<b[i][j];
	
          }
wEscribir<<endl;
          
     }
     wEscribir.close();

}
void leer_butaca(char b[][12],char sala)
{
     ifstream wLeer;
     string nombresala;
     
    if(sala == '1')      
	nombresala=NOM_ARCHIVO_SALA1;
	if(sala == '2')      
	nombresala=NOM_ARCHIVO_SALA2;
	if(sala == '3')      
	nombresala=NOM_ARCHIVO_SALA3;
	
		wLeer.open(nombresala.c_str(),ios::in);
	if (!wLeer.is_open())
	{
		cout << "No se puede abrir el archivo " << nombresala<< endl;
		return ;
	}
	int i=0;
	string cadena;
	while (!wLeer.eof())
		{
	  getline(wLeer,cadena);
	  if(cadena.size()>0)
		{	
		
		for(int j=0; j<cadena.length(); j++)
		{
		
		   if (cadena.substr(j,1)=="*")
		         b[i][j] = '*';
		   else
		         b[i][j] = 176;
		
		}
		i++;
		}
	}
    
     wLeer.close();

}
void Limpiar(char b[][12])
{

     for(int i = 0; i < 6; i++)

          for(int j = 0; j < 12; j++)

               b[i][j] = 176;

}
void dulce_cine()
{
    
	char dulce;
	int cc;	
	    cout<<"¿Desea agregar canchita?"<<endl;
		cout<<"SI"<<endl;
		cout<<"NO"<<endl;
		cin>>dulce;
		switch(dulce)
		{
		
		case  'S':
			{
				
			
				int precio[3] = {18.50,30.00,39.00};
	        string canchita[3] = {"\t1 Canchita Gandre (salada)","1 Canchita Gigante", "1 Canchita Gigante (mix)"};
	        string bebidas[3] = {"+ 1 Bebida Grande (32 oz)","+ 2 Bebidas Grandes (32 oz)     ","+ 3 Bebidas Medianas (21 oz)"};
            string combo[3] = {"COMBO 1  OL CC","COMBO 2 Salada OL CC ","COMBO 3  MIZ OL CC"};
            cout << "PROMO   \t\t\t\t\tINCLUYE\t\t\t\tPRECIO" << endl;
	
                for (int i = 0; i < 3; i++)
				{
                	
					cout << "\n" << combo[i] << "\t" << canchita[i] << bebidas[i] << " \tS/. " << precio[i] << endl;
					
                }
                cout<<"\n¿Que combo va seleccionar?";
					cin>>ticket.combos;
					cout<<"\n¿Cuantos combos va querer?";
					cin>>cc;
					ticket.cancombo = cc;	
			}
			break;	
			case 'N':
			menu();
			break;	
			
        }
            
}
void mostrar_boleta()
{
  cout<<"\t-----------------------------------------------------"<<endl;
	cout<<"\t\t\t==> INFORME DE SU COMPRA <=="<<endl;
	cout<<"\t-----------------------------------------------------"<<endl;
	
	if (ticket.pelicula == 1)
	{
		cout<<"\n\t*Usted ha escogido la pelicula GUAZON"<<endl;
	}
	if(ticket.pelicula == 2)
	{
		cout<<"\t*Usted ha escogido la pelicula EL ARO: CAPITULO FINAL"<<endl;
	}
	if (ticket.pelicula == 3)
	{
		cout<<"\t*Usted ha escogido la pelicula FROZEN"<<endl;
	}
		if (ticket.sala ==1)
	{
		cout<<"\n\t*Tipo de sala 2D, REGULAR DOB, por el valor de S/. 17:00"<<endl;
		ticket.paentradas1 = ticket.canentradas * 17.00;
		cout<<"\t*El monto por las  entradas es de: "<<ticket.paentradas1<<endl;
	}
	
	if (ticket.sala == 2)
	{
		cout<<"\t*Tipo de sala 2D, REGULAR SUB, por el valor de S/.20.50"<<endl;
		ticket.paentradas2 = ticket.canentradas * 20.50;
		cout<<"\t*El monto por las entradas es de: "<<ticket.paentradas2<<endl;
			
	}
	if (ticket.sala == 3)
	{
		cout<<"\t*Tipo de sala 2D, PRIME DOB, por el valor de S/.39.00"<<endl;
		ticket.paentradas3 = ticket.canentradas * 39.00;
		cout<<"\t*El monto por las entradas es de: "<<ticket.paentradas3<<endl;
	}
	switch(ticket.sala)
	{
		case 1:
			if (ticket.horario == 1)
			{
				cout<<"\t*Usted escogio la funcion de las 1:20 pm"<<endl;
			}
			if(ticket.horario == 2)
			{
				cout<<"\t*Usted escogio la funcion de las 2:20 pm"<<endl;
			}
			if(ticket.horario == 3)
			{
				cout<<"\t*Usted escogio la funcion de las 4:00 pm"<<endl;
			}
		 break;
		 case 2:
		 	
			 if (ticket.horario == 1)
			{
				cout<<"\t*Usted escogio la funcion de las 5:20 pm"<<endl;
			}
			if(ticket.horario == 2)
			{
				cout<<"\t*Usted escogio la funcion de las 7:20 pm"<<endl;
			}
			if(ticket.horario == 3)
			{
				cout<<"\t*Usted escogio la funcion de las 9:00 pm"<<endl;
			}
			break;
		 case 3:
		 	
			 if (ticket.horario == 1)
			{
				cout<<"\t*Usted escogio la funcion de las 7:20 pm"<<endl;
			}
			if(ticket.horario == 2)
			{
				cout<<"\t*Usted escogio la funcion de las 9:00 pm"<<endl;
			}
			if(ticket.horario == 3)
			{
				cout<<"\t*tUsted escogio la funcion de las 10:40 pm"<<endl;
			}	
		}
	 if (ticket.combos ==1)
	{
		cout<<"\t*Usted escogio el Combo 1, por el valor de S/. 18.50 "<<endl;
		ticket.pacombo1 = ticket.cancombo * 18.50;
		cout<<"\t*El monto por el combos es de: "<<ticket.pacombo1<<endl;
	}
	if (ticket.combos == 2)
	{
		cout<<"\t*Usted escogio el Combo 2, por el valor de S/. 30.00 "<<endl;
		ticket.pacombo2 = ticket.cancombo * 30.00;
		cout<<"\t*El monto por el combos es de: "<<ticket.pacombo2<<endl;
	}
	if (ticket.combos == 3)
	{
		cout<<"\t*Usted escogio el Combo 3, por el valor de S/. 39.90 "<<endl;
		ticket.pacombo3 = ticket.cancombo * 39.90;
		cout<<"\t*El monto por elcombos es de: "<<ticket.pacombo3<<endl;
	}
	switch(ticket.sala)
	{
		case 1:
			if(ticket.combos==1)
			{
			 ticket.totalpagar1 = ticket.pacombo1 + ticket.paentradas1;
		 	cout<<"\t*El pago total de su compra es de: "<<ticket.totalpagar1<<endl;
	        }
	        else if(ticket.combos==2)
	        {
	        	ticket.totalpagar1 = ticket.pacombo2 + ticket.paentradas1;
		 	cout<<"\t*El pago total de su compra es de: "<<ticket.totalpagar1<<endl;
			}
			else if(ticket.combos==3)
	        {
	        	ticket.totalpagar1 = ticket.pacombo3+ ticket.paentradas1;
		 	cout<<"\t*El pago total de su compra es de: "<<ticket.totalpagar1<<endl;
			}
		 break;
		 
		 case 2:
		   if(ticket.combos==1)
			{
			 ticket.totalpagar2 = ticket.pacombo1 + ticket.paentradas2;
		 	cout<<"\t*El pago total de su compra es de: "<<ticket.totalpagar2<<endl;
	        }
	        else if(ticket.combos==2)
	        {
	        	ticket.totalpagar2 = ticket.pacombo2 + ticket.paentradas2;
		 	cout<<"\t*El pago total de su compra es de: "<<ticket.totalpagar2<<endl;
			}
			else if(ticket.combos==3)
	        {
	        	ticket.totalpagar2 = ticket.pacombo3 + ticket.paentradas2;
		 	cout<<"\t*El pago total de su compra es de: "<<ticket.totalpagar2<<endl;
			}
		 break;
		 
		 case 3:
		 if(ticket.combos==1)
			{
			 ticket.totalpagar3 = ticket.pacombo1 + ticket.paentradas3;
		 	cout<<"\t*El pago total de su compra es de: "<<ticket.totalpagar3<<endl;
	        }
	        else if(ticket.combos==2)
	        {
	        	ticket.totalpagar3 = ticket.pacombo2 + ticket.paentradas3;
		 	cout<<"\t*El pago total de su compra es de: "<<ticket.totalpagar3<<endl;
			}
			else if(ticket.combos==3)
	        {
	        	ticket.totalpagar3 = ticket.pacombo3 + ticket.paentradas3;
		 	cout<<"\t*El pago total de su compra es de: "<<ticket.totalpagar3<<endl;
			}
		 break;			 
	}
 cout<<"\n\tGrabar boleto:"<<endl;
 cout<<"\t[S] Si"<<endl;
 cout<<"\t[N] NO"<<endl;
 fflush(stdin);
  
 char pregunta =getchar();
 if(pregunta == 'S')
 {
 	grabar_boleto();
  }
}
void grabar_boleto()
{
    ofstream wEscribir;
    wEscribir.open(NOM_ARCHIVO.c_str(),ios::out);
   wEscribir<<"\t-----------------------------------------------------"<<endl;
	 wEscribir<<"\t\t\t==> INFORME DE SU COMPRA <=="<<endl;
	 wEscribir<<"\t-----------------------------------------------------"<<endl;
	
	if (ticket.pelicula == 1)
	{
		wEscribir<<"\t*Usted ha escogido la pelicula GUAZON"<<endl;
	}
	if(ticket.pelicula == 2)
	{
		wEscribir<<"\t*Usted ha escogido la pelicula EL ARO: CAPITULO FINAL"<<endl;
	}
	if (ticket.pelicula == 3)
	{
		wEscribir<<"\t*Usted ha escogido la pelicula FROZEN"<<endl;
	}
		if (ticket.sala ==1)
	{
		wEscribir<<"\n\t*Tipo de sala 2D, REGULAR DOB, por el valor de S/. 17:00"<<endl;
		ticket.paentradas1 = ticket.canentradas * 17.00;
		wEscribir<<"\t*El monto por las  entradas es de: "<<ticket.paentradas1<<endl;
	}
	
	if (ticket.sala == 2)
	{
		wEscribir<<"\t*Tipo de sala 2D, REGULAR SUB, por el valor de S/.20.50"<<endl;
		ticket.paentradas2 = ticket.canentradas * 20.50;
		wEscribir<<"\t*El monto por las entradas es de: "<<ticket.paentradas2<<endl;
			
	}
	if (ticket.sala == 3)
	{
		wEscribir<<"\t*Tipo de sala 2D, PRIME DOB, por el valor de S/.39.00"<<endl;
		ticket.paentradas3 = ticket.canentradas * 39.00;
		wEscribir<<"\t*El monto por las entradas es de: "<<ticket.paentradas3<<endl;
	}
	switch(ticket.sala)
	{
		case 1:
			if (ticket.horario == 1)
			{
				wEscribir<<"\t*Usted escogio la funcion de las 1:20 pm"<<endl;
			}
			if(ticket.horario == 2)
			{
				wEscribir<<"\t*Usted escogio la funcion de las 2:20 pm"<<endl;
			}
			if(ticket.horario == 3)
			{
				wEscribir<<"\t*Usted escogio la funcion de las 4:00 pm"<<endl;
			}
		 break;
		 case 2:
		 	
			 if (ticket.horario == 1)
			{
				wEscribir<<"\t*Usted escogio la funcion de las 5:20 pm"<<endl;
			}
			if(ticket.horario == 2)
			{
				wEscribir<<"\t*Usted escogio la funcion de las 7:20 pm"<<endl;
			}
			if(ticket.horario == 3)
			{
				wEscribir<<"\t*Usted escogio la funcion de las 9:00 pm"<<endl;
			}
			break;
		 case 3:
		 	
			 if (ticket.horario == 1)
			{
				wEscribir<<"\t*Usted escogio la funcion de las 7:20 pm"<<endl;
			}
			if(ticket.horario == 2)
			{
				wEscribir<<"\t*Usted escogio la funcion de las 9:00 pm"<<endl;
			}
			if(ticket.horario == 3)
			{
				wEscribir<<"\t*Usted escogio la funcion de las 10:40 pm"<<endl;
			}	
		}
	 if (ticket.combos ==1)
	{
		wEscribir<<"\t*Usted escogio el Combo 1, por el valor de S/. 18.50 "<<endl;
		ticket.pacombo1 = ticket.cancombo * 18.50;
		wEscribir<<"\t*El monto por el combos es de: "<<ticket.pacombo1<<endl;
	}
	if (ticket.combos == 2)
	{
		wEscribir<<"\t*Usted escogio el Combo 2, por el valor de S/. 30.00 "<<endl;
		ticket.pacombo2 = ticket.cancombo * 30.00;
		wEscribir<<"\t*El monto por el combos es de: "<<ticket.pacombo2<<endl;
	}
	if (ticket.combos == 3)
	{
		wEscribir<<"\t*Usted escogio el Combo 3, por el valor de S/. 39.90 "<<endl;
		ticket.pacombo3 = ticket.cancombo * 39.90;
		wEscribir<<"\t*El monto por elcombos es de: "<<ticket.pacombo3<<endl;
	}
	switch(ticket.sala)
	{
		case 1:
			if(ticket.combos==1)
			{
			 ticket.totalpagar1 = ticket.pacombo1 + ticket.paentradas1;
		 	wEscribir<<"\t*El pago total de su compra es de: "<<ticket.totalpagar1<<endl;
	        }
	        else if(ticket.combos==2)
	        {
	        	ticket.totalpagar1 = ticket.pacombo2 + ticket.paentradas1;
		 	wEscribir<<"\t*El pago total de su compra es de: "<<ticket.totalpagar1<<endl;
			}
			else if(ticket.combos==3)
	        {
	        	ticket.totalpagar1 = ticket.pacombo3+ ticket.paentradas1;
		 	wEscribir<<"\t*El pago total de su compra es de: "<<ticket.totalpagar1<<endl;
			}
		 break;
		 
		 case 2:
		   if(ticket.combos==1)
			{
			 ticket.totalpagar2 = ticket.pacombo1 + ticket.paentradas2;
		 	wEscribir<<"\t*El pago total de su compra es de: "<<ticket.totalpagar2<<endl;
	        }
	        else if(ticket.combos==2)
	        {
	        	ticket.totalpagar2 = ticket.pacombo2 + ticket.paentradas2;
		 	wEscribir<<"\t*El pago total de su compra es de: "<<ticket.totalpagar2<<endl;
			}
			else if(ticket.combos==3)
	        {
	        	ticket.totalpagar2 = ticket.pacombo3 + ticket.paentradas2;
		 	wEscribir<<"\t*El pago total de su compra es de: "<<ticket.totalpagar2<<endl;
			}
		 break;
		 
		 case 3:
		 if(ticket.combos==1)
			{
			 ticket.totalpagar3 = ticket.pacombo1 + ticket.paentradas3;
		 	wEscribir<<"\t*El pago total de su compra es de: "<<ticket.totalpagar3<<endl;
	        }
	        else if(ticket.combos==2)
	        {
	        	ticket.totalpagar3 = ticket.pacombo2 + ticket.paentradas3;
		 	wEscribir<<"\t*El pago total de su compra es de: "<<ticket.totalpagar3<<endl;
			}
			else if(ticket.combos==3)
	        {
	        	ticket.totalpagar3 = ticket.pacombo3 + ticket.paentradas3;
		 	wEscribir<<"\t*El pago total de su compra es de: "<<ticket.totalpagar3<<endl;
			}
		 break;			 
	}
	wEscribir.close();	
}
void listar_boleta()
{
	 ifstream wLeer;

     wLeer.open(NOM_ARCHIVO.c_str(),ios::in);
	if (!wLeer.is_open())
	{
		cout << "No se puede abrir el archivo " << NOM_ARCHIVO<< endl;
		return ;
	}
	int i=0;
	string pelicula, sala;
	while (!wLeer.eof())
		{
	  getline(wLeer,pelicula,';');
	  if(pelicula.size()>0)
		{	
		getline(wLeer,sala,';');
		cout<<pelicula<<" ";
		cout<<sala<<" ";
		cout<<endl;
		
		}
	}
	
	wLeer.close();
}
