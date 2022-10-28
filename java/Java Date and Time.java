import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.regex.*;
import java.*;

class Result {
    public static String findDay(int month, int day, int year) {
        Calendar myCal = Calendar.getInstance();
        myCal.set(year, month-1, day);
        switch (myCal.get(Calendar.DAY_OF_WEEK)) {
            case Calendar.MONDAY:
                return "MONDAY";
            case Calendar.TUESDAY:
                return "TUESDAY";
            case Calendar.WEDNESDAY:
                return "WEDNESDAY";
            case Calendar.THURSDAY:
                return "THURSDAY";
            case Calendar.FRIDAY:
                return "FRIDAY";
            case Calendar.SATURDAY:
                return "SATURDAY";
            case Calendar.SUNDAY:
                return "SUNDAY";
            default:
                return "";    
        }
    }
}

public class Solution {