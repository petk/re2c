/* Generated by re2c */

{
	YYCTYPE yych;
	if ((YYLIMIT - YYCURSOR) < 3) YYFILL(3);
	yych = *(YYMARKER = YYCURSOR);
	switch (yych) {
	case 'y':
		yyt2 = yyt3 = YYCURSOR;
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
	case 'y':
		yyt1 = YYCURSOR;
		goto yy5;
	default:	goto yy4;
	}
yy4:
	YYCURSOR = YYMARKER;
	goto yy2;
yy5:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'y':	goto yy7;
	default:	goto yy6;
	}
yy6:
	{
		const size_t yynmatch = 2;
		const YYCTYPE *yypmatch[yynmatch * 2];
		yypmatch[0] = yyt2;
		yypmatch[2] = yyt3;
		yypmatch[1] = YYCURSOR;
		yypmatch[3] = YYCURSOR - 1;
		{}
	}
yy7:
	++YYCURSOR;
	yyt3 = yyt1;
	goto yy6;
}

re2c: warning: line 6: rule matches empty string [-Wmatch-empty-string]
