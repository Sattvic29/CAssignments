#include <stdio.h>

//Global typedef
typedef int MY_INT;

int main(void)
{
	//function prototype
	MY_INT Add(MY_INT, MY_INT);

	typedef int MY_INT;

	typedef float PVG_FLOAT;

	typedef char CHARACTER;

	typedef double MY_DOUBLE;

	//Win32SDK
	typedef unsigned int UINT;
	typedef UINT HANDLE;
	typedef HANDLE HWND;
	typedef HANDLE HINSTANCE;

	//variable declarations
	MY_INT a = 10;
	MY_INT iArray[] = { 9, 18, 27, 36, 45, 54, 63, 72, 81, 90 };
	MY_INT i;

	PVG_FLOAT f_pvg = 30.9f;
	const PVG_FLOAT f_pvg_pi = 3.14f;

	CHARACTER ch = '*';
	CHARACTER chArray_01[] = "Hello";
	CHARACTER chArray_02[][10] = { "RTR", "Batch", "2026-2027" };

	MY_DOUBLE d = 7.356456;

	UINT uint = 3432;
	HANDLE handle = 234;
	HWND hwnd = 2347;
	HINSTANCE hinstance = 4565433;

	//code
	printf("\n\n");
	printf("Type MY_INT variable a = %d\n", a);

	printf("\n\n");

	for (i = 0; i < (sizeof(iArray) / sizeof(int)); i++)
	{
		printf("Type MY_INT array variable iArray[%d] = %d\n", i, iArray[i]);
	}
	printf("\n\n");

	printf("\n\n");
	printf("Type PVG_FLOAT variable f = %f\n", f_pvg);
	printf("Type PVG_FLOAT constants f_pvg_pi = %f\n", f_pvg_pi);

	printf("\n\n");
	printf("Type MY_DOUBLE variable d = %lf\n", d);

	printf("\n\n");
	printf("Type CHARACTER varaible ch = %c", ch);

	printf("\n\n");
	printf("Type CHARACTER array variable chArray_01 = %s\n", chArray_01);

	printf("\n\n");
	for (i = 0; i < (sizeof(chArray_02) / sizeof(chArray_02[0])); i++)
	{
		printf("%s\t", chArray_02[i]);
	}

	printf("\n\n");

	printf("Type UNIT variable uint = %u\n\n", uint);
	printf("Type HANDLE varaible handle = %u\n\n", handle);
	printf("Type HWND variable hwnd = %u\n\n", hwnd);
	printf("Type HINSTANCE variable hInstance = %u\n\n", hinstance);

	MY_INT x = 90;
	MY_INT y = 30;
	MY_INT ret;

	ret = Add(x, y);
	printf("ret = %d\n\n", ret);

	return(0);

}

MY_INT Add(MY_INT a, MY_INT b)
{
	//code
	MY_INT c;
	c = a + b;
	return(c);
}
