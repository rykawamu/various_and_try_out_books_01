docker run --rm -v `pwd`/articles:/work vvakame/review:5.4 /bin/sh -c "cd /work && REVIEW_CONFIG_FILE=config-ebook.yml rake pdf"
