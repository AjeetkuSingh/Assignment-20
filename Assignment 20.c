//Assignment 20 sol 1//
/*
#include <stdio.h>

int main()
{
	int x, y;
	printf("Enter Value of x ");
	scanf("%d", &x);
	printf("\nEnter Value of y ");
	scanf("%d", &y);

	int temp = x;
	x = y;
	y = temp;

	printf("\nAfter Swapping: x = %d, y = %d", x, y);
	return 0;
}
*/

//Sol 2//
/*
#include<stdio.h>
void swap(char *str1, char *str2)
{
  char *temp = str1;
  str1 = str2;
  str2 = temp;
}

int main()
{
  char *str1 = "geeks";
  char *str2 = "forgeeks";
  swap(str1, str2);
  printf("str1 is %s, str2 is %s", str1, str2);
  getchar();
  return 0;
}
*/

//Sol 3//
/*
#include <stdio.h>

// Function to sort the numbers using pointers
void sort(int n, int* ptr)
{
	int i, j, t;

	// Sort the numbers using pointers
	for (i = 0; i < n; i++) {

		for (j = i + 1; j < n; j++) {

			if (*(ptr + j) < *(ptr + i)) {

				t = *(ptr + i);
				*(ptr + i) = *(ptr + j);
				*(ptr + j) = t;
			}
		}
	}

	// print the numbers
	for (i = 0; i < n; i++)
		printf("%d ", *(ptr + i));
}

// Driver code
int main()
{
	int n = 5;
	int arr[] = { 0, 23, 14, 12, 9 };

	sort(n, arr);

	return 0;
}
*/

//Sol 4//
/*
#include <stdio.h>
int main()
{
   int* ab;
   int m;
   m=29;
    printf("\n\n Pointer : How to  handle the pointers in the program :\n");
    printf("------------------------------------------------------------\n");
    printf(" Here in the declaration ab = int pointer, int m= 29\n\n");

   printf(" Address of m : %p\n",&m);
   printf(" Value of m : %d\n\n",m);
   ab=&m;
   printf(" Now ab is assigned with the address of m.\n");
   printf(" Address of pointer ab : %p\n",ab);
   printf(" Content of pointer ab : %d\n\n",*ab);
   m=34;
   printf(" The value of m assigned to 34 now.\n");
   printf(" Address of pointer ab : %p\n",ab);
   printf(" Content of pointer ab : %d\n\n",*ab);
   *ab=7;
   printf(" The pointer variable ab is assigned the value 7 now.\n");
   printf(" Address of m : %p\n",&m);//as ab contain the address of m
                                     //so *ab changed the value of m and now m become 7
   printf(" Value of m : %d\n\n",m);
   return 0;
}
*/

//Sol 5//
/*
#include <stdio.h>
#include <stdlib.h>
void main()
{
 int fno,sno,*ptr1=&fno,*ptr2=&sno;

   printf("\n\n Pointer : Find the maximum number between two numbers :\n");
   printf("------------------------------------------------------------\n");

   printf(" Input the first number : ");
   scanf("%d", ptr1);
   printf(" Input the second  number : ");
   scanf("%d", ptr2);


 if(*ptr1>*ptr2)
 {
  printf("\n\n %d is the maximum number.\n\n",*ptr1);
 }
 else
 {
  printf("\n\n %d is the maximum number.\n\n",*ptr2);
 }

}
*/

//Sol 6//
/*
#include<stdio.h>
#include<conio.h>

int string_ln(char*);

void main() {
   char str[20];
   int length;

   printf("\nEnter any string : ");
   gets(str);

   length = string_ln(str);
   printf("The length of the given string %s is : %d", str, length);
   getch();
}

int string_ln(char*p)
{
   int count = 0;
   while (*p != '\0') {
      count++;
      p++;
   }
   return count;
}
*/

//Sol 7//
/*
#include <stdio.h>
char s[100];

int vowelCount = 0, consonantCount = 0;
void countVowelOrConsonant() {
  char *ptr = s;
  while (*ptr != '\0') {
    if ((*ptr >= 65 && *ptr <= 90) || (*ptr >= 97 && *ptr <= 122)) {
      if (*ptr == 'A' || *ptr == 'E' || *ptr == 'I' || *ptr == 'O' ||
          *ptr == 'U' || *ptr == 'a' || *ptr == 'e' || *ptr == 'i' ||
          *ptr == 'o' || *ptr == 'u') {
        vowelCount++;
      } else {
        consonantCount++;
      }
    }
    ptr++;
  }
}
int main() {
  printf("Enter the string: ");
  fgets(s, 100, stdin);
  countVowelOrConsonant();
  printf("Number of the Vowels in input String is: %d\n", vowelCount);
  printf("Number of the Consonants in input String is: %d", consonantCount);
  return 0;
}
*/

//Sol 8//
/*
#include <stdio.h>
#include <malloc.h>

void main()
{
	int i, n, sum = 0;
	int *a;

     	printf("Enter the size of array A \n");
	scanf("%d", &n);

        a = (int *) malloc(n * sizeof(int));

        printf("Enter Elements of the List \n");
	for (i = 0; i < n; i++)
        {
		scanf("%d", a + i);
	}



        for (i = 0; i < n; i++)
        {
		sum = sum + *(a + i);

	}

        printf("Sum of all elements in array = %d\n", sum);
        return 0;
}
*/

//Sol 9//
/*
#include <stdio.h>

int main()
{
    //Initialize array
    int arr[] = {1, 2, 3, 4, 5};

    //Calculate length of array arr
    int length = sizeof(arr)/sizeof(arr[0]);

    printf("Original array: \n");
    for (int i = 0; i < length; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n");

    printf("Array in reverse order: \n");
    //Loop through the array in reverse order
    for (int i = length-1; i >= 0; i--) {
        printf("%d ", arr[i]);
    }
    return 0;
}
*/

//Sol 10//
#include <stdio.h>

int main(void)
{
    char sentence[100] = { '\0' };

    printf( "Enter any string: " );
    scanf("%99[^\n]s", sentence );

    char *last = sentence;

    while ( *last ) ++ last;

    if ( sentence != last )
    {
        for ( char *first = sentence; first < --last; ++first )
        {
            char c = *first;
            *first = *last;
            *last = c;
        }
    }

    printf( "Reversed string = %s\n", sentence );

    return 0;
}
