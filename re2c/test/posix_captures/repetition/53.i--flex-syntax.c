/* Generated by re2c */

{
	YYCTYPE yych;
	unsigned int yyaccept = 0;
	if ((YYLIMIT - YYCURSOR) < 5) YYFILL(5);
	yych = *(YYMARKER = YYCURSOR);
	switch (yych) {
	case 'X':
		yyt1 = YYCURSOR;
		goto yy3;
	default:	goto yy2;
	}
yy2:
	{
		const size_t yynmatch = 1;
		const YYCTYPE *yypmatch[yynmatch * 2];
		yypmatch[0] = YYCURSOR;
		yypmatch[1] = YYCURSOR;
		{}
	}
yy3:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0x00:	goto yy4;
	case 'Y':
		yyt2 = YYCURSOR;
		goto yy6;
	default:	goto yy5;
	}
yy4:
	YYCURSOR = YYMARKER;
	if (yyaccept == 0) {
		goto yy2;
	} else {
		goto yy7;
	}
yy5:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0x00:	goto yy4;
	case 'Y':
		yyt2 = YYCURSOR;
		goto yy9;
	default:	goto yy8;
	}
yy6:
	yyaccept = 1;
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
	case 0x00:	goto yy7;
	case 'Y':
		yyt2 = YYCURSOR;
		goto yy9;
	default:	goto yy8;
	}
yy7:
	{
		const size_t yynmatch = 2;
		const YYCTYPE *yypmatch[yynmatch * 2];
		yypmatch[0] = yyt1;
		yypmatch[2] = yyt2;
		yypmatch[1] = YYCURSOR;
		yypmatch[3] = YYCURSOR - 1;
		{}
	}
yy8:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'Y':
		yyt3 = YYCURSOR;
		goto yy12;
	default:	goto yy11;
	}
yy9:
	yyaccept = 1;
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
	case 0x00:	goto yy7;
	case 'Y':
		yyt3 = YYCURSOR;
		goto yy12;
	default:
		yyt3 = YYCURSOR;
		goto yy10;
	}
yy10:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
yy11:
	switch (yych) {
	case 0x00:	goto yy4;
	case 'Y':
		yyt2 = YYCURSOR;
		goto yy13;
	default:
		yyt3 = YYCURSOR;
		goto yy10;
	}
yy12:
	yyaccept = 1;
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
	case 'Y':
		yyt2 = YYCURSOR;
		goto yy13;
	default:	goto yy14;
	}
yy13:
	yyaccept = 1;
	YYMARKER = ++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
yy14:
	switch (yych) {
	case 0x00:
		yyt2 = yyt3;
		goto yy7;
	case 'Y':
		yyt3 = yyt2;
		yyt2 = YYCURSOR;
		goto yy13;
	default:
		yyt2 = yyt3;
		yyt3 = YYCURSOR;
		goto yy10;
	}
}

re2c: warning: line 6: rule matches empty string [-Wmatch-empty-string]
