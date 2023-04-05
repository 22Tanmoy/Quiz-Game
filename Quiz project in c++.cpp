#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
	
	int a,b,score=0;
	
	cout<<"What is your Fav Topic , that you want to play quiz"<<endl;
	
	cout<<"  "<<endl;
	
	cout<<"1.Sports 2.Games 3.Technology 4.GK"<<endl;
	
	cout<<"  "<<endl;
	cout<<"-------------------------****---------------------"<<endl;
	
	cout<<"If you want to take quiz on Sports , then press '1'"<<endl;
	cout<<"If you want to take quiz on Games , then press '2'"<<endl;
	cout<<"If you want to take quiz on Technology , then press '3'"<<endl;
	cout<<"If you want to take quiz on GK , then press '4'"<<endl;
	
	cout<<"-------------------------****---------------------"<<endl;
	
	cout<<"  "<<endl;
	
	cout<<"Do you want to play a quiz on any topic? , then press the value:- ";
	cin>>a; 
	       
	       //phase 1
	
	if(a==1){
		cout<<"your Fav topic is SPORTS , Start your Quiz on Sports"<<endl;
		cout<<"  "<<endl;
		cout<<"Here are FIVE question and each questions contain 10 points and wrong Ans -5"<<endl;
		cout<<"  "<<endl;
		  
		  // Question 1 
		
		cout<<"A. 'Electra Gold Cup' is associated with which sports?"<<endl;
		cout<<" \n 1.Lawn Tennis\n 2.Table Tennis\n 3.Badminton\n 4.Football"<<endl;
		cout<<""<<endl;
		cout<<"Press the Option number:-";
		cin>>b;
		if(b==2){
			cout<<"Congrats , Right Ans"<<endl;
			score=score+10;
			cout<<""<<endl;
			cout<<"Your Score is"<<" "<<score<<endl;
			cout<<endl;
		}
		else{
			score=score-5;
			cout<<"OOPs , Correct ANS is 'Table Tannis'"<<endl;
			cout<<" "<<endl;
			cout<<"your Score is"<<" "<<score<<endl;
			cout<<endl;
		}
		
		   // Question 2
		
        cout<<"B. 'Omega Mission Hills World Cup' is related to which game?"<<endl;
        cout<<"\n 1. Tennis\n 2. Golf\n 3. Hockey\n 4. Polo"<<endl;
        cout<<"  "<<endl;
        cout<<"Press the Option number:-";
		cin>>b;
		if(b==2){
			cout<<"Congrats , Right Ans"<<endl;
			score=score+10;
			cout<<""<<endl;
			cout<<"your Score is"<<" "<<score<<endl;
			cout<<endl;
		}
		else{
			score=score-5;
			cout<<"OOPs , Correct ANS is 'Golf'"<<endl;
			cout<<" "<<endl;
			cout<<"your Score is"<<" "<<score<<endl;
			cout<<endl;
		}
		
		  // question 3
		
        cout<<"C. The term 'Tee' is used commonly in which among the following sports??"<<endl;
        cout<<"\n 1. Tennis\n 2. Golf\n 3. Racing\n 4. Polo"<<endl;
        cout<<"  "<<endl;
        cout<<"Press the Option number:-";
		cin>>b;
		if(b==2){
			cout<<"Congrats , Right Ans"<<endl;
			score=score+10;
			cout<<endl;
			cout<<"your Score is"<<" "<<score<<endl;
			cout<<endl;
		}
		else{
			score=score-5;
			cout<<"OOPs , Correct ANS is 'Golf'"<<endl;
			cout<<" "<<endl;
			cout<<"your Score is"<<" "<<score<<endl;
			cout<<endl;
		}
		
		  // question 4
		
		 cout<<"D. Which among the following team was first winner of 'World Cup Hockey' ?"<<endl;
        cout<<"\n 1.Spain\n 2.France\n 3.UK\n 4.Pakistan"<<endl;
        cout<<"  "<<endl;
        cout<<"Press the Option number:-";
		cin>>b;
		if(b==4){
			cout<<"Congrats , Right Ans"<<endl;
			score=score+10;
			cout<<endl;
			cout<<"your Score is"<<" "<<score<<endl;
			cout<<endl;
		}
		else{
			score=score-5;
			cout<<"OOPs , Correct ANS is 'Pakistan'"<<endl;
			cout<<" "<<endl;
			cout<<"your Score is"<<" "<<score<<endl;
			cout<<endl;
		}
		
		// question 5
		
		 cout<<"E. Who won the first ever Cricket World Cup in 1975?"<<endl;
        cout<<"\n 1.Australia\n 2.India\n 3.England\n 4.West Indies"<<endl;
        cout<<"  "<<endl;
        cout<<"Press the Option number:-";
		cin>>b;
		if(b==4){
			cout<<"Congrats , Right Ans"<<endl;
			score=score+10;
			cout<<endl;
			cout<<"your Score is"<<" "<<score<<endl;
			cout<<endl;
		}
		else{
			score=score-5;
			cout<<"OOPs , Correct ANS is 'West Indies'"<<endl;
			cout<<" "<<endl;
			cout<<"your Score is"<<" "<<score<<endl;
			cout<<endl;
		}
	}
	
	                        // next phase 2
	
	if(a==2){
		
		cout<<"your Fav topic is Games , Start your Quiz on Games"<<endl;
		cout<<"  "<<endl;
		cout<<"Here are FIVE question and each questions contain 10 points and wrong Ans -5"<<endl;
		cout<<"  "<<endl;
		
		// question 1
		
		cout<<"A. Which team clinched the Asia Cup 2022 title in Cricket?"<<endl;
        cout<<"\n 1.Sri Lanka\n 2.India\n 3.Bangladesh\n 4.Pakistan"<<endl;
        cout<<"  "<<endl;
        cout<<"Press the Option number:-";
		cin>>b;
		if(b==1){
			cout<<"Congrats , Right Ans"<<endl;
			score=score+10;
			cout<<endl;
			cout<<"your Score is"<<" "<<score<<endl;
			cout<<endl;
		}
		else{
			score=score-5;
			cout<<"OOPs , Correct ANS is 'Sri Lanka'"<<endl;
			cout<<" "<<endl;
			cout<<"your Score is"<<" "<<score<<endl;
			cout<<endl;
		}
		
		//question 2
		
		cout<<"B. Who emerged as the champion of the US Open 2022 Men's Singles title?"<<endl;
        cout<<"\n 1.Casper Ruud\n 2.Rajeev Ram\n 3.Carlos Alcaraz Garfia\n 4.Joe Salisbury"<<endl;
        cout<<"  "<<endl;
        cout<<"Press the Option number:-";
		cin>>b;
		if(b==3){
			cout<<"Congrats , Right Ans"<<endl;
			score=score+10;
			cout<<endl;
			cout<<"your Score is"<<" "<<score<<endl;
			cout<<endl;
		}
		else{
			score=score-5;
			cout<<"OOPs , Correct ANS is 'Carlos Alcaraz Garfia'"<<endl;
			cout<<" "<<endl;
			cout<<"your Score is"<<" "<<score<<endl;
			cout<<endl;
		}
		
		// question 3
		
			cout<<"C. What is the name of the mascot of the 36th National Games?"<<endl;
        cout<<"\n 1.Sabuj\n 2.Savaj\n 3.Bharat\n 4.Lion"<<endl;
        cout<<"  "<<endl;
        cout<<"Press the Option number:-";
		cin>>b;
		if(b==2){
			cout<<"Congrats , Right Ans"<<endl;
			score=score+10;
			cout<<endl;
			cout<<"your Score is"<<" "<<score<<endl;
			cout<<endl;
		}
		else{
			score=score-5;
			cout<<"OOPs , Correct ANS is 'Savaj'"<<endl;
			cout<<" "<<endl;
			cout<<"your Score is"<<" "<<score<<endl;
			cout<<endl;
		}
		
		// question 4
		
			cout<<"D. World's fastest sprinter Usain Bolt belongs to which country?"<<endl;
        cout<<"\n 1.Nigeria\n 2.Yuganda\n 3.Jamaica\n 4.West Indies"<<endl;
        cout<<"  "<<endl;
        cout<<"Press the Option number:-";
		cin>>b;
		if(b==3){
			cout<<"Congrats , Right Ans"<<endl;
			score=score+10;
			cout<<endl;
			cout<<"your Score is"<<" "<<score<<endl;
			cout<<endl;
		}
		else{
			score=score-5;
			cout<<"OOPs , Correct ANS is 'Jamaica'"<<endl;
			cout<<" "<<endl;
			cout<<"your Score is"<<" "<<score<<endl;
			cout<<endl;
		}
		
		//question 5
		
			cout<<"E. In 2021, who is the reigning Olympic Men's Field Hockey Champion?"<<endl;
        cout<<"\n 1.Argentina\n 2.Germany\n 3.Holland\n 4.Belgium"<<endl;
        cout<<"  "<<endl;
        cout<<"Press the Option number:-";
		cin>>b;
		if(b==4){
			cout<<"Congrats , Right Ans"<<endl;
			score=score+10;
			cout<<"your Score is"<<" "<<score<<endl;
			cout<<endl;
		}
		else{
			score=score-5;
			cout<<"OOPs , Correct ANS is 'Belgium'"<<endl;
			cout<<" "<<endl;
			cout<<"your Score is"<<" "<<score<<endl;
			cout<<endl;
		}
		
	}
	              // next phase 3
	              
	    if(a==3){
			
			cout<<"your Fav topic is Technology , Start your Quiz on Technology"<<endl;
		cout<<"  "<<endl;
		cout<<"Here are FIVE question and each questions contain 10 points and wrong Ans -5"<<endl;
		cout<<"  "<<endl;
		
		// question 1
		
		cout<<"A. What was the fastest growing web browser in 2020?"<<endl;
        cout<<"\n 1.Microsoft Edge\n 2.Firefox\n 3.Google Chrome\n 4.Internet Explorer"<<endl;
        cout<<"  "<<endl;
        cout<<"Press the Option number:-";
		cin>>b;
		if(b==3){
			cout<<"Congrats , Right Ans"<<endl;
			score=score+10;
			cout<<endl;
			cout<<"your Score is"<<" "<<score<<endl;
			cout<<endl;
		}
		else{
			score=score-5;
			cout<<"OOPs , Correct ANS is 'Chrome'"<<endl;
			cout<<" "<<endl;
			cout<<"your Score is"<<" "<<score<<endl;
			cout<<endl;
		}
		// question 2
		
		cout<<"B. What technology is used to record cryptocurrency transactions?"<<endl;
        cout<<"\n 1.Digital wallet\n 2.Mining\n 3.Blockchain\n 4.Token"<<endl;
        cout<<"  "<<endl;
        cout<<"Press the Option number:-";
		cin>>b;
		if(b==3){
			cout<<"Congrats , Right Ans"<<endl;
			score=score+10;
			cout<<endl;
			cout<<"your Score is"<<" "<<score<<endl;
			cout<<endl;
		}
		else{
			score=score-5;
			cout<<"OOPs , Correct ANS is 'Blockchain'"<<endl;
			cout<<" "<<endl;
			cout<<"your Score is"<<" "<<score<<endl;
			cout<<endl;
		}
		
		//question 3
		
		cout<<"C. What tool would you use to reduce the digital image size?"<<endl;
        cout<<"\n 1.TinyPNG\n 2.Brush\n 3.Rotate\n 4.Crop"<<endl;
        cout<<"  "<<endl;
        cout<<"Press the Option number:-";
		cin>>b;
		if(b==1){
			cout<<"Congrats , Right Ans"<<endl;
			score=score+10;
			cout<<endl;
			cout<<"your Score is"<<" "<<score<<endl;
			cout<<endl;
		}
		else{
			score=score-5;
			cout<<"OOPs , Correct ANS is 'TinyPNG'"<<endl;
			cout<<" "<<endl;
			cout<<"your Score is"<<" "<<score<<endl;
			cout<<endl;
		}
		
		//question 4
		
		cout<<"D. How many computer languages are in use?"<<endl;
        cout<<"\n 1.200\n 2.2000\n 3.1000\n 4.500"<<endl;
        cout<<"  "<<endl;
        cout<<"Press the Option number:-";
		cin>>b;
		if(b==2){
			cout<<"Congrats , Right Ans"<<endl;
			score=score+10;
			cout<<endl;
			cout<<"your Score is"<<" "<<score<<endl;
			cout<<endl;
		}
		else{
			score=score-5;
			cout<<"OOPs , Correct ANS is '2000'"<<endl;
			cout<<" "<<endl;
			cout<<"your Score is"<<" "<<score<<endl;
			cout<<endl;
		}
		
		//question 5
		
		cout<<"E. Which of the following is not one of the early “protocols,” or ways to use the Internet?"<<endl;
        cout<<"\n 1.FTP\n 2.Telnet\n 3.Telnet\n 4.Blogging"<<endl;
        cout<<"  "<<endl;
        cout<<"Press the Option number:-";
		cin>>b;
		if(b==4){
			cout<<"Congrats , Right Ans"<<endl;
			score=score+10;
			cout<<endl;
			cout<<"your Score is"<<" "<<score<<endl;
			cout<<endl;
		}
		else{
			score=score-5;
			cout<<"OOPs , Correct ANS is 'Blogging'"<<endl;
			cout<<" "<<endl;
			cout<<"your Score is"<<" "<<score<<endl;
			cout<<endl;
		}
			
		} 
		
		//next phase 4
		
		if(a==4){
			
		cout<<"your Fav topic is GK , Start your Quiz on GK"<<endl;
		cout<<"  "<<endl;
		cout<<"Here are FIVE question and each questions contain 10 points and wrong Ans -5"<<endl;
		cout<<"  "<<endl;
		
		// question 1
		
		cout<<"A. Which one of the following river flows between Vindhyan and Satpura ranges?"<<endl;
        cout<<"\n 1. Narmada\n 2. Mahanadi\n 3. Ganga\n 4.Netravati"<<endl;
        cout<<"  "<<endl;
        cout<<"Press the Option number:-";
		cin>>b;
		if(b==1){
			cout<<"Congrats , Right Ans"<<endl;
			score=score+10;
			cout<<endl;
			cout<<"your Score is"<<" "<<score<<endl;
			cout<<endl;
		}
		else{
			score=score-5;
			cout<<"OOPs , Correct ANS is 'Narmada'"<<endl;
			cout<<" "<<endl;
			cout<<"your Score is"<<" "<<score<<endl;
			cout<<endl;
		}
		
		// question 2
		
		cout<<"B. Who among the following wrote Sanskrit grammar?"<<endl;
        cout<<"\n 1. Kalidasa\n 2. Charak\n 3.  Panini\n 4.Aryabhatt"<<endl;
        cout<<"  "<<endl;
        cout<<"Press the Option number:-";
		cin>>b;
		if(b==3){
			cout<<"Congrats , Right Ans"<<endl;
			score=score+10;
			cout<<endl;
			cout<<"your Score is"<<" "<<score<<endl;
			cout<<endl;
		}
		else{
			score=score-5;
			cout<<"OOPs , Correct ANS is ' Panini'"<<endl;
			cout<<" "<<endl;
			cout<<"your Score is"<<" "<<score<<endl;
			cout<<endl;
		}
		
				// question 3
		
		cout<<"C. The country that has the highest in Barley Production?"<<endl;
        cout<<"\n 1. China\n 2. India\n 3. France\n 4. Russia"<<endl;
        cout<<"  "<<endl;
        cout<<"Press the Option number:-";
		cin>>b;
		if(b==4){
			cout<<"Congrats , Right Ans"<<endl;
			score=score+10;
			cout<<endl;
			cout<<"your Score is"<<" "<<score<<endl;
			cout<<endl;
		}
		else{
			score=score-5;
			cout<<"OOPs , Correct ANS is ' Russia'"<<endl;
			cout<<" "<<endl;
			cout<<"your Score is"<<" "<<score<<endl;
			cout<<endl;
		}
		
			// question 4
		
		cout<<"D. Guwahati High Court is the judicature of?"<<endl;
        cout<<"\n1. Kalidasa\n 2. Nagaland\n 3. Arunachal Pradesh\n 4.All of Above"<<endl;
        cout<<"  "<<endl;
		cin>>b;
		if(b==4){
			cout<<"Congrats , Right Ans"<<endl;
			score=score+10;
			cout<<endl;
			cout<<"your Score is"<<" "<<score<<endl;
			cout<<endl;
		}
		else{
			score=score-5;
			cout<<"OOPs , Correct ANS is ' All of Above'"<<endl;
			cout<<" "<<endl;
			cout<<"your Score is"<<" "<<score<<endl;
			cout<<endl;
		}
		
			// question 5
		
		cout<<"E. Grand Central Terminal, Park Avenue, New York is the world’s :-"<<endl;
        cout<<"\n 1. highest railway station\n 2. largest railway station\n 3. longest railway station\n 4.None of the above"<<endl;
        cout<<"  "<<endl;
        cout<<"Press the Option number:-";
		cin>>b;
		if(b==2){
			cout<<"Congrats , Right Ans"<<endl;
			score=score+10;
			cout<<endl;
			cout<<"your Score is"<<" "<<score<<endl;
			cout<<endl;
		}
		else{
			score=score-5;
			cout<<"OOPs , Correct ANS is ' largest railway station'"<<endl;
			cout<<" "<<endl;
			cout<<"your Score is"<<" "<<score<<endl;
			cout<<endl;
		}
		}
	
	cout<<"Your Final Score Is"<<" "<<score<<endl;
	cout<<" "<<endl;
	
	if(score<=10){
		cout<<"Your Score is too low , Improve Yourself"<<endl;
	}
	if(score>=11 && score<20){
		cout<<"Congrats"<<endl;
		cout<<"Your Score is low , Its not good "<<endl;
	}
	if(score>=21 && score<30){
		cout<<"Congrats"<<endl;
		cout<<"Your Score is Average , Its not too good "<<endl;
	}
	if(score>=31 && score<40){
		cout<<"Congrats"<<endl;
		cout<<"Your Score is Well , Its good "<<endl;
	}
	
	if(score>=40){
		cout<<"Congrats"<<endl;
		cout<<"Your Score is too High , Its outstanding "<<endl;
	}
	
	 cout<<"Thank You"<<endl;  
	 
	 cout<<"----------------------------------Created BY @Tanmoy_Rana------------------------"<<endl;
	 cout<<"---------------tanmoyranak@gmail.com-----------------------------"<<endl;
	return 0;
} 