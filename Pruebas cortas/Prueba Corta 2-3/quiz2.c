#include <stdio.h>
#include <math.h>

//Exponente pero entero
//https://www.delftstack.com/es/howto/c/exponents-in-c/#:~:text=exponenciaci%C3%B3n%20en%20C.-,Usar%20pow%20como%20funci%C3%B3n%20de%20exponenciaci%C3%B3n%20en%20C,de%20herramientas%20del%20compilador%20gcc%20.
int exponentInt(const int base, int n){
    int i, p = base;
    for (i = 1; i < n-1; ++i)
        p *= base;
    return p;
}

// Va posicionando los valores que entran en su respectiva posicion del haming
// Los primero 7 bits (7,6,5,4,3,2,1) Posiciones en hamming (3,5,6,7,9,10,11)
// BIT -> HAMMING
// (7->3),(6->5),(5->6),(4->7),(3->9),(2->10),(1->11)
int hamming_CalBits(int var) {

	int bit1=0;
	int bit2=0;
	int bit4=0;
	int bit8=0;
	int hamming=0;

	//printf("hamming %d\n",hamming);
	//printf("var&1 == 1 %d\n",var&1);
	if ((var&1) == 1){ // hace una mascara para saber si el bit 1 esta encendido posicion 11 hamming 
		bit1+=1;		//influye en el bit de pariedad 1
		bit2+=1;		//influye en el bit de pariedad 2
		bit8+=1;		//influye en el bit de pariedad 8
		hamming += 1;
		//printf("Entre a bit 1\n");
	}

	//printf("------------------------------------- \n");
	//printf("hamming %d\n",hamming);
	//printf("var&2 == 2 -> %d\n",var&2);
	//printf("var-> %d\n",var);
	if ((var&2) == 2){ // hace una mascara para saber si el bit 2 esta encendido posicion 10 hamming
		bit2+=1;		//influye en el bit de pariedad 2
		bit8+=1;		//influye en el bit de pariedad 8
		hamming += 2;
		//printf("Entre a bit 2\n");
	}

	//printf("------------------------------------- \n");
	//printf("hamming %d\n",hamming);
	//printf("var&4 == 4 -> %d\n",var&4);
	if ((var&4) == 4){ // hace una mascara para saber si el bit 3 esta encendido posicion 9 hamming
		bit1+=1;		//influye en el bit de pariedad 1
		bit8+=1;		//influye en el bit de pariedad 8
		hamming += 4;
		//printf("Entre a bit 3\n");
	}
	if ((var&8) == 8){ // hace una mascara para saber si el bit 4 esta encendido posicion 7 hamming
		bit1+=1;		//influye en el bit de pariedad 1
		bit2+=1;		//influye en el bit de pariedad 2
		bit4+=1;		//influye en el bit de pariedad 4
		hamming += 16;
		//printf("Entre a bit 4\n");
	}
	if ((var&16) ==16){ // hace una mascara para saber si el bit 5 esta encendido posicion 6 hamming
		bit2+=1;		//influye en el bit de pariedad 2
		bit4+=1;		//influye en el bit de pariedad 2
		hamming += 32;
		//printf("Entre a bit 5\n");
	}
	if ((var&32) == 32){ // hace una mascara para saber si el bit 6 esta encendido posicion 5 hamming
		bit1+=1;		//influye en el bit de pariedad 1
		bit4+=1;		//influye en el bit de pariedad 2
		hamming += 64;
		//printf("Entre a bit 6\n");
	}
	if ((var&64) == 64){ // hace una mascara para saber si el bit 7 esta encendido posicion 3 hamming
		bit2+=1;		//influye en el bit de pariedad 1
		bit1+=1;		//influye en el bit de pariedad 2
		hamming += 256;
		//printf("Entre a bit 7\n");
	}	

	//printf("Resultado bits %d\n%d\n%d\n%d\n",bit1,bit2,bit4,bit8);
	
	if((bit1 % 2) != 0){
		//printf("bit1 es impar \n");
    	hamming += 1024;
    } 
    if((bit2 % 2) != 0){
    	//printf("bit2 es impar \n");
    	hamming += 512;
    } 
    if((bit4 % 2) != 0){
    	//printf("bit4 es impar \n");
    	hamming += 128;
    } 
    if((bit8 % 2) != 0){
    	//printf("bit8 es impar \n");
    	hamming += 8;
    } 

    return hamming;
}
// Va verificar 
// Los primero 11 bits (7,6,5,4,3,2,1) 4 deverificacion 

int hamming_VeriBits(int var) {

	int bit1=0;
	int bit2=0;
	int bit4=0;
	int bit8=0;
	int error=0;
	int hamming_verificado=0;

	//printf("var&2 == 2 -> %d\n",var&1);
	if ((var&1) == 1){ // hace una mascara para saber si el bit 1 esta encendido 
		bit1++;		//influye en el bit de pariedad 1
		bit2+=1;		//influye en el bit de pariedad 2
		bit8+=1;		//influye en el bit de pariedad 8
		hamming_verificado += 1;
		//printf("Entre a bit 1\n");
	}
	//printf("BIT 11  bit2 resultante: %d\n", bit2);

	//printf("var&2 == 2 -> %d\n",var&2);
	if ((var&2) == 2){ // hace una mascara para saber si el bit 2
		bit2++;		//influye en el bit de pariedad 2
		bit8+=1;		//influye en el bit de pariedad 8
		hamming_verificado += 2;
		//printf("Entre a bit 2\n");
	}
	//printf("BIT 10  bit2 resultante: %d\n", bit2);

	//printf("var&4 == 4 -> %d\n",var&4);
	if ((var&4) == 4){ // hace una mascara para saber si el bit 3 esta encendido 
		bit1+=1;		//influye en el bit de pariedad 1
		bit8+=1;		//influye en el bit de pariedad 8
		hamming_verificado += 4;
		//printf("Entre a bit 3\n");
	}
	//printf("var&8 == 8 -> %d\n",var&8);
	if ((var&8) == 8){ // hace una mascara para saber si el bit 4 esta encendido 
		bit8+=1;		//influye en el bit de pariedad 8
		//printf("Entre a bit 4\n");
	}

	//printf("var&16 == 16 -> %d\n",var&16);
	if ((var&16) ==16){ // hace una mascara para saber si el bit 5 esta encendido 
		bit1+=1;		//influye en el bit de pariedad 1
		bit2+=1;		//influye en el bit de pariedad 2
		bit4+=1;		//influye en el bit de pariedad 2
		hamming_verificado += 8;
		//printf("Entre a bit 5\n");
	}
	//printf("BIT 7  bit2 resultante: %d\n", bit2);

	//printf("var&32 == 32 -> %d\n",var&32);
	if ((var&32) == 32){ // hace una mascara para saber si el bit 6 esta encendido 
		bit2+=1;		//influye en el bit de pariedad 2
		bit4+=1;		//influye en el bit de pariedad 4
		hamming_verificado += 16;
		//printf("Entre a bit 6\n");
	}
	//printf("BIT 6  bit2 resultante: %d\n", bit2);

	//printf("var&64 == 64 -> %d\n",var&64);
	if ((var&64) == 64){ // hace una mascara para saber si el bit 7 esta encendido 
		bit4+=1;		//influye en el bit de pariedad 1
		bit1+=1;		//influye en el bit de pariedad 4
		hamming_verificado += 32;
		//printf("Entre a bit 7\n");
	}

	//printf("var&128 == 128 -> %d\n",var&128);	
	if ((var&128) == 128){ // hace una mascara para saber si el bit 8 esta encendido 
		bit4+=1;		//influye en el bit de pariedad 4
		//printf("Entre a bit 8\n");
	}
	//printf("var&256 == 256 -> %d\n",var&256);
	if ((var&256) == 256){ // hace una mascara para saber si el bit 9 esta encendido posicion 3 hamming
		bit2+=1;		//influye en el bit de pariedad 2
		bit1+=1;		//influye en el bit de pariedad 1
		hamming_verificado += 64;
		//printf("Entre a bit 9\n");
	}
	//printf("BIT 3  bit2 resultante: %d\n", bit2);


	//printf("var&512 == 512 -> %d\n",var&512);
	if ((var&512) == 512){ // hace una mascara para saber si el bit 10 esta encendido 
		bit2+=1;		//influye en el bit de pariedad 2
		//printf("Entre a bit 10\n");
	}
	//printf("BIT 2  bit2 resultante: %d\n", bit2);

	//printf("var&1024 == 1024 -> %d\n",var&1024);
	if ((var&1024) == 1024){ // hace una mascara para saber si el bit 11 esta encendido
		bit1+=1;		//influye en el bit de pariedad 1
		//printf("Entre a bit 11\n");
	}

	//printf("Resultado bits %d\n%d\n%d\n%d\n",bit1,bit2,bit4,bit8);
	
	if(((bit1 % 2) != 0) ){
		//printf("bit1 es impar \n");
    	error+=1;
    } 
    if((bit2 % 2) != 0){
    	//printf("bit2 es impar \n");
    	error+=2;
    } 
    if((bit4 % 2) != 0){
    	//printf("bit4 es impar \n");
    	error+=4;
    } 
    if((bit8 % 2) != 0){
    	//printf("bit8 es impar \n");
    	error+=8;
    } 

    if(error != 0){
    	printf("Existe volteo de bit en el : %d\n",error);
    	
    } 

    //devuelve el valor del hamming ya verificado
    return hamming_verificado;
}

int main() {
    unsigned int var1=0;
    unsigned int hammingCal=0;
    unsigned int count=0;
    unsigned char error;
    unsigned int bit_error=0;
    unsigned int verificacion=0;

	printf("Ingrese numero hexadecimal: ");
    scanf(" %x", &var1);

    printf("Numero en hexadecimal recibido: %x\n",var1);
   
   	printf("------------------------------------- \n");
   	printf("         Calculando Hamming  \n");
    printf("------------------------------------- \n");
    while (var1!=0){
    	printf("Selecciono los primero 7 bits: %x\n", var1&127);
    	hammingCal += hamming_CalBits(var1) ;
    	var1 = var1 >> 7;
    	printf("var1 resultante: %x\n", var1);
	}
	printf("Hamming resultante: %x\n", hammingCal);

	printf("------------------------------------- \n");
   	printf("         Error a probocar  \n");
    printf("------------------------------------- \n");

	printf("Desea generar error (S/N): ");
    scanf(" %c", &error);

    while(error == 'S' | error == 's' ){
    	printf("Ingrese el numero de bit que desea volvear: ");
    	scanf(" %d", &bit_error);
    	hammingCal = hammingCal^exponentInt(2,bit_error);
    	printf("hamming error: %x\n", hammingCal);
    	
    	count = 1;

    	printf("Desea generar error (S/N): ");
    	scanf(" %c", &error);

    }

	printf("------------------------------------- \n");
   	printf("         Verificando Hamming  \n");
    printf("------------------------------------- \n");
	printf("hamming a veridicar: %x\n", hammingCal);
    while (hammingCal!=0){
    	printf("Selecciono los primero 11 bits: %x\n", hammingCal&2047);
    	verificacion += hamming_VeriBits(hammingCal) ;
    	hammingCal = hammingCal >> 11;
    	printf("hamming resultante: %x\n", hammingCal);
	}
	printf("Hexadecimal resultante de la verificacion: %x\n", verificacion);

    return 0;
}
 



