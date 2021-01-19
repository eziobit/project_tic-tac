#include <iostream>
#include<ctime>
#include <conio.h>
#include <cstdlib>
using namespace std;

class main_frame{
	public:
		char a,b,c,d,e,f,g,h,j;
		bool win=false;
		int scoreX=0 , scoreO=0;
		main_frame(){
			a='1';b='2';c='3';d='4';e='5';f='6';g='7';h='8';j='9';
		}
		
		void frame(char player){
				system("cls");
				cout<<"\t\t\tTic Tac Toc"<<endl<<endl;
				cout<<"player ==> "<<player;
				cout<<"\nscores:\tX="<<scoreX<<"\t O="<<scoreO;
		
		cout<<endl<<
				"\t\t     |     |     "					 <<endl<<
			    "\t\t  "<<a<<"  |  "<<b<<"  |  "<<c<<"  "<<endl<< 
				"\t\t_____|_____|_____"					 <<endl<<
				"\t\t     |     |     "					 <<endl<<
			    "\t\t  "<<d<<"  |  "<<e<<"  |  "<<f<<"  "<<endl<< 
				"\t\t_____|_____|_____"					 <<endl<<
				"\t\t     |     |     "					 <<endl<<
			    "\t\t  "<<g<<"  |  "<<h<<"  |  "<<j<<"  "<<endl<<
				"\t\t     |     |     "					 <<endl;
}		
		void score(char player){
			if(player=='x'){
				scoreX++;
			}else if(player=='o'){
				scoreO++;
			}
		}
		void reset(){
			a='1';b='2';c='3';d='4';e='5';f='6';g='7';h='8';j='9';
			win=false;
		}
		void vectory(char p){
			if(a==p && b==p && c==p){
				cout<<"\n\nplayer "<<p<<" won\n";
				win =true;
				
			}else if(d==p && e==p && f==p){
				cout<<"\n\nplayer "<<p<<" won\n";
				win =true;
				
			}else if(g==p && h==p && j==p){
				cout<<"\n\nplayer "<<p<<" won\n";
				win =true;
				
			}else if(a==p && d==p && g==p){
				cout<<"\n\nplayer "<<p<<" won\n";
				win =true;
				
			}else if(b==p && e==p && h==p){
				cout<<"\n\nplayer "<<p<<" won\n";
				win =true;
				
			}else if(c==p && f==p && j==p){
				cout<<"\n\nplayer "<<p<<" won\n";
				win =true;
				
			}else if(a==p && e==p && j==p){
				cout<<"\n\nplayer "<<p<<" won\n";
				win =true;
				
			}else if(c==p && e==p && g==p){
				cout<<"\n\nplayer "<<p<<" won\n";
				win =true;
				
			}else if(a!='1' && b!='2' && c!='3' && d!='4' && e!='5' && f!='6' && g!='7' && h!='8' && j!='9'){
			cout<<"\n\nDRAW\n\n";
			system("pause");
			reset();		
			}
		}
		
		
};
main_frame world;

void play(char player);
void comp(char player);
void overriden(char p, char c_h){
				system("cls");
				system("color 04");
				if(c_h=='c'){
					comp(p);
				}else if (c_h=='h'){
				play(p);	
				}
				
}
void values(char change,char player,char C_H){
			switch(change){
				case '1':
					if(world.a=='o' || world.a=='x'){
						overriden(player,C_H);
					}else{
						
						world.a=player;
					}
					
					break;
				case '2':
					if(world.b=='o' || world.b=='x'){
						overriden(player,C_H);
					}else{
			
						world.b=player;
					}
					break;
				case '3':
					if(world.c=='o' || world.c=='x'){
						overriden(player,C_H);
					}else{
							
						world.c=player;
					}
					break;
				case '4':
					if(world.d=='o' || world.d=='x'){
						overriden(player,C_H);
					}else{
			
						world.d=player;
					}
					break;
				case '5':
					if(world.e=='o' || world.e=='x'){
						overriden(player,C_H);
					}else{
							
						world.e=player;
					}
					break;
				case '6':
					if(world.f=='o' || world.f=='x'){
						overriden(player,C_H);
					}else{
					
						world.f=player;
					}
					break;
				case '7':
					if(world.g=='o' || world.g=='x'){
						overriden(player,C_H);
					}else{
						
						world.g=player;
					}
					break;
				case '8':
					if(world.h=='o' || world.h=='x'){
						overriden(player,C_H);
					}else{
				
						world.h=player;
					}
					break;
				case '9':
						if(world.j=='o' || world.j=='x'){
						overriden(player,C_H);
						}else{
							
						world.j=player;
					}
					break;		
			}
		}
		


void play(char player){
	
		char choice;
		
		world.frame(player);
	//	cout<<"\nscores:\tX="<<world.scoreX<<"\t O="<<world.scoreO;
		cout<<"\n\nEnter the number : ";choice=getch();
		values(choice,player,'h');
		system("color 07");
		
	}

void comp(char player){
	
	world.frame(player);

	int choice;
	choice =rand() %9 +1;
	char c_choice = static_cast<char>(choice +48);
	values(c_choice,player,'c');
	system("color 07");
}






int main(){
		srand(time(NULL));
		char player;
		char c;
		cout<<"Press 1 to play with computer"<<endl;
		cout<<"Presss 2 to play with other player"<<endl;
		c=getch();
		/////// Computer VS Human
		if (c=='1'){
			
			for(;;){
		player='x';
		play(player);
		world.vectory(player);
		if (world.win==true){
			world.score(player);
			world.frame(player);
			cout<<endl<<endl;
			system("pause");
			world.reset();
		}
		
		system("cls");
		player='o';
		comp(player);
		world.vectory(player);
		if (world.win==true){
			world.score(player);
			world.frame(player);
			cout<<endl<<endl;
			system("pause");
			world.reset();
		}
		system("cls");
	}
			
			
			///////////       Human VS Human
			
		}else if(c=='2'){
			for(;;){
		player='x';
		play(player);
		world.vectory(player);
		if (world.win==true){
			world.score(player);
			cout<<endl<<endl;
			system("pause");
			world.reset();
		}
		
		system("cls");
		player='o';
		play(player);
		world.vectory(player);
		if (world.win==true){
			world.score(player);
			cout<<endl<<endl;
			system("pause");
			world.reset();
		}
		system("cls");
	}
		}else {
			cout<<"Please make right choice";
		}
		
		
	
	
	
	
}

