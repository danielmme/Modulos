
        var estados = Array();
        estados[3] = 'Acre';
        estados[4] = 'Amazônia';
        estados[5] = 'Roraima';
        estados[6] = 'Amapá';
        estados[7] = 'Maranhão';
        estados[8] = 'Rondônia';
        estados[9] = 'Mato Grasso';
        estados[10] = 'Mato Grasso do Sul';
        estados[11] = 'Goiás';
        estados[12] = 'Paraná';
        estados[13] = 'São Paulo';
        estados[14] = 'Rio de Janeiro';
        estados[15] = 'Espírito Santo';
        estados[16] = 'Minas Gerais';
        estados[17] = 'Santa Catarina';
        estados[18] = 'Rio Grande do Sul';;
        estados[19] = 'Tocantins';
        estados[20] = 'Bahia';
        estados[22] = 'Sergipe';
        estados[21] = 'Alagoas';
        estados[23] = 'Piauí';
        estados[24] = 'Ceará';
        estados[25] = 'Rio Grande do Norte';
        estados[26] = 'Paraíba';
        estados[27] = 'Pernanbuco';
        estados[28] = 'Pará';
    
        var ativos = Array();
        ativos[0] = false;
        ativos[1] = false;
        ativos[2] = false;
        ativos[3] = false;
        ativos[4] = false;
        ativos[5] = false;
        ativos[6] = false;
        ativos[7] = false;
        ativos[8] = false;
        ativos[9] = false;
        ativos[10] = false;
        ativos[11] = false;
        ativos[12] = false;
        ativos[13] = false;
        ativos[14] = false;
        ativos[15] = false;
        ativos[16] = false;
        ativos[17] = false;
        ativos[18] = false;
        ativos[19] = false;
        ativos[20] = false;
        ativos[21] = false;
        ativos[22] = false;
        ativos[23] = false;
        ativos[24] = false;
        ativos[25] = false;
        ativos[26] = false;
        ativos[27] = false;
        ativos[28] = false;
        
        
        $(document).ready(
            $('.estado').attr()
        )
        
        
        
        
        function ativaComEstado(){
            var i =0;
            ativos.forEach(function(entry) {
                if(ativos[i]){
                    $('.estado'+i).attr('fill','#333333');
                    $('.estado'+i).attr('stroke','#F1F1F2');
                }
                i++;
            });
        }
        
        $(document).ready(function(){
            $('.estado').hover(
                function(){
                    var estado_aux = $(this).attr('class');
                    estado_aux = estado_aux.split(' ');
                    estado_aux = estado_aux[1].replace('estado','');
                    $('#aux').html(estado_aux+'  '+estados[estado_aux]);
                    
					$('.estado'+estado_aux).each(function(){
						if(ativos[estado_aux])
							$(this).attr('fill','orange');
						else
							$(this).attr('fill','#F1F1F2');
							
						$(this).attr('stroke','#D0D2D3');
					});
                },
                function(){
                    var estado_aux = $(this).attr('class');
                    estado_aux = estado_aux.split(' ');
                    estado_aux = estado_aux[1].replace('estado','');
                    
					$('.estado'+estado_aux).each(function(){
						if(ativos[estado_aux])
							$(this).attr('fill','red');
						else
							$(this).attr('fill','#D0D2D3');
							
						$(this).attr('stroke','#F1F1F2')
					});
                }
            );
            ativaComEstado();
        });
    