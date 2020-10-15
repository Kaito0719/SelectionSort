#include <iostream>

using namespace std;

struct User
{
	int id;
	int score;
	char name[20];
};

void swap(User* a, User* b)// ポインタ渡し
{
	User tmp = *a;
	*a = *b;
	*b = tmp;
}

void swap(User& a, User& b)// 参照渡し
{
	User tmp = a;
	a = b;
	b = tmp;
}

// 単純選択法（選択ソート）
int main()
{
	User user[] = 
	{
		{11,700,"田中"},
		{13,400,"山田"},
		{17,300,"斎藤"},
		{19,200,"中田"},
		{23,500,"佐藤"},
		{29,600,"森本"},
		{31,800,"小川"}
	};
	
	int indexmin;
	int size = 7;
	for (int i = 0; i < size - 1; i++)
	{
		indexmin = i;
		for (int k = i + 1; k < size; k++)
		{
			if (user[k].score < user[indexmin].score)
			{
				indexmin = k;
			}
		}
		swap(user[i], user[indexmin]);// ポインタ渡し:(&array[i],&array[indexmin])
	}

	for (int i = 0; i < size; i++)
	{
		cout << user[i].id << " " << user[i].score << " " << user[i].name << endl;
	}

	// 入力待ち
	cin.get();

	return 0;
}