load("@rules_python//python:defs.bzl", "py_binary")

py_binary(
    name = "bindings_test",
    srcs = ["bindings_test.py"],
    data = ["//src/bindings:mycpplib.so"],
    visibility = ["//main:__pkg__"],
)
