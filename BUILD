platform(
    name = "ios",
    constraint_values = [
        "@platforms//os:ios",
        "@platforms//cpu:arm64",
    ],
)

platform(
    name = "macos",
    constraint_values = [
        "@platforms//os:macos",
        "@platforms//cpu:arm64",
    ],
)

os_defines = select({
    "@platforms//os:macos": ["OS=macOS"],
    "@platforms//os:ios" :  ["OS=iOS"],
    "//conditions:default": ["OS=linux_defines"],
})

cc_binary(
    name = "a",
    srcs = ["a.cc"],
    defines = os_defines,
    )
