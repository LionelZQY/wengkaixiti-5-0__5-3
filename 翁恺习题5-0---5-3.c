#include <stdio.h>
#include <math.h>

//5-0
int main()
{
	double i=2,j=1;
	double t;
	double sum=0;
	int n;
	scanf("%d",&n);
	int num=0;
	for(;num<n;num++){
		sum+=i/j;
		t=i;
		i=i+j;
		j=t;
	}
	printf("%.2f",sum);
	return 0;
}




//5-1
int main()
{
	int i,j,c,a,b;
	scanf("%d/%d",&i,&j);
	a=i;
	b=j;
	if(a<b){
		c=a;
		a=b;
		b=c;
	}
	while(b!=0){
		c=a%b;
		a=b;
		b=c;
	} 
	i/=a;
	j/=a;
	printf("%d/%d",i,j);
	return 0;
}




//5-2
int main()
{
	int num;         //num-输入的数   //mask-与num同位数   //t-得到mask的值   //d为num的各位数 
	scanf("%d",&num);
	int mask=1;
	int t;
	int d;
	if(num<0){
		num=-num;         //正数化负数 
		printf("fu ");
	}
	t=num;
	while(t>9){
		t/=10;          //得到mask 
		mask*=10;
	}
	do {
		d=num/mask;
		num=num-d*mask;      //正序得到num的各位数   改进：num=num%mask 
		mask/=10;
		switch(d){
			case 1:
				printf("yi ");          //switch得到每位数的读音 
				break;
			case 2:
				printf("er ");
				break;
			case 3:
				printf("san ");
				break;
			case 4:
				printf("si ");
				break;
			case 5:
				printf("wu ");
				break;
			case 6:
				printf("liu ");
				break;
			case 7:
				printf("qi ");
				break;
			case 8:
				printf("ba ");
				break;
			case 9:
				printf("jiu ");
				break;
			case 0:
				printf("ling ");
				break;
			}
	}while(mask!=0);           
	return 0;
}


//5-3
int main()
{
	int a,n;
	scanf("%d %d",&a,&n);
	int sum;
	int cnt=0;        //记录a进入循环的次数 
	for(int A;cnt<n;cnt++){
		A=pow(10,cnt)*a+A;      //得到 a的连续和 
		sum+=A;
	}
	printf("%d",sum);
	return 0;
}



