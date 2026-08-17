
lambda { |stdout, stderr, status|
  output = stdout + stderr
  return :green if status == 0
  return :red   if /(.*)Assertion(.*)failed/.match(output)
  return :amber
}
