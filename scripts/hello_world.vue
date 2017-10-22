<!-- LANGUAGE: Javascript / VueJS -->
<!-- AUTHOR: CFCanovas -->
<!-- GITHUB: https://github.com/UchihaCFC -->

<template>
  <div class="hacktoberfest">
    <h2> 🎃 </h2>
    <p>{{ hacktoberfest_message }}</p>
  </div>
</template>

<script>
module.exports = {
  data: function() {
    return {
      hacktoberfest_message: 'Hello World, hacktoberfest people!'
    }
  }
}
</script>


<style lang="scss" scoped>
  .hacktoberfest{
    text-align: center;
  }
</style>
