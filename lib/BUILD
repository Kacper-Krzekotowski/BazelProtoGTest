proto_library(
    name = "person_proto",
    srcs = ["person.proto"],
)

# https://docs.bazel.build/versions/master/be/c-cpp.html#cc_library
cc_proto_library(
    name = "mesage",
    deps = [":person_proto"],
    visibility = ["//visibility:public"],
)