O grande volume de dados necessita de uma arquitetura robusta para o grande processamento dos pedidos. No entanto, o cenário A se mostra mais viável por viabilizar o tratamento devido dos dados e proporcionar maior simplicidade e facilidade de gerenciamento e manutenção. Com isso, nossa recomendação se baseia em uma arquitetura MIMD, com base na arquitetura de Flynn, e assíncrona, segundo a arquitetura de Duncan.

A comunicação será feita por intermédio de barramentos eficientes entre os núcleos e a memória compartilhada. A principal preocupação deve ser mecanismos de sincronização eficazes, a fim de prevenir qualquer race condition.

As tarefas de cada núcleo serão executadas de forma independente. Não é necessário que cada tarefa comece e termine simultaneamente. No entanto, a consolidação deve ser uma tarefa síncrona que deve aguardar o processamento de cada núcleo.

No cenário A, utiliza-se memória compartilhada, na qual todos os núcleos acessam a mesma memória principal. Isso facilita a comunicação e o compartilhamento de dados, mas exige mecanismos de sincronização para evitar conflitos entre os núcleos.

No cenário B, cada nó possui sua própria memória, e a comunicação ocorre pela rede. Essa organização oferece maior escalabilidade, mas aumenta a complexidade de comunicação, sincronização e gerenciamento.

O cenário A se mostra coerente para o contexto da TransBrasil Express devido ao fato de suportar o volume computacional e a maior facilidade de manutenção e gerenciamento comparado ao cenário B.