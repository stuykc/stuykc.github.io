---
layout: page
title: Gallery
---
<style>
.photos {display:none;}
#lightbox {
    position:fixed; // keeps the lightbox window in the current viewport
    top:0;
    left:0;
    width:100%;
    height:100%;
    background: rgba(0,0,0,.5);
};
#lightbox img {
    box-shadow:0 0 25px #111;
    -webkit-box-shadow:0 0 25px #111;
    -moz-box-shadow:0 0 25px #111;
};
</style>
<!-- scripts -->
<script>
function toggleDiv(divId) {
    $("#"+divId).toggle();
}
</script>
<script>
jQuery(document).ready(function($) {

	$('.view').click(function(e) {
    e.preventDefault();
    make($(this).attr("class").split(" ")[1]);
	});

	$('body').on('click', '#lightbox', function(){
		$('#lightbox').hide();
	});
});
</script>
<script>
function make(which){
  var source = $("."+which).attr("src");
  var caption = $("."+which).attr("alt");
  var number = parseInt(which.split("pic")[1]);
  var prev = "pic" + (number - 1);
  var next = "pic" + (number + 1);

  var lightbox =
  '<div id="lightbox">' +
    '<div id="content" style="text-align:center"><tr>';
  if (prev != "pic0" ){
    lightbox += '<a href="javascript:make(\'' + prev + '\')">\<</a>';
  }
  lightbox += '<img src="' + source +'" style="margin-top:120px;"/>';
  if (next != "pic4"){
    lightbox += '<a href="javascript:make(\'' + next + '\')">\></a>';
  }
  lightbox += '<p style="color: white;font-size:16px;padding-top:10px;">' + caption + '</p>' +
  '</div></div>';

  if ($('#lightbox').length > 0) {
    $('#content').html(lightbox);
    $('#lightbox').show();
  }

  else {
    $('.navbar').append(lightbox);
  }
}
</script>

<body>
<div class="container">
    <h2><a href="javascript:toggleDiv('jul16')">July</a></h2>
    <div class="photos" id="jul16">
      <img class="view pic1" alt="cute-dog!" src="data:image/jpeg;base64,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">
      <img class="view pic2" alt="<3" src="https://tse1.mm.bing.net/th?id=OIP.M9bdb5b45739754e85e0ead381b5bf106H0&w=131&h=100&c=7&rs=1&qlt=90&pid=3.1&rm=2">
      <img class="view pic3" alt="another cutie" src="https://tse1.mm.bing.net/th?id=OIP.Me88f59a1935827adf345346ecd5a1c03H0&w=130&h=108&c=7&rs=1&qlt=90&pid=3.1&rm=2">
    </div>

    <h2><a href="javascript:toggleDiv('jun16')">June</a></h2>
    <div class="photos" id="jun16">hello</div>

    <h2><a href="javascript:toggleDiv('may16')">May</a></h2>
    <div class="photos" id="may16">hello</div>
</div>
</body>
