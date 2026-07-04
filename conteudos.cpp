
#include <string>;
using namespace std;

struct No{
   Conteudo valor;
   No* prox;
   No(Conteudo conteudo)
     : valor = conteudo
     prox =  nullptr {}
}
 class Conteudo {

  private:
     string nome;
     string tipo;
     string anolancamento;
     float numvizu;
  public:
    Conteudo(string nome, string tipo, string anolancamento, float numvizu )
    {
      this->nome = nome;
      this->tipo = tipo;
      this->anolancamento = anolancamento;
      this->numvizu = numvizu;    
    }
   
   void inserirConteudo(){
      cout << "========== CADASTRO DE NOVO CONTEÚDO ========"
      cout << "Nome:";
      getline(cin, nome);

      cout <<"Tipo: (Escolha entre Ação, Comédia, Drama, Ficção e Outro)"
      getline(cin,tipo);

      cout <<"Ano de Lançamento:";
      getline(cin,anolancamento);

      cout <<"Numero de vizualizações";
      cin >> numvizu;

   }

   void imprimirconteudo(){

     cout << "Nome:" << nome <<;
     cout << "Tipo:" <<tipo <<;
     cout << "Ano de Lançameno:" <<anolancamento <<;
     cout << "Numero de Visualização:" <<numvizu <<;
     cout << "-------------------------------------";

   }
}

class Lista {

  private:
    No* inicio;

  public:
   Lista(){
      inicio = nullptr;
   }

   void Lista::inserir(Conteudo conteudo){
      No* novo = new No(conteudo);

      if (inicio== nullptr){
         inicio = novo;
      } else {
         No* aux = inicio;
         while(aux->prox != nullptr){
            aux = aux->prox;
         }
      }

      aux->prox = novo;
   }

  void Lista::imprimir(Conteudo conteudo){
     No* aux = inicio;
     cout << "========== LISTAS DE CONTEÚDOS ==========="
     while(aux != nullptr){
      aux->dado.imprimirConteudo();
      aux = aux->prox
     }

 }
   void Lista::remover(Conteudo conteudo){
      
   }

}