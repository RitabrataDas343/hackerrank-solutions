def factorial
    yield
end

n = gets.to_i
factorial do 
    f = 1
    while n > 1 do
        f *= n
        n -= 1
    end
    puts f
end