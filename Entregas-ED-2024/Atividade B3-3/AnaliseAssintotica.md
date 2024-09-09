# Análise Assintórica dos Algoritmos

## Demonstração da Análise

### Busca Linear

Em um algoritmo de Busca Linear o pior caso seria onde o número requisitado se encontra na última posição do array ou não existe dentro do array.
Dessa forma, nesse algoritmo teremos o cálculo do tempo igual a **5tn + 3t** . 

### Busca Linear Ordem

Em um algoritmo de Busca Linear em Ordem o pior caso também é onde o número se encontra na última posição do array ou não existe dentro do array.
Contudo, como há uma alteração na estrutura do loop, o cálculo do tempo é alterado para **7tn + 3t**

### Busca Binária

Em um algoritmo de Busca Binária o pior caso é diferente das Buscas Lineares, já que o seu pior caso é onde o programa realiza o maior número de divisões no array até encontrar ou não o número. Sendo necessária a utilização de Log(n) na base 2 para determinar seu tempo de execução, seu resultado será **8 * log(n)** para X(número procurado) sendo o últmo elemento ou não pertencendo ao array, ou será **10 * log(n)** para o caso do X ser o primeiro elemento da lista. Sendo assim, os piores casos estão nos dois extremos do algoritmo.

## Notação Big O

### Busca Linear

A simplificação para Big O do tempo de execução do algoritmo Busca Linear será **_O(n)_**, pois o Big O analise apenas o termo mais complexo do algoritmo, que nesse caso, é a repetição ou o **loop**, dessa forma podemos desconsiderar as constantes e as funções menos complexas como _printf_ para chegarmos no resultado.

### Busca Linear em Ordem

A simplificação para Big O do tempo de execução do algoritmo Busca Linear em Ordem também será **_O(n)_**, com códigos parcialmente semelhantes, o termo mais complexo continua sendo **_n_**, dessa forma, desconsiderando as constantes e outras funções menos complexas, chegamos ao mesmo resultado.

### Busca Binária

A simplificação para o Big O do tempo de execução do algoritmo Busca Binária será **_O(log n)_**, já que seu termo mais complexo é a divisão do array em 2 para que chegue ao resultado.