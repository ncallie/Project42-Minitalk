# Project42-Minitalk

### Цель проекта:
Реализовать связь между двумя процессами Client и Server посредством сигналов в С, по стандарту 98 года.
<p>В виде связи выступает передача строки от одного процесса к другому.</p>

### Реализация:
<p>Текущий процесс приостанавливается (pause) и в нем работает обработчик сигнала, который срабатывает при получении сигнала (func my_handler).</p>
<p>Будем отправлять строку посредством сигналов sigusr1 и sigusr2. Один символ - отправка 8 сигналов.</p>
<p>Каждый сигнал будет отправлен в виде 0 или 1, символ будет переведен в ASCII код и далее в двоичную систему счисления.</p>
<p>Использовать будем сигналы sigusr1, означающий 1,  и sigusr2, означающий 0.</p>
<p>Двоичная система счисления имеет 8 байт, следовательно server будет знать, что каждые 8 сигналов - это один символ. В таком случае нужно обратить внимание, что некоторые алгоритмы конвертации dec2bin отсеивают ведущие нули. Если запрос придет меньше 8 сигналов - сервер не обработает его.</p>
<p>Как только сервер принимает запрос (т.е один символ), он его переводит bin2dec и выводит на экран. Таким образом отсылается и выводится вся строка.</p>

### Стек технологий:
* С
* Signals
