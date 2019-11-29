#include<bits/stdc++.h> 
#include<iostream>
#include<string>
#include<conio.h>
using namespace std; 
  

int value(char r)
{ 
    if (r == 'I') 
        return 1; 
    if (r == 'V') 
        return 5; 
    if (r == 'X') 
        return 10; 
    if (r == 'L') 
        return 50; 
    if (r == 'C') 
        return 100; 
    if (r == 'D') 
        return 500; 
    if (r == 'M') 
        return 1000; 
        //k���k harf de kabul etmesi i�in yukardakinin ayn�s�n� k���k harflerle tekrarlad�m.
    if (r == '�') 
        return 1; 
    if (r == 'v') 
        return 5; 
    if (r == 'x') 
        return 10; 
    if (r == 'l') 
        return 50; 
    if (r == 'c') 
        return 100; 
    if (r == 'd') 
        return 500; 
    if (r == 'm') 
        return 1000; 
  
    return -1; // farkl� bir sembol girildi�inde -1 de�erini veriyor 
} 
  

int romanToOndalik(string &str) 
{ 
    
    int res = 0; 
  
     
    for (int i=0; i<str.length(); i++) 
    { 
         
        int s1 = value(str[i]); 
  
        if (i+1 < str.length()) 
        { 
            
            int s2 = value(str[i+1]); 
  
             
            if (s1 >= s2) 
            { 
                
                res = res + s1; 
            } 
            else
            { 
                res = res + s2 - s1; 
                i++; 
                      
            } 
        } 
        else
        { 
            res = res + s1; 
             
        } 
    } 
    return res; 
} 
  

int main() 
{ 
	setlocale(LC_ALL,"Turkish");
	cout<<"Roma rakamlar�n� ondal�k say�ya cevirmek i�in 1 e bas�n�z."<<endl;
	cout<<"Ondal�k say�y� Roma rakamlar�na �evirmek i�in 2 e bas�n�z."<<endl;
	int secim;
	cin>>secim;
    if(secim==1) {
	cout<<"Ondal�k say�ya �evirmek istedi�iniz Roma rakamlar�n� giriniz"<<endl;
    string str;
	cin>>str; 
    cout << "Girdi�iniz roma rakam�n�n ondal�k say�daki g�sterimi  "<< romanToOndalik(str) << endl; 
  	getch();
	
    return 0; 
	}
	if(secim==2)
	{
		cout<<"Roma rakamlar�na �evirmek istedi�iniz say�y� giriniz."<<endl;
		string sayi2;
		cin >>sayi2;
		stringstream geek(sayi2);
		int sayi,mSayisi,cSayisi,xSayisi,iSayisi;
		geek >> sayi;
		mSayisi=sayi/1000;
		cSayisi=(sayi % 1000) / 100;
		xSayisi=((sayi % 1000) % 100) / 10;
		iSayisi=((sayi % 1000) % 100) % 10;
		switch(mSayisi){	
			case 1:cout<<("M");
			break;
			case 2:cout<<("MM");
			break;
			case 3:cout<<("MMM");
			break;
			case 4:cout<<("MV^"); //v^ 5000'e denk gelmektedir
			break;
			}
		switch (cSayisi)
		 {
 			case 1: cout<<("C");
 			break;
 			case 2: cout<<("CC");
 			break;
 			case 3: cout<<("CCC");
			break;
 			case 4:	cout<<("CD");
 			break;
 			case 5: cout<<("D");
 			break;
 			case 6: cout<<("DC");
 			break;
 			case 7:	cout<<("DCC");
 			break;
 			case 8: cout<<("DCCC");
 			break;
 			case 9:	cout<<("CM");
 			break;
 			}
 		switch(xSayisi){
 			case 1: cout<<("X");
 			break;
 			case 2: cout<<("XX");
 			break;
 			case 3: cout<<("XXX");
			break;
 			case 4:	cout<<("XL");
 			break;
 			case 5: cout<<("L");
 			break;
 			case 6: cout<<("LX");
 			break;
 			case 7:	cout<<("LXX");
 			break;
 			case 8: cout<<("LXXX");
 			break;
 			case 9:	cout<<("XC");
 			break;
 			}
 		switch(iSayisi){
 			case 1: cout<<("I");
 			break;
 			case 2: cout<<("II");
 			break;
 			case 3: cout<<("III");
			break;
 			case 4:	cout<<("IV");
 			break;
 			case 5: cout<<("V");
 			break;
 			case 6: cout<<("VI");
 			break;
 			case 7:	cout<<("VII");
 			break;
 			case 8: cout<<("VIII");
 			break;
 			case 9:	cout<<("IX");
 			break;
 			}
		
	}
	getch();
	return 0;
	
} //Mehmet Can Kaval 2019280039
//http://www.m5bilisim.com/tr/hesaplamalar/roma-rakamlari-cevirici/
//https://yazilimsihirbazi.wordpress.com/2013/05/07/c-programlama-dili-roma-rakamlari-islemleri/

