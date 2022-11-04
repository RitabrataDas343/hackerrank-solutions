def serial_average(s)
    return "#{s[0,3]}-#{((s[4,5].to_f + s[10,5].to_f) / 2).round(2)}"
end