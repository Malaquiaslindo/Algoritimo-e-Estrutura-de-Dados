#include <iostream>
using namespace std;

class Agenda{
	
	public:
		Agenda(string oNome,int oTelefone){
		this->Nome = oNome;
		this->Telefone = oTelefone;
		
};

string getNome(){
	return Nome;
}
int getTelefone(){
	return Telefone;
}
void imprimirDados(){
	cout<< "O seu nome eh "<<Nome;
	cout<< "\n o seu telefone eh "<<Telefone;
}
	private:
		int Telefone;
		string Nome;
};

int main(){
	Agenda yAgenda("ian",12345);
	yAgenda.imprimirDados();
	return 0;
}
	

