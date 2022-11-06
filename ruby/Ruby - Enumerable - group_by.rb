def group_by_marks(marks, pass_marks)
  marks.group_by {|name, value| value < pass_marks ? "Failed" : "Passed"  }
end