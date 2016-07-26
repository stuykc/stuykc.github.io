---
layout: page
title: Gallery
---
<style>
.pics {display:none}
</style>
<!-- scripts -->
<script>
function toggleDiv(divId) {
    $("#"+divId).toggle();
}
</script>

<body>
<div class="container">
    <h2><a href="javascript:toggleDiv('jul16')">July</a></h2>
    <div class="pics" id="jul16">hello</div>

    <h2><a href="javascript:toggleDiv('jun16')">June</a></h2>
    <div class="pics" id="jun16">hello</div>

    <h2><a href="javascript:toggleDiv('may16')">May</a></h2>
    <div class="pics" id="may16">hello</div>
</div>
</body>
