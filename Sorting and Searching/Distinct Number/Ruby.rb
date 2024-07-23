n = gets.chomp.to_i
arr = gets.chomp.split(' ').map(&:to_i)
arr.sort!
i=0
cnt=1
while i < n - 1
  if arr[i] != arr[i + 1]
    cnt += 1
  end
  i += 1
end
puts cnt
