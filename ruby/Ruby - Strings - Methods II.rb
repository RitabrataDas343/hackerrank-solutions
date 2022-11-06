def strike(s)
    return "<strike>#{s}</strike>"
end

def mask_article(s, arr)
    arr.map do |word|
        s.gsub!(word, strike(word)) if s.include? word
    end
    return s
end