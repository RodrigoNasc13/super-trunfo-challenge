# 🏆 Sistema de Comparação de Países - Super Trunfo

## 📋 Descrição do Projeto

Este projeto implementa um sistema de comparação entre países baseado no jogo Super Trunfo, desenvolvido em linguagem C. O programa permite que o usuário compare dois países através de diferentes atributos socioeconômicos e determine um vencedor com base na soma dos valores dos atributos selecionados.

## 🎯 Objetivos

- **Objetivo Principal**: Desenvolver um programa interativo que compare atributos de países
- **Objetivos Específicos**:
  - Implementar entrada de dados estruturada
  - Realizar cálculos automáticos de densidade demográfica
  - Criar sistema de comparação dinâmica entre atributos
  - Determinar vencedor através de soma ponderada

## ⚙️ Funcionalidades

### 📊 Atributos Comparáveis
1. **População** - Número de habitantes
2. **Área** - Extensão territorial em km²
3. **PIB** - Produto Interno Bruto em bilhões de reais
4. **Pontos Turísticos** - Quantidade de pontos turísticos
5. **Densidade Demográfica** - Calculada automaticamente (hab/km²)

### 🔧 Recursos Técnicos
- Interface de console com codificação UTF-8
- Menu dinâmico para seleção de atributos
- Validação de entrada para evitar duplicação de escolhas
- Cálculos automáticos de densidade populacional
- Sistema de comparação com determinação de vencedor

## 🚀 Como Executar

### Pré-requisitos
- Compilador GCC instalado
- Sistema operacional Windows (devido ao uso de `windows.h`)

### Compilação
```bash
gcc super-trunfo.c -o super-trunfo.exe
```

### Execução
```bash
./super-trunfo.exe
```

## 💻 Fluxo de Execução

1. **Entrada de Dados**: O usuário insere informações de dois países
2. **Seleção de Atributos**: Escolha de dois atributos diferentes para comparação
3. **Processamento**: Cálculo automático da densidade demográfica
4. **Comparação**: Análise individual de cada atributo selecionado
5. **Resultado**: Determinação do vencedor pela soma dos valores


## 🏗️ Estrutura do Código

```
super-trunfo.c
├── Declaração de Variáveis
├── Entrada de Dados (2 países)
├── Cálculos Automáticos
├── Sistema de Menus
├── Comparação de Atributos
└── Determinação do Resultado
```

## 🛠️ Tecnologias Utilizadas

- **Linguagem**: C
- **Bibliotecas**: 
  - `stdio.h` - Entrada/saída padrão
  - `windows.h` - Configuração de console
- **Compilador**: GCC

## 📚 Conceitos Aplicados

- Estruturas de controle (if/else, switch/case, while)
- Manipulação de strings
- Operações matemáticas
- Entrada e saída formatada
- Validação de dados
- Operadores ternários

## 👥 Autor

Trabalho acadêmico desenvolvido para a disciplina de Programação em C.

## 📄 Licença

Este projeto é desenvolvido para fins educacionais.

---

*Projeto desenvolvido como parte dos estudos em Ciência da Computação*