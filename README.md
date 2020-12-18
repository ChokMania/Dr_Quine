# Dr_Quinn [(subject)](https://cdn.intra.42.fr/pdf/pdf/15956/en.subject.pdf)

## Introduction
A quine is a computer program (a kind of metaprogram) whose output and source
code are identical. As a challenge or for fun, some programmers try to write the shortest quine in a given programming language.

The operation that consist of simply opening the source file and displaying it is considered cheating. More generally, a program that uses any data entry cannot be considered a valid quine. A trivial solution is a program whose source code is empty. Indeed, the execution of such a program produces for most languages no output, that is to say the source code of the program.

## Objectives
This project invites you to confront the principle of self-reproduction and the problems that derive from it. It is a perfect introduction to more complex projects, particularly malware projects.

For the curious ones, I strongly recommend that you watch everything related to fixed points !

## C
<pre><code>> cd C; make
clang -Wall -Wextra -Werror -c Colleen/Colleen.c -o Colleen/Colleen.o
Colleen created.
clang -Wall -Wextra -Werror -c Grace/Grace.c -o Grace/Grace.o
Grace created.
clang -Wall -Wextra -Werror -c Sully/Sully.c -o Sully/Sully.o
Sully created.</code></pre>

### Colleen
<pre><code>> cd Colleen; ./Colleen > tmp_Colleen; diff tmp_Colleen Colleen.c</code></pre>

### Grace
<pre><code>> cd Grace; ./Grace; diff Grace.c Grace_kid.c</code></pre>

### Sully
```
> cd Sully; ./Sully; diff Sully.c Sully_5.c; diff Sully.c Sully_4.c; diff Sully.c Sully_3.c; diff Sully.c Sully_2.c; diff Sully.c Sully_1.c; diff Sully.c Sully_0.c</
7c7
<       int i = 5;
---
>       int i = 4;
7c7
<       int i = 5;
---
>       int i = 3;
7c7
<       int i = 5;
---
>       int i = 2;
7c7
<       int i = 5;
---
>       int i = 1;
7c7
<       int i = 5;
---
>       int i = 0;
```

## Assembly
<pre><code>> cd ASM; make
nasm -f elf64 Colleen/Colleen.s
Colleen created.
nasm -f elf64 Grace/Grace.s
Grace created.
nasm -f elf64 Sully/Sully.s
Sully created.
Sully created.</code></pre>

### Colleen
<pre><code>> cd Colleen; ./Colleen > tmp_Colleen; diff tmp_Colleen Colleen.s</code></pre>

### Grace
<pre><code>> cd Grace; ./Grace; diff Grace.s Grace_kid.s</code></pre>

### Sully
```
> cd Sully; ./Sully; diff Sully.s Sully_5.s; diff Sully.s Sully_4.s; diff Sully.s Sully_3.s; diff Sully.s Sully_2.s; diff Sully.s Sully_1.s; diff Sully.s Sully_0.s</
16c16
< mov r12, 5
---
> mov r12, 4
16c16
< mov r12, 5
---
> mov r12, 3
16c16
< mov r12, 5
---
> mov r12, 2
16c16
< mov r12, 5
---
> mov r12, 1
16c16
< mov r12, 5
---
> mov r12, 0
```

## Python
<pre><code>> cd Python</code></pre>

### Colleen
<pre><code>> cd Colleen; python3 Colleen.py > tmp_Colleen; diff tmp_Colleen Colleen.py</code></pre>

### Grace
<pre><code>> cd Grace; python3 Grace.py; diff Grace.py Grace_kid.py</code></pre>

### Sully
```
> cd Sully; python3 Sully.py; diff Sully.py Sully_5.py; diff Sully.py Sully_4.py; diff Sully.py Sully_3.py; diff Sully.py Sully_2.py; diff Sully.py Sully_1.py; diff Sully.py Sully_0.py
4c4
<       i = 5
---
>       i = 4
4c4
<       i = 5
---
>       i = 3
4c4
<       i = 5
---
>       i = 2
4c4
<       i = 5
---
>       i = 1
4c4
<       i = 5
---
>       i = 0
```