#include <stdio.h>
#include <locale.h>

//Faça um programa onde o usuário digite uma frase de até X caracteres e, ao final, o
//programa deve apresentar quantas vezes cada caractere diferente apareceu nesta frase.
//(você pode definir o tamanho máximo da frase).
int main()
{
	setlocale(LC_ALL, "portuguese");

	char frase[30];
	int set = 0;
	int a = 0, b = 0, c = 0, d = 0, e = 0, f = 0, g = 0, h = 0, i = 0, j = 0;
	int k = 0, l = 0, m = 0, n = 0, o = 0, p = 0, q = 0, r = 0, s = 0, t = 0, u = 0, v = 0, w = 0, x = 0, y = 0, z = 0;

	printf("Digite sua frase (Máximo 30 caracteres!)\n");
	gets(frase);

	if (frase[30] > 31)
	{
		printf("\n\nErro! Você excedeu o limite de caracteres");
		return 0;
	}

	for (set = 0; frase[set] != '\0'; set++)
	{
		if (frase[set] == 'a')
			a++;

		if (frase[set] == 'b')
			b++;

		if (frase[set] == 'c')
			c++;

		if (frase[set] == 'd')
			d++;

		if (frase[set] == 'e')
			e++;

		if (frase[set] == 'f')
			f++;

		if (frase[set] == 'g')
			g++;

		if (frase[set] == 'h')
			h++;

		if (frase[set] == 'i')
			i++;

		if (frase[set] == 'j')
			j++;

		if (frase[set] == 'k')
			k++;

		if (frase[set] == 'l')
			l++;

		if (frase[set] == 'm')
			m++;

		if (frase[set] == 'n')
			n++;

		if (frase[set] == 'o')
			o++;

		if (frase[set] == 'p')
			p++;

		if (frase[set] == 'q')
			q++;

		if (frase[set] == 'r')
			r++;

		if (frase[set] == 's')
			s++;

		if (frase[set] == 't')
			t++;

		if (frase[set] == 'u')
			u++;

		if (frase[set] == 'v')
			v++;

		if (frase[set] == 'w')
			w++;

		if (frase[set] == 'x')
			x++;

		if (frase[set] == 'y')
			y++;

		if (frase[set] == 'z')
			z++;
	}

	if (a >= 1)
		printf("\n\nNúmero de vezes em que a letra [A] aparece: %d \n\n", a);

	if (b >= 1)
		printf("\n\nNúmero de vezes em que a letra [B] aparece: %d \n\n", b);

	if (c >= 1)
		printf("\n\nNúmero de vezes em que a letra [C] aparece: %d \n\n", c);

	if (d >= 1)
		printf("\n\nNúmero de vezes em que a letra [D] aparece: %d \n\n", d);

	if (e >= 1)
		printf("\n\nNúmero de vezes em que a letra [E] aparece: %d \n\n", e);

	if (f >= 1)
		printf("\n\nNúmero de vezes em que a letra [F] aparece: %d \n\n", f);

	if (g >= 1)
		printf("\n\nNúmero de vezes em que a letra [G] aparece: %d \n\n", g);

	if (h >= 1)
		printf("\n\nNúmero de vezes em que a letra [H] aparece: %d \n\n", h);

	if (i >= 1)
		printf("\n\nNúmero de vezes em que a letra [I] aparece: %d \n\n", i);

	if (j >= 1)
		printf("\n\nNúmero de vezes em que a letra [J] aparece: %d \n\n", j);

	if (k >= 1)
		printf("\n\nNúmero de vezes em que a letra [K] aparece: %d \n\n", k);

	if (l >= 1)
		printf("\n\nNúmero de vezes em que a letra [L] aparece: %d \n\n", l);

	if (m >= 1)
		printf("\n\nNúmero de vezes em que a letra [M] aparece: %d \n\n", m);

	if (n >= 1)
		printf("\n\nNúmero de vezes em que a letra [N] aparece: %d \n\n", n);

	if (o >= 1)
		printf("\n\nNúmero de vezes em que a letra [O] aparece: %d \n\n", o);

	if (p >= 1)
		printf("\n\nNúmero de vezes em que a letra [P] aparece: %d \n\n", p);

	if (q >= 1)
		printf("\n\nNúmero de vezes em que a letra [Q] aparece: %d \n\n", q);

	if (r >= 1)
		printf("\n\nNúmero de vezes em que a letra [R] aparece: %d \n\n", r);

	if (s >= 1)
		printf("\n\nNúmero de vezes em que a letra [S] aparece: %d \n\n", s);

	if (t >= 1)
		printf("\n\nNúmero de vezes em que a letra [T] aparece: %d \n\n", t);

	if (u >= 1)
		printf("\n\nNúmero de vezes em que a letra [U] aparece: %d \n\n", u);

	if (v >= 1)
		printf("\n\nNúmero de vezes em que a letra [V] aparece: %d \n\n", v);

	if (w >= 1)
		printf("\n\nNúmero de vezes em que a letra [W] aparece: %d \n\n", w);

	if (x >= 1)
		printf("\n\nNúmero de vezes em que a letra [X] aparece: %d \n\n", x);

	if (y >= 1)
		printf("\n\nNúmero de vezes em que a letra [Y] aparece: %d \n\n", y);

	if (z >= 1)
		printf("\n\nNúmero de vezes em que a letra [Z] aparece: %d \n\n", z);
}
