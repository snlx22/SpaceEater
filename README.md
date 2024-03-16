# SPACEATER

O SPACEATER é um projeto de código aberto projetado para criar um arquivo grande em seu sistema para testar a capacidade de armazenamento ou as permissões de escrita. Ele tenta escrever um arquivo binário de tamanho considerável no diretório do sistema Windows para simular uma operação intensiva de escrita.

## Aviso

Este software é fornecido "como está", sem garantia de qualquer tipo. Execute-o por sua conta e risco. Especialmente porque ele tenta escrever dados no diretório do sistema, o que pode ter implicações de segurança ou desempenho.

Caso você tenha executado: Vá até C:\Windows\System32 e apague o arquivo spceshot.bin.

## Como Funciona

O SPACEATER inicia solicitando ao usuário permissão para iniciar. Em seguida, tenta abrir o `explorer.exe` do Windows para leitura e, se bem-sucedido, tenta escrever um arquivo chamado `spceshot.bin` no diretório `System32`. O objetivo é simular uma operação intensiva de escrita de arquivos.

## Requisitos

- Sistema Operacional Windows.
- Permissões de administrador (dependendo da localização de escrita dos arquivos).

## Como Usar

1. Compile o código usando um compilador C, como o GCC.
2. Execute o binário compilado. Ele solicitará que você inicie o programa.
3. Execute o Programa como Administrador.
4. O programa iniciará o processo conforme descrito na seção "Como Funciona".

## Contribuições

Contribuições são sempre bem-vindas! Sinta-se à vontade para forkar o repositório, fazer suas alterações e enviar um pull request.
