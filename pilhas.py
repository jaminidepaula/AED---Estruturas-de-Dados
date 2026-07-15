#PILHAS

pilha = []  # Cria uma pilha vazia

pilha.append(1)  # Adiciona o elemento 1 à pilha
pilha.append(2)  # Adiciona o elemento 2 à pilha        
pilha.append(3)  # Adiciona o elemento 3 à pilha

print(pilha)  # Exibe a pilha atual

topo = pilha.pop()  # Remove o elemento do topo da pilha
print("Removido:", topo)  # Exibe o elemento removido
print("Pilha após remoção:", pilha)  # Exibe a pilha após a remoção do elemento
