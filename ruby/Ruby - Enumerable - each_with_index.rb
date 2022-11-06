def skip_animals(animals, skip)
    arr = []
    animals.each_with_index {|item, index| arr.push("#{index}:#{item}") if index >= skip}
    return arr
end