<div align="center">

<img alt="gif-header" src="https://cdn.hackernoon.com/hn-images/0*KyeIBTwEiX6_sE06" width="350px"/>

<h2>✨ Simple static list ✨</h2>

[![Semantic Release](https://img.shields.io/badge/%20%20%F0%9F%93%A6%F0%9F%9A%80-semantic--release-e10079.svg)]()
[![Commitizen friendly](https://img.shields.io/badge/commitizen-friendly-brightgreen.svg)]()

---

<img alt="gif-about" src="https://i.pinimg.com/originals/8b/e4/ef/8be4efc0a8e5bc4903aae00db82cb982.gif" width="450px"/>

<p>✨ A console application written in C to register users and store them in a simple static list data structure ✨</p>

<p>
  <a href="#getting-started">Getting Started</a>&nbsp;&nbsp;&nbsp;|&nbsp;&nbsp;&nbsp;
  <a href="#versioning">Versioning</a>
</p>

</div>

---

## ➤ Installation <a name = "installation"></a>

```bash
docker pull ghcr.io/ci-monk/static-list:main
```

## ➤ Usage <a name = "usage"></a>

```bash
cd src && gcc -o main main.c static-list.c && ./main
```

## ➤ Docker <a name = "docker"></a>

To run the docker container:

```bash
docker container run -it --rm ghcr.io/ci-monk/static-list:main
```

Click [here](https://github.com/ci-monk/static-list/pkgs/container/static-list/versions) to see available image tags.

## ➤ Features

- Create a static list in a simple way.
- Initialize static list struct with default values.
- Create a function to return de list size.
- Create a function that check if the list is empty.
- Create a function that check if the list is full.
- Insert element at the beginning of the list.
- Insert element at the end of the list.
- Remove element at the beginning of the list.
- Remove element at the end of the list.
- Search element by position in list.
- Search element by content in list.
- Destroy list reference of memory.
- Pretty console flow.

## ➤ Concepts <a name = "concepts"></a>

### List

A list is a structure that stores
elements in an aligned way, that is,
with elements arranged one after the
other.

### C struct

In C programming, a struct (or structure) is a collection of variables (can be of different types) under a single name.

<p align="center">
  <img alt="struct" src="https://www.geeksforgeeks.org/wp-content/uploads/Structure-In-C.png" width="350px" float="center"/>
</p>

## ➤ Demo <a name = "demo"></a>

https://user-images.githubusercontent.com/58797390/148273067-b6de6695-21c0-4ab7-ae9c-c8cd9eb4fbb5.mov

## ➤ Versioning <a name = "versioning"></a>

To check the change history, please access the [**CHANGELOG.md**](CHANGELOG.md) file.

## ➤ Project status <a name = "project-status"></a>

This repository is a study project! 👻

## ➤ Show your support <a name = "show-your-support"></a>

<div align="center">

Give me a ⭐️ if this project helped you!

<img alt="gif-header" src="https://www.icegif.com/wp-content/uploads/baby-yoda-bye-bye-icegif.gif" width="350px" float="center"/>

Made with 💜 by [me](https://github.com/ci-monk) 👋 inspired on [readme-md-generator](https://github.com/kefranabg/readme-md-generator)

</div>
