// LANGUAGE: Elixir
// AUTHOR: Manassarn Manoonchai
// GITHUB: https://github.com/narze

defmodule HelloWorld do
  @spec hello(String.t) :: String.t
  def hello(name \\ "World") do
    "Hello, #{name}!"
  end
end
