:: Comments start with double colons.

:: In a Windows batch script, every command that you give is echoed (displayed
:: in the command line window) before executing. This behaviour can be changed
:: with the ECHO OFF and ECHO ON commands (case-insensitive) which respectively
:: turns off or on this feature.
::
:: In this case, we want to turn of command echoing in order to reduce clutter
:: in the displayed messages, and only show the relevant messages.
::
:: But at the moment our command echoing setting is on and so our ECHO OFF
:: command itself would be echoed. To prevent this, we add an @ character before
:: the command. This prevents that single command to be echoed.
@ECHO OFF

:: ECHO is also the command to display a message. In order to display a message
:: you simply specify that message after the ECHO command.
ECHO Hello, World!

:: If a Windows batch script is executed from the shell and creates its own
:: command line window, that window auto-closes after the execution of the
:: script.
::
:: In this case, that would be so fast that it would not be possible to see the
:: "Hello, World!" message. In order to prevent this, we want to pause the
:: execution of the script right before it completes, so that the command line
:: window would stay open for our message to be seen.
:: 
:: PAUSE command suspends processing of a batch program and displays a message
:: prompting the user to press any key to continue.
PAUSE