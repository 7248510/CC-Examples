class convertTimes {
    public:
    int hourstoSeconds(double hour) { 
        double calculation = hour * 3600;
        std::cout << "You've entered " << hour << " hours.\n" << hour << " hours is equal to " << calculation << " in seconds.";
        int returnVal; 
        if (calculation == 0 || calculation == 3600) {
            returnVal = 1; //No calculation. //there was a bug. on line 5 & 17 int's are being used. Thanks compile /W4!
        }
        else {
            returnVal = 0; //Calculation successful
        }
        return returnVal;
    }
    int minutetoSeconds(double minutes) {
        double calculation = minutes * 60;
        std::cout << "You've entered " << minutes << " minutes.\n" << minutes << " minutes is equal to " << calculation << " in seconds.";
        int returnVal; 
        if (calculation == 0) {
            returnVal = 1; //No calculation. I'm counting it as an error
        }
        else {
            returnVal = 0; //Calculation successful
        }
        return returnVal;
    }
};