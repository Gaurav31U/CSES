n = gets.chomp.to_i
for i in 1...n
  a=gets.chomp.to_i
  b=gets.chomp.to_i
  if (a+b)%3!=0 || (a>2*b) || (b>2*a)
    puts "NO"
  else
    puts "YES"
  end
end
