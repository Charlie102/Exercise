//var form = document.forms["form"]["name"]["gender"]["address"]["email"]["phone"]["qualification"].value;

$(".submit").click(function(){
    var data = $(this);
    var studentdata = data.html();

    alert("Save Successful:" + studentdata);
});
