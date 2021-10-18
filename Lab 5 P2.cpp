#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main()
{
	srand((unsigned)time(NULL));
    int grade, num, ques;
    int right=0; //正确的题目数 
    cout << "Please enter your grade?" << endl;
    cin >> grade;
    cout << "Please enter the number of questions?" << endl;
    cin >> num;
	if (grade<5&&grade>2) //3，4年级 
	    {
	    	int result2;
	    	for(int i=0;i<num;i++) 
			{
				int a=rand()%4; //加减乘除号判断 
		    	int ran1=rand()%1000;
		    	int ran2=rand()%1000;
				if (a==0) //加法 
				{
					int sum=ran1+ran2;
					cout << ran1 << "+" << ran2 << "=" << endl;
					cin >> result2;
					if (result2==sum)
					{
						right+=1;
					}
				} 
				
				if (a==1) //减法 
				{
					int sub=ran1-ran2;
					cout << ran1 << "-" << ran2 << "=" << endl;
					cin >> result2;
					if (result2==sub)
					{
						right+=1;
					}
				}
					
				if (a==2) //乘法 
				{
					int mul=ran1*ran2;
					cout << ran1 << "×" << ran2 << "=" << endl;
					cin >> result2;
					if (result2==mul)
					{
						right+=1;
					}
				} 
				
				if (a==3) //除法 
				{
					int div=ran1/ran2;
					cout << ran1 << "÷" << ran2 << "=" << endl;
					cin >> result2;
					if (result2==div)
					{
						right+=1;
					}
				} 
			}
			
			int score = (100/num)*right;
	    	cout << "End! Your score is " << score << "." << endl;	
		}
	
	return 0;
}
