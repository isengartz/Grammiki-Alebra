#include "StdAfx.h"
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
#include<ctype.h>

int menu();
void prosthesi();
void random(int**,int,int);
void aferesi();
void pollaplasiasmos();
int *poldia(int**,int,int,int*,int);
void test();
int *p;
int main() {
int flag,epil;
epil=0;
flag=1;
srand(time(NULL));
do {

epil = menu();

switch (epil){
case 1 : prosthesi(); break;
case 2 : aferesi(); break;
case 3 : pollaplasiasmos(); break;
case 4 : test(); break;
case 0 : flag=0; break;
default : printf("\n Prolly Mentaly retarted ! Gief a valid choice bitch!~\n");
}
}while(flag!=0);
system("PAUSE");
return 0;

}


int menu() {
	int epilog;

printf("\n====OH HAI MENU====");
printf("\n==1.Prosthesi==");
printf("\n==2.Aferesi==");
printf("\n==3.Pol/mos==");
printf("\n==4.empty yet==");
printf("\n==0.EXIT OH BYE!==\n");
scanf("%d",&epilog);
return epilog;
}

void prosthesi() {
int Ans,flag,rows,collumns,rws,ans,col,temp,i,j;
int **a;
int **b;
int **c;
flag=1;
do{
printf("\n-=SI.N Ultra prog RELOADED!=-\n");
printf("\nPRESS 1 for RAndom nums!");
printf("\nPRESS 2 for Dynamic and self fill!\n");
scanf("%d",&ans);
if (ans!= 1 && ans!=2) {
flag=0;
}
else {
flag=1;
}
}while(flag=0);

if (ans==1) {
printf("\nGief Size bro\n");
printf("\n\nGief Rows\n");
scanf("%d",&rows);
printf("\ngief Collumns bro\n");
scanf("%d",&collumns);


a = (int**)malloc(rows * sizeof(int*));
for (i=0;i<rows; i++) {
  a[i] = (int*)malloc(collumns * sizeof(int));
}
b = (int**)malloc(rows * sizeof(int*));
for (i=0;i<rows; i++) {
  b[i] = (int*)malloc(collumns * sizeof(int));
}
random(a,rows,collumns);
rws=rows;
col=collumns;
random(b,rws,col);
}
else{

printf("\n\nGief Size bro\n");
printf("\n\nGief Rows\n");
scanf("%d",&rows);
printf("\ngief Collumns bro\n");
scanf("%d",&collumns);

printf("\n-=Going Fill up 1st Array=-\n");

a = (int**)malloc(rows * sizeof(int*));
for (i=0;i<rows; i++) {
  a[i] = (int*)malloc(collumns * sizeof(int));
}
rws=rows;
col=collumns;

for(i=0;i<rows;i++){
 for(j=0;j<collumns;j++){
printf("\n Dwse to [%d][%d] stixeio BRO!~\n",i+1,j+1);
scanf("%d",&temp);
a[i][j]=temp;
 }
}


printf("\n-=Going Fill up 2nd Array=-");

b = (int**)malloc(rws * sizeof(int*));
for (i=0;i<rws; i++) {
  b[i] = (int*)malloc(col * sizeof(int));
}

for(i=0;i<rws;i++){
 for(j=0;j<col;j++){
printf("\n Dwse to [%d][%d] stixeio BRO!~\n",i+1,j+1);
scanf("%d",&temp);
b[i][j]=temp;
 }
}
}
rws=rows;
col=collumns;

c = (int**)malloc(rws * sizeof(int*));
for (i=0;i<rws; i++) {
  c[i] = (int*)malloc(col * sizeof(int));
}

printf("\n\n");
printf("\t==A==");
for (i=0; i<rows; i++) {
printf("\n");
for (j=0;j<collumns;j++) {
 printf("%d\t",a[i][j]);
}
}
printf("\n\n");
printf("\t==B==");
for (i=0; i<rws; i++) {
printf("\n");
for (j=0;j<col;j++) {
 printf("%d\t",b[i][j]);
}
}


for (i=0;i<rws;i++) {
for (j=0;j<col;j++) {
c[i][j]=a[i][j] + b[i][j];
 }
}
printf("\n\nRESULTS:");
for (i=0;i<rws;i++) {
printf("\n");
 for (j=0;j<col;j++) {
printf("%d\t",c[i][j]);
 }
}
printf("\n\n");

for (i=0;i<rws;i++) {
  free(a[i]);
}
free(a);

for (i=0;i<rows;i++) {
  free(b[i]);
}
free(b);
for (i=0;i<rows;i++) {
  free(c[i]);
}
free(c);
}



void aferesi() {
int Ans,flag,rows1,collumns1,rows2,ans,collumns2,temp,i,j;
int **a;
int **b;
int **c;
int **d;
flag=1;
do{
printf("\n-=SI.N Ultra prog RELOADED!=-\n");
printf("\nPRESS 1 for RAndom nums!");
printf("\nPRESS 2 for Dynamic and self fill!\n");
scanf("%d",&ans);
if (ans!= 1 && ans!=2) {
flag=0;
}
else {
flag=1;
}
}while(flag=0);

if (ans==1) {
printf("\nGief Size bro\n");
printf("\n\nGief Rows\n");
scanf("%d",&rows1);
printf("\ngief Collumns bro\n");
scanf("%d",&collumns1);
rows2=rows1;
collumns2=collumns1;

a = (int**)malloc(rows1 * sizeof(int*));
for (i=0;i<rows1; i++) {
  a[i] = (int*)malloc(collumns1 * sizeof(int));
}
b = (int**)malloc(rows2 * sizeof(int*));
for (i=0;i<rows2; i++) {
  b[i] = (int*)malloc(collumns2 * sizeof(int));
}
random(a,rows1,collumns1);
random(b,rows2,collumns2);
}
else{

printf("\n\nGief Size bro\n");
printf("\n\nGief Rows\n");
scanf("%d",&rows1);
printf("\ngief Collumns bro\n");
scanf("%d",&collumns1);

rows2=rows1;
collumns2=collumns1;

printf("\n-=Going Fill up 1st Array=-\n");

a = (int**)malloc(rows1 * sizeof(int*));
for (i=0;i<rows1; i++) {
  a[i] = (int*)malloc(collumns1 * sizeof(int));
}


for(i=0;i<rows1;i++){
 for(j=0;j<collumns1;j++){
printf("\n Dwse to [%d][%d] stixeio BRO!~\n",i+1,j+1);
scanf("%d",&temp);
a[i][j]=temp;
 }
}


printf("\n-=Going Fill up 2nd Array=-");

b = (int**)malloc(rows2 * sizeof(int*));
for (i=0;i<rows2; i++) {
  b[i] = (int*)malloc(collumns2 * sizeof(int));
}

for(i=0;i<rows2;i++){
 for(j=0;j<collumns2;j++){
printf("\n Dwse to [%d][%d] stixeio BRO!~\n",i+1,j+1);
scanf("d\t",&temp);
b[i][j]=temp;
 }
}
}


c = (int**)malloc(rows1 * sizeof(int*));
for (i=0;i<rows1; i++) {
  c[i] = (int*)malloc(collumns1 * sizeof(int));
}

printf("\n==A-B==");
printf("\n\n");
printf("\t==A==");
for (i=0; i<rows1; i++) {
printf("\n");
for (j=0;j<collumns1;j++) {
 printf("%d\t",a[i][j]);
}
}
printf("\n\n");
printf("\t==B==");
for (i=0; i<rows2; i++) {
printf("\n");
for (j=0;j<collumns2;j++) {
 printf("%d\t",b[i][j]);
}
}


for (i=0;i<rows1;i++) {
for (j=0;j<collumns1;j++) {
c[i][j]=a[i][j] - b[i][j];
 }
}
printf("\n\nRESULTS A-B:");
for (i=0;i<rows1;i++) {
printf("\n");
 for (j=0;j<collumns1;j++) {
printf("%d\t",c[i][j]);
 }
}
printf("\n\n");

d = (int**)malloc(rows1 * sizeof(int*));
for (i=0;i<rows1; i++) {
  d[i] = (int*)malloc(collumns1 * sizeof(int));
}

for (i=0;i<rows1;i++) {
for (j=0;j<collumns1;j++) {
d[i][j]=b[i][j] - a[i][j];
 }
}

printf("\n\t==B-A==");
printf("\n\n");
printf("\t==A==");
for (i=0; i<rows1; i++) {
printf("\n");
for (j=0;j<collumns1;j++) {
 printf("%d\t",a[i][j]);
}
}
printf("\n\n");
printf("\t==B==");
for (i=0; i<rows2; i++) {
printf("\n");
for (j=0;j<collumns2;j++) {
 printf("%d\t",b[i][j]);
}
}
printf("\n\nRESULTS B-A:");
for (i=0;i<rows1;i++) {
printf("\n");
 for (j=0;j<collumns1;j++) {
printf("%d\t",d[i][j]);
 }
}


for (i=0;i<rows1;i++) {
  free(a[i]);
}
free(a);

for (i=0;i<rows1;i++) {
  free(b[i]);
}
free(b);
for (i=0;i<rows1;i++) {
  free(c[i]);
}
free(c);


for (i=0;i<rows1;i++) {
  free(d[i]);
}
free(d);
}


void random(int** A,int rw,int co) {
int i,j;

printf("\n");


for (i=0;i<rw;i++) {
 for (j=0;j<co;j++) {
   A[i][j] = rand() % (100 + 1);
 }
}

}

void pollaplasiasmos() {
int Ans,flag,flagister,rows1,collumns1,rows2,ans,collumns2,temp,i,j,s;
int **a;
int **b;
int **c;

flag=1;
do{
printf("\n-=SI.N Ultra prog RELOADED!=-");
printf("\nPRESS 1 for RAndom nums!");
printf("\nPRESS 2 for Dynamic and self fill!\n");
scanf("%d",&ans);
if (ans!= 1 && ans!=2) {
flag=0;
}
else {
flag=1;
}
}while(flag=0);
if (ans==1) {
flagister=0;
do {


printf("\nGief Size bro\n");
printf("\n\nGief Rows for A\n");
scanf("%d",&rows1);
printf("\ngief Collumns for A\n");
scanf("%d",&collumns1);
printf("\n\nGief Rows for B\n");
scanf("%d",&rows2);
printf("\ngief Collumns for B\n");
scanf("%d",&collumns2);
if (collumns1!=rows2) {
 flagister=1;
}
}while(flagister==1);



a = (int**)malloc(rows1 * sizeof(int*));
for (i=0;i<rows1; i++) {
  a[i] = (int*)malloc(collumns1 * sizeof(int));
}
b = (int**)malloc(rows2 * sizeof(int*));
for (i=0;i<rows2; i++) {
  b[i] = (int*)malloc(collumns2 * sizeof(int));
}
random(a,rows1,collumns1);
random(b,rows2,collumns2);
}
else{
flagister=0;
do {

printf("\n\nGief Size bro\n");
printf("\n\nGief Rows for A\n");
scanf("%d",&rows1);
printf("\ngief Collumns for A\n");
scanf("%d",&collumns1);

printf("\n\nGief Size bro\n");
printf("\n\nGief Rows for B\n");
scanf("%d",&rows2);
printf("\ngief Collumns for B\n");
scanf("%d",&collumns2);
if (collumns1!=rows2) {
 flagister=1;
}
}while(flagister==1);


printf("\n-=Going Fill up 1st Array=-\n");

a = (int**)malloc(rows1 * sizeof(int*));
for (i=0;i<rows1; i++) {
  a[i] = (int*)malloc(collumns1 * sizeof(int));
}


for(i=0;i<rows1;i++){
 for(j=0;j<collumns1;j++){
printf("\n Dwse to [%d][%d] stixeio BRO!~\n",i+1,j+1);
scanf("%d",&temp);
a[i][j]=temp;
 }
}

printf("\n-=Going Fill up 2nd Array=-");

b = (int**)malloc(rows2 * sizeof(int*));
for (i=0;i<rows2; i++) {
  b[i] = (int*)malloc(collumns2 * sizeof(int));
}

for(i=0;i<rows2;i++){
 for(j=0;j<collumns2;j++){
printf("\n Dwse to [%d][%d] stixeio BRO!~\n",i+1,j+1);
scanf("%d",&temp);
b[i][j]=temp;
 }
}
}
c = (int**)malloc(rows1 * sizeof(int*));
for (i=0;i<rows1; i++) {
  c[i] = (int*)malloc(collumns2 * sizeof(int));
}

printf("\n\n\t==A==");
for (i=0; i<rows1; i++) {
printf("\n");
for (j=0;j<collumns1;j++) {
 printf("%d\t",a[i][j]);
}
}
printf("\n\n\t==B==");
for (i=0; i<rows2; i++) {
printf("\n");
for (j=0;j<collumns2;j++) {
 printf("%d\t",b[i][j]);
}
}
for (i=0;i<rows1;i++) {
for (j=0;j<collumns2;j++) {
	c[i][j]=0;
for (s=0;s<rows2;s++){
c[i][j]=c[i][j] + a[i][s] * b[s][j];
}
}
}
printf("\n\nRESULTS A*B:");
for (i=0;i<rows1;i++) {
printf("\n");
 for (j=0;j<collumns2;j++) {
printf("%d\t",c[i][j]);
 }
}
printf("\n\n");

for (i=0;i<rows1;i++) {
  free(a[i]);
}
free(a);

for (i=0;i<rows2;i++) {
  free(b[i]);
}
free(b);
for (i=0;i<rows1;i++) {
  free(c[i]);
}
free(c);
}

int *poldia(int** A,int rw,int co,int* dia,int meg){

int i,j,s;

p=(int*)malloc(rw*sizeof(int));

for (i=0;i<rw;i++) {	
		for (s=0;s<meg;s++) {
			p[i]=p[i] + A[i][s] * dia[s];

}
	}

return p;
}

void test(){
	int **a,i,j,*diani,col,row,dia,*rez;

	printf("dwse rows");
	scanf("%d",&row);
	printf("dwse cols");
	scanf("%d",&col);

	a = (int **)malloc(row*sizeof(int*));
	for (i=0;i<row; i++) {
  a[i] = (int*)malloc(col * sizeof(int));
}
	for (i=0;i<row;i++) {
		for (j=0;j<col;j++) {
			scanf("%d",&a[i][j]);
		}
	}
	printf("dwse dianisma");
	scanf("%d",&dia);
	diani=(int*)malloc(dia*sizeof(int));
	
	for (i=0;i<dia;i++) {
		scanf("%d",&diani[i]);
	}
	rez=(int*)malloc(row*sizeof(int));
	rez=poldia(a,row,col,diani,dia);

	for (i=0;i<row;i++) {
		printf("\n%d",rez[i]);
	}
}
