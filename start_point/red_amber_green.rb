
lambda { |stdout, stderr, status|
  output = stdout + stderr
  return :red   if /(.*)Assertion(.*)failed/.match(output)
  # There is no framework here to count tests, so green rests on the line the
  # test file prints once every assertion has held. A zero exit status says
  # only that nothing crashed, which a run printing nothing also manages.
  return :green if /All tests passed/.match(output)
  return :amber
}
