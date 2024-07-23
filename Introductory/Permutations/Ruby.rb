n = gets.chomp.to_i
if n==2 || n==3
  puts "NO SOLUTION"
elsif n==4
  puts "2 4 1 3"
else
  arr=[]
  i=n
  while i>=1
    arr.append(i)
    i-=2
  end
  i=n-1
  while i>=1
    arr.append(i)
    i-=2
  end
  arr.each do |it|
    print("#{it} ")
  end
end
