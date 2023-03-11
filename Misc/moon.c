int moon_phase(int year, int month, int day)
{
	int d, g, e;
	d = day;
	if (month == 2)
		d += 31;
	else if (month > 2)
		d += 59 + (month - 3)*30.6 + 0.5;
	g = (year - 1900)%19;
	e = (11*g + 29) % 30;
	if (e == 25 || e == 24)
		++e;
	return ((((e+d)*6+5)%177)/22 & 7);
}

char *phase[8] = {
	"waxing crescent", "at first quarter",
	"waxing gibbous", "full", "waning gibbous",
	"at least quarter", "waning crescent", "new"
}

