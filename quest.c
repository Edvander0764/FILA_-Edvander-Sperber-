Lista *inserir(Lista *L, elemento x)
{ Lista *aux;
Lista *ant = NULL;
Lista *novo = (Lista*) malloc(sizeof(Lista));
novo->info = x;
novo->prox = NULL;
aux = L;
while (aux != NULL && aux->info < x)
{ ant = aux;
aux = aux->prox; }
If (ant == NULL)
{ novo->prox = L;
L = novo; }
Else
{ novo->prox = ant->prox;
ant->prox = novo;
}
return L;
}