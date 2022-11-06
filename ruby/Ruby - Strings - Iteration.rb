def count_multibyte_char(s)
    count = 0
    s.each_char do |c|
        if c.bytesize > 1
            count += 1 
        end
    end
    return count
end