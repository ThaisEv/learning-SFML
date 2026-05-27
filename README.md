# 🎮 Learning SFML — Do Zero ao Jogo!

> *"Todo grande jogo começa com um `main.cpp` em branco e muita coragem."*

Bem-vindo ao meu repositório de aprendizado de **C++ + SFML**! Aqui está documentada a gloriosa (e às vezes sofrida) jornada de transformar linhas de código em um jogo de verdade. 🕹️

---

## 🧰 Tech Stack

| Ferramenta | Versão | O que faz |
|------------|--------|-----------|
| C++ | 17+ | A linguagem que te faz sentir um hacker |
| SFML | 3.x | Janelas, sprites, sons e magia |
| VS Code | Latest | Onde a mágica (e os erros) acontecem |
| build.bat | — | Um script valente que compila tudo |

---

## 📁 Estrutura do Projeto

```
LEARNING-SFML/
├── assets/          # Imagens, fontes e tudo que é bonito
│   ├── fundo.jpg    # O cenário épico do jogo
│   └── joana.png    # A protagonista (ou vilã? spoilers...)
├── SFML/
│   ├── bin/         # Binários da biblioteca
│   ├── include/     # Headers do SFML
│   └── lib/         # Arquivos .lib para linkar
├── src/
│   └── main.cpp     # O coração pulsante do projeto
├── build.bat        # Compila e reza pra não dar erro
└── .gitignore       # Protege o repo de arquivos inúteis
```

---

## 🚀 Como Rodar

### Pré-requisitos
- Windows (por enquanto 😅)
- MinGW / g++ instalado e no PATH
- Vontade de aprender

### Compilar e rodar

```bash
# Apenas execute o script de build
build.bat

# Se tudo correr bem, um executável aparecerá:
./jogo.exe
```

> ⚠️ Se aparecer algum erro de `.dll`, certifique-se que os arquivos `sfml-graphics-3.dll`, `sfml-system-3.dll` e `sfml-window-3.dll` estão na mesma pasta do executável. Eles já estão lá? Então deve ser outra coisa. Boa sorte. 🙏

---

## ✅ Tasks / Roadmap

Aqui está o plano de conquista do mundo dos games — um commit de cada vez:

### Fase 1 — Sobrevivência Básica 🐣
- [x] Configurar o ambiente (SFML + VS Code + build.bat)
- [x] Abrir uma janela sem travar o computador
- [x] Exibir uma imagem na tela
- [x] Fechar a janela sem precisar matar o processo no Gerenciador de Tarefas

### Fase 2 — Movimentação e Vida 🏃
- [ ] Mover um personagem com WASD / setas
- [ ] Implementar gravidade básica
- [ ] Fazer o personagem colidir com o chão (sem atravessar)
- [ ] Animar o personagem (spritesheet)

### Fase 3 — O Jogo Começa 🎮
- [ ] Criar inimigos que aparecem na tela
- [ ] Detectar colisão entre personagem e inimigos
- [ ] Sistema de vidas / game over
- [ ] Placar na tela (texto com `sf::Text`)

### Fase 4 — Ficando Sério 🔥
- [ ] Tela de menu principal
- [ ] Múltiplas fases / telas
- [ ] Sons e música de fundo com `sf::Sound` / `sf::Music`
- [ ] Salvar recorde (arquivo `.txt` conta como banco de dados)

### Fase 5 — Sonhos e Glória 🏆
- [ ] Build para distribuição (todos os `.dll` empacotados)
- [ ] Mandar pro amigo jogar e ele conseguir abrir
- [ ] Publicar no itch.io
- [ ] Aceitar que fazer jogos é difícil e seguir em frente mesmo assim

---

## 📚 Recursos Úteis

- 📖 [Documentação oficial do SFML](https://www.sfml-dev.org/documentation/)
- 🎓 [Tutorial SFML — Getting Started](https://www.sfml-dev.org/tutorials/)
- 🧠 [Game Programming Patterns (livro gratuito)](https://gameprogrammingpatterns.com/)
- 💬 [r/sfml no Reddit](https://www.reddit.com/r/sfml/)
- 📽️ [00 :: Programando Jogos do ZERO em C++ com SFML](https://youtu.be/RGGJls8uXK0)
- 📽️ [01 :: Come-come! - Programando jogos do ZERO em C++ com SFML](https://www.youtube.com/watch?v=_uVZxsCKcbM&t=2s)

---

## 🐛 Bugs Conhecidos

| Bug | Status | Solução |
|-----|--------|---------|
| Janela abre e fecha na hora | Em investigação | Adicionar `while(window.isOpen())` |
| DLL não encontrada | Frequente | Copiar as DLLs pra pasta do .exe |
| Segmentation fault | Clássico | `¯\_(ツ)_/¯` |

---

## 📝 Licença

Feito com ☕, paciência e muita Stack Overflow.  
Sinta-se livre pra usar o código como referência nos seus estudos!

---

<p align="center">
  <i>Feito por alguém que um dia vai terminar esse jogo.</i> 🎮
</p>
