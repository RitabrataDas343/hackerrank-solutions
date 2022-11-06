def process_text(s)
    m  = ""
    s.each do |str|
        m += str.strip.chomp + " "
    end
    return m.strip
end