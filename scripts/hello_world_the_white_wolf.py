'''
Language: Python 3
Author: Tim C
Github: https://github.com/The-White-Wolf
'''

from collections import namedtuple
Message = namedtuple('Message', 'greeting space place')
phrase = Message('Hello', ', ', 'World!')

print('{2:_>10}{1}{0:_<10}'.format(phrase.place, phrase.space, phrase.greeting))
