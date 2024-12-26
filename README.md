# Conversor de Unidades de Armazenamento

Este programa em C realiza a conversão de um valor entre diferentes unidades de armazenamento, como Bits, Bytes, Kilobytes (KB), Megabytes (MB), Gigabytes (GB) e Terabytes (TB).

## Funcionalidades
- Conversão entre as unidades:
  - Bits
  - Bytes
  - Kilobytes (KB)
  - Megabytes (MB)
  - Gigabytes (GB)
  - Terabytes (TB)

## Requisitos
- Compilador C.

## Como usar

1. **Clonar o repositório ou copiar o código-fonte**:
   Salve o código em um arquivo chamado `bits.c`.

2. **Compilar o programa**:
   Execute o seguinte comando no terminal para compilar o código:
   ```bash
   gcc bits.c -o bits
   ```

3. **Executar o programa**:
   Após a compilação, execute o programa com:
   ```bash
   ./bits
   ```

4. **Interagir com o programa**:
   - Escolha a unidade inicial do valor (1 a 6):
     - 1: Bits
     - 2: Bytes
     - 3: Kilobytes (KB)
     - 4: Megabytes (MB)
     - 5: Gigabytes (GB)
     - 6: Terabytes (TB)
   - Insira o valor a ser convertido.

   O programa irá exibir o valor convertido para todas as unidades.

## Exemplo de uso
Entrada do usuário:
```
Digite a unidade inicial (1-6): 5
Digite o valor a ser convertido: 24
```

Saída do programa:
```
--- Valores convertidos:
Bits: 206158430208.00
Bytes: 25769803776.00
Kilobytes (KB): 25165824.00
Megabytes (MB): 24576.00
Gigabytes (GB): 24.00
Terabytes (TB): 0.02
```

## Autor
- Rafael Silva Santos
- Este programa foi desenvolvido para fins educacionais e prática em linguagem C.
