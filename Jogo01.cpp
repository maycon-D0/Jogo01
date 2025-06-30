# include<iostream>
using namespace std;

int main()
{
    cout<< "jogo acertou perdeu"<<endl;
	string jogador1;
	string jogador2;
	int x;
	int y;
	int inc=1;
	int fm=100;
	cout <<" jogador1 digite seu  nome"<<endl;
	cin>>jogador1;
	cout <<"jogador2 digite seu nome "<<endl;
	cin>>jogador2;
	do {
   cout << jogador1 << ", digite um número entre 1 e 100: ";
   cin >> x;
   if (x < 1 || x > 100) {
   cout << "Número errado, Tente novamente." << endl;
   }
    } while (x < 1 || x > 100);

    cout << string(50, '\n');
	
   do {
   cout << jogador2 << ", tente adivinhar o numero do primeiro jogador entre (" << inc << " a " <<fm << "): ";
   cin >> y;

   if (y < inc || y > fm) {
   cout << "Palpite errado! Tente entre " << inc<< " e " << fm << "." << endl;
   continue;
   }

   if (y > x) {
    fm= y - 1;
  } else if (y < x) {
    inc= y + 1;
  }

    if (y != x) {
   cout << "Novo intervalo: " << inc<< " a " << fm << endl << endl;
   }

    } while (y != x);
    cout<<jogador2<<" você acertou ,mas perdeu"<<endl;
    
    return 0;
}