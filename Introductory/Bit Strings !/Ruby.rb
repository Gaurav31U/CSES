n = gets.chomp.to_i
md = 1e9+7
ans=1
val=2
while n>0
  if n%2==1
    ans=(ans*val)%md
    n=n-1
  else
    val=(val*val)%md
    n>>=1
  end
end
puts ans
