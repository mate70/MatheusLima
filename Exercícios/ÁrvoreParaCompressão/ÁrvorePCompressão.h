#include <stdio.h>
#include<string>    
#include<queue>

using namespace std;

#define EMPTY_STRING ""

// Criando nó

struct Node
{
    char cr;
    int hz;
    Node *tp, *indicador; 
};
// Função para alocar os nó na árvore
//(new Node o mesmo de malloc) "alocação na memória "

Node* getNode(char cr, int hz, Node* tp, Node* indicador)
{
    Node* no = new Node();
    no-> cr = cr;
    no-> hz = hz;
    no-> tp = tp;
    no-> indicador;

    return no;
}
// 

