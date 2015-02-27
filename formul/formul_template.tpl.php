<?php
/**
 *
 */

?>

            <div class="daniel">
            <table class="teste_daniel">
        
            <th><?php print 'Categoria';  ?></th>
            <?php foreach($var_two as $chave): ?>
	    <tr>
	    <th><?php print ($chave);  ?></th>
	    </tr>
	    <?php endforeach; ?>
            </table>
         
         
          
            <table class="teste_daniel">
            <th><?php print 'SubCategoria';  ?></th>
            <?php foreach($var_one as $chave): ?>
	    <tr>
	    <th><?php print ($chave);  ?></th>
	    </tr>
	    <?php endforeach; ?>
            </table>
    
            <table class="teste_daniel">
            <th><?php print 'Despesas';  ?></th>
            <?php foreach($var_three as $chave): ?>
	    <tr>
	    <th><?php print 'R$' . '&nbsp' . ($chave);  ?></th>
	    </tr>
	    <?php endforeach; ?>
            
            <th><?php print 'Total  R$' . '&nbsp' . $soma_total; ?></th>
            </table>
            </div>
            
            
            
      