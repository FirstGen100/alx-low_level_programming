int add(int a, int b);
int sub(int a, int b);
int mul(int a, int b);
int div(int a, int b);
int mod(int a, int b);
/**
 * add - add two integers
 * @a: first int
 * @b: second int
 * Return: sum
 */
int add(int a, int b)
{
	return (a + b);
}
/**
 * sub - subtract numbers
 * @a: first
 * @b: second
 * Return: difference
 */
int sub(int a, int b)
{
	return (a - b);
}
/**
 * mul - multiply numbers
 * @a: first
 * @b: second
 * Return: multiplication
 */
int mul(int a, int b)
{
	return (a * b);
}
/**
 * div - division of numbers
 * @a: first
 * @b: second
 * Return: division result
 */
int div(int a, int b)
{
	return (a / b);
}
/**
 * mod - find the modulus of numbers
 * @a: first
 * @b: second
 * Return: the remainder
 */
int mod(int a, int b)
{
	return (a % b);
}
