#!/bin/bash

bazel build //testing:hello_test
bazel test //testing:hello_test