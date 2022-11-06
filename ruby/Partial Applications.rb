combination = -> (n) do
    ->(r) do
        x = 1
        r.times{|i| x = x*(n-i)/(i+1)}
        return x
    end
end

n = gets.to_i
r = gets.to_i
nCr = combination.(n)
puts nCr.(r)
