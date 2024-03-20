*2 accept a number from user only if number is perfectly 
div by 5 and 3 else till it is not given keep taking number.*/
#include<iostream>
using namespace std;
main(){
		int num;
	bool flag =0;
	do{

	cout<<"Enter the Number:";
	cin>>num;
	if(num%5==0 && num%3==0){
		cout<<"The Number is Divisible by 5 And 3 is:"<<num;
		flag =1;
	}
}while(flag=!1);
}