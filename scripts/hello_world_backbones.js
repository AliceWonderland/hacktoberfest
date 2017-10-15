var AppView = Backbone.View.extend({
      el: '#container',
      initialize: function(){
        this.render();
      },
      render: function(){
        this.$el.html("Hello World");
      }
    });

    var appView = new AppView();