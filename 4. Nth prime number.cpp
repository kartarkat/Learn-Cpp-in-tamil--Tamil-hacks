/*
author : karthikeyan 
year and month : 2019 , july
Learn c++ in tamil from Tamil Hacks - You Tube channel
Tutorial links : 
	Learn c++ in tamil : http://bit.ly/2Mpvqj8
	Learn c   in tamil : http://bit.ly/2ZjDB43

c++ program to print the prime number series

A prime number is a whole number greater than 1 whose only factors are 1 and itself. 
A factor is a whole numbers that can be divided evenly into another number. 
The first few prime numbers are 2, 3, 5, 7, 11, 13, 17, 19, 23 ,29 and so on
*/
#include <iostream>
#include <math.h>

using namespace std;
int main()
{
	//initialize value to 0 to avoid garbage value
	int value = 0 ; 
	int isPrime ;    //a variable to check prime number 
	cout<<"Enter a positive number : "; 
	//get Nth value from the user
	cin>>value;
	//assign series value
	int series_range = 100;
	//a variable to count the n terms
	int count = 0;
	

	for (int starting_value = 2 ; starting_value <= series_range ; starting_value++)
	{   
	 //prime number starts at 2 , so strating_value =2 
	//printing series upto given series range  so it is the condition value eg: prime number between 1 to 25
	
	isPrime = 0;
	
		for (int dividing_value = 2 ; dividing_value <= starting_value / 2 ;  dividing_value++)
        {        	
        	//checking any number is diving than itself and 1
            if (starting_value % dividing_value == 0) 
			{			
            	isPrime = 1;
                break;
            }
        }            
            //printing each value which is prime number except 1
            if(isPrime==0 && series_range!= 1)
            {		
				count ++;
	            if(count == value)
				{
	             cout<<starting_value;
				}
            }
		
	}	

		//note : 1 and 0 and negative values are not a prime number
	
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
