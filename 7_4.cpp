//ћногие лотереи в —Ўј организованы подобно той, что была смоделирована
//в листинге 7.4.¬о всех их вариаци€х вы должны выбрать несколько чисел из
//одного набора, называемого полем номеров. (Ќапример, вы можете выбрать 5
//	чисел из пол€ 1 - 47.) ¬ы также указываете один номер(называемый меганоме -
//		ром) из второго диапазона, такого как 1 - 27. „тобы выиграть главный приз, вы
//	должны правильно угадать все номера.Ўанс выиграть вычисл€етс€ как
//	веро€тность угадывани€ всех номеров в поле, умноженна€ на веро€тность
//	угадывани€ меганомера.Ќапример, веро€тность выигрыша в описанном здесь
//	примере вычисл€етс€ как веро€тность угадывани€ 5 номеров из 47, умноженна€ на
//	веро€тность угадывани€ одного номера из 27. ћодифицируйте листинг 7.4 дл€
//	вычислени€ веро€тности выигрыша в такой лотерее.
#include <iostream>
long double probability(unsigned numbers, unsigned picks);
int main()
{
	using namespace std;
	double total, choices,total_2;
	// ¬вод общего количества номеров и количества номеров, которые нужно угадать
	cout << "Enter the total number of choices on the game card and the number of picks allowed:\n";
	while ((cin >> total >> choices) && choices <= total)
	{
		cout << "Enter the total number of choices on the game card for  one MEGAnumber:\n";
		cin >> total_2;
		cout << "You have one chance in ";
		cout << probability(total, choices)*probability(total_2,1); // вычисление и вывод шансов
		cout << " of winning. \n";
		cout << "Next two numbers (q to quit) : ";
		// ¬вод следующих двух чисел (q дл€ завершени€)
	}
	cout << "bye\n";
	return 0;
}
// —ледующа€ функци€ вычисл€ет веро€тность правильного
// угадывани€ picks чисел из numbers возможных
long double probability(unsigned numbers, unsigned picks)
{
	long double result = 1.0; // несколько локальных переменных
	long double n;
	unsigned p;
	for (n = numbers, p = picks; p > 0; n--, p--)
		result = result * n / p;
	return result;
}

