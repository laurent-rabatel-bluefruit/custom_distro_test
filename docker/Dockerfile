FROM ubuntu:22.04

RUN useradd -u 1000 -m yocto_build

ARG DEBIAN_FRONTEND=noninteractive
RUN apt-get update && apt-get install -y \
        build-essential  \
        chrpath  \
        cpio  \
        debianutils  \
        diffstat  \
        file  \
        gawk  \
        gcc  \
        git  \
        iputils-ping  \
        libacl1 \
        liblz4-tool  \
        locales \
        python3  \
        python3-git  \
        python3-jinja2  \
        python3-pexpect  \
        python3-pip  \
        python3-subunit  \
        python3-websockets \
        socat  \
        texinfo  \
        tmux \
        unzip  \
        vim \
	wget  \
        xz-utils  \
        zstd  \
        && apt-get purge -y --auto-remove \
        && apt-get clean && apt-get autoremove && rm -rf /var/lib/apt/lists/* \
        && locale-gen en_US.UTF-8 \
        && update-locale LC_ALL=C

# Required to build project documentation
RUN apt-get update && apt-get install -y \
        git \
        inkscape \
        make \
        python3-saneyaml \
        python3-sphinx-rtd-theme \
        sphinx \
        texlive-latex-extra \
        && apt-get purge -y --auto-remove \
        && apt-get clean && apt-get autoremove && rm -rf /var/lib/apt/lists/*

# Kas
RUN pip install kas
