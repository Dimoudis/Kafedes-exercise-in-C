#include <stdio.h>
#include <stdlib.h>

/* 
mesa sthn main na zitaw posous kafedes ipie o xrhsths
mia synartisi pou tha gemizei enan pinaka me times kafedwn
mia synartisi display pou tha kanei print tis times twn kafedwn
mia synartisi pou tha kanei print posoi kostizoun panw apo 2eurw
mia synartisi pou tha epistrefei ton mo timwn twn kafedwn
mesa sthn main tha ypodexomaste ton mo kai an autos einai panw apo 4 eurw tha kanoum print plousios alliws ftoxos 
mia synartisi pou tha zitaei apo ton user mia timh kai tha metraei posoi kafedes kostizan katw apo authn tin timh
mia synartisi pou tha kanei sorting desc ton pinaka timwn twn kafedwn (void)
sthn main tha kalw to display ksana
*/

void gemisma_pin(int kaf_list[],int kafedes);
void display(int kaf_list[],int kafedes);
void display1(int kaf_list[],int kafedes);
void mo_timwn(int kaf_list[], int kafedes);
int func1(int kaf_list[],int kafedes);
void sort_desc(int kaf_list[],int kafedes);

int main() {
	
	int kafedes;
	int i;

	printf("Posous kafedes ipies;\n");
	scanf("%i",&kafedes);
	int kaf_list[kafedes];

	gemisma_pin(kaf_list,kafedes);
	display(kaf_list,kafedes);
	display1(kaf_list,kafedes);
	mo_timwn(kaf_list,kafedes);
	func1(kaf_list,kafedes);
	sort_desc(kaf_list,kafedes);
	display(kaf_list,kafedes);
	
	
	
	return 0; 
}

void gemisma_pin(int kaf_list[],int kafedes){
	int i;
	double timi;
	for (i=0; i<kafedes; i++){
		printf("Poso kostise o %ios kafes;\n",i+1);
		scanf("%lf",&timi);
		kaf_list[i]=timi;
	}
}

void display(int kaf_list[],int kafedes){
	int i;
	printf("display pinaka ->\n");
	for (i=0; i<kafedes; i++){
		printf("O %ios kostise %i eurw\n",i+1,kaf_list[i]);
	}
	printf("\n");
}


void display1(int kaf_list[],int kafedes){
	int i;
	int count=0;
	for (i=0; i<kafedes; i++){
		if(kaf_list[i]>2){
			count++;
		}
	}
	printf("Oi kafedes panw apo 2eurw einai %i\n\n",count);
}

void mo_timwn(int kaf_list[], int kafedes){
	int i;
	double sum=0;
	double mo;
	for (i=0; i<kafedes; i++){
		sum=sum+kaf_list[i];
	}
	mo=sum/kafedes;
	printf("O mo timwn twn kafedwn einai %.2f\n\n",mo);
	if (mo>4){
		printf("PLOUSIOS!!!\n");
	}
	else{
		printf("FTWXOS!!!\n");
	}
}


int func1(int kaf_list[],int kafedes){
	int timi;
	int count1=0;
	int i;
	printf("Eisagete mia timi:\n");
	scanf("%i",&timi);
	for (i=0; i<kafedes; i++){
		if (timi>kaf_list[i]){
			count1++;
		}
	}										
	printf("Katw apo tin timi %i yparxei/oun %i kafes/edes\n",timi,count1);
}

void sort_desc(int kaf_list[],int kafedes){
	int i,j;
	int temp;
	for (i=0; i<kafedes-1; i++){
		for (j=0; j<kafedes-i-1; j++){
			if (kaf_list[j]<kaf_list[j+1]){
				//swap
				temp=kaf_list[j];
				kaf_list[j]=kaf_list[j+1];
				kaf_list[j+1]=temp;
			}
		}
	}
}
