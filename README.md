# CodigoSeguidordeLinha
Código Seguidor de Linha
O robô seguidor de linha procura no chão uma linha de determinada cor utilizando sensores infravermelhos (IR). De acordo com o que for detectado pelos dois sensores infravermelhos, um no lado direito e outro no lado esquerdo, o robô ativará os servos para se mover, de acordo com a seguinte a lógica:  

LOW significa que o sensor IR não detectou a linha, enquanto HIGH significa que detectou. Como a detecção da linha é feita nas laterais do robô, se não for detectada, significa que ela está no centro e o robô pode seguir em frente. Para isso, os servos andam para a frente e, para isso, precisamos configurar os valores deles em 94 e 85, especificamente para a servo-motor esquerdo e direito. Esses valores correspondem à velocidade com a qual as rodas irão girar. 
 
Caso o IR do lado esquerdo do robô (no referencial do robô) detecte a linha, o IR não será refletido e o robô receberá o sinal LOW. Assim, o robô deverá girar no sentido anti-horário, a fim de centralizar a linha. Para isso colocamos as velocidades em 85 e 89 para o servo esquerdo e direito, respectivamente.  
 
De forma contrária, se o lado direito do robô detectar a linha, este deve girar no sentido horário. Para isso, configuramos as velocidades para 92 e 94 para o servo esquerdo e direito, respectivamente. Vale a pena lembrar que essas velocidades foram obtidas de forma experimental, dado que os servos são levemente diferentes e que a distribuição de peso do robô não é totalmente uniforme. Quanto mais longe o valor de 90 (em módulo) maior a velocidade do servo. 
