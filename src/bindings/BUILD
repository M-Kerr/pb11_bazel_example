load("//third_party/pybind11_bazel:build_defs.bzl", "pybind_extension")

pybind_extension(
    name = "mycpplib",
    srcs = glob(["mycpplib/*.cpp"]),
    visibility = ["//src/python:__pkg__"],
    deps = [
        "//lib:mycpplib",
    ],
)
