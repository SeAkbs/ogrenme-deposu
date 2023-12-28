#include <stdio.h>
#include <stdlib.h>
/* bir gsm operatötü 4dk kadar konuþma ücretini 0.30 tl olarak belirlemiþtir.
Ancak konuþma ücreti 4 dkyý aþarsa bundan sonraki her dakika için ek olarak 0.07 tl almaktadýr.
Telefon görüþmesinin süresini dakika cinsinden girdi olarak alaa ve ücretini hesaplayan C programýný yazlalým
*/

int main(){
 float talktime,fee;
printf("enter the phone talk time : ");
scanf("%f",&talktime);
if (talktime<=4.0){
	fee=0.30;
}
else{
	fee=0.30+(talktime-4)*0.07;
}
printf(" fee: %.3f tl \n", fee);

printf("\n\n");

return 0;
} 
