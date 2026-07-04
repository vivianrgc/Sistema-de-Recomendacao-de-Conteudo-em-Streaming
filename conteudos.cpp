
#include <string>;
using namespace std;

struct No{
   Conteudo dado;
   No* prox;
   No(Conteudo conteudo)
     : valor( conteudo)
     prox (nullptr){}
};

struct Na {
    // aqui seria o valor do nó 
    string pergunta;
    Na* filhoSim;
    Na* filhoNao;
    Lista* recomendacoes;
    bool ehFolha;
   //  a função do ehFolha é para determinar quando vai ocorrer a impressão dos itens


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
  string getNome(){
      return nome;
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

  void Lista::remover(string nome){
 // a ista SE funciona no início, que aponta para os nos e o ultimo aponta para nullptr
    string Deletado;
    No* atual = ício;
    No* anterior - nullptr;
    No* Aux = atual->prox;

    cout << "Digite o nome do filme a ser removido:";
    cin >> Deletado;

    while (Aux != nullptr){
   // ou seja, até que o no seja o ultimo da lista
    if (aux->dado.getNome() == deletado){
         cout << "Encontrado";
         break;
  } 
    Aux  = aux->prox;
}
  

   }

}

class Arvore {
  private:
    Na* raiz;
  public:
    Arvore (){
    raiz = nullptr;
    } 

  void criarArvore(){
    Na* raiz = new Na{"Prefere Filme ou Série"}

      
  };
  void recomendar(){};


}
