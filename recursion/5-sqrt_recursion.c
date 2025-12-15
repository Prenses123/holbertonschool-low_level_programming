/**
 * _sqrt_helper - recursive helper to find natural square root
 * @n: number to find the square root of
 * @i: current guess
 *
 * Return: square root of n, or -1 if n has no natural square root
 */
int _sqrt_helper(int n, int i)
{
	if (i * i > n) /* guess exceeded n, no natural root */
		return (-1);

	if (i * i == n) /* found the square root */
		return (i);

	return (_sqrt_helper(n, i + 1)); /* try next i */
}

/**
 * _sqrt_recursion - returns natural square root of n
 * @n: number to find square root of
 *
 * Return: natural square root, or -1 if none exists
 */
int _sqrt_recursion(int n)
{
	if (n < 0) /* negative number has no natural square root */
		return (-1);

	return (_sqrt_helper(n, 0));
}
