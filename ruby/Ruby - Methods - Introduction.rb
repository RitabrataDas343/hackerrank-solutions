def prime?(num)
    return false if num < 2
    (2...num).each do |n|
        return false if num % n == 0
    end
    return true
end