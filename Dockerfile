# Stage 1: Compile application
FROM alpine:3.17 as build
RUN set -ex && \
    apk add --no-cache \
        gcc=10.3.1_git20211027-r0 \
        musl-dev=1.2.2-r7
WORKDIR /tmp
COPY [ "./src", "." ]
RUN set -ex && gcc -o main main.c static-list.c

# Stage 2: Call output result
FROM alpine:3.17
RUN set -ex && \
    apk add --no-cache bash=5.1.16-r0
WORKDIR /usr/src/app
COPY --from=build [ "/tmp/main", "." ]

CMD [ "./main" ]
