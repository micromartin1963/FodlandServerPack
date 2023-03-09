class FODTriggerLogger {
	
	void FODTriggerLogger() {}
	static void Log(string txt) {
		string file_path = "$profile:\\FODTriggers\\FODTriggerLog.log";
		FileHandle FODlogFile = OpenFile(file_path, FileMode.APPEND);
		if (FODlogFile != 0)
		{
		FPrintln(FODlogFile, GetDate() + " [FODLOG] " + txt);
		CloseFile(FODlogFile);
		}
	}
	

	static private string GetDate()
	{
	int year, month, day, hour, minute, second;
	GetYearMonthDay(year, month, day);
	GetHourMinuteSecond(hour, minute, second);
	string date = day.ToStringLen(2) + "." + month.ToStringLen(2) + "." + year.ToStringLen(4) + " " + hour.ToStringLen(2) + ":" + minute.ToStringLen(2) + ":" + second.ToStringLen(2);
	date.Replace(" ", "_");
	date.Replace(".", "-");
	date.Replace(":", "-");
	return date;
	}
}