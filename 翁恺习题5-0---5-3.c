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
	int num;         //num-�������   //mask-��numͬλ��   //t-�õ�mask��ֵ   //dΪnum�ĸ�λ�� 
	scanf("%d",&num);
	int mask=1;
	int t;
	int d;
	if(num<0){
		num=-num;         //���������� 
		printf("fu ");
	}
	t=num;
	while(t>9){
		t/=10;          //�õ�mask 
		mask*=10;
	}
	do {
		d=num/mask;
		num=num-d*mask;      //����õ�num�ĸ�λ��   �Ľ���num=num%mask 
		mask/=10;
		switch(d){
			case 1:
				printf("yi ");          //switch�õ�ÿλ���Ķ��� 
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
	int cnt=0;        //��¼a����ѭ���Ĵ��� 
	for(int A;cnt<n;cnt++){
		A=pow(10,cnt)*a+A;      //�õ� a�������� 
		sum+=A;
	}
	printf("%d",sum);
	return 0;
}



