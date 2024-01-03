#puts 'Enter a math operation (e.g., 2+3):'
calculate = gets.chomp

if calculate.include?('+')
  calculator = calculate.split('+')
  answer = calculator[0].to_i + calculator[1].to_i
  puts "#{calculate} = #{answer}\nYour answer is #{answer}"
elsif calculate.include?('-')
  calculator = calculate.split('-')
  answer = calculator[0].to_i - calculator[1].to_i
  puts "#{calculate} = #{answer}\nYour answer is #{answer}"
elsif calculate.include?('**')
  calculator = calculate.split('**')
  answer = calculator[0].to_i ** calculator[1].to_i
  puts "#{calculate} = #{answer}\nYour answer is #{answer}"
elsif calculate.include?('*')
  calculator = calculate.split('*')
  answer = calculator[0].to_i * calculator[1].to_i
  puts "#{calculate} = #{answer}\nYour answer is #{answer}"
elsif calculate.include?('//')
  calculator = calculate.split('//')
  answer = calculator[0].to_i / calculator[1].to_i
  puts "#{calculate} = #{answer}\nYour answer is #{answer}"
elsif calculate.include?('/')
  calculator = calculate.split('/')
  answer = calculator[0].to_f / calculator[1].to_f
  puts "#{calculate} = #{answer}\nYour answer is #{answer}"
elsif calculate.include?('%')
  calculator = calculate.split('%')
  answer = calculator[0].to_i % calculator[1].to_i
  puts "#{calculate} = #{answer}\nYour answer is #{answer}"
else
  puts 'The math operation is not recognized.'
end
