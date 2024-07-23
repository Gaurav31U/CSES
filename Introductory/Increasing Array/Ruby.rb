n = gets.chomp.to_i
arr=gets.chomp.split(' ').map(&:to_i)
last=arr[0]
ans=0
arr.each do |it|
  if it<last
    ans+=(last - it)
  else
    last=it
  end
end
puts ans
