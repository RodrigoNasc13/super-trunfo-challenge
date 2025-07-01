# 🃏 Super Trunfo das Cidades

Bem-vindo ao **Super Trunfo das Cidades**!  
Este é um joguinho simples em C onde você compara cartas de cidades brasileiras com base em vários atributos, como população, área, PIB e até um misterioso "Super Poder"! 🚀

## O que esse programa faz?

Você vai digitar os dados de **duas cidades** (cada uma é uma carta) e o programa vai comparar os atributos delas, dizendo qual carta vence em cada categoria.  
No final, ele mostra quem ganhou em cada atributo e ainda exibe o resultado da comparação.

## Como funciona?

1. **Digite os dados da Carta 1:**  
   - Estado (letra de A a H)
   - Código da carta (ex: A01)
   - Nome da cidade
   - População
   - Área (em km²)
   - PIB (em bilhões de reais)
   - Número de pontos turísticos

2. **Digite os dados da Carta 2:**  
   (Mesmos campos acima)

3. O programa calcula:
   - Densidade populacional
   - PIB per capita
   - Super Poder (uma soma dos atributos, só para deixar divertido 😄)

4. Ele mostra os dados das duas cartas e faz a comparação de cada atributo, dizendo quem venceu e mostrando (1) se a Carta 1 ganhou ou (0) se foi a Carta 2.

## Exemplo de saída

```
População: Carta 1 venceu (1)
Área: Carta 2 venceu (0)
PIB: Carta 1 venceu (1)
Pontos Turísticos: Carta 2 venceu (0)
Densidade Populacional: Carta 1 venceu (1)
PIB per Capita: Carta 2 venceu (0)
Super Poder: Carta 1 venceu (1)
```

## Como rodar

1. Compile o código:
   ```
   gcc super-trunfo.c -o super-trunfo
   ```
2. Execute:
   ```
   ./super-trunfo
   ```
   (No Windows, use `super-trunfo.exe`)

## Observações

- O programa usa `SetConsoleOutputCP(CP_UTF8);` para garantir que acentos e caracteres especiais apareçam certinho no Windows.
- Não esqueça de digitar os dados certinhos para não dar erro.

---

Divirta-se comparando cidades e vendo quem tem o maior "Super Poder"! 😁  
