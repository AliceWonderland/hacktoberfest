@echo off
title HELLO WORLD BATCH
cls
echo #     #                                #     #                             
echo #     # ###### #      #       ####     #  #  #  ####  #####  #      #####  
echo #     # #      #      #      #    #    #  #  # #    # #    # #      #    # 
echo ####### #####  #      #      #    #    #  #  # #    # #    # #      #    # 
echo #     # #      #      #      #    #    #  #  # #    # #####  #      #    # 
echo #     # #      #      #      #    #    #  #  # #    # #   #  #      #    # 
echo #     # ###### ###### ######  ####      ## ##   ####  #    # ###### ##### 
echo Hit Space to change colors!
:colors 
Set /a num=(%Random% %%9)+1
color %num%
pause > nul
goto colors