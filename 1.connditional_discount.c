#include <stdio.h>
void main(){

	float dis,xtra;
	
	float amount;
	printf("Enter your amount: ");
	scanf("%f",&amount);
	
	float point;
	printf("Enter your points: ");
	scanf("%f",&point);
	
	if(amount > 5000){
		dis = amount*0.2;
		if(dis>1200){
			dis = 1200;
		}
	}
	
	else if(amount == 2027){
		dis = 270;
	}
	
	else if(amount >= 2000 && amount <= 3000){
		dis = amount*0.05;
	}
	
	else if(amount >= 500){
		dis = 50;
	}
	
	float pointtk = point/400;
	dis = dis + pointtk;
	point = point - pointtk*400 ;
	
	if(dis < amount){
		printf("Your total discount is %.3f\n",dis);
	}
	
	else {
		xtra = dis - amount;
		dis = amount;
		printf("Your total discount is %.3f \n",dis);
	}
	
	point = point + xtra*400 ;
	float pay = amount - dis;
	printf("You Have to pay %.3f\n",pay);
	
	point = point + pay*10;
	
	printf("Remaining points %.3f\n",point);
	
}