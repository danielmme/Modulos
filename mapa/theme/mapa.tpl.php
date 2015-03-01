<?php
 /**
 * Modularização do layout
 */

include("mapa_brazil.svg");

?>
   

     
            <div id='bloco_repre'>
	    <?php if(!empty($var_estado)): ?>
            <h2 id='uf'> <?php print end($var_estado);  ?> </h2>
	    <?php endif; ?>
            <table class="teste_daniel">
		
            <tr>
	    <td> <?php print 'Representantes';  ?></td>
	    <?php if(!empty($var_nome)): ?>
            <?php foreach($var_nome as $chave): ?>
	    <td><?php print ($chave);  ?></td>
	    <?php endforeach; ?>
	     <?php endif; ?>
	    </tr>
	
	    <tr>
	    <td><?php print 'E-mail';  ?></td>
	    <?php if(!empty($var_email)): ?>
            <?php foreach($var_email as $chave): ?>
	    <td><?php print ($chave);  ?></td>
	    <?php endforeach; ?>
	        <?php endif; ?>
	    </tr>
            </table>
            </div>