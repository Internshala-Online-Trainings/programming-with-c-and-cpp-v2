int signal = 0;		// Represents a traffic signal color

switch (signal) {

    case 0:		// For red color
        puts("Stop");
    break;

    case 1:		// For yellow color
        puts("Proceed with caution");
    break;

    case 2:		// For green color
        puts("Go");
    break;
    
    default:
        puts("No color found");
}
