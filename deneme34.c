#include <stdio.h>
#include <stdlib.h>
/* bir gsm operat�t� 4dk kadar konu�ma �cretini 0.30 tl olarak belirlemi�tir.
Ancak konu�ma �creti 4 dky� a�arsa bundan sonraki her dakika i�in ek olarak 0.07 tl almaktad�r.
Telefon g�r��mesinin s�resini dakika cinsinden girdi olarak alaa ve �cretini hesaplayan C program�n� yazlal�m
*/

int main(){
	
float talktime,fee;
printf("\nenter the phone talk time : ");
scanf("%f",&talktime);
if (talktime<=4.0){
	fee=0.30;
}
else{
	fee=0.30+(talktime-4)*0.07;
}
printf("fee: %.3f tl \n", fee);


return 0;
}
