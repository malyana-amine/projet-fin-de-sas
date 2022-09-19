#include <iostream>
#include <string.h>

typedef struct product{
int code;
char nom[10];
int quantite;
float prix;
} produit;

produit pharx[]={	
			{123423,"produit1",88,19},
			{857353,"produit2",154,1},
			{508732,"produit3",82,1},
			{839632,"produit4",98,10},
			{256522,"produit5",188,9},
			{284892,"produit6",8,49},
			{109684,"produit7",84,38},
			{188503,"produit8",78,54},
			{128574,"produit9",103,23}
};
int length = (sizeof(pharx))/(sizeof(pharx[0]));

//void ajouteProduit (int length) {
//	printf("\tentrer le code de produit :");
//	scanf("%d",&pharx[length].code);
//	
//	printf("\tentree le nom de produit :");
//	scanf("%s",&pharx[length].nom);
//	
//	printf("\tentrer la quantite:");
//	scanf("%d",&pharx[length].quantite);
//	
//	printf("\tentrer le prix de produit :");
//	scanf("%f",&pharx[length].prix);
//	
//	++length;
//	printf("\n\t le produit a ete ajuter\n\n");
//}
void listByAlphabetic (){
	
	
}
void acheterproduit (int cd,int length , int qt){
	int i;
	for(i=0;i<length;i++){
		if(pharx[i].code==cd){
			
			float ttc =pharx[i].prix+(((15*pharx[i].prix)/100));
			printf("votre produit est : \n");
			printf("nom: %s \n",pharx[i].nom);
			printf("prix: %.2f dh\n",pharx[i].prix);
			printf("prix TTC: %.2f dh\n",ttc);
			printf("quantite: %d \n",pharx[i].quantite);
			
					combien:
				printf("\n\n\t\t tu veux acheter combien(quantite) :");
					scanf("%d",&qt);
					
					if ( qt<0 || qt>pharx[i].quantite )
					{
						printf("\n \t la quantite dommender nest pas disponible:");
						goto combien;
					}
					else {
						pharx[i].quantite -= qt;
					}
					printf("\n \t le produit a ete acheter");
			
		}
	}
	
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
	printf("\t\t5. produit deja vendu .\n\n");
	printf("\t\t----------------------------------\n");
	printf("\t\t6. recherche un produit .\n\n");
	printf("\t\t----------------------------------\n");
	printf("\t\t7. alimenter le stock .\n\n");
	printf("\t\t----------------------------------\n");
	printf("\t\t8. suprimer un produit .\n\n");
	printf("\t\t----------------------------------\n");
	printf("\t\t9. statistiques .\n\n");
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
			printf("Combien du produit Voulez-vous ajouter (MAX = 5) ?\n");
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
								
			}
			printf("\n\t le produit a ete ajuter\n\n");	
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
			printf("\t\t1. afficher par alphabet .\n\n");
			printf("\t\t----------------------------------\n");
			printf("\t\t2. afficher par prix desond .\n\n");
			printf("\t\t----------------------------------\n");
			
			printf("\n\t entrer votre choix :");
			
			
			scanf("%d",&choix2);
			
			
			
			
			if (choix==1){
				
				
			}
			
			
			
			break;
		}
		case 4:{
			int cd ,qt ;
			printf("\n\n\t\t entrer le code de produit:");
			scanf("%d",&cd);
			
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
	}
}
	
	
	
	
	
