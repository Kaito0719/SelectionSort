#include <iostream>

using namespace std;

struct User
{
	int id;
	int score;
	char name[20];
};

void swap(User* a, User* b)// �|�C���^�n��
{
	User tmp = *a;
	*a = *b;
	*b = tmp;
}

void swap(User& a, User& b)// �Q�Ɠn��
{
	User tmp = a;
	a = b;
	b = tmp;
}

// �P���I��@�i�I���\�[�g�j
int main()
{
	User user[] = 
	{
		{11,700,"�c��"},
		{13,400,"�R�c"},
		{17,300,"�֓�"},
		{19,200,"���c"},
		{23,500,"����"},
		{29,600,"�X�{"},
		{31,800,"����"}
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
		swap(user[i], user[indexmin]);// �|�C���^�n��:(&array[i],&array[indexmin])
	}

	for (int i = 0; i < size; i++)
	{
		cout << user[i].id << " " << user[i].score << " " << user[i].name << endl;
	}

	// ���͑҂�
	cin.get();

	return 0;
}