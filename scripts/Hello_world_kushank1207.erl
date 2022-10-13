// LANGUAGE: Erlang
// AUTHOR: Kushank Singh
// GITHUB: https://github.com/kushank1207

-module(hello).
-export([hello_world/0]).

hello_world() -> io:fwrite("hello, world\n").