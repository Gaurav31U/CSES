n = gets.chomp.to_i
ans=0
while n>0
  ans=ans+n/5
  n=n/5
end
puts ans
