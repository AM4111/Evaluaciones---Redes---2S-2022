Tecnológico de Costa Rica<br> 
Escuela de Ingeniería en Computación<br> 
IC: 7602-Redes  - 2 Semestre 2022 <br> 
2018093728 - Paula Mariana Bustos Vargas
______________________
<center> <h1> Resumen 2 - 3 </h1> </center> 
<u> <h3>2.5.1 Estructura del sistema telefónico. </h3></u>

Debido a la estructura que presento el modelo de conexio de cada telefono (la maraña de cables). Bell fundo 1878 Bell Telephone Company. El cual su modelo de llamda era dar vueltas a una manivela en el teléfono para producir un sonido en la oficina de la compañía de teléfonos que atrajera la atención del operador, este de manera manualmente lo conectara al receptor de la llamada por medio de un cable puenteador. Tiempo despues surgio el mismo problema al querer conectar las oficinas de conmutación.

Circuito local: las conexiones de dos alambres entre el teléfono de cada suscriptor y la oficina central 

<u> <h3>2.5.3 El circuito local: módems, ADSL e inalámbrico. </h3> </u>

La atenuación es la pérdida de energía conforme la señal se propaga hacia su destino. La pérdida se expresa en decibeles por kilómetro. Los diferentes componentes de Fourier se propagan a diferente velocidad por el cable. Esta diferencia de velocidad ocasiona una distorsión de la señal que se recibe en el otro extremo.
Otro problema es el ruido, que es energía no deseada de fuentes distintas al transmisor. El movimiento al azar de los electrones en un cable causa el ruido térmico y es inevitable. La diafonía se debe al acoplamiento inductivo entre dos cables que están cerca uno de otro.

La señalización de CA (corriente alterna) se utiliza para superar los problemas asociados a la señalización de CC, en especial en las líneas telefónicas. Se introduce un tono continuo en el rango de 1000 a 2000 Hz, llamado portadora de onda senoidal

En la modulación de amplitud se usan dos niveles diferentes de amplitud para representar 0 y 1. En la modulación de frecuencia, conocida también como modulación por desplazamiento de frecuencia, se usan dos (o más) tonos diferentes. En la forma más simple de la modulación de fase la onda portadora se desplaza de modo sistemático 0 o 180 grados a intervalos espaciados de manera uniforme.

Un módem (por modulador-demodulador) es un dispositivo que acepta un flujo de bits en serie como entrada y quproduce una portadora modulada mediante uno (o más) de estos métodos (o viceversa). El módem se conecta entre la computadora (digital) y el sistema telefónico (analógico). El objetivo es conseguir más bits por muestra. El número de muestras por segundo se mide en baudios. Un símbolo se envía durante cada
baudio.

- QPSK (Codificación por Desplazamiento de Fase en Cuadratura).
- QAM-16 (Modulación de Amplitud en Cuadratura)
- las combinaciones permitidas de amplitud y fase, se les llama diagramas de constelación
- TCM (Modulación por Codificación de Malla

Transmision de trafico en modems:
- La conexión que permite el flujo de tráfico en ambas direcciones de manera simultánea se conoce como dúplex total.
- La conexión que permite el tráfico en ambas direcciones,
pero sólo en un sentido a la vez, se denomina semidúplex
- La conexión que permite el tráfico en una sola dirección se conoce como símplex.

Los servicios con mayor ancho de banda que el servicio telefónico común se denominan en ocasiones como de
banda ancha. Division del espectro:
- 3 bandas de frecuencia: POTS (Servicio Telefónico Convencional), canal ascendente (del usuario a la oficina central) y canal descendente (de la oficina central al usuario
- DMT (MultiTono Discreto) dividir el espectro disponible de 1.1 MHz en el circuito local en 256 canales independientes de 4312.5 Hz cada uno. El canal 0 se utiliza para el POTS.

<u> <h3> 2.5.4 Troncales y multiplexión. </h3></u>

La economía de escala desempeña un papel importante en el sistema telefónico. Cuesta prácticamente lo mismo instalar y mantener una troncal de ancho de banda alto que una de ancho de banda bajo entre dos oficinas de conmutación . En **FDM (Multiplexión por División de Frecuencia)** el espectro de frecuencia se divide en bandas de frecuencia, y cada usuario posee exclusivamente alguna banda. En **TDM  (Multiplexión por División de Tiempo)** los usuarios esperan su turno , y cada uno obtiene en forma periódica toda la banda durante un breve lapso de tiempo. La radiodifusión AM ilustra ambas clases de multiplexión.

**Multiplexión por división de frecuencia**

La figura 2-31 muestra cómo utilizar FDM para multiplexar tres canales telefónicos de calidad de voz. Cuando se multiplexan muchos canales juntos, se asignan 4000 Hz a cada canal para mantenerlos bien separados. Primero se eleva la frecuencia de los canales de voz, cada uno en una cantidad diferente, después de lo cual se pueden combinar, porque en ese momento no hay dos canales que ocupen la misma porción del espectro. Observe que aunque existen separaciones entre los canales , hay cierta superposición entre canales adyacentes porque los filtros no tienen bordes bien definidos.

Un estándar muy difundido es el de 12 canales de voz a 4000 Hz multiplexados dentro de la banda de 60 a 108 kHz. También existen otros estándares que llegan hasta 230,000 canales de voz.

**Multiplexión por división de longitud de onda**

Para los canales de fibra óptica se utiliza una variante de la multiplexión por división de frecuencia llamada WDM (Multiplexión por División de Longitud de Onda).

 Se trata simplemente de multiplexión por división de frecuencia a frecuencias muy altas.. La única diferencia con respecto a la FDM eléctrica es que un sistema óptico que usa una rejilla de difracción es totalmente pasivo y, por ello, muy confiable. Cuando el número de canales es muy grande y las longitudes de onda están espaciadas entre sí de manera estrecha, por ejemplo a 0.1 nm, el sistema se conoce como DWDM (WDM Densa).

**Multiplexión por división de tiempo**

La tecnología WDM es excelente, pero aún hay mucho cable de cobre en el sistema telefónico, por lo tanto, regresemos a ese tema por un momento. Aunque FDM aún se utiliza sobre cables de cobre o canales de microondas, requiere circuitos analógicos y no es fácil hacerla con una computadora. Desgraciadamente, sólo se puede utilizar para datos digitales. Los datos de cómputo que se envían a través de un módem también son analógicos, por lo que la siguiente descripción también se aplica a ellos. Las señales analógicas se digitalizan en la oficina central con un dispositivo llamado codec, con lo que se produce una serie de números de 8 bits. 

A una velocidad de muestreo menor, la información se perdería; a una mayor, no se ganaría información extra. Esta técnica se llama PCM (Modulación por Codificación de Impulsos). La PCM es el corazón del sistema telefónico moderno. En consecuencia, virtualmente todos los intervalos de tiempo dentro del sistema telefónico son múltiplos de 125 μseg.

Un método llamado modulación diferencial por codificación de impulsos consiste en transmitir no la amplitud digitalizada sino la diferencia entre su valor actual y el previo. Puesto que los saltos de ±16 en una escala de 128 no son probables, podrían bastar 5 bits en lugar de 7. Si la señal llegara a saltar de manera alocada en forma ocasional, la lógica de codificación podría requerir varios periodos de muestreo para “recuperarse”

Una mejora a la PCM diferencial consiste en extrapolar algunos valores previos para predecir el siguiente valor y codificar a continuación la diferencia entre la señal real y la que se predice. Desde luego, el transmisor y el receptor deben utilizar el mismo algoritmo de predicción. A tales esquemas se les conoce como codificación por predicción y son útiles porque reducen el tamaño de los números que se codificarán y, por tanto, la cantidad de bits que se enviarán.

**SONET (Red Óptica Síncrona)/ SDH (Jerarquía Digital Síncrona)**

Bellcore,  empezó a trabajar en un estándar llamado SONET . Más tarde, el CCITT las recomendaciones se les llama SDH pero difieren de SONET sólo en detalles menores. Virtualmente todo el tráfico telefónico de larga distancia en Estados Unidos y una buena parte del mismo en los demás países tiene ahora troncales que funcionan con SONET en la capa física.

SONET: tenía que hacer posible la interconexión de diferentes operadores telefónicos.
- estándar de señalización con respecto a la longitud de onda, la temporización, la estructura del entramado, etcétera
- unificar los sistemas digitales estadounidense, europeo y japonés, todos los cuales se basaban en canales PCM de 64 kbps, pero combinados en formas diferentes (e incompatibles).
- tenía que proporcionar un mecanismo para multiplexar varios canales digitales
-  proporcionar apoyo para las operaciones, la administración y el mantenimiento (OAM)

Éste es el canal básico de SONET y se llama STS-1 (Señal Síncrona de Transporte 1). Todas las troncales de SONET son múltiplos de STS-1. Las primeras tres columnas de cada trama se reservan para información de administración del sistema, Las primeras tres filas contienen el encabezado de sección (section overhead ); las siguientes seis contienen el encabezado de línea (line overhead ). El encabezado de sección se genera y verifica al comienzo y al final de cada sección, mientras que el encabezado de línea se genera y verifica al comienzo y al final de cada línea.

Un transmisor SONET envía tramas consecutivas de 810 bytes, sin huecos entre ellas, incluso cuando no hay datos (en cuyo caso envía datos ficticios).

Los datos de usuario, llamados **SPE** (Contenedor o Sobre de Carga Útil Síncrona), no siempre empiezan en la fila 1, columna 4. La SPE puede empezar en cualquier parte dentro
de la trama. La primera fila del encabezado de línea contiene un apuntador al primer byte. La primera columna de la SPE es del encabezado de trayectoria (es decir, el encabezado para el protocolo de la subcapa de la trayectoria de extremo a extremo). Una **flexibilidad adicional al sistema**

La portadora óptica que corresponde a cada STS-n se llama OC-n, pero es la misma bit por bit, excepto por un cierto reordenamiento de bits necesario para la sincronización. Los nombres de SDH son diferentes y empiezan en OC-3 porque los sistemas basados en el CCITT no tienen una tasa de transmisión cercana a los 51.84 Mbps

 OC-3 no se multiplexa, se entrelazan por columnas, primero la columna 1 del flujo 1, a continuación la columna 1 del flujo 2, después la columna 1 del flujo 3 seguida de la columna 2 del flujo 1, y así sucesivamente, lo que produce una trama de 270 columnas de ancho y 9 filas de profundidad.
______________________
<center> <h2>2.7 Televisión por cable  </h2> </center> 

______________________

Hemos estudiado tanto los sistemas inalámbricos como los fijos con suficiente detalle. Sin embargo, hay una alternativa para la conectividad de redes fija que está tomando mucha importancia: las redes de televisión por cable.

En el capitulo 7 en resumen se ve el sistema alternativo para acceso a red es el sistema de televisión por cable, que ha evolucionado de manera gradual de una antena comunal a una red híbrida de fibra óptica y cable coaxial. Potencialmente, ofrece un ancho de banda muy alto, pero en la práctica, el ancho de banda real disponible depende del número de usuarios activos y de lo que estén haciendo.

<u> <h3> 2.7.1 Televisión por antena comunal </h3></u>

Amplificador head end: El sistema consistió inicialmente en una antena grande en la cima de una colina para captar la señal de televisión, un amplificador.

Televisión por antena comunal: la televisión por cable

Las compañías de cable comenzaron a instalar cable entre ciudades para conectarlas
en un solo sistema. Este patrón fue similar a lo que pasó en la industria telefónica 80 años antes
con la conexión de las oficinas centrales locales previamente aisladas para hacer posible las llamadas de larga distancia

<u> <h3> 2.7.2 Internet a través de cable  </h3></u>

**HFC (Red Híbrida de Fibra Óptica y Cable Coaxial):** Un sistema con fibra para distancias considerables y cable coaxial para las casas. 

Debido a que el ancho de banda de la fibra es mucho mayor al del cable coaxial, un nodo de fibra puede alimentar múltiples cables coaxiales. El ancho de banda del cable coaxial es mucho mayor que el del cable de par trenzado.

**Nodos de fibra:** Los convertidores electroópticos que interactúan entre las partes óptica y eléctrica del sistema

<u> <h3> 2.7.3 Asignación de espectro  </h3></u>

 El deshacerse de canales de TV para usarlos como infraestructura para acceso a Internet podria generar clientes iracundos, ademas de que la mayoría de las ciudades regulan estrictamente lo que hay en el cable. Por lo que tuvieron que buscar una forma de que el internet y la television coexistiran en un mismo cable.

 **Los cables coaxiales largos no son mejores para transmitir señales digitales que los circuitos locales largos, por lo que aquí también se necesita la modulación analógica.**

 “amplificador head end” -> CMTS (Sistema de Terminación de Módem de Cable).

<u> <h3> 2.7.4 Módems de cable  </h3></u>

El acceso a Internet requiere un módem de cable, un dispositivo que tiene dos interfaces: una en la computadora y la otra en la red de cable. En los primeros años de Internet por cable, cada operador tenía un módem de cable patentado, que era instalado por un técnico de la compañía de cable. 

Sin embargo, pronto quedó claro que un estándar abierto podría crear un mercado de módems de cable competitivo y bajar los precios, con lo que se alentaría el uso del servicio. DOCSIS (Especificación de Interfaz para Servicio de Datos por Cable), está comenzando a reemplazar a los módems patentados. Era para producir un módem de cable estándar y probar la compatibilidad de productos.

Una gran parte del estándar tiene que ver con la ingeniería de radio, es que los módems de cable, al igual que los ADSL, siempre están activos. Establecen
una conexión cuando se encienden y la mantienen todo el tiempo que tengan energía, debido a que los operadores de cable no cobran por el tiempo de conexión.

Módem de cable se conecta y activa. El módem explora los canales descendentes en busca de un paquete especial que el amplificador head end transmite periódicamente para proporcionar parámetros del sistema a los módems que se acaban de conectar. Al encontrar este paquete, el nuevo módem anuncia su presencia en uno de los canales ascendentes. El amplificador head end responde asignando al módem a sus canales ascendente y descendente. Estas asignaciones pueden cambiarse más tarde si el amplificador head end estima que es necesario balancear la carga

Alineación (ranging): el módem determina su distancia con respecto al amplificador head end enviándole un paquete especial y tomando el tiempo que tarda en llegar la respuesta. Minirranuras: division de canales

<u> <h3>2.7.5 ADSL en comparación con el cable   </h3></u>

Los dos utilizan la fibra óptica en la red dorsal, pero difieren en el extremo. El cable utiliza cable coaxial; ADSL, cable de par trenzado. La capacidad de carga teórica del cable coaxial es de cientos de veces más que el cable de par trenzado.

Un sistema ADSL adquiere usuarios, este incremento tiene muy poco efecto en los usuarios existentes, debido a que cada usuario tiene una conexión dedicada. Con el cable, conforme más personas se suscriban al servicio de Internet, el rendimiento de los usuarios existentes disminuirá. La disponibilidad es un tema en el que ADSL y el cable difieren. Todas las personas tienen teléfono, pero no todos los usuarios están lo suficientemente cerca de su oficina central local para obtener ADSL. ADSL es inherentemente más seguro que el cable.

La conclusión es que ADSL y el cable son tan parecidos como diferentes. Ofrecen servicios comparables y, conforme la competencia entre ellos se avive más, probablemente precios comparables.