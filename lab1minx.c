#include <stdio.h>
int main(){
	int var1,var2;
	scanf("%d %d",&var1,&var2);
	if (var1 > var2){
		printf("var1 is greater than var2");
		printf("\n%d",(var1-var2));
	}else
		printf ("var 2 is greater than var1");
		printf("\n%d",(var2-var1));
}
