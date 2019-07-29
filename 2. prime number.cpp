/*
author : karthikeyan 
year and month : 2019 , july
Learn c++ in tamil from Tamil Hacks - You Tube channel
Tutorial links : 
	Learn c++ in tamil : http://bit.ly/2Mpvqj8
	Learn c   in tamil : http://bit.ly/2ZjDB43

c++ program to find out the number is prime or not

A prime number is a whole number greater than 1 whose only factors are 1 and itself. 
A factor is a whole numbers that can be divided evenly into another number. 
The first few prime numbers are 2, 3, 5, 7, 11, 13, 17, 19, 23 ,29 and so on
*/
#include <iostream>
using namespace std;
int main()
{
	//initialize number to 0 to avoid garbage value
	int number = 0 ; 
	cout<<"Enter a positive number : "; 
	//get input from user
	cin>>number;	
	
	int check = 0 ;    //a variable to check the prime number

	for (int i=2 ; i <= number/2 ; i++){    //prime number starts at 2 , so i =2 
	//highest possible is n/2 for dividing so it is the condition value
		 if(number%i == 0){
		 	check = 1;			
		 	break;
		 }
		
	}
		
		//note : 1 and 0 and negative values are not a prime number
		if(number == 1 || number == 0 || number <0 )
		{		
			cout<<number<<" is not prime number";
		}
		else if(check == 0){
			cout<<number<<" is prime number";
		}
		else{
			cout<<number<<" is not prime number";
		}

		return 0;
		

}

/*
Hi FRIENDS, Welcome to my page , i am an technician , who loves to code  , 
do videos, make apps, websites, learn something new every day.

my youtube channel link : https://www.youtube.com/tamilhacks

learn all new technology and programming here in my channel in tamil easily.
Thank you Guys - with love from Tamil Hacks
contact me at tamilhackstech@gmail.com
*/
