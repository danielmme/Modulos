
 
        /**
  
     $(document).ready(function(){
	
	$(".estado11").hover(
			    function(){
	    $(this).css("fill", "blue");
	
	},
	function(){
	    $(this).css("fill", "black"); 
	}
	);
	


	$(".estado11").click(function() {
	 $("#bloco_repre")
	 .load("/camisariacruz/mapa/11 #bloco_repre"); 
     });
	
	
	
     });
     
