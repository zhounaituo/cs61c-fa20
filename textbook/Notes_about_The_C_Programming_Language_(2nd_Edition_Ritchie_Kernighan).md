---
annotation-target: ./The_C_Programming_Language_-2nd_Edition_Ritchie_Kernighan.pdf
---




>%%
>```annotation-json
>{"created":"2024-10-23T01:58:29.609Z","text":"定义：指代创建和分配储存地址。","updated":"2024-10-23T01:58:29.609Z","document":{"title":"The C Programming Language (Second Edition)","link":[{"href":"urn:x-pdf:cdf0550b3f85917f52c5396bb7386374"},{"href":"vault:/textbook/The_C_Programming_Language_-2nd_Edition_Ritchie_Kernighan.pdf"}],"documentFingerprint":"cdf0550b3f85917f52c5396bb7386374"},"uri":"vault:/textbook/The_C_Programming_Language_-2nd_Edition_Ritchie_Kernighan.pdf","target":[{"source":"vault:/textbook/The_C_Programming_Language_-2nd_Edition_Ritchie_Kernighan.pdf","selector":[{"type":"TextPositionSelector","start":91137,"end":91232},{"type":"TextQuoteSelector","exact":"“Definition”  refers  to the  place  where  the  variable  is  created  or  assigned  storage; ","prefix":" variables  in  this  section.  ","suffix":" “declaration”  refers to  place"}]}]}
>```
>%%
>*%%PREFIX%%variables  in  this  section.%%HIGHLIGHT%% ==“Definition”  refers  to the  place  where  the  variable  is  created  or  assigned  storage;== %%POSTFIX%%“declaration”  refers to  place*
>%%LINK%%[[#^5asbb7tv5e2|show annotation]]
>%%COMMENT%%
>定义：指代创建和分配储存地址。
>%%TAGS%%
>
^5asbb7tv5e2


>%%
>```annotation-json
>{"created":"2024-10-23T01:59:10.092Z","text":"声明：指代声明变量状态，但是没有分配地址。","updated":"2024-10-23T01:59:10.092Z","document":{"title":"The C Programming Language (Second Edition)","link":[{"href":"urn:x-pdf:cdf0550b3f85917f52c5396bb7386374"},{"href":"vault:/textbook/The_C_Programming_Language_-2nd_Edition_Ritchie_Kernighan.pdf"}],"documentFingerprint":"cdf0550b3f85917f52c5396bb7386374"},"uri":"vault:/textbook/The_C_Programming_Language_-2nd_Edition_Ritchie_Kernighan.pdf","target":[{"source":"vault:/textbook/The_C_Programming_Language_-2nd_Edition_Ritchie_Kernighan.pdf","selector":[{"type":"TextPositionSelector","start":91233,"end":91351},{"type":"TextQuoteSelector","exact":"“declaration”  refers to  places  where  the  nature  of  the  variable  is  stated  but  no  storage  is  allocated. ","prefix":"reated  or  assigned  storage;  ","suffix":"By  the  way,  there  is  a  ten"}]}]}
>```
>%%
>*%%PREFIX%%reated  or  assigned  storage;%%HIGHLIGHT%% ==“declaration”  refers to  places  where  the  nature  of  the  variable  is  stated  but  no  storage  is  allocated.== %%POSTFIX%%By  the  way,  there  is  a  ten*
>%%LINK%%[[#^rhfldh7n4na|show annotation]]
>%%COMMENT%%
>声明：指代声明变量状态，但是没有分配地址。
>%%TAGS%%
>
^rhfldh7n4na


>%%
>```annotation-json
>{"created":"2024-10-23T05:15:08.739Z","updated":"2024-10-23T05:15:08.739Z","document":{"title":"The C Programming Language (Second Edition)","link":[{"href":"urn:x-pdf:cdf0550b3f85917f52c5396bb7386374"},{"href":"vault:/textbook/The_C_Programming_Language_-2nd_Edition_Ritchie_Kernighan.pdf"}],"documentFingerprint":"cdf0550b3f85917f52c5396bb7386374"},"uri":"vault:/textbook/The_C_Programming_Language_-2nd_Edition_Ritchie_Kernighan.pdf","target":[{"source":"vault:/textbook/The_C_Programming_Language_-2nd_Edition_Ritchie_Kernighan.pdf","selector":[{"type":"TextPositionSelector","start":94200,"end":94287},{"type":"TextQuoteSelector","exact":"ariables  and  constants  are  the  basic  data  objects  manipulated  in  a  program. ","prefix":"  Operators,  and  Expressions V","suffix":"Declarations  list  the  variabl"}]}]}
>```
>%%
>*%%PREFIX%%Operators,  and  Expressions V%%HIGHLIGHT%% ==ariables  and  constants  are  the  basic  data  objects  manipulated  in  a  program.== %%POSTFIX%%Declarations  list  the  variabl*
>%%LINK%%[[#^z8d9nyzzlhl|show annotation]]
>%%COMMENT%%
>
>%%TAGS%%
>
^z8d9nyzzlhl


>%%
>```annotation-json
>{"created":"2024-10-23T05:23:33.454Z","text":"变量命名最好与目的有关，通常名称较短。","updated":"2024-10-23T05:23:33.454Z","document":{"title":"The C Programming Language (Second Edition)","link":[{"href":"urn:x-pdf:cdf0550b3f85917f52c5396bb7386374"},{"href":"vault:/textbook/The_C_Programming_Language_-2nd_Edition_Ritchie_Kernighan.pdf"}],"documentFingerprint":"cdf0550b3f85917f52c5396bb7386374"},"uri":"vault:/textbook/The_C_Programming_Language_-2nd_Edition_Ritchie_Kernighan.pdf","target":[{"source":"vault:/textbook/The_C_Programming_Language_-2nd_Edition_Ritchie_Kernighan.pdf","selector":[{"type":"TextPositionSelector","start":96986,"end":97115},{"type":"TextQuoteSelector","exact":"We  tend  to  use short  names  for  local  variables,  especially  loop  indices,  and  longer  names  for external  variables. ","prefix":"t  mixed  up  typographically.  ","suffix":"2.2  Data  Types  and  Sizes The"}]}]}
>```
>%%
>*%%PREFIX%%t  mixed  up  typographically.%%HIGHLIGHT%% ==We  tend  to  use short  names  for  local  variables,  especially  loop  indices,  and  longer  names  for external  variables.== %%POSTFIX%%2.2  Data  Types  and  Sizes The*
>%%LINK%%[[#^eyfrhl9vs7h|show annotation]]
>%%COMMENT%%
>变量命名最好与目的有关，通常名称较短。
>%%TAGS%%
>
^eyfrhl9vs7h




>%%
>```annotation-json
>{"created":"2024-10-25T02:37:02.228Z","text":"for (i = 0; i <lim-1; ++i)\n    if ((c = getchar()) != '\\n')\n        if (c != EOF)\n        ....\n    else\n        break;","updated":"2024-10-25T02:37:02.228Z","document":{"title":"The C Programming Language (Second Edition)","link":[{"href":"urn:x-pdf:cdf0550b3f85917f52c5396bb7386374"},{"href":"vault:/textbook/The_C_Programming_Language_-2nd_Edition_Ritchie_Kernighan.pdf"}],"documentFingerprint":"cdf0550b3f85917f52c5396bb7386374"},"uri":"vault:/textbook/The_C_Programming_Language_-2nd_Edition_Ritchie_Kernighan.pdf","target":[{"source":"vault:/textbook/The_C_Programming_Language_-2nd_Edition_Ritchie_Kernighan.pdf","selector":[{"type":"TextPositionSelector","start":112204,"end":112288},{"type":"TextQuoteSelector","exact":"Write  a  loop  equivalent  to  the  for  loop  above  without  using  && or  ii.  O","prefix":"  under- stand. Exercise  2-2.  ","suffix":" 2.7  Type  Conversions When  an"}]}]}
>```
>%%
>*%%PREFIX%%under- stand. Exercise  2-2.%%HIGHLIGHT%% ==Write  a  loop  equivalent  to  the  for  loop  above  without  using  && or  ii.  O== %%POSTFIX%%2.7  Type  Conversions When  an*
>%%LINK%%[[#^wlyvwkttopr|show annotation]]
>%%COMMENT%%
>for (i = 0; i <lim-1; ++i)
>    if ((c = getchar()) != '\n')
>        if (c != EOF)
>        ....
>    else
>        break;
>%%TAGS%%
>
^wlyvwkttopr





>%%
>```annotation-json
>{"created":"2024-10-26T06:07:23.219Z","updated":"2024-10-26T06:07:23.219Z","document":{"title":"The C Programming Language (Second Edition)","link":[{"href":"urn:x-pdf:cdf0550b3f85917f52c5396bb7386374"},{"href":"vault:/textbook/The_C_Programming_Language_-2nd_Edition_Ritchie_Kernighan.pdf"}],"documentFingerprint":"cdf0550b3f85917f52c5396bb7386374"},"uri":"vault:/textbook/The_C_Programming_Language_-2nd_Edition_Ritchie_Kernighan.pdf","target":[{"source":"vault:/textbook/The_C_Programming_Language_-2nd_Edition_Ritchie_Kernighan.pdf","selector":[{"type":"TextPositionSelector","start":138169,"end":138301},{"type":"TextQuoteSelector","exact":"The  moral  is  that  writing  code  that  depends  on  order  of  evaluation  is  a  bad programming  practice  in  any  language. ","prefix":" the  call  to  printf  above.) ","suffix":" Naturally,  it  is  necessary  "}]}]}
>```
>%%
>*%%PREFIX%%the  call  to  printf  above.)%%HIGHLIGHT%% ==The  moral  is  that  writing  code  that  depends  on  order  of  evaluation  is  a  bad programming  practice  in  any  language.== %%POSTFIX%%Naturally,  it  is  necessary*
>%%LINK%%[[#^fgacjwdfemc|show annotation]]
>%%COMMENT%%
>
>%%TAGS%%
>
^fgacjwdfemc


>%%
>```annotation-json
>{"created":"2024-10-28T07:42:15.416Z","updated":"2024-10-28T07:42:15.416Z","document":{"title":"The C Programming Language (Second Edition)","link":[{"href":"urn:x-pdf:cdf0550b3f85917f52c5396bb7386374"},{"href":"vault:/textbook/The_C_Programming_Language_-2nd_Edition_Ritchie_Kernighan.pdf"}],"documentFingerprint":"cdf0550b3f85917f52c5396bb7386374"},"uri":"vault:/textbook/The_C_Programming_Language_-2nd_Edition_Ritchie_Kernighan.pdf","target":[{"source":"vault:/textbook/The_C_Programming_Language_-2nd_Edition_Ritchie_Kernighan.pdf","selector":[{"type":"TextPositionSelector","start":153282,"end":153461},{"type":"TextQuoteSelector","exact":"  pair  of  expressions  separated  by  a  comma  is  evaluated  left  to right,  and  the  type  and  value  of  the  result  are  the  type  and  value  of  the  right operand. ","prefix":" use  in  the for  statement.  A","suffix":" Thus  in  a  for  statement,  i"}]}]}
>```
>%%
>*%%PREFIX%%use  in  the for  statement.  A%%HIGHLIGHT%% ==pair  of  expressions  separated  by  a  comma  is  evaluated  left  to right,  and  the  type  and  value  of  the  result  are  the  type  and  value  of  the  right operand.== %%POSTFIX%%Thus  in  a  for  statement,  i*
>%%LINK%%[[#^a9u6wxvxfr|show annotation]]
>%%COMMENT%%
>
>%%TAGS%%
>
^a9u6wxvxfr












>%%
>```annotation-json
>{"created":"2024-11-15T03:15:08.670Z","text":"NEXT","updated":"2024-11-15T03:15:08.670Z","document":{"title":"The C Programming Language (Second Edition)","link":[{"href":"urn:x-pdf:cdf0550b3f85917f52c5396bb7386374"},{"href":"vault:/textbook/The_C_Programming_Language_-2nd_Edition_Ritchie_Kernighan.pdf"}],"documentFingerprint":"cdf0550b3f85917f52c5396bb7386374"},"uri":"vault:/textbook/The_C_Programming_Language_-2nd_Edition_Ritchie_Kernighan.pdf","target":[{"source":"vault:/textbook/The_C_Programming_Language_-2nd_Edition_Ritchie_Kernighan.pdf","selector":[{"type":"TextPositionSelector","start":270562,"end":270586},{"type":"TextQuoteSelector","exact":"Pointers  to  Functions ","prefix":"rray  of  fixed  size.  O 5.11  ","suffix":"In  C,  a  function  itself  is "}]}]}
>```
>%%
>*%%PREFIX%%rray  of  fixed  size.  O 5.11%%HIGHLIGHT%% ==Pointers  to  Functions== %%POSTFIX%%In  C,  a  function  itself  is*
>%%LINK%%[[#^0u952gne6z3|show annotation]]
>%%COMMENT%%
>NEXT
>%%TAGS%%
>
^0u952gne6z3
