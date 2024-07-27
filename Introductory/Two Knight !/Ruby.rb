n = gets.chomp.to_i
for i in 1...n
  ans=0
  ans=1+(i-1)*(i-1)/2
  ans=ans*(i-1)*(i+4)
  puts ans
end
