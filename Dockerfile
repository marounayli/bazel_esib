FROM bazel_final
COPY esib/ /esib/
WORKDIR "/esib"
ENTRYPOINT ["/bin/bash", "main.sh"]