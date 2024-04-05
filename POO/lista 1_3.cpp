/*Questdo 1: Crie uma classe de Veiculos para uma concessionaria, a classe deve
armazenar as seguintes informagdes: peso do veiculo, ano, cor e marca (ndo esqueca de
usar os métodos setters e getters).

A classe deverd incluir métodos para: (1) adicionar novos veiculos; (2) imprimir na tela
os veiculos cadastrados e; (3) imprimir um arquivo .TXT com os veiculos cadastrados
(Utilize a biblioteca fstream para imprimir em arquivos .txt).
//--questão 1
*/
/*
#include <iostream>
#include <fstream>
#include <vector>
#include <tchar.h>
using namespace std;

class Veiculos {
public:
    Veiculos(float oPeso, int oAno, string aCor, string aMarca) {
        peso = oPeso;
        ano = oAno;
        cor = aCor;
        marca = aMarca;
    }

    float getPeso() {
        return peso;
    }

    int getAno() {
        return ano;
    }

    string getCor() {
        return cor;
    }

    string getMarca() {
        return marca;
    }

    void adicionarVeiculo(Veiculos novoVeiculo) {
        veiculos.push_back(novoVeiculo);
    }

   void imprimirVeiculos() {
    for (size_t i = 0; i < veiculos.size(); ++i) {
        Veiculos& veiculo = veiculos[i];
        cout << "Marca: " << veiculo.getMarca() << ", Ano: " << veiculo.getAno() << ", Cor: " << veiculo.getCor() << ", Peso: " << veiculo.getPeso() << endl;
    }
}

void imprimirParaArquivo() {
    ofstream arquivo("veiculos.txt");
    if (arquivo.is_open()) {
        for (size_t i = 0; i < veiculos.size(); ++i) {
            Veiculos& veiculo = veiculos[i];
            arquivo << "Marca: " << veiculo.getMarca() << ", Ano: " << veiculo.getAno() << ", Cor: " << veiculo.getCor() << ", Peso: " << veiculo.getPeso() << endl;
        }
        arquivo.close();
        cout << "Arquivo veiculos.txt criado com sucesso." << endl;
    } else {
        cout << "Erro ao abrir o arquivo." << endl;
    }
}

private:
    float peso;
    int ano;
    string cor;
    string marca;
    vector<Veiculos> veiculos;
};

int main() {
    Veiculos concessionaria(0, 0, "", "");
_tsetlocale(LC_ALL, _T("portuguese"));
    char opcao;
    do {
        cout << "Escolha uma opção:\n"
             << "(1) Adicionar novo veículo\n"
             << "(2) Imprimir veículos cadastrados\n"
             << "(3) Imprimir veículos em arquivo .TXT\n"
             << "(4) Sair\n";
        cin >> opcao;

        switch (opcao) {
            case '1': {
                float peso;
                int ano;
                string cor, marca;

                cout << "Digite o peso do veículo: ";
                cin >> peso;
                cout << "Digite o ano do veículo: ";
                cin >> ano;
                cout << "Digite a cor do veículo: ";
                cin >> cor;
                cout << "Digite a marca do veículo: ";
                cin >> marca;

                Veiculos novoVeiculo(peso, ano, cor, marca);
                concessionaria.adicionarVeiculo(novoVeiculo);
                break;
            }
            case '2':
                cout << "Veículos cadastrados:" << endl;
                concessionaria.imprimirVeiculos();
                break;
            case '3':
                concessionaria.imprimirParaArquivo();
                break;
            case '4':
                cout << "Saindo do programa..." << endl;
                break;
            default:
                cout << "Opção inválida. Por favor, escolha uma opção válida." << endl;
        }
    } while (opcao != '4');

    return 0;
}
*/

/*Questdo 2: Implemente a classe Vendedor como subclasse da classe Empregado. Um |
determinado vendedor tem como atributos, para além dos atributos da classe Pessoa e |
da classe Empregado, o atributo valorVendas (correspondente ao valor monetario dos
artigos vendidos) e o atributo comissao (porcentagem do valorVendas que serd |
~ adicionado ao vencimento base do Vendedor).*/

/*
#include <iostream>
#include <string>

using namespace std;

class Empregado {
public:
    float Dinheiro;
    int Horas;
};

class Pessoa : public Empregado {
public:
    int Anos;
    string Depressao;
};

class Vendedor : public Pessoa {
public:
    float valorVendas;
    float comissao;

    Vendedor(float valorVendas, float comissao) : valorVendas(valorVendas), comissao(comissao) {
	
	}

    float calcularSalario() {
        return Dinheiro + (valorVendas * (comissao / 100));
    }
};

int main() {
    
    Vendedor vendedor(5000, 10); 
    vendedor.Dinheiro = 2000; 
    cout << "Salario do vendedor: " << vendedor.calcularSalario() << endl;

    return 0;
}
*/
 /*	Questao 3: Diariamente nos deparamos com varias tarefas e problemas que podem ser
otimizados ou melhorados de alguma forma com programacgao. Pensando nisso, elabore
uma questdo de algum problema que vocé ache relevante. Nesta resolugdo, deve
constar:
-POO
- Heranga
- Arquivos (fstream)
Além disso, vocé deve elaborar o texto da questdo e colocar em um comentdrio no topo
do seu codigo.




A pessoa vai classificar o seu curriculo em nome, sexo, em pcd, pessoa sem problemas e a modalidade que quer participar na minha
 empresa e depois vai enviar um arquivo para mim sobre o curriculo, KKKKKKKK esse codigo ficou bom

*/

 	
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class Pessoa {
protected:
    string nome;
    char sexo; // 'F' para feminino, 'M' para masculino
    string modalidade;

public:
    Pessoa(const string& nome, char sexo, const string& modalidade) : nome(nome), sexo(sexo), modalidade(modalidade) {}

    virtual void escreverCurriculo(ofstream& arquivo) const {
        arquivo << "Nome: " << nome << endl;
        arquivo << "Sexo: " << (sexo == 'F' ? "Feminino" : "Masculino") << endl;
        arquivo << "Modalidade: " << modalidade << endl;
    }
};

class PessoaComProblemas : public Pessoa {
private:
    string problema;

public:
    PessoaComProblemas(const string& nome, char sexo, const string& modalidade, const string& problema) : Pessoa(nome, sexo, modalidade), problema(problema) {}

    void escreverCurriculo(ofstream& arquivo) const override {
        Pessoa::escreverCurriculo(arquivo);
        arquivo << "Problema: " << problema << endl;
    }
};

class PessoaComDeficiencia : public Pessoa {
private:
    string deficiencia;

public:
    PessoaComDeficiencia(const string& nome, char sexo, const string& modalidade, const string& deficiencia) : Pessoa(nome, sexo, modalidade), deficiencia(deficiencia) {}

    void escreverCurriculo(ofstream& arquivo) const override {
        Pessoa::escreverCurriculo(arquivo);
        arquivo << "Deficiencia: " << deficiencia << endl;
    }
};

int main() {
    ofstream arquivo("curriculos.txt");

    if (arquivo.is_open()) {
        Pessoa pessoa1("Wesinesposa", 'F', "Vendas");
        pessoa1.escreverCurriculo(arquivo);

        PessoaComProblemas pessoa2("Ianzinho", 'M', "Tecnologia", "Problema de visão");
        pessoa2.escreverCurriculo(arquivo);

        PessoaComDeficiencia pessoa3("fredao", 'M', "Administração", "Deficiência auditiva");
        pessoa3.escreverCurriculo(arquivo);

        arquivo.close();
        cout << "Curriculos foram salvos com sucesso no arquivo curriculos.txt" << endl;
    } else {
        cout << "Erro ao abrir o arquivo curriculos.txt" << endl;
    }

    return 0;
}

 	
 	
 

