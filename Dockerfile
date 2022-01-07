FROM alpine:3.15 as base

FROM base as build
RUN set -ex && apk add --no-cache gcc musl-dev
WORKDIR /tmp
COPY [ "./src", "." ]
RUN set -ex && gcc -o main main.c static-list.c

FROM base
RUN set -ex && \
    apk add --update --no-cache \
        bash=5.1.4-r0 
WORKDIR /usr/src/app
COPY --from=build [ "/tmp/main", "." ]

CMD [ "./main" ]
