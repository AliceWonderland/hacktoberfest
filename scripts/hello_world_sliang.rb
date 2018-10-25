# LANGUAGE: Ruby
# AUTHOR: S Liang
# GITHUB: https:#github.com/sml2008

class Person
  def initialize(name, location)
    @name = name
    @location = location
  end

  def greeting()
    p "Hello, World. I am " + @name + " from " + @location
  end
end

myself = Person.new('Liang','NYC')
myself.greeting;
