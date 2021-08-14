# TurnBaseRPG

Jogo feito seguindo o tutorial da engine HaxeFlixel. Esse tutorial se encontra na [documentação](https://haxeflixel.com/documentation/tutorial/) e nos [demos](https://github.com/HaxeFlixel/flixel-demos/tree/master/Tutorials/TurnBasedRPG) presentes no github da engine.

Essa engine não possui gui, de forma que os jogos são desenvolvidos, em grande parte, por código. Ferramentas externas como o [ogmo editor](https://ogmo-editor-3.github.io/) são utilizadas na parte gráfica.

Essa engine é o motor do jogo [Friday Night Funkin](https://github.com/ninjamuffin99/Funkin) jogo desenvolvido para uma game jam, o que mostra o potencial da engine.

Eu fiz uma pequena mudança no código do tutorial. Cada inimigo derrotado premia o jogador com uma vida extra, caso o jogador possua menos de 3, e 20 moedas. 

## Compilando

O código precisa ser compilado antes de rodar. O haxe permite compilar o código fonte para várias plataformas:

````
lime test plataforma
````

Nas pastas exports desse repositório, temos o export para desktop ([windows](https://github.com/jaspior/TurnBaseRPG/tree/main/export/windows/bin)) e [html](https://jaspior.github.io/TurnBaseRPG/export/html5/bin/index.html). A princípio, o jogo deve funcionar para celular. use as setas do teclado para mover e x ou barra para interagir.

### Opinião

Eu ainda recomendo [Godot](https://godotengine.org/) para quem pretende iniciar a desenvolver jogos. Toda parte visual contribui muito para a elaboração dos jogos. A engine em sí é uma ótima forma de praticar/se inserir em uma nova linguagem de programação e depois de testar mais algumas coisas na haxeflixel, pretendo tentar alguma do rusty (a [bevy](https://bevyengine.org/) ou a [amethysy](https://amethyst.rs/)). C# da unity ainda está no planos.















