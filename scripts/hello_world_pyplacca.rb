=begin

LANGUAGE: Ruby
AUTHOR: David Placca
GITHUB: https://github.com/pyplacca

=end

puts 'Boffe&*]exfn+'.split('').map { |s| (s.ord ^ 10).chr }.join # 10 represents the month number :)
