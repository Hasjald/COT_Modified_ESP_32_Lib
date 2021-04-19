# COT_Modified_ESP_32_Lib
Two new functions added, for GPS coordinates 

Use the writePOS() function to write just position to a signal, 
the old write function is still there,
and anoter writeEX() function which lets the user write the position and value in the same request,
Note writeEX() has a limit of 4 decimal places while WritePOS() has a limit of 6.
