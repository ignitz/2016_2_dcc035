# Aula PO (2016/08/30)

> Bola aberta e fechada da Topologia (Matemática)

- Limitado $\times$ Limitado
- Conjunto fechado $\times$ aberto
- Conjunto compacto - fechado e Limitado


- Politopo
- Poliedro

Voltamos ao problema antigo.

$$
max\;f(x) = x_1+ x_2\\

x_1 + 2x_2 \leq 7\\
2x_1 + x_2 \leq 8\\
x_2 \leq 3\\

x_1, x_2 \geq 0\\
$$

Se $x_1 \leq 0$ então $x_1' \geq 0$.

Citando algumas motivações para que as variáveis fiquem livres.

$$
x_1 = x_1' - x_1''\\
x', x'' \geq 0 \text{ e } x_1' \geq x_1''
$$

> Acrescentando uma variável extra pra transformar uma desigualdade em uma igualdade.

**Max** to **Min** na função objetivo e etc.
> (Trocar o sinal da função objetivo)

No método iterativo escolher um valor inicial de $x = (0, 0)$.

$$
max\;f(x) = x_1+ x_2\\

x_1 + 2x_2 + x_3 = 7\\
2x_1 + x_2 + x_4 = 8\\
x_2 + x_5 = 3\\

x_1, x_2 \geq 0
$$

O resto descartei.
