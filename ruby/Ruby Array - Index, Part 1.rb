def element_at(arr, index)
    return arr.at(index)
end

def inclusive_range(arr, start_pos, end_pos)
    return arr[start_pos..end_pos]
end

def non_inclusive_range(arr, start_pos, end_pos)
        return arr[start_pos..end_pos-1]
end

def start_and_length(arr, start_pos, length)
        return arr[start_pos, length]
end