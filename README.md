<div align="center">

<p>
  <img alt="gif-header" src="https://cdn.hackernoon.com/hn-images/0*KyeIBTwEiX6_sE06" width="350px" float="center"/>
</p>

<h2 align="center">✨ Simple static list ✨</h2>

<div align="center">

[![Semantic Release](https://img.shields.io/badge/%20%20%F0%9F%93%A6%F0%9F%9A%80-semantic--release-e10079.svg)](https://github.com/lpmatos/crud-static-list)
[![Commitizen friendly](https://img.shields.io/badge/commitizen-friendly-brightgreen.svg)](https://github.com/lpmatos/crud-static-list)
[![GitHub repo size](https://img.shields.io/github/repo-size/lpmatos/crud-static-list)](https://github.com/lpmatos/crud-static-list)

</div>

---

<p align="center">
  <img alt="gif-about" src="https://i.pinimg.com/originals/8b/e4/ef/8be4efc0a8e5bc4903aae00db82cb982.gif" width="450px" float="center"/>
</p>

<p align="center">
  ✨ A console application written in C to implement a process for registering users and storing them in a simple static list data structure ✨
</p>

<p align="center">
  <a href="#getting-started">Getting Started</a>&nbsp;&nbsp;&nbsp;|&nbsp;&nbsp;&nbsp;
  <a href="#versioning">Versioning</a>
</p>

</div>

---

## ➤ Getting Started <a name = "getting-started"></a>

If you want contribute on this project, first you need to make a **git clone**:

>
> 1. git clone --depth 1 <https://github.com/lpmatos/crud-static-list.git> -b main
>

This will give you access to the code on your **local machine**.

## ➤ Installation <a name = "installation"></a>

```bash
docker pull ghcr.io/lpmatos/static-list:main
```

## ➤ Usage <a name = "usage"></a>

```bash
cd src && gcc -o main main.c static-list.c && ./main
```

## ➤ Docker <a name = "docker"></a>

To run the docker container:

```bash
docker container run -it --rm ghcr.io/lpmatos/static-list:main
```

Click [here](https://github.com/lpmatos/static-list/pkgs/container/static-list/versions) to see available image tags.

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

## ➤ Author <a name = "author"></a>

👤 Hey!! If you like this project or if you find some bugs feel free to contact me in my channels:

>
> * Linktree: https://linktr.ee/lpmatos
>

## ➤ Versioning <a name = "versioning"></a>

To check the change history, please access the [**CHANGELOG.md**](CHANGELOG.md) file.

## ➤ Project status <a name = "project-status"></a>

This repository is a study project! 👻

## ➤ Donations <a name = "donations"></a>

<p align="center">
  <a href="https://www.blockchain.com/pt/btc/address/bc1qn50elv826qs2qd6xhfh6n79649epqyaqmtwky5">
    <img alt="BTC Address" src="https://img.shields.io/badge/BTC%20Address-black?style=for-the-badge&logo=bitcoin&logoColor=white">
  </a>

  <a href="https://live.blockcypher.com/ltc/address/ltc1qwzrxmlmzzx68k2dnrcrplc4thadm75khzrznjw/">
    <img alt="Litecoin Address" src="https://img.shields.io/badge/Litecoin%20Address-black?style=for-the-badge&logo=litecoin&logoColor=white">
  </a>
</p>

## ➤ Show your support <a name = "show-your-support"></a>

<div align="center">

Give me a ⭐️ if this project helped you!

<p>
  <img alt="gif-header" src="https://www.icegif.com/wp-content/uploads/baby-yoda-bye-bye-icegif.gif" width="350px" float="center"/>
</p>

Made with 💜 by [me](https://github.com/lpmatos) 👋 inspired on [readme-md-generator](https://github.com/kefranabg/readme-md-generator)

</div>
