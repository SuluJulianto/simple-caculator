const calculate = prompt('Enter a math operation (e.g., 2+3):');

if (calculate.includes('+')) {
  const calculator = calculate.split('+');
  const answer = parseInt(calculator[0]) + parseInt(calculator[1]);
  console.log(`${calculate} = ${answer}\nYour answer is ${answer}`);
} else if (calculate.includes('-')) {
  const calculator = calculate.split('-');
  const answer = parseInt(calculator[0]) - parseInt(calculator[1]);
  console.log(`${calculate} = ${answer}\nYour answer is ${answer}`);
} else if (calculate.includes('**')) {
  const calculator = calculate.split('**');
  const answer = Math.pow(parseInt(calculator[0]), parseInt(calculator[1]));
  console.log(`${calculate} = ${answer}\nYour answer is ${answer}`);
} else if (calculate.includes('*')) {
  const calculator = calculate.split('*');
  const answer = parseInt(calculator[0]) * parseInt(calculator[1]);
  console.log(`${calculate} = ${answer}\nYour answer is ${answer}`);
} else if (calculate.includes('//')) {
  const calculator = calculate.split('//');
  const answer = Math.floor(parseInt(calculator[0]) / parseInt(calculator[1]));
  console.log(`${calculate} = ${answer}\nYour answer is ${answer}`);
} else if (calculate.includes('/')) {
  const calculator = calculate.split('/');
  const answer = parseInt(calculator[0]) / parseInt(calculator[1]);
  console.log(`${calculate} = ${answer}\nYour answer is ${answer}`);
} else if (calculate.includes('%')) {
  const calculator = calculate.split('%');
  const answer = parseInt(calculator[0]) % parseInt(calculator[1]);
  console.log(`${calculate} = ${answer}\nYour answer is ${answer}`);
} else {
  console.log('The math operation is not recognized.');
}
