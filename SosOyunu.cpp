#include"iostream"
#include"locale.h"
 
 using namespace std;
 main()
 {
 	
 	int s1,s2,s3,s4,s5, o1,o2,o3,o4;
 	//char 1, 2, 3, 4, 5, 6, 7, 8, 9;
  setlocale(LC_ALL,"Turkish");
  cout<<"\t[1][2][3]\n\t[4][5][6]\n\t[7][8][9]"<<endl;
  cout<<"\nYukarıdaki rakamlara göre koordinat girmelisiniz\n ";
  cout<<"\nÖnce S başlar, rakam girin: ";
  cin>>s1;
  cout<<"\nSıra O'da, rakam girin: ";
  cin>>o1;
  cout<<"\nSıra S'de, rakam girin: ";
  cin>>s2;
  cout<<"\nSıra O'da, rakam girin: ";
  cin>>o2;
  cout<<"\nSıra S'de, rakam girin: ";
  cin>>s3;
  cout<<"\nSıra O'da, rakam girin: ";
  cin>>o3;
  cout<<"\nSıra S'de, rakam girin: ";
  cin>>s4;
  cout<<"\nSıra O'da, rakam girin: ";
  cin>>o4;
  cout<<"\nSıra S'de, rakam girin: ";
  cin>>s5;
  
  ////-- KAZANMA DURUMU --/////
  // Kazanma Durumları: \n\t[1, 2, 3]\n\t[4, 5, 6]\n\t[7, 8, 9]\n\t[1, 4, 6]\n\t[2, 5, 8]\n\t[3, 6, 9]\n\t[1, 5, 9]\n\t[3, 5, 7]"<<endl;
  
  if(s1==1&&o1==2&&s2==3){  // 1 2 3
  	cout<<"S Kazandı!!!";
  }
  else if(s1==4&&o1==5&&s2==6) { // 4 5 6
    cout<<"S Kazandı!!!";
  }
  else if(s1==7&&o1==8&&s2==9){ // 7 8 9
  	cout<<"S Kazandı!!!";
  }
  else if(s1==1&&o1==4&&s2==6) { // 1 4 6
    cout<<"S Kazandı!!!";
  }
  else if(s1==2&&o1==5&&s2==8){ // 2 5 8
  	cout<<"S Kazandı!!!";
  }
  else if(s1==3&&o1==6&&s2==9) { // 3 6 9
    cout<<"S Kazandı!!!";
  }
  else if(s1==1&&o1==5&&s2==9){ // 1 5 9
  	cout<<"S Kazandı!!!";
  }
  else if(s1==3&&o1==5&&s2==7) { // 3 5 7
    cout<<"S Kazandı!!!";
  }
  else cout<<"Berabere";
  
  
  

    
    
 return 0;   
}
