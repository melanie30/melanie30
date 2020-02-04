#include<iostream>
using namespace std;
main()
{
	  int choice;
	  int p,q;
	  int x,y,l;
	  main:
	  cout << "choices: \n 1) conjunction \n 2) disjunction \n 3) conditional proposition\n 4) biconditional proposition\n 5) negation \n";
	  cout << "enter choosen choices \n";
	  cin >> choice;
	  if(choice==1){
	  	cout << "conjunction \n ";
	  	cout << " enter 0 for false 1 for true " <<endl;
	  	cin >> p ;
	  	if(p==1){
	  		cout << "true\n";
		  }
		  if (p==0){
		  	cout << " false\n";
		  }
		  cin >> q;
		  if(q==1){
		  	cout << "true";
		  }
		  if(q==0){
		  	cout << "false";
		  }
	  	if(p==1 && q==1)
	  	{
	  		cout << "\nthe statement is true"<<endl;
		  }
		  if (p==1&&q==0){
		  	cout << " \nthe statement is false"<<endl;
		  }
		  if ( p==0 && q==1){
		  	cout << "\nthe statement is false"<<endl;
		  }
		  if(p==0 && q==0){
		  	cout << "\nthe statement is false"<<endl;
		  }
		   cout<< "\nenter 0 to end the prog 1 to go back";
	   cin >> l;
	  if (l==0){
	  	goto exit;
	  }
	  if(l==1){
	  		system("cls");
	  	goto main;
	  }
	  }
	  if(choice==2){
	  		cout << "disjunction \n ";
	  	cout << " enter 0 for false 1 for true " <<endl;
	  	cin >> p ;
	  	if(p==1){
	  		cout << "true\n";
		  }
		  if (p==0){
		  	cout << " false\n";
		  }
		  cin >> q;
		  if(q==1){
		  	cout << "true";
		  }
		  if(q==0){
		  	cout << "false";
		  }
	  	if(p==1 && q==1)
	  	{
	  		cout << "\nthe statement is true"<<endl;
		  }
		  if (p==1&&q==0){
		  	cout << " \nthe statement is true"<<endl;
		  }
		  if ( p==0 && q==1){
		  	cout << "\nthe statement is true"<<endl;
		  }
		  if(p==0 && q==0){
		  	cout << "\nthe statement is false"<<endl;
		  }
	  	 cout<< "\nenter 0 to end the prog 1 to go back";
	   cin >> l;
	  if (l==0){
	  	goto exit;
	  }
	  if(l==1){
	  		system("cls");
	  	goto main;
	  }
	  }
	  if(choice==3){
	  		cout << "conditional proposition \n ";
	  	cout << " enter 0 for false 1 for true " <<endl;
	  	cin >> p ;
	  	if(p==1){
	  		cout << "true\n";
		  }
		  if (p==0){
		  	cout << " false\n";
		  }
		  cin >> q;
		  if(q==1){
		  	cout << "true";
		  }
		  if(q==0){
		  	cout << "false";
		  }
	  	if(p==1 && q==1)
	  	{
	  		cout << "\nthe statement is true"<<endl;
		  }
		  if (p==1&&q==0){
		  	cout << " \nthe statement is false"<<endl;
		  }
		  if ( p==0 && q==1){
		  	cout << "\nthe statement is true"<<endl;
		  }
		  if(p==0 && q==0){
		  	cout << "\nthe statement is true"<<endl;
		  }
		   cout<< "\nenter 0 to end the prog 1 to go back";
	   cin >> l;
	  if (l==0){
	  	goto exit;
	  }
	  if(l==1){
	  		system("cls");
	  	goto main;
	  }
	  }
	  if(choice==4){
	  		cout << "biconditional proposition \n ";
	  	cout << " enter 0 for false 1 for true " <<endl;
	  	cin >> p ;
	  	if(p==1){
	  		cout << "true\n";
		  }
		  if (p==0){
		  	cout << " false\n";
		  }
		  cin >> q;
		  if(q==1){
		  	cout << "true";
		  }
		  if(q==0){
		  	cout << "false";
		  }
	  	if(p==1 && q==1)
	  	{
	  		cout << "\nthe statement is true"<<endl;
		  }
		  if (p==1&&q==0){
		  	cout << " \nthe statement is false"<<endl;
		  }
		  if ( p==0 && q==1){
		  	cout << "\nthe statement is false"<<endl;
		  }
		  if(p==0 && q==0){
		  	cout << "\nthe statement is true"<<endl;
		  }
		   cout<< "\nenter 0 to end the prog 1 to go back";
	   cin >> l;
	  if (l==0){
	  	goto exit;
	  }
	  if(l==1){
	  		system("cls");
	  	goto main;
	  }
	  }
	  if (choice==5){
	  		cout << "negation \n ";
	  	cout << " enter 0 for false 1 for true " <<endl;
	  	cin >> p ;
	  	if(p==1){
	  		cout << "true\n";
	  		cout<< " the negation is false\n";
		  }
		  if (p==0){
		  	cout << " false\n";
		  	cout << " the negation is true\n";
		  }
		  cin >> q;
		  if(q==1){
		  	cout << "true";
		  	cout << "the negation is false";
		  }
		  if(q==0){
		  	cout << "false";
		  	cout << "the negation is true";
		  }
	   cout<< "\nenter 0 to end the prog 1 to go back";
	   cin >> l;
	  if (l==0){
	  	goto exit;
	  }
	  if(l==1){
	  	system("cls");
	  	goto main;
	  }
	  }
	 
exit:	 {
system("cls");
} 
}
