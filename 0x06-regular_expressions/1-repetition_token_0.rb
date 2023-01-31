#!/usr/bin/env ruby
string = ARGV[0]
regex = /hbt{2,5}n/
result = string =~ regex
puts result
