/**
 * _pow_recursion - returns the value of x raised to the power of y
 * @x: base
 * @y: exponent
 *
 * Return: x raised to the power y, or -1 if y < 0
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1); /* negative exponent case */

	if (y == 0)
		return (1); /* base case: x^0 = 1 */

	return (x * _pow_recursion(x, y - 1)); /* recursive step */
}
