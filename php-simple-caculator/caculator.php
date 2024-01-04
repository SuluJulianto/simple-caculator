<?php
#echo 'Enter a math operation (e.g., 2+3): ';
$calculate = readline();

if (strpos($calculate, '+') !== false) {
  $calculator = explode('+', $calculate);
  $answer = intval($calculator[0]) + intval($calculator[1]);
  echo "{$calculate} = {$answer}\nYour answer is {$answer}";
} elseif (strpos($calculate, '-') !== false) {
  $calculator = explode('-', $calculate);
  $answer = intval($calculator[0]) - intval($calculator[1]);
  echo "{$calculate} = {$answer}\nYour answer is {$answer}";
} elseif (strpos($calculate, '**') !== false) {
  $calculator = explode('**', $calculate);
  $answer = pow(intval($calculator[0]), intval($calculator[1]));
  echo "{$calculate} = {$answer}\nYour answer is {$answer}";
} elseif (strpos($calculate, '*') !== false) {
  $calculator = explode('*', $calculate);
  $answer = intval($calculator[0]) * intval($calculator[1]);
  echo "{$calculate} = {$answer}\nYour answer is {$answer}";
} elseif (strpos($calculate, '//') !== false) {
  $calculator = explode('//', $calculate);
  $answer = intval($calculator[0]) / intval($calculator[1]);
  echo "{$calculate} = {$answer}\nYour answer is {$answer}";
} elseif (strpos($calculate, '/') !== false) {
  $calculator = explode('/', $calculate);
  $answer = intval($calculator[0]) / intval($calculator[1]);
  echo "{$calculate} = {$answer}\nYour answer is {$answer}";
} elseif (strpos($calculate, '%') !== false) {
  $calculator = explode('%', $calculate);
  $answer = intval($calculator[0]) % intval($calculator[1]);
  echo "{$calculate} = {$answer}\nYour answer is {$answer}";
} else {
  echo 'The math operation is not recognized.';
}
?>
