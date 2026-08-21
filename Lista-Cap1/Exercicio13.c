/*Questão 13. No desenvolvimento de programas em C, o que são conceitualmente os arquivos de  inclusão (headers com extensão .h)? 
a) São bibliotecas pré-compiladas em formato binário contendo funções estruturadas.
b) São utilitários do sistema que realizam a linkedição dos programas. 
c) São arquivos de texto ASCII padrão contendo protótipos de funções, definições de constantes, macros e  tipos. 
d) São módulos de controle executados diretamente pelo microprocessador em tempo de execução.


LETRA C --> o #include cola o conteúdo do .h no seu código 
          → o compilador usa os protótipos para checar se você está chamando as funções corretamente 
          → o linker depois junta seu código com o código binário real das funções (vindo da biblioteca). */