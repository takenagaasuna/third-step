#include<stdio.h>
int main(){
	float sci[20]={
		65,80,67,35,58,60,72,75,68,92,36,50,2,58.5,46,42,78,62,84,70};
	float math[20]={
		44,87,100,63,52,60,58,73,55,86,29,56,89,23,65,84,64,27,86,84};
	float avesci=0;
	float aveeng=0;
	float devsci=0;
	float deveng=0;
	float totsci=0;
	float toteng=0;
	float devpepsci[20];
	float devpepeng[20];

for(i=0;i<20;i++){
	totsci+=sci[i];
	toteng+=eng[i];
}
	avesci=totsci/20;
	aveeng=toteng/20;

for(i=0;i<20;i++){	
	avesci-sci[i];
	aveeng-eng[i];
}

printf("%s,%s,%s,%s,%s,%s");





