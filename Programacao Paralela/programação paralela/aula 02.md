## Introdução à computação de alto desempenho

### Motivação
 - A evolução da arquitetura dos processadores
 - Evoulução dos acelaradores opara atividades paralelas de uso geral (Manycores)
 - Desenvolvimento de redes de comunicaão de alta velocidade e baixa latência
 - Possibilidade de utilizar arquitetura de baixo custo na solução de problemas com paralelismo - Aglomerados de computadores

### Objetivos
- Compreender a importância da [[CAD]]
- Proporcionar melhorias no desempenho das aplicações atrávés do cad
- Realizar caluclos de ganho de desemepnho

## Introdução
Nos últimos anos houve um aumento exponencial dos dados processados, oq resultou em uma corrida à uma disputa de hardware e à informação. Gerando uma disputa do poder de processamento proporcionado pela [[CAD]]

A grande riqueza do século é a produção de conhecimento, e o ouro do sec XXI são dados.

#### Arquitetura de memória compartilhada
Com a utilização de mais de uma [[UP]] é necessário uma arquitetura de comunicação entre componentes eficiente através de uma memória compartilhada, apesar de haver caches locais entre [[UP]]'s. No entando deve haver uma cache consistente para garantir a integridade dos dados

#### Arquitetura de memória distribuída
Cada processador possui sua própria memória local em que ao invés de barramentos utiliza-se mensegens através de uma rede de interconexão ao invpes de uma memória principal


### Observações
[[Multicores]] - CPU
[[Manycores]] - GPU - só que manycore é nucleo pra krl

Em cpu temos a melhor com 300 e poucos cores, já em uma GPU modesta temos uns
1000 cores

Um core de gpu e cpu sendo comparado individualmente tem quase o mesmo desempenho, o boom de desempenho esta no numero de cores

o professor chamou o aluno de mestrado pra testar o sistema deles, valendo avaliação pra mim
### a pesquisar:
- CDC 6600
- Processamento Vetorial