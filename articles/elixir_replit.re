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

//indepimage[replit_ex_create_01][+Createボタンをクリック][scale=0.6]{
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

Runボタンをクリックすると、main.exsが実行されて画面右側にあるConsole（コンソール）に、実行結果が表示されます。

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

//indepimage[replit_ex_create_05][APIからデータ取得用のRepl作成][scale=0.6]{
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

//indepimage[replit_ex_mix_install_01][ライブラリインストール用のコードを入力][scale=0.6]{
//}

コード入力後、Runボタンをクリックします。

すると、Console側で、@<i>{Mix.install/2}の実行が行われます。

この段階では、"@<b>{HEX}"自身がインストールされていませんので、「@<i>{Shall I Install Hex?}」と聞かれます。
インストールを継続するので、「@<i>{Y}」を入力してEnterキーを押下してください。

//indepimage[replit_ex_mix_install_02][Hexのインストール確認][scale=0.6]{
//}

Hexのインストールを許諾すると、同時に「httpoison」と「jason」および依存するライブラリがインストールされます。

その後、"parse_trans"というライブラリのビルドに必要な"@<b>{reber3}"ライブラリのインストールも促されます。
Hexの時と同じように、「@<i>{Y}」を入力してEnterキーを押下してインストールを進めてください。

//indepimage[replit_ex_mix_install_03][reber3のインストール確認][scale=0.6]{
//}

インストールが完了すると、Consoleに「@<i>{done Mix.install/2"}」が出力されています。
なお、「Hex」と「reber3」のインストールは一度だけです。

//indepimage[replit_ex_mix_install_05][ディレクトリ構成の確認][scale=0.6]{
//}

インストール完了後、画面右にある「@<b>{Files}」をみると、「.hex」ディレクトリや「.mix」ディレクトリができているのを確認できます。
これで、必要なライブラリがインストールされました。

　

つづけて、ConnpassAPIにHTTPアクセスしてレスポンスデータを出力してみましょう

main.exsのソースコードを以下のように書き換えます。

//list[connpass_api_accessand_print_event][main.exsを修正してconnpassのイベント情報を取得する]{
## Mix.install/2を利用して、exs上でhttpoisonとjasonをインストールする
Mix.install([
  {:httpoison, "~> 2.0"},
  {:jason, "~> 1.4"}
])

base_request_url = "https://connpass.com/api/v1/event/?"
url = Enum.join([base_request_url,
  "/api/v1/event/?",
  "ym=202305&",
  "keyword=elixir&",
  "order=2&",
  "count=10"], "")
IO.puts("url : #{url}")

# エラーは一旦無視して、レスポンスがただしい場合のみを想定する
# エラーも考慮するときは、HTTPoison.getを利用。
response = HTTPoison.get!(url)
result = response
|> Map.get(:body)
|> Jason.decode!()

"results_available: #{result["results_available"]}"
|> IO.puts()

"results_returned: #{result["results_returned"]}"
|> IO.puts()

result["events"]
|> Enum.map(fn(m) -> %{title: m["title"], url: m["series"]["url"]} end)
|> IO.inspect()
//}

こちらのプログラムは、大まかに以下の事を実施しています。

 * 「2023年5月に開催予定」の「"elixir"をキーワードにもつ」イベントデータを「開催日時順」に「10件」取得するためのパラメータを作成
 * 「HTTPoison.get!/3」でconnpass APIにアクセスし、レスポンスのbodayを「Jason.decode!/2」でjson形式にデコードする
 * デコードしたデータから、「検索結果の総件数」「含まれる検索結果の件数」「イベント情報のタイトルとURL」を取り出してコンソールに出力

それでは、、このコードを実行してみましょう。画面上部の「Run」ボタンをクリックしてください。

//indepimage[replit_for_elixir_http_access_01][connpass APIへのアクセス結果][scale=0.8]{
//}

Console欄に、「検索結果の総件数」「含まれる検索結果の件数」「イベント情報のタイトルとURL」が出力されました。

== Phoeninx LiveViewを実行してみる

Elixirの動作確認ができたので、今度は@<b>{Phoenix}@<fn>{phienix_01}を試してみましょう。

//footnote[phienix_01][@<href>{https://www.phoenixframework.org/}]

Phoeinxは、Elixir製のWebアプリケーションフレームワークです。RubyにおけるRuby on Railsの立ち位置です。

そして、Phoeinxには@<b>{Phoenix LiveView}@<fn>{phienix_live_view_01}という機能があります。
Phoenix LiveViewを簡単に言えば、JavaScriptを直接書かずにSPA（シングルページアプリケーション）が作れる機能です。

//footnote[phienix_live_view_01][@<href>{https://github.com/phoenixframework/phoenix_live_view}]

ここでは、このPhoenix LiveViewの機能をReplit上で試してみましょう。

　

ということで、Qiitaに掲載されている、@<b>{@t-yamanashi}さんの記事「replitでLiveViewを体験しよう」@<fn>{qiita_yamanashi_url_01}を参考にして実施します。

//footnote[qiita_yamanashi_url_01][@<href>{https://qiita.com/t-yamanashi/items/fbc5c7e97cd68f3998cb}]

　

まずは、Replの作成から。
テンプレートで"Phoenix"を選択してから、タイトルに"SampleLiveView"と入力して、「Create Repl」ボタンをクリックしてReplを作成します。

//indepimage[create_repl_for_phoenix_02][Phoenix用のReplを作成する][scale=0.8]{
//}

Replへ画面遷移後、画面上部のRunボタンをクリックすると、Phoenix@<fn>{repl_for_phoenix_version}が起動します。
しばらくすると、Webview欄にPhoenixのTOPページが表示されます。

//footnote[repl_for_phoenix_version][「mix phx -v」で確認したところ、執筆時点でのPhoenixのバージョンは1.6.6でした]

//indepimage[create_repl_for_phoenix_03][Repl上でPhoenixが起動する][scale=0.7]{
//}

　

つづいて、LiveViewの機能を追加します。

ステップとしては、以下の手順となります。

 * mix phx.gen.liveコマンドの実行
 * ルーティングの設定
 * マイグレーションの実行
 * 新しいページへの遷移URLの追加
 * 新しいページの確認


まずは、以下の「@<i>{mix phx.gen.live}」コマンドを画面中のShell欄で実行します。

//list[repl_phoenix_liveview_cmd_01][mix phx.gen.liveの実行]{
mix phx.gen.live Accounts User users name:string
//}

すると、LiveView用のファイルが作成され、同時にルーティング用の設定が表示されます。

//indepimage[create_repl_for_phoenix_04][mix phx.gen.liveの実行結果][scale=0.7]{
//}

つぎに、ルーティングの設定になります。

ルーティング用の「lib/phoenix_app_web/router.ex」ファイル中に、前述のmix phx.gen.liveの実行で表示された設定を追記します。

「@<b>{scope "/", PhoenixAppWeb do}」のブロック内に、Shell欄に出力された「live 〜」で始まるルーティングの設定を追記します。

//list[repl_phoenix_liveview_cmd_02][lib/phoenix_app_web/router.exの修正]{
  scope "/", PhoenixAppWeb do
    pipe_through :browser

    # ここから
    live "/users", UserLive.Index, :index
    live "/users/new", UserLive.Index, :new
    live "/users/:id/edit", UserLive.Index, :edit

    live "/users/:id", UserLive.Show, :show
    live "/users/:id/show/edit", UserLive.Show, :edit
    # ここまで追記

    get "/", PageController, :index
  end
//}

//indepimage[create_repl_for_phoenix_05][router.exへのルーティングの追記][scale=0.7]{
//}

ルーティング設定の追加したら、今度は「@<i>{mix ecto.migrate}」を実行します。

画面中のShell欄でmix ecto.migrateコマンドを実行し、マイグレーションを実行します。

//list[repl_phoenix_liveview_cmd_03][mix ecto.migrateの実行]{
mix ecto.migrate
//}

//indepimage[create_repl_for_phoenix_06][mix ecto.migrateの実行][scale=0.6]{
//}

マイグレーションの実行後は、1度Phoeinxを立ち上げなおします。
画面上部の「@<b>{Stop}」ボタンをクリックすると、Phoeninxのプロセスが停止します。
その後、Phoenixが自動で立ち上がります。

　

つづいて、新しいページへの遷移URLの追加します。

Qiitaの記事では新しいタブでページを参照できましたが、私の環境では「@<b>{SSL_ERROR_INTERNAL_ERROR_ALERT}」によって新しいタブでページを開けませんでした。

そのため、Webview欄上で追加した画面へ遷移できるようにTOPページ中へ画面遷移のURLを埋め込みます。

修正対象ファイルは「@<i>{lib/phoenix_app_web/templates/page/index.html.heex}」となります。

index.html.heex中の「@<b>{v1.6 Changelog}」の下に、以下のコードを追記します。

//list[repl_phoenix_liveview_cmd_04][index.html.heex中へ、ページ遷移を追記]{
      <li>
        <a href="/users">新規追加したページ</a>
      </li>
//}

//indepimage[create_repl_for_phoenix_07][index.html.heex中へ「/users」のパスを追記][scale=0.6]{
//}

パスの追記後、TOPページには「/users」への遷移リンク「@<b>{新規追加したページ}」が追加表示されています。

//indepimage[create_repl_for_phoenix_08][「/users」への遷移リンクが追加][scale=0.6]{
//}

さいごに、遷移リンク「@<b>{新規追加したページ}」をクリックして、新規画面を表示します。

//indepimage[create_repl_for_phoenix_09][新規追加したページの表示][scale=0.6]{
//}

「New Users」をクリックして入力ダイアログを表示します。そして、Name欄に"名前"を入力してEnterを入力してください。

//indepimage[create_repl_for_phoenix_10][Nameの入力][scale=0.6]{
//}

入力ダイアログで入力した名前が、そのまま画面一覧上に表示されています。

//indepimage[create_repl_for_phoenix_11][Nameの入力後の一覧][scale=0.6]{
//}

お疲れ様でした。
こうして、Replit上でPhoenix LiveViewの機能が確認できました。

== まとめ

以上が、Replitで「Elixir」をプログラミングしてみた内容となります。

いかがでしたか？
自分の端末に環境を用意しなくてもプログラミンングができる点は魅力的ですね。

この手のサービスの言語のバージョンは少し古いバージョンが利用されていたりします。
ReplitのElixirは、執筆時点では最新（v1.14、OTP25）の1つ前のバージョン（v1.13、OTP24）で動作していました。
このバージョン差異が気にならないのであれば、非常に便利なツールであると言えます。

本章では紹介しませんでしたが、コラボレーション機能もありペアプロ／モブプロにも利用できそうで、いつか使ってみたい機能です。
また、Teams for Educationを実際の授業で利用された例@<fn>{qiita_teams_for_education_yamazaki_01}もあるようです。

//footnote[qiita_teams_for_education_yamazaki_01][@<href>{https://qiita.com/zacky1972/items/a9afb1c411202d0cd160}]

もし本章を読まれてReplitを気になられた方は、ぜひアカウントを作ってElixir（や他の言語）を触ってみてください。
