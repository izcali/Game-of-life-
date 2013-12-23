
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
int main()
{
printf(" GAME OF LIFE\n\n\n ");
int x1, x2, x3, x4, z1, z2, z3, z4, w=0, q=0, i, j, r, t, u, no=0;
bool c=false;
int m[10][10];

for(i=0;i<10;i++)
{
	for(j=0;j<10;j++)
	{
	 m[i][j]=0;
	}  
}
int x;
int y;
srand(time(NULL));
for(i=0;i<10;i++)
{
  x=rand()%10;
  y=rand()%10;
  if(m[x][y]==0)
  m[x][y]=1;
  else
  i--;
}
for(i=0;i<10;i++)
{
	for(j=0;j<10;j++)
	{
	 printf("%d ",m[i][j]);
	} 
 no++;
 printf("\n ");
}
printf("\nMenu\n");
printf("1.-Mostra matriz\n");
printf("2.-Salir\n");
scanf("%d",&r);
switch (r)
{
case 1: 
for(t=0;t<100;t++){
c=false;
w++;
for(i=1;i<10;i++){
for(j=1;j<10;j++){                     
if(m[i][j]==1){
x1= i-1;
x2= j-1;
x3= i+1;
x4= j+1;
z1=m[x1][x2] + m[x1][j] + m[x1][x4];
z2=m[i][x2] + m[i][x4];
z3=m[x3][x2] + m[x3][j] + m[x3][x4];
z4=z1+z2+z3;
if (z4==0||z4==1){
m[i][j]=0;
c=true;
}   
if (z4==2||z4==3){
m[i][j]=1;
}
if (z4>=4){
m[i][j]=0;
c=true;
}
}     
if(m[i][j]==0){
x1= i-1;
x2= j-1;
x3= i+1;
x4= j+1;    
z1=m[x1][x2] + m[x1][j] + m[x1][x4];
z2=m[i][x2] + m[i][x4];
z3=m[x3][x2] + m[x3][j] + m[x3][x4];    
z4=z1+z2+z3;    
if(z4==2||z4==3){
c=true;
m[i][j]=1;
}
}
}  
}
printf("\nPresiona una tecla para generar otra matriz\n\n ");
int no=0;
for(i=0;i<10;i++){
for(j=0;j<10;j++){
printf("%d ",m[i][j]);
} 
no++;
printf("\n ");
}
if (!c){
printf("Las matrices son iguales\n\n");             
break;
}
system("pause");
}
break;
case 2:
	return 0;
break;
}
system("pause");
return 0;
}
