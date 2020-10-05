def hello(name='World'):
  return 'Hello {}!'.format(name)
def main():
  name = input('Your name?:')
  helloYou = hello(name)
  print(helloYou)
if __name__ == '__main__':
  main()
  
