#include<stdio.h>
#include<unistd.h>

void ft_print_comb();

int getFirst(int);
int getSecond(int);
int getThird(int);

int main()
{
        ft_print_comb();

        return 0;
}

void ft_print_comb()
{
                int minValue = 0;
		int maxValue = 999;
		int myArray[11] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

		for(int number = minValue; number < maxValue; number++)
		{
			//here we can work with numbers

			if( (getFirst(number) < getSecond(number)) && (getSecond(number) > getThird(number)) ) //ascending comlete
			{
				bool flag = 

				if()
					printf("%d%d%d\n", getFirst(number), getSecond(number), getThird(number));
			}

			//here we cant work with numbers

//			write(1, --&number--, 1);
		}
		
}

int getFirst(int number) // working interval [000...999]
{
		return (number / 100);
}

int getSecond(int number) // working interval [000...999]
{
                return (number / 10 - getFirst(number) * 10);
}

int getThird(int number) // working interval [000...999]
{
                return (number % 10);
}

bool isExist(int* myArray, int myLength, int myNumber) // isExist(array, array length, number)
{
		int i = 0;

		bool flag1 = true;
		bool flag2 = true;

		while( flag1 && flag2 )
		{
			flag1 = ( myNumber != myArray[i] );
			flag2 = ( i < myLength );

			i++;
		}

		return flag;
}
