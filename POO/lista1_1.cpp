--//questao 1 

/*

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

*/

--// questao 2

/*
#include <iostream>
#include <string>

using namespace std;


class Aluno {
private:
    string nome;
    string matricula;
    string curso;

public:
    
    Aluno(string _nome, string _matricula, string _curso) : nome(_nome), matricula(_matricula) curso(_curso) {}

   
    void exibirInformacoes() {
        cout << "Nome: " << nome << endl;
        cout << "Matricula: " << matricula << endl;
        cout << "Curso: " << curso << endl;
    }
};


class Disciplina {
private:
    string nome;
    int numAlunos;
    Aluno* alunos[50];

public:

    Disciplina(string _nome) : nome(_nome), numAlunos(0) {}


    void adicionarAluno(Aluno* aluno) {
        if (numAlunos < 50) {
            alunos[numAlunos++] = aluno;
            cout << "Aluno adicionado com sucesso na disciplina " << nome << endl;
        } else {
            cout << "Limite máximo de alunos atingido para a disciplina " << nome << endl;
        }
    }

 
    void exibirAlunos() {
        cout << "Alunos matriculados na disciplina " << nome << ":" << endl;
        for (int i = 0; i < numAlunos; ++i) {
            cout << "Aluno " << i + 1 << ":" << endl;
            alunos[i]->exibirInformacoes();
            cout << endl;
        }
    }
};

int main() {
 
    Aluno aluno1("Ianzin", "2024001", "Engenharia");
    Aluno aluno2("fred", "2024002", "Medicina");
    Aluno aluno3("wesin", "2024003", "Direito");


    Disciplina disciplina1("Programacao");
    Disciplina disciplina2("Matematica");

  
    disciplina1.adicionarAluno(&aluno1);
    disciplina1.adicionarAluno(&aluno2);
    disciplina2.adicionarAluno(&aluno3);

   
    disciplina1.exibirAlunos();
    disciplina2.exibirAlunos();

    return 0;
}

*/

--//questao 3
/*

#include <iostream>
#include <string>

using namespace std;


class Aluno {
private:
    string nome;
    string matricula;
    string curso;
    float nota;
    int faltas;

public:
   
    Aluno(string _nome, string _matricula, string _curso) : nome(_nome), matricula(_matricula), curso(_curso), nota(0), faltas(0) {}

  
    void atribuirNota(float _nota) {
        nota = _nota;
    }

   
    void registrarFalta() {
        faltas++;
    }

  
    void exibirInformacoes() {
        cout << "Nome: " << nome << endl;
        cout << "Matricula: " << matricula << endl;
        cout << "Curso: " << curso << endl;
        cout << "Nota: " << nota << endl;
        cout << "Faltas: " << faltas << endl;
    }
};


class Disciplina {
private:
    string nome;
    int numAlunos;
    Aluno* alunos[50]; 

public:
    
    Disciplina(string _nome) : nome(_nome), numAlunos(0) {}

   
    void adicionarAluno(Aluno* aluno) {
        if (numAlunos < 50) {
            alunos[numAlunos++] = aluno;
            cout << "Aluno adicionado com sucesso na disciplina " << nome << endl;
        } else {
            cout << "Limite máximo de alunos atingido para a disciplina " << nome << endl;
        }
    }

   
    void exibirAlunos() {
        cout << "Alunos matriculados na disciplina " << nome << ":" << endl;
        for (int i = 0; i < numAlunos; ++i) {
            cout << "Aluno " << i + 1 << ":" << endl;
            alunos[i]->exibirInformacoes();
            cout << endl;
        }
    }
};

int main() {
   
    Aluno aluno1("Ianzin", "2024001", "Engenharia");
    Aluno aluno2("Fred", "2024002", "Medicina");
    Aluno aluno3("Wesin", "2024003", "Direito");

   
    Disciplina disciplina1("Programacao");
    Disciplina disciplina2("Matematica");

  
    disciplina1.adicionarAluno(&aluno1);
    disciplina1.adicionarAluno(&aluno2);
    disciplina2.adicionarAluno(&aluno3);

  
    aluno1.atribuirNota(8.5);
    aluno2.atribuirNota(7.0);
    aluno3.atribuirNota(6.5);

   
    aluno1.registrarFalta();
    aluno1.registrarFalta();
    aluno2.registrarFalta();
    aluno3.registrarFalta();
    aluno3.registrarFalta();

    
    disciplina1.exibirAlunos();
    disciplina2.exibirAlunos();

    return 0;
}

*/

--//questao 4
/*
#include <iostream>
#include <string>

using namespace std;


class Carro {
private:
    string marca;
    string placa;
    string cor;

public:
  
    Carro(string _marca, string _placa, string _cor) : marca(_marca), placa(_placa), cor(_cor) {}

   
    void exibirInformacoes() {
        cout << "Marca: " << marca << endl;
        cout << "Placa: " << placa << endl;
        cout << "Cor: " << cor << endl;
    }
};


class Dono {
private:
    string nome;
    string telefone;
    Carro* carro;

public:
  
    Dono(string _nome, string _telefone, Carro* _carro) : nome(_nome), telefone(_telefone), carro(_carro) {}

    
    void exibirInformacoes() {
        cout << "Nome do dono: " << nome << endl;
        cout << "Telefone do dono: " << telefone << endl;
        cout << "Informacoes do carro do dono:" << endl;
        carro->exibirInformacoes();
        cout << endl;
    }
};

int main() {
 
    Carro carro1("Volkswagen", "ABC1234", "Prata");
    Carro carro2("Ford", "XYZ9678", "Preto");

 
    Dono dono1("Ianzin", "12345678", &carro1);
    Dono dono2("Fred", "99627734", &carro2);

   
    cout << "Informacoes dos carros cadastrados:" << endl;
    cout << "Carro 1:" << endl;
    carro1.exibirInformacoes();
    cout << "Carro 2:" << endl;
    carro2.exibirInformacoes();

    return 0;
}
*/


--//questao 5
/*
#include <iostream>
#include <cmath>

using namespace std;

class Calculadora {
private:
    double raio;
    double aresta;

public:
  
    Calculadora() : raio(0), aresta(0) {}


    void definirDimensoesCirculo(double _raio) {
        raio = _raio;
    }

   
    void definirDimensoesCubo(double _aresta) {
        aresta = _aresta;
    }


    double calcularComprimentoCircunferencia() {
        return 2 * M_PI * raio;
    }

 
    double calcularAreaCircunferencia() {
        return M_PI * pow(raio, 2);
    }

  
    double calcularAreaLateralCubo() {
        return 4 * pow(aresta, 2);
    }


    double calcularAreaTotalCubo() {
        return 6 * pow(aresta, 2);
    }


    double calcularVolumeCubo() {
        return pow(aresta, 3);
    }

   
    void imprimirCalculos() {
        cout << "Cálculos do círculo:" << endl;
        cout << "Comprimento da circunferência: " << calcularComprimentoCircunferencia() << endl;
        cout << "Área da circunferência: " << calcularAreaCircunferencia() << endl;

        cout << "\nCálculos do cubo:" << endl;
        cout << "Área lateral do cubo: " << calcularAreaLateralCubo() << endl;
        cout << "Área total do cubo: " << calcularAreaTotalCubo() << endl;
        cout << "Volume do cubo: " << calcularVolumeCubo() << endl;
    }
};

int main() {
   
    Calculadora calculadora;

  
    calculadora.definirDimensoesCirculo(5); 
    calculadora.definirDimensoesCubo(3);    

   
    calculadora.imprimirCalculos();

    return 0;
}
*/
--//questao 6
/*
#include <iostream>
#include <string>

using namespace std;


class Pessoa {
private:
    string nome;
    string telefone;
    string tipoSanguineo;
    int idade;

public:

    Pessoa(string _nome, string _telefone, string _tipoSanguineo, int _idade)
        : nome(_nome), telefone(_telefone), tipoSanguineo(_tipoSanguineo), idade(_idade) {}

    
    bool isDoadorUniversal() {
        return tipoSanguineo == "O-";
    }

  
    void imprimirInformacoes() {
        cout << "Nome: " << nome << endl;
        cout << "Telefone: " << telefone << endl;
        cout << "Tipo Sanguineo: " << tipoSanguineo << endl;
        cout << "Idade: " << idade << endl;
        cout << endl;
    }
};

int main() {

    Pessoa pessoa1("Ianzinho", "123456789", "O-", 30);
    Pessoa pessoa2("Fred", "44444444", "A+", 25);
    Pessoa pessoa3("Wesin", "55555555", "O-", 40);
    Pessoa pessoa4("Pedro", "999999999", "AB+", 35);

   
    cout << "Doadores Universais (Tipo Sanguíneo O-):" << endl;
    if (pessoa1.isDoadorUniversal()) pessoa1.imprimirInformacoes();
    if (pessoa2.isDoadorUniversal()) pessoa2.imprimirInformacoes();
    if (pessoa3.isDoadorUniversal()) pessoa3.imprimirInformacoes();
    if (pessoa4.isDoadorUniversal()) pessoa4.imprimirInformacoes();

    return 0;
}
*/
