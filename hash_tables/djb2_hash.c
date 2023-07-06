

unsigned long djb2_hash(char *str)
{
	unsigned long hash = 5381;  /*large prime*/
	int c;

	while ((c = *str++))
	{
		hash = (hash << 5) + hash + c;
	}

	return (hash);

}