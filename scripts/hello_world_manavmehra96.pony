// LANGUAGE: PONY
// ENV: PONY
// AUTHOR: Manav Mehra
// GITHUB: https://github.com/manavmehra96

actor Main
  new create(env: Env) =>
    env.out.print("Hello, world.")