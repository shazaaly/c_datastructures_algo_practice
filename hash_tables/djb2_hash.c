

unsigned long djb2_hash(char *str)
{
	unsigned long hash;
	int c;

	while ((c = *str++))
	{
		hash = (hash << 5) + hash + c;
	}

	return (hash);

}