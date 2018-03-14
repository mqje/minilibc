size_t strcspn(const char *s, const char *reject)
{
	const char *p;
	const char *r;
	size_t count = 0;

	for (p = s; *p != '\0'; ++p) {
		for (r = reject; *r != '\0'; ++r) {
			if (*p == *r)
				return count;
		}
		++count;
	}
	return count;
}

char *strpbrk(char *string, char *chars)
{
	register char c, *p;

	for (c = *string; c != 0; string++, c = *string) {
		for (p = chars; *p != 0; p++) {
			if (c == *p) {
				return string;
			}
		}
	}
	return 0;
}


char *strstr(char *string, char *substring)
{
	register char *a, *b;
	
	b = substring;
	if (*b == 0) {
		return string;
	}
	for ( ; *string != 0; string += 1) {
		if (*string != *b) {
			continue;
		}
		a = string;
		while (1) {
			if (*b == 0) {
				return string;
			}
			if (*a++ != *b++) {
				break;
			}
		}
		b = substring;
	}
	return (char *) 0;
}
