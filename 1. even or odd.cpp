
/*
author : karthikeyan 
year and month : 2019 , july
Learn c++ in tamil from Tamil Hacks - You Tube channel
Tutorial links : 
	Learn c++ in tamil : http://bit.ly/2Mpvqj8
	Learn c   in tamil : http://bit.ly/2ZjDB43

c++ program to find out the number is even or odd

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

	if(number % 2 == 0)  //check number is divided by 2 by using % operator
	{
		cout<<number<<" is even number";
	}
	else
	{
	cout<<number<<" is odd number";
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
