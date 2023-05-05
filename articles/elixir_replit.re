= Replitで始めるElixir

@<b>{Replit}@<fn>{replit_url}とは、ブラウザベースのコーディングプラットフォームです。

50種類以上のプログラミング言語を扱っており、ブラウザベースのIDE（統合開発環境）を操作するだけで、プログラミングコードを書くことができます。
インストールでトラブルになってしまうそれっきり、となるケースもあるので、インストールしないで済ませられるのは非常に便利ですね。

また、コラボレーション機能も有しており、URLを共有するだけで複数人で同時にリアルタイムで編集を行うこともできます。
さらに、教育向けソリューションとして「@<b>{Teams for Education}@<fn>{teams_for_education_url}@<fn>{teams_for_education_doc_url}」も提供してくれている優れものです。

//footnote[replit_url][@<href>{https://replit.com/}]

//footnote[teams_for_education_url][@<href>{https://replit.com/site/teams-for-education}]
//footnote[teams_for_education_doc_url][@<href>{https://docs.replit.com/category/teams-for-education}]

そんな優れもののReplitを利用して、自分の推し言語である「@<b>{Elixir}」への入門をいざなってみます。
Elixirをすでに知っている人も、Replit上でコーディングしてみたいという方であれば、本章をお読みください。

なお、今回はコラボレーション機能について触れませんので、あらかじめご了承ください。

== Replitにアカウントを作る

Replitを利用するには、Replitへのアカウント登録が必要です。

まずは、ReplitのTOPページへ遷移します。

@<href>{https://replit.com/}

画面右上にある「Sign Up」をクリックします。

//indepimage[replit_sign_up_01][Replitのアカウント作成][scale=0.8]{
//}

アカウント作成は、@<b>{Google認証連携}、@<b>{GitHub認証連携}、および@<b>{メールアドレス／パスワードによる新規作成}から選べます。
なお、自分はGitHub認証連携を選択しました。

//indepimage[replit_sign_up_02][アカウント作成方法は複数ある][scale=0.6]{
//}

選択した方法でアカウントが作成されると、ホーム画面が表示されます。
これで、アカウント作成の処理は完了です。

//indepimage[replit_sign_up_03][アカウント作成が終わりログイン][scale=0.8]{
//}

== Elixirを実行してみる

つづけて、Elixirでプログラミングを実施してみましょう。

Replitでプログラミングを開始する際には、Workspace上に"@<b>{Repl}@<fn>{repl_is}の作成が必要です。

//footnote[repl_is][Replとは、REPL（read-eval-print loop）をもじって作られた単語です。]

Replとは、リアルタイムでコードを記述して実行できるインタラクティブなプログラミング環境です。

　

Replを作成するには、画面左上にある"@<b>{+Create}"ボタンをクリックします。

//indepimage[replit_ex_create_01][+Createボタンをクリック][scale=0.8]{
//}

クリック後に「@<b>{Create a Repl}」のダイアログが表示されるので、@<b>{Template}欄に利用する言語を入力します。

今回はElixirを利用する想定ですので"@<i>{elixir}"と入力します。
入力内容に合致するテンプレートが表示されますので、利用するテンプレートで「"Elixir"」を選択してください。

//indepimage[replit_ex_create_02][テンプレートの選択][scale=0.6]{
//}

テンプレート選択後、今度は@<b>{Title}欄にタイトル（プロジェクト名と同じ）を入力してください。
Repl側で任意の名前がすでに入っていたりしますので、それを利用してもよいです。

//indepimage[replit_ex_create_03][タイトルの入力][scale=0.8]{
//}

Titleの入力後に「@<b>{+Crreate Repl}」ボタンをクリックすると、Replが作成されます。

//indepimage[replit_ex_create_04][Replの作成完了][scale=0.8]{
//}

これで準備は整いました。

つぎは具体的にプログラミングを進めてみましょう。

なお、詳細なReplの作成／操作方法については、公式のドキュメント@<fn>{introduction_to_the_workspace_doc_url}を参照ください。

//footnote[introduction_to_the_workspace_doc_url][@<href>{https://docs.replit.com/programming-ide/introduction-to-the-workspace}]

=== コードをキラキラさせてみる

それでは、具体的にプログラミングを行ってみましょう。

まずは手慣らしで簡単なコードを書いてみましょう。
とはいえ、ハローワールドもありきたりなので、見た目が少しだけ目立つコードを書いてみましょう。

ということで、Qiitaに掲載されている、@<b>{@nako_sleep_9h}さんの記事「Elixirのコードを気軽に触ってみよう！キラキラさせたり草を生やすよ」@<fn>{qiita_nako_url_01}から、ソースコードを拝借します。

//footnote[qiita_nako_url_01][@<href>{https://qiita.com/nako_sleep_9h/items/97b69132babcb953cf7d}]

//list[kirakira_char][文字をキラキラさせるコード]{
1..255
|> Enum.map(& "#{IO.ANSI.color(&1)}*")
|> IO.puts
//}

　

まずは、Replの作成から。
テンプレートで"Elixir"を選択してから、タイトルに"kirakira"と入力してReplを作成します。

//indepimage[repl_kirakira_01][Replの作成完了][scale=0.6]{
//}

Replの作成後、先述の「文字をキラキラさせるコード」を「@<b>{main.exs}」@<fn>{what_is_exs}に記述します。

//footnote[what_is_exs][exsとはElixirで利用する拡張子の1つで、バイトコードへコンパイルせずにスクリプトベースで実行する際に用いる]

//indepimage[repl_kirakira_02][main.exsにコードを記述する][scale=0.6]{
//}

コードを記述後、画面上部にある「@<b>{▶Run}」をクリックします。

//indepimage[repl_kirakira_03][Runをクリックして実行完了][scale=0.6]{
//}

RUNボタンをクリックすると、main.exsが実行されて画面右側にあるConsole（コンソール）に、実行結果が表示されます。

みてわかるように、コンソール上の文字「*」がさまざまな色で表示されているのが確認できます。

　

Repl上でのElixirの実行はうまくいきました。
それでは、つぎはもう少し凝った処理を実行してみましょう。

=== APIからデータを取得してみる

つづいて、Web上のAPIを実行するコードを書いてみましょう。

今度は、Zennにあるスクラップ記事@<fn>{zenn_scrap_mzryuka_url_01}の内容で、APIのレスポンスを出力するプログラムを書きます。

//footnote[zenn_scrap_mzryuka_url_01][@<href>{https://zenn.dev/mzryuka/scraps/50ac14004dbd05}]

こちらは@<b>{connpass}@<fn>{connpass_url}の公開API@<fn>{connpass_api_url}を利用して、2023年5月に開催されるElixir関連のイベントを取得する処理となっています。

//footnote[connpass_url][IT勉強会支援プラットフォーム。URL: @<href>{https://connpass.com/}]

//footnote[connpass_api_url][connpass APIリファレンス。URL: @<href>{https://connpass.com/about/api/}]


まずは、Replを作成します。
前回同様にテンプレートでは"Elixir"を選択し、タイトルには"ReptitElixirGetConnpassEvents"とでも入力しておきましょう。

//indepimage[replit_ex_create_03][タイトルの入力][scale=0.6]{
//}

Replを作成したら、つぎは"main.exs"の実装です。

本機能では、以下のHEXライブラリを利用しています。

 * HTTPoison@<fn>{httpoison_hex_url} : Elixirで利用できるHTTP client。HTTP経由でAPIをコールするのに利用。
 * Jason@<fn>{jason_hex_url} : Elixir製のJSONライブラリ。APIのレスポンスを処理するために利用。

//footnote[httpoison_hex_url][@<href>{https://hex.pm/packages/httpoison}]

//footnote[jason_hex_url][@<href>{https://hex.pm/packages/jason}]

これら2つのライブラリをインストールするために、"main.exs"へライブラリをインストールする記述を追記します。
コードの最後の「IO.puts」は、動作確認用のコードです。なくても動作には影響しません。

//list[hex_lib_install][main.exsに対してHEXライブラリをインストールする処理を記述]{
## Mix.install/2を利用して、exs上でhttpoisonとjasonをインストールする
Mix.install([
  {:httpoison, "~> 2.0"},
  {:jason, "~> 1.4"}
])

IO.puts("done Mix.install/2")
//}


//indepimage[replit_ex_mix_install_01][タイトルの入力][scale=0.6]{
//}

//indepimage[replit_ex_mix_install_02][タイトルの入力][scale=0.6]{
//}

//indepimage[replit_ex_mix_install_03][タイトルの入力][scale=0.6]{
//}

//indepimage[replit_ex_mix_install_04][タイトルの入力][scale=0.6]{
//}

//indepimage[replit_ex_mix_install_05][タイトルの入力][scale=0.6]{
//}


== Phoeninxを実行してみる

（工事中）

== まとめ

以上が、Replitで「Elixir」をプログラミングしてみた内容となります。

いかがでしたか？
自分の端末に環境を用意しなくてもプログラミンングができる点は魅力的ですね。

この手のサービスの言語のバージョンは少し古いバージョンが利用されていたりします。
ReplitのElixirnは、執筆時点では最新（v1.14、OTP25）の1つ前のバージョン（v1.13、OTP24）で動作していました。
このバージョン差異が気にならないのであれば、非常に便利なツールであると言えます。

本章では紹介しませんでしたが、コラボレーション機能もありペアプロ／モブプロにも利用できそうで、いつか使ってみたい機能です。

もし本章を読まれてReplitを気になられた方は、ぜひアカウントを作ってElixir（や他の言語）を触ってみてください。
