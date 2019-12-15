import java.text.SimpleDateFormat;
import java.util.Calendar;

public class FuzzyClock {
    public static void main(String[] args) {
	Calendar cal = Calendar.getInstance();
	SimpleDateFormat sdf = new SimpleDateFormat("K:mm:a");
	String time = sdf.format(cal.getTime());

	String[] parts = time.split(":");
	String hour = parts[0];
	String minutes = parts[1];
	String meridiem = parts[2];

	String minuteString = "not set";
	int minuteInt = Integer.parseInt(minutes);

	if (minuteInt <= 2)
	    minuteString = "around";
	else if (minuteInt > 2 && minuteInt <= 6)
	    minuteString = "five past";
	else if (minuteInt > 6 && minuteInt <= 12)
            minuteString = "ten past";
        else if (minuteInt > 12 && minuteInt <= 16)
            minuteString = "a quarter after";
        else if (minuteInt > 16 && minuteInt <= 22)
            minuteString = "twenty past";
        else if (minuteInt > 22 && minuteInt <= 26)
            minuteString = "twenty-five past";
        else if (minuteInt > 26 && minuteInt <= 32)
            minuteString = "half past";
        else if (minuteInt > 32 && minuteInt <= 36)
            minuteString = "twenty-five to";
        else if (minuteInt > 36 && minuteInt <= 42)
            minuteString = "twenty to";
        else if (minuteInt > 42 && minuteInt <= 46)
            minuteString = "a quarter to";
        else if (minuteInt > 46 && minuteInt <= 52)
            minuteString = "ten to";
        else if (minuteInt > 52 && minuteInt <= 56)
            minuteString = "five to";
        else if (minuteInt > 56 && minuteInt <= 59)
            minuteString = "just about";
        else 
            minuteString = "not set correctly!";
              
        String hourString = "not set";      
        int hourInt = Integer.parseInt(hour);
        if (minuteInt > 32)
	    hourInt = hourInt + 1;
	
        if (hourInt == 1)
            hourString = "one";
        else if (hourInt == 2)
            hourString = "two";
        else if (hourInt == 3)
            hourString = "three";
        else if (hourInt == 4)
             hourString = "four";
        else if (hourInt == 5)
             hourString = "five";
        else if (hourInt == 6)
             hourString = "six";
        else if (hourInt == 7)
             hourString = "seven";
        else if (hourInt == 8)
             hourString = "eight";
        else if (hourInt == 9)
             hourString = "nine";
        else if (hourInt == 10)
             hourString = "ten";
        else if (hourInt == 11)
            hourString = "eleven";
        else if (hourInt == 12) {
	    if (meridiem.equals("AM"))
		hourString = "midnight";
	    else
                hourString = "noon";
	}
	else
	    System.out.println("not set correctly!");

	String fuzzyTime = minuteString + " " + hourString;
	System.out.println("It is " + fuzzyTime);
    }
}
