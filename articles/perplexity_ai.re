= 対話型AI：Perplexity AI

== Perplexity AIとは

"@<b>{Perplexity AI}"は、AIベースの検索エンジンプラットフォームです。
Perplexityの読み方は、「パープレキシティ」です。
プラットフォーム名と同名である「Perplexity AI」社によって提供されています。

Perplexity AIの特徴を挙げます。

 * 質問に対してウェブ検索を行い、検索結果から回答を生成する
 * 最新の情報や複数の情報源に基づく回答が得る。また、回答の根拠となるウェブサイトの情報も同時に表示される。そのため、信頼性が高い。
 * 定義や解説や統計など、主に事実や知識に基づく簡潔な文章を生成する
 * 最新の話題にも回答することができるため、時事性の高い質問にも対応できる

検索エンジンといえば比較対象はまずGoogle検索になりますが、Googleとは異なりSEOや広告による検索結果に変動要素がありません。

ですので、「ググる」よりも求めている情報に辿りつきやすくなっています。

== Perplexity AIを触ってみる

それでは、実際に触ってみましょう。
以下のURLにアクセスします。

@<href>{https://www.perplexity.ai/}

//indepimage[Perplexity_AskAnything][Perplexity AIのページ][scale=0.8]{
//}

検索するには、「Ask Anyting」と書かれた入力欄に検索キーワードを入力します。

//indepimage[Perplexity_AskAnything_2][Ask Anytingにキーワードを入力する][scale=0.8]{
//}

検索キーワードの入力後にEnterキーを押下すると、Perplexity AIが検索結果を出力されます。
検索結果には、参照元のリンクもあります。

//indepimage[Perplexity_AskAnything_3][Perplexity AIによる検索結果][scale=0.8]{
//}

なお、画面上部にはツイートリンクがあり、Perplexity AIの検索結果をTwitterで共有することもできます。

//indepimage[Perplexity_AskAnything_4][検索結果の共有][scale=0.8]{
//}

また、検索精度としては、日本語よりも英語の方がきちんと回答してくれるケースが多いです。
以下、Perplexity AIの開発会社について、日本語と英語で質問した際の回答結果です。

//indepimage[Perplexity_AskAnything_5][英語で聞く方が回答が得られやすい][scale=0.8]{
//}

=== 検索エンジンに登録する

Perplexity AIを検索エンジンとして、登録してみましょう。

こちらはGoogle Chromeを利用した登録例となります。

 * 1. 「@<b>{設定}」まで、Chromeの設定ページを開く
 * 2. 左横のメニューから「@<b>{検索エンジン}」をクリックする
 * 3. 「検索エンジンとサイト内検索を管理する」して、検索エンジンを表示させる
 * 4. サイト内検索の「追加」をクリックして、以下の値を入力して、検索エンジンを登録する
 ** 検索エンジン: 任意（例では「@<b>{Perplexity AI}）
 ** ショートカット: 任意の値（例では「@<b>{spa}」）
 ** URL: @<b>{https://www.perplexity.ai/?q=%s}
 * 5. ChromeのURL欄に、先ほど登録したショートカットを入力し、スペースを押す
 * 6. 「Perplexity AI」で検索する状態に切り替わったので、検索するキーワードを入力する。

//indepimage[Perplexity_AI_search_01][設定→検索エンジン→検索エンジンとサイト内検索を管理するをクリック][scale=0.8]{
//}

//indepimage[Perplexity_AI_search_02][サイト内検索の「追加」をクリック][scale=0.8]{
//}

//indepimage[Perplexity_AI_search_03][検索エンジン追加ダイアログ][scale=0.8]{
//}

//indepimage[Perplexity_AI_search_04][検索エンジン、ショートカット、URLの追加][scale=0.8]{
//}

//indepimage[Perplexity_AI_search_05][追加確認][scale=0.8]{
//}

//indepimage[Perplexity_AI_search_06][URL欄にショートカットを入力][scale=0.8]{
//}

//indepimage[Perplexity_AI_search_07][スペースを押し、Perplexity AIで検索を切り替え][scale=0.8]{
//}

//indepimage[Perplexity_AI_search_08][Perplexity AIで検索するキーワードを入力][scale=0.8]{
//}

//indepimage[Perplexity_AI_search_09][Perplexity AI上で検索結果が表示される][scale=0.8]{
//}

これで、サイトに移動しなくても、Perplexity AIで検索ができます。

　

なお、Chromeの場合は拡張機能のプラグインで「@<b>{Perplexity - Ask AI}」@<fn>{hlgbcneanomplepojfcnclggenpcoldo}があります。

//footnote[hlgbcneanomplepojfcnclggenpcoldo][@<href>{https://chrome.google.com/webstore/detail/perplexity-ask-ai/hlgbcneanomplepojfcnclggenpcoldo}]

Perplexity AIでサイト検索した場合と同様の効果が得られます。

== ChatGPTと比較してみる

AIと言えば、巷では「ChatGPT」が注目されています。

Perplexity AIとChatGPTは、どちらも自然言語処理の技術を用いており、質問に回答する人工知能ツールという点でも非常に似ています。
「Perplexity AI」と「ChatGPT」の違いにはどんなものがあるでしょうか。

以下、「Perplexity AI」と比較した「ChatGPT」の特徴です。

 * 内部的に学習したデータから回答を生成する
 * データの出どころが不透明で、情報の正確性や信頼性に欠ける場合が多い
 * 詩や物語など、自然な表現や多様なジャンルの文章を生成することができる
 * 2021年までのデータに基づく回答しかできない。

なお、この内容は、「Perplexity AI」に聞いて答えてもらった内容です。

では、実際にどのくらい違うのかもみてみましょう。

質問については、2022年に放送されたアニメ『@<b>{機動戦士ガンダム　水星の魔女}』を題材にして、あらすじと主人公いついてそれぞれ聞いてみます。

まずはあらすじについて。

//indepimage[Perplexity_diff_01_01][Perplexity AIに聞くあらすじ][scale=0.8]{
//}

//indepimage[Perplexity_diff_01_02][ChatGPTに聞くあらすじ][scale=0.8]{
//}

次に主人公について。

//indepimage[Perplexity_diff_02_01][Perplexity AIに聞く主人公][scale=0.8]{
//}

//indepimage[Perplexity_diff_02_02][ChatGPTに聞く主人公][scale=0.8]{
//}

なお、Perplexity AIの回答はどちらも正解です。参照元のリンクも表示しているので、その根拠の信憑性も判断ができます。

一方で、ChatGPTの回答は不正解です。ですが、自身が持ち合わせているデータをもとにして推論して回答している、という風にみると非常に興味深いなと感じます。

== まとめ

簡単ではありますが、Perplexity AIの概要と使ってみた所感を書きました。

ただ、これだけみても今後に期待できそうな印象を持っています。

そのうち、検索することを「ググる」から「パプる」へ変わっていくのですかね。
