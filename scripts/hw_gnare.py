# Hello World Script by Galen Nare
GREEN = '\033[92m'
strings = [
    '#  #  ####  #    #    ####',
    '#  #  #     #    #    #  #',
    '####  ###   #    #    #  #',
    '#  #  #     #    #    #  #',
    '#  #  ####  ###  ###  ####',
    '                          ',
    '#   #  ####  ###   #    ### ',
    '#   #  #  #  #  #  #    #  #',
    '#   #  #  #  ###   #    #  #',
    '# # #  #  #  # #   #    #  #',
    ' # #   ####  #  #  ###  ###'
]
for line in strings:
    print GREEN + line
