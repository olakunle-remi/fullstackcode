var targetDate = moment('1-1-2022');
 

var $days = $('#days')
 var $hours = $('#hours')
 var $minutes = $('#minutes')
 var $seconds = $('#seconds');

setInterval(function(){
 //  calculate teh time remaining
 var now = moment();
 var timeleft = moment.duration(targetDate.diff(now));
 updateClock(timeleft);
}, 10);

function updateClock( remainingTime){
//display the difference

var days=Math.floor(remainingTime.asDay()),
 hrs=Math.floor(remainingTime.asHours()) % 24,
 mins=Math.floor(remainingTime.asMinutes()) %60,
 secs=Math.floor(remainingTime.asSeconds())%60;
 $('#days').text(days);
 $('#hours').text(hrs);
 $('#minutes').text(mins);
 $('#seconds').text(secs);


}
function padNumber(number){
    var formattedNum = numbers;
    if(number < 10){
        formattedNum = "0" + formattedNum
    }
    return formattedNum;
}