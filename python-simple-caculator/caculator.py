calculate=input()

if '+' in calculate:
  calculator=calculate.split('+')
  answer=int(calculator[0])+int(calculator[1])
  print(calculate,'=',answer,'\nYour answer is',answer)

elif '-' in calculate:
  calculator=calculate.split('-')
  answer=int(calculator[0]) - int(calculator[1])
  print(calculate,'=',answer,'\nYour answer is',answer)

elif '**' in calculate:
  calculator=calculate.split('**')
  answer=int(calculator[0]) ** int(calculator[1])
  print(calculate,'=',answer,'\nYour answer is',answer)

elif '*' in calculate:
  calculator=calculate.split('*')
  answer=int(calculator[0]) * int(calculator[1])
  print(calculate,'=',answer,'\nYour answer is',answer)

elif '//' in calculate:
  calculator=calculate.split('//')
  answer=int(calculator[0])//int(calculator[1])
  print(calculate,'=',answer,'\nYour answer is',answer)
  
elif '/' in calculate:
  calculator=calculate.split('/')
  answer=int(calculator[0])/int(calculator[1])
  print(calculate,'=',answer,'\nYour answer is',answer)

elif '%' in calculate:
  calculator=calculate.split('%')
  answer=int(calculator[0]) % int(calculator[1])
  print(calculate,'=',answer,'\nYour answer is',answer)
