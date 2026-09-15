#include<iostream>
#include<conio.h>
using namespace std;
int main ()
{
int n;
cout<<" ::  Enter Number Of Lessons : ";
cin>>n;

double a[n] , mark , part , main_mark , ela_mark=0 , al_part=0 , al_mark=0 ;

for(int i=0 ;i<n;i++){
		cout<<"\nLesson's "<<i+1<<" Mark :";
		cin>>mark;
		cout<<"Part Number :";
		cin>>part;
		ela_mark=mark*part;
		al_part=al_part+part;
		a[i]=ela_mark;
		cout<<endl;
		
}

for(int i=0 ;i<n;i++){
		al_mark=al_mark+a[i];}
		
		main_mark=al_mark/al_part;
		cout<<"\n :: ALL MARK OF "<<al_part<<" PART GRADUATED :"<<main_mark;
	




int startchanger , numoflesson  ;
double   new_part , old_part , new_mark , all1mark ;
while(1){
    cout<<"\n-------------------------------------------------------------------------";
	cout<<"\n\n :: If You Want Change Lesson Click Number 1 Or NO 2 : ";
		cin>>startchanger;
		if(startchanger==2){   return 0 ;  }

		
//--------------------------------------------------------------------------------------		
		cout<<"\nEnter  Number Of  Changing  Lessons : ";
		cin>>numoflesson;
		numoflesson=numoflesson-1;
		a[numoflesson]=0;
//--------------------------------------------------------------------------------------		
        cout<<"Enter New Mark Of  Changing   Lessons : ";
        cin>>new_mark;  
        
//--------------------------------------------------------------------------------------
        cout<<"Enter Before Part Of Changing Lessons : ";
        cin>>old_part;
		cout<<"Enter New    Part Of Changing Lessons : ";
        cin>>new_part;
       
//--------------------------------------------------------------------------------------	   
	   
	    all1mark=new_part*new_mark;
        a[numoflesson]=all1mark;
        al_part=al_part-old_part;
        al_part=al_part+new_part;
        
         for(int i=0 ;i<n;i++){
		 cout<<"\nLesson"<< i+1 << " Mark : "<< a[i] ;
		}
        al_mark=0;    //---------------------------------------------------------------------//cout<<"\nALL_MARK , SUM : "<<al_mark;//*THAT LINE SHOW MY SIMPLE PROBLEM *
        for(int i=0 ;i<n;i++){
		al_mark=al_mark+a[i];}
		
		main_mark=al_mark/al_part;
		cout<<"\n :: ALL MARK OF "<<al_part<<" PART GRADUATED :"<<main_mark;}
		
		return 0;
	
	}
		 
		









