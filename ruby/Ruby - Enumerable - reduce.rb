def sum_terms(n)
  (1..n).reduce(0){|sum, n| sum+(n**2+1)}
end