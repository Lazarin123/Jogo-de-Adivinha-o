<h2>🔢 Jogo de Adivinhação do Número Secreto em C</h2>
<p>Este é um simples jogo, mas divertido, jogo de adivinhação desenvolvido na linguagem C. O computador escolhe um número secreto, e você, jogador, tenta adivinhá-lo. Sua pontuação inicial é de 1000 pontos, e a cada tentativa, o valor do seu chute é subtraído da sua pontuação. Escolha a sua dificuldade e divirta-se!</p> 

<h2>🕹️ Como Jogar</h2>
<p>Ao iniciar o jogo, você será apresentado a um menu com três níveis de dificuldade:

Fácil: Você terá 20 tentativas.

Médio: Você terá 10 tentativas.

Difícil: Você terá 5 tentativas.

Digite o número correspondente à dificuldade desejada e pressione Enter.
O jogo sorteará um número secreto dentro do intervalo escolhido.
Você terá que inserir seus palpites e pressionar Enter.
A cada palpite, o jogo informará se o número secreto é maior ou menor do que o seu chute.
Sua pontuação diminuirá em um valor igual ao seu palpite a cada tentativa.
O jogo continua até que você acerte o número secreto.
Ao final, sua pontuação final será exibida. Tente obter a maior pontuação possível!</p>

<h2>🛠️ Estrutura do Projeto</h2>
<p>O projeto é composto por um único arquivo fonte em C (adivinhacao.c). O código inclui:

Função main(): Responsável pela lógica principal do jogo, incluindo a apresentação do menu, leitura da dificuldade, geração do número secreto, leitura dos palpites e cálculo da pontuação.
Geração de números aleatórios: Utiliza as funções rand() e srand() da biblioteca stdlib.h para gerar o número secreto. A função time() da biblioteca time.h é usada para inicializar a semente do gerador de números aleatórios, garantindo que o número secreto seja diferente a cada execução.
Lógica de comparação: Compara o palpite do jogador com o número secreto e fornece feedback adequado.
Cálculo da pontuação: Mantém o controle da pontuação do jogador, subtraindo o valor do palpite a cada tentativa.</p>

<h2>📝 Observações</h2>
<p>Este é um projeto simples para fins de aprendizado e demonstração da linguagem C.
Melhorias futuras podem incluir:
Implementação de um número máximo de tentativas.
Adição de placar para registrar as melhores pontuações.
Validação de entrada para garantir que o jogador digite apenas números.
Interface de usuário mais elaborada.</p>

<h1>Divirta-se jogando! 😊</h1>
