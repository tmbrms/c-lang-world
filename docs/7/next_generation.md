# 次世代のC言語
## C言語でプログラミングをすべきか(again)

>「はー、お話を聞いて、プログラムが動くとき何が起きているのかのイメージが変わりました」

それは良かった。

>「ただ、C言語でプログラムが書ける気はしません」

それはいいんじゃないかな。
C言語でプログラムをするためには、機械としてのコンピューターを理解することが必要だったけど、
それはつまり、機械としてのコンピューターを相手にしないのであればC言語は必要ないということだから。

90年代の半ば、C++やJavaが一般的になってくるまでは、パソコン用のアプリケーションはほとんどCで書かれていた。
それはC言語が2つの点で他の言語より優れていたからだ。

1つ目は、機械としてのコンピューターを扱えること。具体的には、メモリを自由に扱えること。
特に、OSの機能が貧弱だった時代にはOSのメモリ管理機能をカバーしてやる必要があったので、
普通のアプリケーションでもC言語でないと実現できないことがたくさんあった。

2つ目は、速いこと。一般的に低いレイヤーを抽象化して扱えるようにすると、
プログラマは楽になるけど、実行速度は落ちる。
C言語の配列がポインタ操作そのものとして実装されていて、容量の管理や添え字の範囲チェックなどを
何にもやってくれないのも当時のコンピューターにはそれをやるだけのパフォーマンスがなかったからだ。

しかし、C言語が登場してもうすぐ半世紀。その間のコンピューターの能力向上は
もう何万倍だか何億倍だか見当もつかない。
コンピューターが担う仕事も年々複雑になっている。
そんな時代なので、コンピューターの能力向上分を「簡単に、安全にプログラムが書けること」に割かないと、
とてもじゃないけど現代的なアプリケーションを作ることはできなくなりつつある。

今では、C言語の利用は非常に高効率な処理を求められる数値計算分野や、
低レイヤーの制御が必要なシステムプログラミングの分野に限られている。
私たちが日常によく使うネットのサービスやスマートフォンのアプリは
ほぼ間違いなくC言語ではない、もっと高レベルの言語で記述されている。

そして、数値計算やシステムプログラミングの分野でも、
流石に時代遅れのC言語の利用を止めようという動きは出てきている。
とはいえ、なかなか本命といえる言語が出てこなかったのも事実なんだけど、
最近、「これでC言語はお役御免にできるんじゃないか？」と言えそうな言語が登場して
注目を集めている。知りたいかい？

>「じゃあ、それを勉強すれば私もイケてるプログラマーに！？」

うーん、それはどうかな・・・まあ、時代を追って説明してみよう。
C言語で書かれていたアプリケーションは、どうなっていったんだろうか。

## C++

C言語の次世代言語として、最初に注目を集めたのはC++だ。

>「しーたすたす？」

「しーぷらすぷらす」と読んで欲しい。「しーぷら」と略している人が多そうだ。

C++は、C言語をオブジェクト指向言語に拡張したものだ。
ただし、C++はC言語に対して後方互換を持っている。
つまり、すべてのC言語のプログラムは正しいC++言語のプログラムだ。

>「C言語でプログラムを書くと、C++として動くということですか？」

CのプログラムはCのプログラムとして書かれたとおりに動く。
単に、C++のコンパイラでCのプログラムもコンパイル出来るということだね。

しかし、これはC++の登場当時は大きな意味があった。
というのも、C++の登場当時、オブジェクト指向は多くのプログラマにとって新しい考え方だった。
ぶっちゃけ、「よくわからん」と思っていたCプログラマが多かったんじゃないかな。

そんな、Cプログラマにとって「いざとなったらCで書けばいい」というC++は
新しい言語に対するハードルを下げてくれる有り難い存在だったんだね。

そんなわけで、処理系はあっさりCからC++に移行した。
Cのプログラマは、C++の処理系を使って、Cのプログラムをコンパイルするようになったんだ。
90％はCのプログラムなんだけど、C++の便利な機能をちょっとだけ使っている・・・というような
C++のブログラムを書いている人も多かった。具体的にはC言語では怖い文字列処理だけC++を使うとかね。

時代は流れ、次第にプログラマもC++とオブジェクト指向に馴染んできたし、
新しくて便利なクラスライブラリが提供されるようになり、次第にC++はその真価を発揮し出すんだけど、
「Better C」としての性格を持つが故に、C言語の欠点は持ったままだった。
つまり、使っている人全員がきちんとしたC++のプログラムを書いていればまだいいんだけど、
誰かがC言語らしいプログラムを書いてしまったが最後、ポインタのバグとセキュリティの問題に晒される。

>「そっかー、C言語で出来ることがそのまま出来ちゃうんですもんね」

そして、C言語丸呑みであり、その状態から徐々に進化していった結果、
言語仕様が複雑になって習得が難しい言語になってしまった。
C++のプロ達はみんな「そんなことないよ。C++はよく出来た言語だし、わかりやすいよ」と言うんだけど、
正直言って私も今からC++をちゃんと習得する自信は、あんまりない。

## Java

そこに、「ポインタが存在しないC++」として登場したのがJavaだった。
もちろん、Javaを作った人達がそれを目指したわけじゃないと思うんだけど、
オブジェクト指向の良さは認めながらも、C++の複雑さとC由来の危なさに困っていたプログラマには
そう受け取られたんだ。

Javaは最初からオブジェクト指向言語として設計されていた。
Java登場時点で多くの言語が「既存の言語にオブジェクト指向機能を取り入れた」ものだったのに対して、
Javaはオブジェクト指向言語としてとてもシンプルに出来ていた。
しかも、その当時としては珍しく大企業が作ったのものなのに処理系がタダで入手できたので
プログラマの間では注目を集めていた。

>「でも、JavaってC言語で出来そうな低レイヤーのことは何にもできなさそうですけど・・・」

その通り。Javaは処理系の上で仮想マシンを動かし、その仮想マシンで動くプログラムを生成する。
これでは低レイヤーの処理や最適化ができないから、C言語のプログラムに比べてパフォーマンスではすごく不利なんだ。

ところが、Javaのこの性質が思わぬところで評価されることになる。
業務処理をするアプリケーション開発にぴったりだったんだ。

>「へ？」

企業の業務処理をするアプリケーションは、ともすれば何億円もする巨大なコンピューターで処理されていた。
その上で動くプログラムは、当然、そのコンピューターの上で開発する必要があった。
しかし、Javaで書いたプログラムは何億円もするコンピューターの上でも、パソコンの上でもそのまま同じように動いた。

>「あ、開発メンバーに高性能なサーバのアカウントを与えなくてもいいんだ」

そう。自分のパソコン上でサーバ用のプログラムが開発出来るようになったんだ。
また、サーバを入れ替えるときにも便利だった。ほぼどんなコンピューターでもJavaは動いたからね。
これは大きなメリットだったんで、企業向けのアプリケーション開発が一気にJavaに移行した。
Javaのシステムは遅いのが問題だったんだけど、企業向けのニーズがあることで資本が投入され、
Javaの仮想マシンの開発は一気に進んだ。結果、めちゃめちゃ速くなった。
今では「Javaは遅い」なんていう人はほとんどいない。まあ、コンピューターの性能も上がったしね。

というわけで、Javaだと低レベルの処理が出来ないという問題は解決していないけど、
実行速度が必要なプログラムはJavaが良いということになった。
むしろ、実行速度より開発効率が重視される場合には、Javaよりもっとモダンな言語が使われている。
今回は割愛するけどね。

## Rust

というわけで、C言語で書かれていたアプリケーションの大半は、C++そしてJavaへと移行していったし、
さらにその先の新しい言語もたくさん使われるようになった。
しかし、低レイヤーの処理は以前としてC言語が使われ続けていた。
今でも、デバイスドライバーやOS、言語処理系の開発の多くがC言語で続けられている。

そこに現れた、本当の意味でのC言語の次世代を担う言語として注目されているのがRustだ。

>「ラスト、ですか。初めて聞きました」

Rustが開発された動機は、Webブラウザの開発言語として使うためだった。

>「ん？OSじゃなくてですか？」

うん。なぜなら、Webブラウザの開発はOSの開発と同じぐらい大変だからなんだ。
というか、現代的なWebブラウザは、事実上OSみたいなものだ。

考えてみよう。WebブラウザはCookieのようなローカルデータを管理する。
ネットワークで外部と通信をする。
要求に応じて画面を描写する。
そして何より、JavaScriptで書かれたプログラムを内部的にいくつも実行し、
それらに与えるリソースを管理する。

これらすべて、普通はOSの仕事だ。

>「ホントだ！」

しかも、開発のスピードは非常に速く、実行速度はユーザー体験に直結し、セキュリティに対する要求が厳しい。
これをC言語で実装するのが難しくなってしまった。
C言語と同じぐらいの低レベル処理ができて、かつ、メモリ安全な言語が欲しい。
それに応える目的で作られたのが、Rustなんだ。

Rustの開発の第1目標はプログラムがC言語と同等の処理速度とプログラムサイズになることなんだが、同時に
第2の目標としてC言語のようなメモリアクセスによる問題を起こさないことが上げられている。
以前見たような、すでに解放されてしまった領域へのポインタにアクセスすることは
言語仕様上出来なくなっている。

>「それ最高じゃないですか。それでC言語と同じ速度が出せるんでしょ？やります、Rust！」

ただし、その代償としてプログラムを書くのはすごく難しくなった。コンパイルが通らない。
コンパイルしたプログラムは自信をもってメモリアクセスのバグがないと思えるんだけど、
逆に言えばメモリアクセスのバグの可能性がある限りコンパイルエラーが出続ける。

>「えええ〜」

C言語なら「危ないからこれに触っちゃいけない」と自分で気をつければ良かったのに、
Rustだと「触れる位置に危ないものが出来るじゃないか。はい、ダメ。やり直し」となる。
プログラムを書いてると「実用上、問題ないって。気をつけるから、見逃してくれよぉ」って気分になるね。

>「あははは。厳しい赤ペン先生だなあ」

そういう意味では、C言語を理解していない状態でRustが理解できるのかはちょっと疑問がある。
そもそもRustの厳しい言語仕様がなんのためにあるのかを、C言語を知らない人が理解できるんだろうか。
そういう意味では今回説明したようなC言語のコンセプトは、
Rustを勉強する前準備としては役に立つかも知れないなあ。

あ、念のために言っておくと、RustでもC言語のような危ない処理は書くことができる。
その場合は明示的に「ここはunsafe」と宣言する必要があるけどね。

## C言語の現在

まとめよう。

C言語は様々なコンピューターに移植可能なOSを作るための言語として誕生した。
そのため、OSが必要とする低いレベルでコンピューターを抽象化している。
つまり、CPUは意識させないが、メモリはむき出しだ。
そして、そのレベルでのコンピューターを理解することが、
コンピューターの動作を理解したり、高効率なプログラムを書いたりするために便利だったために
C言語は半世紀を生き延びて、なおも使い続けられている。
だから、仮にC言語でプログラムを書く必要が無かったとしても、
C言語の学習を通じてC言語がモデル化したコンピューターの動作を理解することは役に立つ。
逆に言えば、C言語の文法の知識なんて勉強してもなんの役にも立たないんだ。

しかし、C言語は流石に歳を取った。もう時代にそぐわない。
今回、ちょっとC言語を学んだからといって、安易にC言語でプログラムを書くべきではないよ。
別に、ちょっとしたツールを作るのは構わないし、書いてみて得られる学びは多いと思う。
ワンチップマイコンでちょっとした工作をするとかなら、事実上、C言語一択だ。
しかし、セキュリティが問題となり得るようなところで
初心者がC言語でプログラムを書くのは自殺行為だ。
自殺どころか、自爆だ。誰か別の人を巻き込んで被害を与えることすらあり得る。

メモリ安全ではなく、セキュリティに不安があるというC言語の欠点を解消した言語は
なかなか現れなかったが、最近、Rustという新しいプログラミング言語の登場により、
この問題は解決したのではないかと考えられている。
この先、RustがCを置き換えるかどうかはまだわからないけど、
多くの人がRustにはその資格があると考えているようだ。Rustはなかなかの人気言語になりつつある。
これにより、実行速度の面でも、低レイヤーの処理の面でも、
Cよりベターな言語が登場し、やっとC言語がなくても大丈夫な世の中になった。

世の中に大量のC言語で書かれたプログラムが存在する以上、C言語は無くならないし、
今の仕組みのコンピューターが存在する限り、C言語で書かれたプログラムは
この先100年でも生き残り続ける。おそらく。
だから、ある程度、C言語を知っておくことはプログラマとして大事なことだ。
そして、今回学んだことを活かして、いいプログラマになって欲しい。
たとえ、C言語でプログラムを書かなかったとしても。

>「はーい。じゃあ、次はRustについて教えて下さい！Rustが書ければ、もうプロ中のプロってことでしょ？」

やれやれ・・・。