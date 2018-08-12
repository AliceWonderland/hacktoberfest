# LANGUAGE: ruby
# ENV: fxruby
# AUTHOR: Fabien BENARIAC
# GITHUB: https://github.com/fbenariac

require 'fox16'
include Fox

class HelloWorld < FXMainWindow

  def initialize
    @app ||= FXApp.new
  end

  def salute
    msg = 'Hello, World!'
    opts = { width: 200, height: 50 }

    window = FXMainWindow.new(@app, msg, opts)
    content = FXHorizontalFrame.new(window, LAYOUT_CENTER_X | LAYOUT_CENTER_Y | PACK_UNIFORM_WIDTH | FRAME_RAISED)
    FXButton.new(content, msg, nil, @app, FXApp::ID_QUIT)

    create(window)
  end

  def create(window)
    @app.create
    window.show(PLACEMENT_SCREEN)
    @app.run
  end
end

HelloWorld.new.salute if (__FILE__ == $0)
