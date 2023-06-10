#include<iostream>
using namespace std;
int main(){
	cout<<"AMAN GUPTA , VIT BHOPAL , 2ND YEAR"<<endl;
//STEP 1----
int arr[] = {1, 2, 3, 4};	
	for(int i=0; i<4 ; i++){
		cout<<arr[i]<<endl;
	}
	
//	STEP 2------
for(int i=0;i<4;i++){
	arr[i]=arr[i]+100;
	cout<<arr[i]<<endl;
}
//STEP 3----
int sum=0;
for(int i =0;i<4;i++){
	cin>>arr[i];
	sum = sum+arr[i];
}
cout<<sum<<endl;

int score[3][4] = { 
                    {7,7,8,9},
				    {9,9,8,8},
				    {9,9,8,10}
				  };

//STEP 4-----
char matrix[3][3];
for(int i =0;i<3;i++){
	for(int j =0;j<3;j++){
		cin>>matrix[i][j];
	}
}
for(int i =0;i<3;i++){
   for(int j =0;j<3;j++){
	
cout<<matrix[i][j];

}
cout<<endl;
}
return 0;
}
