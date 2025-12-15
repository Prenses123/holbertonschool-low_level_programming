/**
 * _is_divisible - helper function to check if n is divisible by i
 * @n: number to check
 * @i: current divisor to test
 *
 * Return: 1 if n is divisible by i, 0 otherwise
 */
int _is_divisible(int n, int i)
{
	if (i * i > n) /* yoxladıqca kvadrat kökünü keçsək, bölünmə yoxdur */
		return (0);

	if (n % i == 0) /* bölünmə tapıldı */
		return (1);

	return (_is_divisible(n, i + 1)); /* növbəti i ilə yoxla */
}

/**
 * is_prime_number - returns 1 if n is prime, 0 otherwise
 * @n: number to check
 *
 * Return: 1 if prime, 0 otherwise
 */
int is_prime_number(int n)
{
	if (n <= 1) /* 0 və 1 prim deyil */
		return (0);

	if (n == 2) /* 2 primdir */
		return (1);

	return (!_is_divisible(n, 2)); /* 2-dən başlayaraq bölünmə yoxla */
}
