# Counting-Instructions
Exercício 1 de AEDS

1) - Preenche a matriz N x N com números inteiros aleatórios de 0 a 99;

2) - Considere a posição Linha 0 e Coluna 0 (0,0) como início;

3) - Considere a posição (N, N) como posição final;

4) - Percorra a matriz a partir do início, somando a cada passo, o próximo maior valor encontrado;

5) - O próximo valor pode ser o que está na mesma linha e imediatamente à direita, imediatamente à esquerda, bem como, o que está na coluna abaixo do numero corrente;

5.1) Há apenas uma exceção de percurso. Ao chegar na última linha deve-se percorre-la até o fim sem realizar mais migrações para colunas acima. 

6) - Andando na matriz conforme as regras acima, qual o maior caminho do início até o final, sabendo-se que a soma das posições representa o tamanho do caminho.

Lógica :

Após o primeiro deslocamento da matriz é necessário igualar sua posição a -1 para não acontecer loops infinitos, dependendo da posição do valor o caminho se move para direita, esquerda e para baixo se estiver dentro da matriz exceto na última coluna, na primeira e nos cantos. Estes outros casos também estão nos códigos desse repositório.
