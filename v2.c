#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>


typedef struct product{
int code;
char nom[10];
int quantite;
float prix;
char date[20];
} produit;

produit pharx[]={
			{123423,"aproduit1",88,19},
			{857353,"dproduit2",154,1},
			{508732,"fproduit3",82,1},
			{839632,"cproduit4",98,10},
			{256522,"bproduit5",188,9},
			{284892,"iproduit6",1,49},
			{109684,"yproduit7",84,38},
			{188503,"zproduit8",78,54},
			{128574,"xproduit9",2,23}
}; 

int length = (sizeof(pharx))/(sizeof(pharx[0]));




int check(int x){
	int k=0;
	for ( int i=0 ; i<length ; i++ ){
		if(pharx[i].code==x){
			k=1;
			return 1;
		}
	}
	if(k==0){
		return 0;
	}
}

void acheterproduit (int cd,int length , int qt ){

	achep:
			printf("\n\n\t\t entrer le code de produit:");
			scanf("%d",&cd);
			int x=check(cd);
				if (x==0){
					printf("\n\n\t\tcode is invalid\n\n");
					goto achep;
				}
	int i;
	for(i=0;i<length;i++){
		if(pharx[i].code==cd){

			float ttc =pharx[i].prix+(((15*pharx[i].prix)/100));
			printf("votre produit est : \n");
			printf("nom: %s \n",pharx[i].nom);
			printf("prix: %.2f dh\n",pharx[i].prix);
			printf("prix TTC: %.2f dh\n",ttc);
			printf("quantite: %d \n",pharx[i].quantite);    
			break;
		}
		}


			combien:
		printf("\n\n\t\t tu veux acheter combien(quantite) :");
			scanf("%d",&qt);
			system("cls");

			if ( qt<0 || qt>pharx[i].quantite )
			{
				printf("\n \t la quantite dommender nest pas disponible(une valeur interieur %d):",pharx[i].quantite);
				goto combien;
			}
			else {
				pharx[i].quantite -= qt;
				
			}
			
			time_t tm;
		    time(&tm);
			printf("\n \t le produit a ete acheter \n\n");
			
			strcpy(pharx[i].date,ctime(&tm));
			
			printf("votre produit est : \n");
			printf("nom: %s \n",pharx[i].nom);
			printf("prix: %.2f dh\n",pharx[i].prix);
			printf("quantite: %d \n",pharx[i].quantite);
			printf("date d'achat : %s \n",pharx[i].date);
}

 void recherchproduit (int cd1,int length){

	recherp:
		printf("\n\n\t\t entrer le code de produit:");
			scanf("%d",&cd1);
	int i;
	for(i=0;i<length;i++){
		if(pharx[i].code==cd1){

			float ttc =pharx[i].prix+(((15*pharx[i].prix)/100));
			printf("votre produit est : \n");
			printf("code: %d \n",cd1);
			printf("nom: %s \n",pharx[i].nom);
			printf("prix: %.2f dh\n",pharx[i].prix);
			printf("prix TTC: %.2f dh\n",ttc);
			printf("quantite: %d \n",pharx[i].quantite);
			break;
		}
		}

if(pharx[i].code!=cd1){
	printf("\n \t Il n y a pas de produit pour ce code");
			goto recherp;
}
}


void allimenteproduit (int cd2,int length , int qt2){

	allep:
			printf("\n\n\t\t entrer le code de produit:");
			scanf("%d",&cd2);
				int x=check(cd2);
				if (x==0){
					printf("\n\n\t\tcode is invalid\n\n");
					goto allep;
				}
			
			
	int i;
	for(i=0;i<length;i++){
		if(pharx[i].code==cd2){

			float ttc =pharx[i].prix+(((15*pharx[i].prix)/100));
			printf("votre produit est : \n");
			printf("nom: %s \n",pharx[i].nom);
			printf("prix: %.2f dh\n",pharx[i].prix);
			printf("prix TTC: %.2f dh\n",ttc);
			printf("quantite: %d \n",pharx[i].quantite);
			break;
		}
	}
			combien:
		printf("\n\n\t\t tu veux allimenter combien(quantite) :");
			scanf("%d",&qt2);
                system("cls");
			if ( qt2<0 )
			{
				printf("\n \t la quantite tu veux allimenter nest pas disponible:");
				goto combien;
			}
			else {
				pharx[i].quantite += qt2;
			}

			printf("\n \t le produit a ete allimenter: ");
			
			printf("\n\t\tnom: %s \n",pharx[i].nom);
			printf("\t\tprix: %.2f dh\n",pharx[i].prix);
			printf("\t\tquantite: %d \n",pharx[i].quantite);
}
int main() {
	int choix;
	int length = (sizeof(pharx))/(sizeof(pharx[0]));
	char rvalue ;


	depart:
	printf("==========================MENU==========================\n\n\n");
	printf("\t\t1. ajouter un seul produit .\n\n");
	printf("\t\t----------------------------------\n");
	printf("\t\t2. ajouter plusieur produits .\n\n");
	printf("\t\t----------------------------------\n");
	printf("\t\t3. lister les produits .\n\n");
	printf("\t\t----------------------------------\n");
	printf("\t\t4. acheter un produit .\n\n");
	printf("\t\t----------------------------------\n");
	printf("\t\t5. recherche un produit .\n\n");
	printf("\t\t----------------------------------\n");
	printf("\t\t6. alimenter le stock .\n\n");
	printf("\t\t----------------------------------\n");
	printf("\t\t7. suprimer un produit .\n\n");
	printf("\t\t----------------------------------\n");
	printf("\t\t8. statistiques .\n\n");
	printf("\t\t----------------------------------\n");
	printf("\t\t0. Quitter .\n\n");
	printf("=========================================================\n");


	printf("\t entrer votre choix :");
	scanf("%d",&choix);

	system("cls");

	switch(choix){
		case 1 : {

							code_0:
						printf("\tentrer le code de produit :");
						scanf("%d",&pharx[length].code);


							for(int k = 0 ; k < length ; k++){
								if(pharx[length].code==pharx[k].code){
									printf("this code already Used , Try Another ! \n");
									goto code_0;
						}}


							nom_0:
						printf("\tentree le nom de produit :");
						scanf("%s",&pharx[length].nom);

									for(int k = 0 ; k < length ; k++){
										if(strcmp(pharx[k].nom,pharx[length].nom) == 0){
							printf("this name already Used , Try Another ! \n");
							goto nom_0;
 						}}



						printf("\tentrer la quantite:");
						scanf("%d",&pharx[length].quantite);

						printf("\tentrer le prix de produit :");
						scanf("%f",&pharx[length].prix);

						++length;
						printf("\n\t le produit a ete ajuter\n\n");

							 rvalue:  //checkpoint
						printf("\nRetour au Menu ( y ) :");
						scanf("%s" , &rvalue);
							if(rvalue =='y')
							{
							  system("cls");
							  goto depart;
							}
							else{
							  goto rvalue;
							}
			break;
		}
		case 2 : {
			chP:
			int n,i;
			printf("Combien du produit Voulez vous ajouter (MAX = 5) ?\n");
			scanf("%d",&n);


			if (n>0 && n<=5){

			for(i=1;i<=n;i++){
				printf("le produit %d :\n",i);
					code_v:
					printf("\tentrer le code de produit :");
					scanf("%d",&pharx[length].code);

										for(int k = 0 ; k < length ; k++){
								if(pharx[length].code==pharx[k].code){
									printf("this code already Used , Try Another ! \n");
									goto code_v;
						}}

					nom_v:
					printf("\tentree le nom de produit :");
					scanf("%s",&pharx[length].nom);

										for(int k = 0 ; k < length ; k++){
										if(strcmp(pharx[k].nom,pharx[length].nom) == 0){
							printf("this name already Used , Try Another ! \n");
							goto nom_v;
						}}

					printf("\tentrer la quantite:");
					scanf("%d",&pharx[length].quantite);

					printf("\tentrer le prix de produit :");
					scanf("%f",&pharx[length].prix);


			++length;
			printf("\n\t le produit %d a ete ajouter\n\n",i);
			system("cls");
			}
			printf("\n\t les produits ont ete ajouter\n\n");
			}
			else{
				goto chP;
			}
						rvalue1:  //checkpoint
						printf("\nRetour au Menu ( y ) :");
						scanf("%s" , &rvalue);
							if(rvalue =='y')
							{
							  system("cls");
							  goto depart;
							}
							else{
							  goto rvalue1;
							}
			break;
		}
		case 3:{
			int choix2;
			printf("\t\t1. afficher par prix desond .\n\n");
			printf("\t\t----------------------------------\n");
			printf("\t\t2. afficher par alphabet  .\n\n");
			printf("\t\t----------------------------------\n");
			printf("\t\t3. etat de stock (quantite <3) .\n\n");
			printf("\t\t----------------------------------\n");

			printf("\n\t entrer votre choix :");


			scanf("%d",&choix2);
			system("cls");

			if (choix2==1){
				
    int j=0;
    int ech;
    produit tmp;
    do{
        ech=0;
        int i;
        for(i=0;i<length-1;i++){
            if(pharx[i].prix<pharx[i+1].prix){
                tmp = pharx[i];
                pharx[i]=pharx[i+1];
                pharx[i+1]=tmp;
            ech++;
        }
        }
    }while(ech>0);
				int i;
					for (i=0;i<length;i++){
			printf("\tcode: %d \n",pharx[i].code);
			printf("\tnom: %s \n",pharx[i].nom);
			printf("\tprix: %.2f dh\n",pharx[i].prix);
			printf("\tquantite: %d \n\n",pharx[i].quantite);
			}
			
										rvalue5:  //checkpoint
						printf("\nRetour au Menu ( y ) :");
						scanf("%s" , &rvalue);
							if(rvalue =='y')
							{
							  system("cls");
							  goto depart;
							}
							else{
							  goto rvalue5;
							}
			
			}
			
			if (choix2==2){
				    int j=0;
    				int ech;
    	produit tmp;
    		do{
        	ech=0;
        		int i;
        			for(i=0;i<length-1;i++){
            if(strcmp(pharx[i].nom,pharx[i+1].nom)>0){
                tmp = pharx[i];
                pharx[i]=pharx[i+1];
                pharx[i+1]=tmp;
            ech++;
        }
        }
    }while(ech>0);;
								int i;
					for (i=0;i<length;i++){
			printf("code: %d \n",pharx[i].code);
			printf("nom: %s \n",pharx[i].nom);
			printf("prix: %.2f dh\n",pharx[i].prix);
			printf("quantite: %d \n\n",pharx[i].quantite);
			
			}
										rvalue4:  //checkpoint
						printf("\nRetour au Menu ( y ) :");
						scanf("%s" , &rvalue);
							if(rvalue =='y')
							{
							  system("cls");
							  goto depart;
							}
							else{
							  goto rvalue4;
							}
			}
			
			if(choix2==3){int i,j=0;
				for(i=0;i<length;i++){
					if(pharx[i].quantite<=3){
						++j;
			printf("code: %d \n",pharx[i].code);
			printf("nom: %s \n",pharx[i].nom);
			printf("prix: %.2f dh\n",pharx[i].prix);
			printf("quantite: %d \n\n",pharx[i].quantite);
						
					}
				}
				printf("Quantite de produits inferieure a 3 est: %d produits",j);
				
					rvalue6:  //checkpoint
						printf("\nRetour au Menu ( y ) :");
						scanf("%s" , &rvalue);
							if(rvalue =='y')
							{
							  system("cls");
							  goto depart;
							}
							else{
							  goto rvalue6;
							}
			}


			break;
		}
		case 4:{
			int cd ,qt ;


			acheterproduit(cd,length,qt);
			rvalue2:  //checkpoint
						printf("\nRetour au Menu ( y ) :");
						scanf("%s" , &rvalue);
							if(rvalue =='y')
							{
							  system("cls");
							  goto depart;
							}
							else{
							  goto rvalue2;
							}
			break;
		}


		case 5:{
			int cd1 , lengh;
			recherchproduit(cd1,length);

							rvalue3:  //checkpoint
						printf("\nRetour au Menu ( y ) :");
						scanf("%s" , &rvalue);
							if(rvalue =='y')
							{
							  system("cls");
							  goto depart;
							}
							else{
							  goto rvalue3;
							}
			break;
		}
		case 6:{
						int cd2 ,qt2 ;

			allimenteproduit(cd2,length,qt2);
			R5:  //checkpoint
						printf("\nRetour au Menu ( y ) :");
						scanf("%s" , &rvalue);
							if(rvalue =='y')
							{
							  system("cls");
							  goto depart;
							}
							else{
							  goto R5;
							}
			break;
		}
		case 7:{
			int cd3;
			supp:
			printf("\n\n\t\t entrer le code de produit:");
			scanf("%d",&cd3);
				int x=check(cd3);
				if (x==0){
					printf("\n\n\t\tcode is invalid\n\n");
					goto supp;
				}
			
	int i;
	int pos;
	for(i=0;i<length;i++){
		if(pharx[i].code==cd3){
			printf("Voulez vous supprimer cet produit : \n");
			printf("nom: %s \n",pharx[i].nom);
			printf("prix: %.2f dh\n",pharx[i].prix);
			printf("quantite: %d \n",pharx[i].quantite);
			pos = i;
			break;
		}
	}
	up1:
	int choix3,j;
	printf("\n\n\t supprimer!!!");
	printf("\n\n\t\t 1. oui");
	printf("\n\t\t 2. non");
	printf("\n\n\t\t votre choix:");
	
	scanf("%d",&choix3);
	
	if(choix3==1){
		for(j=pos;j<length-1;j++){
			pharx[j]=pharx[j+1];}
	length --;
	j--;
	
	printf("votre coix a ete supprimer!!");
	
		for (int i=0;i<length;i++){
			printf("\nnom: %s \n",pharx[i].nom);
			printf("code : %d \n",pharx[i].code );
			printf("quantite: %d \n",pharx[i].quantite);
			
		}
	
	
							R8:  //checkpoint
						printf("\nRetour au Menu ( y ) :");
						scanf("%s" , &rvalue);
							if(rvalue =='y')
							{
							  system("cls");
							  goto depart;
							}
							else{
							  goto R8;
							}
	}
	if(choix3==2){

							R7:  //checkpoint
						printf("\nRetour au Menu ( y ) :");
						scanf("%s" , &rvalue);
							if(rvalue =='y')
							{
							  system("cls");
							  goto depart;
							}
							else{
							  goto R7;
							}}
	if(choix!=1 && choix!=1){
		printf("Cette choix n existe pas");
		
		goto up1;
	}
	
				break;
		}
		case 8:{
			
			printf("1. afichier le total");
			printf("2. afichier le MAX");
			printf("3. afichier le MIN");
			printf("4. afichier le MOYENE");
			
						
			break;
		}
	}
}
