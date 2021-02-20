
    	CString csYJSJ = "2021-02-20 08:52:33";
	
	wstring beforeTime,afterTime;
	COleDateTimeSpan spanAfter(0, 0, 0, atoi((LPSTR)(LPCSTR)VideoAfterIndex.c_str()));
	COleDateTime dt;
	dt.ParseDateTime(csYJSJ);
	dt += spanAfter;
	afterTime = dt.Format();

	COleDateTimeSpan spanBefore(0, 0, 0, atoi((LPSTR)(LPCSTR)VideoBeforeIndex.c_str()));
	COleDateTime dt2;
	dt2.ParseDateTime(csYJSJ);
	dt2 -= spanBefore;
	beforeTime = dt2.Format();
