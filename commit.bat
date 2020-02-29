@echo off
rem Batch file for adding all ACLI .ino files and commiting them.
rem Push and branch choice is done seperately.
@echo
robocopy C:\Users\ckels\OneDrive\OneDrive\Documents\Arduino\ACLI_OS C:\Users\ckels\Projects\ACLI *.ino 
robocopy C:\Users\ckels\OneDrive\OneDrive\Documents\Arduino\VideoCard C:\Users\ckels\Projects\ACLI *.ino
git add .
@echo off
set /p m="Commit  message="
@echo
git commit -m "%m%"