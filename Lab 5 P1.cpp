#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main()
{
	srand((unsigned)time(NULL));
    int grade, num, ques;
    int right=0; //��ȷ����Ŀ�� 
    cout << "Please enter your grade?" << endl;
    cin >> grade;
    cout << "Please enter the number of questions?" << endl;
    cin >> num;
    if (grade<3&&grade>0) //1��2�꼶 
    {
    	int result1;
    	for(int i=0;i<num;i++) 
		{
			int a=rand()%2; //�Ӽ����ж� 
	    	int ran1=rand()%100;
	    	int ran2=rand()%100;
	    	
			if (a==0) //�ӷ� 
			{
				int sum=ran1+ran2;
				cout << ran1 << "+" << ran2 << "=" << endl;
				cin >> result1;
				if (result1==sum)
				{
					right+=1;	
				}
			} 
			
			if (a==1) //���� 
			{
				int sub=ran1-ran2;
				cout << ran1 << "-" << ran2 << "=" << endl;
				cin >> result1;
				if (result1==sub)
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
