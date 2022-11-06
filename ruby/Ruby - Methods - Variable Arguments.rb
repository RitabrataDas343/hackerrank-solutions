def full_name(first, *rest)
    rest.reduce(first) {|f, r| "#{f} #{r}"}
end