//Напишите программу, которая читает слова по одному за раз, пока не будет
//введена отдельная буква q.После этого программа должна сообщить количество
//слов, начинающихся с гласных, количество слов, начинающихся с согласных,
//а также количество слов, не попадающих ни в одну из этих категорий.Одним
//из возможных подходов может быть применение isalpha() для различения
//слов, начинающихся с букв, и остальных, с последующим применением if или
//switch для идентификации тех слов, прошедших проверку isalpha(),
//которые начинаются с гласных.Пример запуска может выглядеть так :
//Enter words(q to quit) :
//	The 12 awesome oxen ambled
//	quietly across 15 meters of lawn, q
//	5 words beginning with vowels
//	4 words beginning with consonants
//	2 others
#include<iostream>
#include<string>
void main()
{
    using namespace std;
    cout << "Enter words, (q to quit):\n";
    string word;
    int vowels = 0;
    int consonants = 0;
    int other = 0;
    while (cin >> word && word != "q")
    {
        if (isalpha(word[0])) // чтение ондого слова и его первой буквы!
        {
            switch (word[0])
            {
            case 'a': case 'A':
            case 'e': case 'E':
            case 'i': case 'I':
            case 'y': case 'Y':
            case 'o': case 'O':
            case 'u': case 'U': vowels++;
                break;
            default: consonants++;
            }
        }
        else other++;
    }
    cout << vowels << " words beginning with vowels.\n";
    cout << consonants << " words beginning with consonants.\n";
    cout << other << " words beginning with any other character.\n";
}