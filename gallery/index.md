---
layout: page
title: Gallery
---
<style>
.photos {
  display:none;
}
.thumb {
  max-height: 200px;
  max-width: 200px;
}
</style>
<!-- css -->
<link href="../css/lightbox.css" rel="stylesheet">
<!-- scripts -->
<script src="lightbox.js"></script>
<script>
function toggleDiv(divId) {
    $("#"+divId).toggle();
}
</script>
<script>
    lightbox.option({
      'albumLabel': $(this).attr("alt");
    })
</script>

<body>
<div class="container">
    <h2><a href="javascript:toggleDiv('jul16')">July</a></h2>
    <div class="photos" id="jul16">
      <a data-lightbox="jul16" alt="hello" href="https://drive.google.com/uc?id=0Bw7BK-1q8w_pVmdFVktKZ2dxVlA4c3pNU2RoYVg3WnE1cEVn"><img class="thumb" src="https://drive.google.com/uc?id=0Bw7BK-1q8w_pVmdFVktKZ2dxVlA4c3pNU2RoYVg3WnE1cEVn"></a>
      <a data-lightbox="jul16" href="https://drive.google.com/uc?id=0Bw7BK-1q8w_pVEFGeS1vbFBralFReEpELVN2Y3BLVm1MXzFN"><img class="thumb" src="https://drive.google.com/uc?id=0Bw7BK-1q8w_pVEFGeS1vbFBralFReEpELVN2Y3BLVm1MXzFN"></a>
      <a data-lightbox="jul16" href="https://drive.google.com/uc?id=0Bw7BK-1q8w_pSHRQN2pOUkJHU3Mxb2t1SEtyQnRPdkY5Q2tr"><img class="thumb" src="https://drive.google.com/uc?id=0Bw7BK-1q8w_pSHRQN2pOUkJHU3Mxb2t1SEtyQnRPdkY5Q2tr"></a>
    </div>

    <h2><a href="javascript:toggleDiv('jun16')">June</a></h2>
    <div class="photos" id="jun16">hello</div>

    <h2><a href="javascript:toggleDiv('may16')">May</a></h2>
    <div class="photos" id="may16">hello</div>
</div>
</body>
