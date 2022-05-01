FROM alpine:3.15 as build
RUN set -ex && \
    apk add --no-cache \
        gcc=10.3.1_git20211027-r0 \
        musl-dev=1.2.2-r7
WORKDIR /tmp
COPY [ "./src", "." ]
RUN set -ex && gcc -o main main.c static-list.c

FROM alpine:3.15
RUN set -ex && \
    apk add --no-cache \
        bash=5.1.8-r0
WORKDIR /usr/src/app
COPY --from=build [ "/tmp/main", "." ]

CMD [ "./main" ]
