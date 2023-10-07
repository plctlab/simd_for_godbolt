// This file is generated manually by combining each dependency.
// NOTE: Any changes to 'simd' still require a manual update to this file.
// TODO: Consider implementing an automatic merge update mechanism for this file to improve maintainability.
// The idea for use compiler explorer was inspired by the VcDevel/std-simd repository on GitHub.

#ifndef _LIBCPP_EXPERIMENTAL_SIMD
#define _LIBCPP_EXPERIMENTAL_SIMD

#define __cpp_lib_experimental_parallel_simd 201803

#include <limits> // solve weird error

// file: libcxx/include/experimental/__config
#ifndef _LIBCPP_EXPERIMENTAL_CONFIG
#define _LIBCPP_EXPERIMENTAL_CONFIG

// file: #include <__config>

#ifndef _LIBCPP___CONFIG
#define _LIBCPP___CONFIG

// file: #include <__config_site>
#ifndef _LIBCPP___CONFIG_SITE
#define _LIBCPP___CONFIG_SITE

#define _LIBCPP_ABI_VERSION 1
#define _LIBCPP_ABI_NAMESPACE __1
/* #undef _LIBCPP_ABI_FORCE_ITANIUM */
/* #undef _LIBCPP_ABI_FORCE_MICROSOFT */
/* #undef _LIBCPP_HAS_NO_THREADS */
/* #undef _LIBCPP_HAS_NO_MONOTONIC_CLOCK */
/* #undef _LIBCPP_HAS_MUSL_LIBC */
/* #undef _LIBCPP_HAS_THREAD_API_PTHREAD */
/* #undef _LIBCPP_HAS_THREAD_API_EXTERNAL */
/* #undef _LIBCPP_HAS_THREAD_API_WIN32 */
/* #undef _LIBCPP_HAS_THREAD_LIBRARY_EXTERNAL */
/* #undef _LIBCPP_DISABLE_VISIBILITY_ANNOTATIONS */
#define _LIBCPP_HAS_NO_VENDOR_AVAILABILITY_ANNOTATIONS
/* #undef _LIBCPP_NO_VCRUNTIME */
/* #undef _LIBCPP_TYPEINFO_COMPARISON_IMPLEMENTATION */
/* #undef _LIBCPP_HAS_NO_FILESYSTEM_LIBRARY */
/* #undef _LIBCPP_HAS_PARALLEL_ALGORITHMS */
/* #undef _LIBCPP_HAS_NO_RANDOM_DEVICE */
/* #undef _LIBCPP_HAS_NO_LOCALIZATION */
/* #undef _LIBCPP_HAS_NO_FSTREAM */
/* #undef _LIBCPP_HAS_NO_WIDE_CHARACTERS */
#define _LIBCPP_ENABLE_ASSERTIONS_DEFAULT 0
/* #undef _LIBCPP_ENABLE_DEBUG_MODE */

// __USE_MINGW_ANSI_STDIO gets redefined on MinGW
#ifdef __clang__
#  pragma clang diagnostic push
#  pragma clang diagnostic ignored "-Wmacro-redefined"
#endif




#ifdef __clang__
#  pragma clang diagnostic pop
#endif

#endif // _LIBCPP___CONFIG_SITE

#if defined(_MSC_VER) && !defined(__clang__)
#  if !defined(_LIBCPP_HAS_NO_PRAGMA_SYSTEM_HEADER)
#    define _LIBCPP_HAS_NO_PRAGMA_SYSTEM_HEADER
#  endif
#endif

#ifndef _LIBCPP_HAS_NO_PRAGMA_SYSTEM_HEADER
#  pragma GCC system_header
#endif

#if defined(__apple_build_version__)
#  define _LIBCPP_COMPILER_CLANG_BASED
#  define _LIBCPP_APPLE_CLANG_VER (__apple_build_version__ / 10000)
#elif defined(__clang__)
#  define _LIBCPP_COMPILER_CLANG_BASED
#  define _LIBCPP_CLANG_VER (__clang_major__ * 100 + __clang_minor__)
#elif defined(__GNUC__)
#  define _LIBCPP_COMPILER_GCC
#endif

#ifdef __cplusplus

// _LIBCPP_VERSION represents the version of libc++, which matches the version of LLVM.
// Given a LLVM release LLVM XX.YY.ZZ (e.g. LLVM 17.0.1 == 17.00.01), _LIBCPP_VERSION is
// defined to XXYYZZ.
#  define _LIBCPP_VERSION 170000

#  define _LIBCPP_CONCAT_IMPL(_X, _Y) _X##_Y
#  define _LIBCPP_CONCAT(_X, _Y) _LIBCPP_CONCAT_IMPL(_X, _Y)

// Valid C++ identifier that revs with every libc++ version. This can be used to
// generate identifiers that must be unique for every released libc++ version.
#  define _LIBCPP_VERSIONED_IDENTIFIER _LIBCPP_CONCAT(v, _LIBCPP_VERSION)

#  if __STDC_HOSTED__ == 0
#    define _LIBCPP_FREESTANDING
#  endif

// NOLINTBEGIN(libcpp-cpp-version-check)
#  ifndef _LIBCPP_STD_VER
#    if __cplusplus <= 201103L
#      define _LIBCPP_STD_VER 11
#    elif __cplusplus <= 201402L
#      define _LIBCPP_STD_VER 14
#    elif __cplusplus <= 201703L
#      define _LIBCPP_STD_VER 17
#    elif __cplusplus <= 202002L
#      define _LIBCPP_STD_VER 20
#    else
// Expected release year of the next C++ standard
#      define _LIBCPP_STD_VER 23
#    endif
#  endif // _LIBCPP_STD_VER
// NOLINTEND(libcpp-cpp-version-check)

#  if defined(__ELF__)
#    define _LIBCPP_OBJECT_FORMAT_ELF 1
#  elif defined(__MACH__)
#    define _LIBCPP_OBJECT_FORMAT_MACHO 1
#  elif defined(_WIN32)
#    define _LIBCPP_OBJECT_FORMAT_COFF 1
#  elif defined(__wasm__)
#    define _LIBCPP_OBJECT_FORMAT_WASM 1
#  elif defined(_AIX)
#    define _LIBCPP_OBJECT_FORMAT_XCOFF 1
#  else
// ... add new file formats here ...
#  endif

#  if _LIBCPP_ABI_VERSION >= 2
// Change short string representation so that string data starts at offset 0,
// improving its alignment in some cases.
#    define _LIBCPP_ABI_ALTERNATE_STRING_LAYOUT
// Fix deque iterator type in order to support incomplete types.
#    define _LIBCPP_ABI_INCOMPLETE_TYPES_IN_DEQUE
// Fix undefined behavior in how std::list stores its linked nodes.
#    define _LIBCPP_ABI_LIST_REMOVE_NODE_POINTER_UB
// Fix undefined behavior in  how __tree stores its end and parent nodes.
#    define _LIBCPP_ABI_TREE_REMOVE_NODE_POINTER_UB
// Fix undefined behavior in how __hash_table stores its pointer types.
#    define _LIBCPP_ABI_FIX_UNORDERED_NODE_POINTER_UB
#    define _LIBCPP_ABI_FORWARD_LIST_REMOVE_NODE_POINTER_UB
#    define _LIBCPP_ABI_FIX_UNORDERED_CONTAINER_SIZE_TYPE
// Define a key function for `bad_function_call` in the library, to centralize
// its vtable and typeinfo to libc++ rather than having all other libraries
// using that class define their own copies.
#    define _LIBCPP_ABI_BAD_FUNCTION_CALL_KEY_FUNCTION
// Override the default return value of exception::what() for
// bad_function_call::what() with a string that is specific to
// bad_function_call (see http://wg21.link/LWG2233). This is an ABI break
// because it changes the vtable layout of bad_function_call.
#    define _LIBCPP_ABI_BAD_FUNCTION_CALL_GOOD_WHAT_MESSAGE
// Enable optimized version of __do_get_(un)signed which avoids redundant copies.
#    define _LIBCPP_ABI_OPTIMIZED_LOCALE_NUM_GET
// Give reverse_iterator<T> one data member of type T, not two.
// Also, in C++17 and later, don't derive iterator types from std::iterator.
#    define _LIBCPP_ABI_NO_ITERATOR_BASES
// Use the smallest possible integer type to represent the index of the variant.
// Previously libc++ used "unsigned int" exclusively.
#    define _LIBCPP_ABI_VARIANT_INDEX_TYPE_OPTIMIZATION
// Unstable attempt to provide a more optimized std::function
#    define _LIBCPP_ABI_OPTIMIZED_FUNCTION
// All the regex constants must be distinct and nonzero.
#    define _LIBCPP_ABI_REGEX_CONSTANTS_NONZERO
// Re-worked external template instantiations for std::string with a focus on
// performance and fast-path inlining.
#    define _LIBCPP_ABI_STRING_OPTIMIZED_EXTERNAL_INSTANTIATION
// Enable clang::trivial_abi on std::unique_ptr.
#    define _LIBCPP_ABI_ENABLE_UNIQUE_PTR_TRIVIAL_ABI
// Enable clang::trivial_abi on std::shared_ptr and std::weak_ptr
#    define _LIBCPP_ABI_ENABLE_SHARED_PTR_TRIVIAL_ABI
// std::random_device holds some state when it uses an implementation that gets
// entropy from a file (see _LIBCPP_USING_DEV_RANDOM). When switching from this
// implementation to another one on a platform that has already shipped
// std::random_device, one needs to retain the same object layout to remain ABI
// compatible. This switch removes these workarounds for platforms that don't care
// about ABI compatibility.
#    define _LIBCPP_ABI_NO_RANDOM_DEVICE_COMPATIBILITY_LAYOUT
// Don't export the legacy __basic_string_common class and its methods from the built library.
#    define _LIBCPP_ABI_DO_NOT_EXPORT_BASIC_STRING_COMMON
// Don't export the legacy __vector_base_common class and its methods from the built library.
#    define _LIBCPP_ABI_DO_NOT_EXPORT_VECTOR_BASE_COMMON
// According to the Standard, `bitset::operator[] const` returns bool
#    define _LIBCPP_ABI_BITSET_VECTOR_BOOL_CONST_SUBSCRIPT_RETURN_BOOL
// Fix the implementation of CityHash used for std::hash<fundamental-type>.
// This is an ABI break because `std::hash` will return a different result,
// which means that hashing the same object in translation units built against
// different versions of libc++ can return inconsistent results. This is especially
// tricky since std::hash is used in the implementation of unordered containers.
//
// The incorrect implementation of CityHash has the problem that it drops some
// bits on the floor.
#    define _LIBCPP_ABI_FIX_CITYHASH_IMPLEMENTATION
// Remove the base 10 implementation of std::to_chars from the dylib.
// The implementation moved to the header, but we still export the symbols from
// the dylib for backwards compatibility.
#    define _LIBCPP_ABI_DO_NOT_EXPORT_TO_CHARS_BASE_10
#  elif _LIBCPP_ABI_VERSION == 1
#    if !(defined(_LIBCPP_OBJECT_FORMAT_COFF) || defined(_LIBCPP_OBJECT_FORMAT_XCOFF))
// Enable compiling copies of now inline methods into the dylib to support
// applications compiled against older libraries. This is unnecessary with
// COFF dllexport semantics, since dllexport forces a non-inline definition
// of inline functions to be emitted anyway. Our own non-inline copy would
// conflict with the dllexport-emitted copy, so we disable it. For XCOFF,
// the linker will take issue with the symbols in the shared object if the
// weak inline methods get visibility (such as from -fvisibility-inlines-hidden),
// so disable it.
#      define _LIBCPP_DEPRECATED_ABI_LEGACY_LIBRARY_DEFINITIONS_FOR_INLINE_FUNCTIONS
#    endif
// Feature macros for disabling pre ABI v1 features. All of these options
// are deprecated.
#    if defined(__FreeBSD__)
#      define _LIBCPP_DEPRECATED_ABI_DISABLE_PAIR_TRIVIAL_COPY_CTOR
#    endif
// For XCOFF linkers, we have problems if we see a weak hidden version of a symbol
// in user code (like you get with -fvisibility-inlines-hidden) and then a strong def
// in the library, so we need to always rely on the library version.
#    if defined(_AIX)
#      define _LIBCPP_ABI_BAD_FUNCTION_CALL_KEY_FUNCTION
#    endif
#  endif

#  if defined(_LIBCPP_BUILDING_LIBRARY) || _LIBCPP_ABI_VERSION >= 2
// Enable additional explicit instantiations of iostreams components. This
// reduces the number of weak definitions generated in programs that use
// iostreams by providing a single strong definition in the shared library.
#    define _LIBCPP_ABI_ENABLE_ADDITIONAL_IOSTREAM_EXPLICIT_INSTANTIATIONS_1

// Define a key function for `bad_function_call` in the library, to centralize
// its vtable and typeinfo to libc++ rather than having all other libraries
// using that class define their own copies.
#    define _LIBCPP_ABI_BAD_FUNCTION_CALL_KEY_FUNCTION
#  endif

#  define _LIBCPP_TOSTRING2(x) #x
#  define _LIBCPP_TOSTRING(x) _LIBCPP_TOSTRING2(x)

// NOLINTNEXTLINE(libcpp-cpp-version-check)
#  if __cplusplus < 201103L
#    define _LIBCPP_CXX03_LANG
#  endif

#  ifndef __has_attribute
#    define __has_attribute(__x) 0
#  endif

#  ifndef __has_builtin
#    define __has_builtin(__x) 0
#  endif

#  ifndef __has_extension
#    define __has_extension(__x) 0
#  endif

#  ifndef __has_feature
#    define __has_feature(__x) 0
#  endif

#  ifndef __has_cpp_attribute
#    define __has_cpp_attribute(__x) 0
#  endif

#  ifndef __has_constexpr_builtin
#    define __has_constexpr_builtin(x) 0
#  endif

// '__is_identifier' returns '0' if '__x' is a reserved identifier provided by
// the compiler and '1' otherwise.
#  ifndef __is_identifier
#    define __is_identifier(__x) 1
#  endif

#  ifndef __has_declspec_attribute
#    define __has_declspec_attribute(__x) 0
#  endif

#  define __has_keyword(__x) !(__is_identifier(__x))

#  ifndef __has_include
#    define __has_include(...) 0
#  endif

#  if !defined(_LIBCPP_COMPILER_CLANG_BASED) && __cplusplus < 201103L
#    error "libc++ only supports C++03 with Clang-based compilers. Please enable C++11"
#  endif

// FIXME: ABI detection should be done via compiler builtin macros. This
// is just a placeholder until Clang implements such macros. For now assume
// that Windows compilers pretending to be MSVC++ target the Microsoft ABI,
// and allow the user to explicitly specify the ABI to handle cases where this
// heuristic falls short.
#  if defined(_LIBCPP_ABI_FORCE_ITANIUM) && defined(_LIBCPP_ABI_FORCE_MICROSOFT)
#    error "Only one of _LIBCPP_ABI_FORCE_ITANIUM and _LIBCPP_ABI_FORCE_MICROSOFT can be defined"
#  elif defined(_LIBCPP_ABI_FORCE_ITANIUM)
#    define _LIBCPP_ABI_ITANIUM
#  elif defined(_LIBCPP_ABI_FORCE_MICROSOFT)
#    define _LIBCPP_ABI_MICROSOFT
#  else
#    if defined(_WIN32) && defined(_MSC_VER)
#      define _LIBCPP_ABI_MICROSOFT
#    else
#      define _LIBCPP_ABI_ITANIUM
#    endif
#  endif

#  if defined(_LIBCPP_ABI_MICROSOFT) && !defined(_LIBCPP_NO_VCRUNTIME)
#    define _LIBCPP_ABI_VCRUNTIME
#  endif

#  if __has_feature(experimental_library)
#    ifndef _LIBCPP_ENABLE_EXPERIMENTAL
#      define _LIBCPP_ENABLE_EXPERIMENTAL
#    endif
#  endif

// Incomplete features get their own specific disabling flags. This makes it
// easier to grep for target specific flags once the feature is complete.
#  if !defined(_LIBCPP_ENABLE_EXPERIMENTAL) && !defined(_LIBCPP_BUILDING_LIBRARY)
#    define _LIBCPP_HAS_NO_INCOMPLETE_FORMAT
#  endif

// Need to detect which libc we're using if we're on Linux.
#  if defined(__linux__)
#    include <features.h>
#    if defined(__GLIBC_PREREQ)
#      define _LIBCPP_GLIBC_PREREQ(a, b) __GLIBC_PREREQ(a, b)
#    else
#      define _LIBCPP_GLIBC_PREREQ(a, b) 0
#    endif // defined(__GLIBC_PREREQ)
#  endif   // defined(__linux__)

#  if defined(__MVS__)
#    include <features.h> // for __NATIVE_ASCII_F
#  endif

#  ifdef __LITTLE_ENDIAN__
#    if __LITTLE_ENDIAN__
#      define _LIBCPP_LITTLE_ENDIAN
#    endif // __LITTLE_ENDIAN__
#  endif   // __LITTLE_ENDIAN__

#  ifdef __BIG_ENDIAN__
#    if __BIG_ENDIAN__
#      define _LIBCPP_BIG_ENDIAN
#    endif // __BIG_ENDIAN__
#  endif   // __BIG_ENDIAN__

#  ifdef __BYTE_ORDER__
#    if __BYTE_ORDER__ == __ORDER_LITTLE_ENDIAN__
#      define _LIBCPP_LITTLE_ENDIAN
#    elif __BYTE_ORDER__ == __ORDER_BIG_ENDIAN__
#      define _LIBCPP_BIG_ENDIAN
#    endif // __BYTE_ORDER__ == __ORDER_BIG_ENDIAN__
#  endif   // __BYTE_ORDER__

#  ifdef __FreeBSD__
#    include <sys/endian.h>
#    include <osreldate.h>
#    if _BYTE_ORDER == _LITTLE_ENDIAN
#      define _LIBCPP_LITTLE_ENDIAN
#    else // _BYTE_ORDER == _LITTLE_ENDIAN
#      define _LIBCPP_BIG_ENDIAN
#    endif // _BYTE_ORDER == _LITTLE_ENDIAN
#  endif   // __FreeBSD__

#  if defined(__NetBSD__) || defined(__OpenBSD__)
#    include <sys/endian.h>
#    if _BYTE_ORDER == _LITTLE_ENDIAN
#      define _LIBCPP_LITTLE_ENDIAN
#    else // _BYTE_ORDER == _LITTLE_ENDIAN
#      define _LIBCPP_BIG_ENDIAN
#    endif // _BYTE_ORDER == _LITTLE_ENDIAN
#  endif   // defined(__NetBSD__) || defined(__OpenBSD__)

#  if defined(_WIN32)
#    define _LIBCPP_WIN32API
#    define _LIBCPP_LITTLE_ENDIAN
#    define _LIBCPP_SHORT_WCHAR 1
// Both MinGW and native MSVC provide a "MSVC"-like environment
#    define _LIBCPP_MSVCRT_LIKE
// If mingw not explicitly detected, assume using MS C runtime only if
// a MS compatibility version is specified.
#    if defined(_MSC_VER) && !defined(__MINGW32__)
#      define _LIBCPP_MSVCRT // Using Microsoft's C Runtime library
#    endif
#    if (defined(_M_AMD64) || defined(__x86_64__)) || (defined(_M_ARM) || defined(__arm__))
#      define _LIBCPP_HAS_BITSCAN64
#    endif
#    define _LIBCPP_HAS_OPEN_WITH_WCHAR
#  endif // defined(_WIN32)

#  ifdef __sun__
#    include <sys/isa_defs.h>
#    ifdef _LITTLE_ENDIAN
#      define _LIBCPP_LITTLE_ENDIAN
#    else
#      define _LIBCPP_BIG_ENDIAN
#    endif
#  endif // __sun__

#  if defined(_AIX) && !defined(__64BIT__)
// The size of wchar is 2 byte on 32-bit mode on AIX.
#    define _LIBCPP_SHORT_WCHAR 1
#  endif

// Libc++ supports various implementations of std::random_device.
//
// _LIBCPP_USING_DEV_RANDOM
//      Read entropy from the given file, by default `/dev/urandom`.
//      If a token is provided, it is assumed to be the path to a file
//      to read entropy from. This is the default behavior if nothing
//      else is specified. This implementation requires storing state
//      inside `std::random_device`.
//
// _LIBCPP_USING_ARC4_RANDOM
//      Use arc4random(). This allows obtaining random data even when
//      using sandboxing mechanisms. On some platforms like Apple, this
//      is the recommended source of entropy for user-space programs.
//      When this option is used, the token passed to `std::random_device`'s
//      constructor *must* be "/dev/urandom" -- anything else is an error.
//
// _LIBCPP_USING_GETENTROPY
//      Use getentropy().
//      When this option is used, the token passed to `std::random_device`'s
//      constructor *must* be "/dev/urandom" -- anything else is an error.
//
// _LIBCPP_USING_FUCHSIA_CPRNG
//      Use Fuchsia's zx_cprng_draw() system call, which is specified to
//      deliver high-quality entropy and cannot fail.
//      When this option is used, the token passed to `std::random_device`'s
//      constructor *must* be "/dev/urandom" -- anything else is an error.
//
// _LIBCPP_USING_NACL_RANDOM
//      NaCl's sandbox (which PNaCl also runs in) doesn't allow filesystem access,
//      including accesses to the special files under `/dev`. This implementation
//      uses the NaCL syscall `nacl_secure_random_init()` to get entropy.
//      When this option is used, the token passed to `std::random_device`'s
//      constructor *must* be "/dev/urandom" -- anything else is an error.
//
// _LIBCPP_USING_WIN32_RANDOM
//      Use rand_s(), for use on Windows.
//      When this option is used, the token passed to `std::random_device`'s
//      constructor *must* be "/dev/urandom" -- anything else is an error.
#  if defined(__APPLE__) || defined(__FreeBSD__) || defined(__NetBSD__) || defined(__OpenBSD__) ||                     \
      defined(__DragonFly__) || defined(__sun__)
#    define _LIBCPP_USING_ARC4_RANDOM
#  elif defined(__wasi__) || defined(__EMSCRIPTEN__)
#    define _LIBCPP_USING_GETENTROPY
#  elif defined(__Fuchsia__)
#    define _LIBCPP_USING_FUCHSIA_CPRNG
#  elif defined(__native_client__)
#    define _LIBCPP_USING_NACL_RANDOM
#  elif defined(_LIBCPP_WIN32API)
#    define _LIBCPP_USING_WIN32_RANDOM
#  else
#    define _LIBCPP_USING_DEV_RANDOM
#  endif

#  if !defined(_LIBCPP_LITTLE_ENDIAN) && !defined(_LIBCPP_BIG_ENDIAN)
#    include <endian.h>
#    if __BYTE_ORDER == __LITTLE_ENDIAN
#      define _LIBCPP_LITTLE_ENDIAN
#    elif __BYTE_ORDER == __BIG_ENDIAN
#      define _LIBCPP_BIG_ENDIAN
#    else // __BYTE_ORDER == __BIG_ENDIAN
#      error unable to determine endian
#    endif
#  endif // !defined(_LIBCPP_LITTLE_ENDIAN) && !defined(_LIBCPP_BIG_ENDIAN)

#  if __has_attribute(__no_sanitize__) && !defined(_LIBCPP_COMPILER_GCC)
#    define _LIBCPP_NO_CFI __attribute__((__no_sanitize__("cfi")))
#  else
#    define _LIBCPP_NO_CFI
#  endif

#  ifndef _LIBCPP_CXX03_LANG

#    define _LIBCPP_ALIGNOF(_Tp) alignof(_Tp)
#    define _ALIGNAS_TYPE(x) alignas(x)
#    define _ALIGNAS(x) alignas(x)
#    define _LIBCPP_NORETURN [[noreturn]]
#    define _NOEXCEPT noexcept
#    define _NOEXCEPT_(x) noexcept(x)
#    define _LIBCPP_CONSTEXPR constexpr

#  else

#    define _LIBCPP_ALIGNOF(_Tp) _Alignof(_Tp)
#    define _ALIGNAS_TYPE(x) __attribute__((__aligned__(_LIBCPP_ALIGNOF(x))))
#    define _ALIGNAS(x) __attribute__((__aligned__(x)))
#    define _LIBCPP_NORETURN __attribute__((__noreturn__))
#    define _LIBCPP_HAS_NO_NOEXCEPT
#    define nullptr __nullptr
#    define _NOEXCEPT throw()
#    define _NOEXCEPT_(x)
#    define static_assert(...) _Static_assert(__VA_ARGS__)
#    define decltype(...) __decltype(__VA_ARGS__)
#    define _LIBCPP_CONSTEXPR

typedef __char16_t char16_t;
typedef __char32_t char32_t;

#  endif

#  if !defined(__cpp_exceptions) || __cpp_exceptions < 199711L
#    define _LIBCPP_HAS_NO_EXCEPTIONS
#  endif

#  define _LIBCPP_PREFERRED_ALIGNOF(_Tp) __alignof(_Tp)

#  if defined(_LIBCPP_COMPILER_CLANG_BASED)

#    if defined(__APPLE__) && !defined(__i386__) && !defined(__x86_64__) && (!defined(__arm__) || __ARM_ARCH_7K__ >= 2)
#      define _LIBCPP_ABI_ALTERNATE_STRING_LAYOUT
#    endif

// Objective-C++ features (opt-in)
#    if __has_feature(objc_arc)
#      define _LIBCPP_HAS_OBJC_ARC
#    endif

#    if __has_feature(objc_arc_weak)
#      define _LIBCPP_HAS_OBJC_ARC_WEAK
#    endif

#    if __has_extension(blocks)
#      define _LIBCPP_HAS_EXTENSION_BLOCKS
#    endif

#    if defined(_LIBCPP_HAS_EXTENSION_BLOCKS) && defined(__APPLE__)
#      define _LIBCPP_HAS_BLOCKS_RUNTIME
#    endif

#    if !__has_feature(address_sanitizer)
#      define _LIBCPP_HAS_NO_ASAN
#    endif

// Allow for build-time disabling of unsigned integer sanitization
#    if __has_attribute(no_sanitize)
#      define _LIBCPP_DISABLE_UBSAN_UNSIGNED_INTEGER_CHECK __attribute__((__no_sanitize__("unsigned-integer-overflow")))
#    endif

#    define _LIBCPP_ALWAYS_INLINE __attribute__((__always_inline__))

#    define _LIBCPP_DISABLE_EXTENSION_WARNING __extension__

#  elif defined(_LIBCPP_COMPILER_GCC)

#    if !defined(__SANITIZE_ADDRESS__)
#      define _LIBCPP_HAS_NO_ASAN
#    endif

#    define _LIBCPP_ALWAYS_INLINE __attribute__((__always_inline__))

#    define _LIBCPP_DISABLE_EXTENSION_WARNING __extension__

#  endif // _LIBCPP_COMPILER_[CLANG|GCC]

#  if defined(_LIBCPP_OBJECT_FORMAT_COFF)

#    ifdef _DLL
#      define _LIBCPP_CRT_FUNC __declspec(dllimport)
#    else
#      define _LIBCPP_CRT_FUNC
#    endif

#    if defined(_LIBCPP_DISABLE_VISIBILITY_ANNOTATIONS) || (defined(__MINGW32__) && !defined(_LIBCPP_BUILDING_LIBRARY))
#      define _LIBCPP_DLL_VIS
#      define _LIBCPP_EXTERN_TEMPLATE_TYPE_VIS
#      define _LIBCPP_CLASS_TEMPLATE_INSTANTIATION_VIS
#      define _LIBCPP_OVERRIDABLE_FUNC_VIS
#      define _LIBCPP_EXPORTED_FROM_ABI
#    elif defined(_LIBCPP_BUILDING_LIBRARY)
#      define _LIBCPP_DLL_VIS __declspec(dllexport)
#      if defined(__MINGW32__)
#        define _LIBCPP_EXTERN_TEMPLATE_TYPE_VIS _LIBCPP_DLL_VIS
#        define _LIBCPP_CLASS_TEMPLATE_INSTANTIATION_VIS
#      else
#        define _LIBCPP_EXTERN_TEMPLATE_TYPE_VIS
#        define _LIBCPP_CLASS_TEMPLATE_INSTANTIATION_VIS _LIBCPP_DLL_VIS
#      endif
#      define _LIBCPP_OVERRIDABLE_FUNC_VIS _LIBCPP_DLL_VIS
#      define _LIBCPP_EXPORTED_FROM_ABI __declspec(dllexport)
#    else
#      define _LIBCPP_DLL_VIS __declspec(dllimport)
#      define _LIBCPP_EXTERN_TEMPLATE_TYPE_VIS _LIBCPP_DLL_VIS
#      define _LIBCPP_CLASS_TEMPLATE_INSTANTIATION_VIS
#      define _LIBCPP_OVERRIDABLE_FUNC_VIS
#      define _LIBCPP_EXPORTED_FROM_ABI __declspec(dllimport)
#    endif

#    define _LIBCPP_TYPE_VIS _LIBCPP_DLL_VIS
#    define _LIBCPP_FUNC_VIS _LIBCPP_DLL_VIS
#    define _LIBCPP_EXCEPTION_ABI _LIBCPP_DLL_VIS
#    define _LIBCPP_HIDDEN
#    define _LIBCPP_METHOD_TEMPLATE_IMPLICIT_INSTANTIATION_VIS
#    define _LIBCPP_TEMPLATE_VIS
#    define _LIBCPP_TEMPLATE_DATA_VIS
#    define _LIBCPP_ENUM_VIS

#  else

#    if !defined(_LIBCPP_DISABLE_VISIBILITY_ANNOTATIONS)
#      define _LIBCPP_VISIBILITY(vis) __attribute__((__visibility__(vis)))
#    else
#      define _LIBCPP_VISIBILITY(vis)
#    endif

#    define _LIBCPP_HIDDEN _LIBCPP_VISIBILITY("hidden")
#    define _LIBCPP_FUNC_VIS _LIBCPP_VISIBILITY("default")
#    define _LIBCPP_TYPE_VIS _LIBCPP_VISIBILITY("default")
#    define _LIBCPP_TEMPLATE_DATA_VIS _LIBCPP_VISIBILITY("default")
#    define _LIBCPP_EXPORTED_FROM_ABI _LIBCPP_VISIBILITY("default")
#    define _LIBCPP_EXCEPTION_ABI _LIBCPP_VISIBILITY("default")
#    define _LIBCPP_EXTERN_TEMPLATE_TYPE_VIS _LIBCPP_VISIBILITY("default")
#    define _LIBCPP_CLASS_TEMPLATE_INSTANTIATION_VIS

// TODO: Make this a proper customization point or remove the option to override it.
#    ifndef _LIBCPP_OVERRIDABLE_FUNC_VIS
#      define _LIBCPP_OVERRIDABLE_FUNC_VIS _LIBCPP_VISIBILITY("default")
#    endif

#    if !defined(_LIBCPP_DISABLE_VISIBILITY_ANNOTATIONS)
// The inline should be removed once PR32114 is resolved
#      define _LIBCPP_METHOD_TEMPLATE_IMPLICIT_INSTANTIATION_VIS inline _LIBCPP_HIDDEN
#    else
#      define _LIBCPP_METHOD_TEMPLATE_IMPLICIT_INSTANTIATION_VIS
#    endif

#    if !defined(_LIBCPP_DISABLE_VISIBILITY_ANNOTATIONS)
#      if __has_attribute(__type_visibility__)
#        define _LIBCPP_TEMPLATE_VIS __attribute__((__type_visibility__("default")))
#      else
#        define _LIBCPP_TEMPLATE_VIS __attribute__((__visibility__("default")))
#      endif
#    else
#      define _LIBCPP_TEMPLATE_VIS
#    endif

#    if !defined(_LIBCPP_DISABLE_VISIBILITY_ANNOTATIONS) && __has_attribute(__type_visibility__)
#      define _LIBCPP_ENUM_VIS __attribute__((__type_visibility__("default")))
#    else
#      define _LIBCPP_ENUM_VIS
#    endif

#  endif // defined(_LIBCPP_OBJECT_FORMAT_COFF)

#  if __has_attribute(exclude_from_explicit_instantiation)
#    define _LIBCPP_EXCLUDE_FROM_EXPLICIT_INSTANTIATION __attribute__((__exclude_from_explicit_instantiation__))
#  else
// Try to approximate the effect of exclude_from_explicit_instantiation
// (which is that entities are not assumed to be provided by explicit
// template instantiations in the dylib) by always inlining those entities.
#    define _LIBCPP_EXCLUDE_FROM_EXPLICIT_INSTANTIATION _LIBCPP_ALWAYS_INLINE
#  endif

// This macro marks a symbol as being hidden from libc++'s ABI. This is achieved
// on two levels:
// 1. The symbol is given hidden visibility, which ensures that users won't start exporting
//    symbols from their dynamic library by means of using the libc++ headers. This ensures
//    that those symbols stay private to the dynamic library in which it is defined.
//
// 2. The symbol is given an ABI tag that changes with each version of libc++. This ensures
//    that no ODR violation can arise from mixing two TUs compiled with different versions
//    of libc++ where we would have changed the definition of a symbol. If the symbols shared
//    the same name, the ODR would require that their definitions be token-by-token equivalent,
//    which basically prevents us from being able to make any change to any function in our
//    headers. Using this ABI tag ensures that the symbol name is "bumped" artificially at
//    each release, which lets us change the definition of these symbols at our leisure.
//    Note that historically, this has been achieved in various ways, including force-inlining
//    all functions or giving internal linkage to all functions. Both these (previous) solutions
//    suffer from drawbacks that lead notably to code bloat.
//
// Note that we use _LIBCPP_EXCLUDE_FROM_EXPLICIT_INSTANTIATION to ensure that we don't depend
// on _LIBCPP_HIDE_FROM_ABI methods of classes explicitly instantiated in the dynamic library.
//
// Also note that the _LIBCPP_HIDE_FROM_ABI_VIRTUAL macro should be used on virtual functions
// instead of _LIBCPP_HIDE_FROM_ABI. That macro does not use an ABI tag. Indeed, the mangled
// name of a virtual function is part of its ABI, since some architectures like arm64e can sign
// the virtual function pointer in the vtable based on the mangled name of the function. Since
// we use an ABI tag that changes with each released version, the mangled name of the virtual
// function would change, which is incorrect. Note that it doesn't make much sense to change
// the implementation of a virtual function in an ABI-incompatible way in the first place,
// since that would be an ABI break anyway. Hence, the lack of ABI tag should not be noticeable.
//
// TODO: We provide a escape hatch with _LIBCPP_NO_ABI_TAG for folks who want to avoid increasing
//       the length of symbols with an ABI tag. In practice, we should remove the escape hatch and
//       use compression mangling instead, see https://github.com/itanium-cxx-abi/cxx-abi/issues/70.
#  ifndef _LIBCPP_NO_ABI_TAG
#    define _LIBCPP_HIDE_FROM_ABI                                                                                      \
      _LIBCPP_HIDDEN _LIBCPP_EXCLUDE_FROM_EXPLICIT_INSTANTIATION                                                       \
          __attribute__((__abi_tag__(_LIBCPP_TOSTRING(_LIBCPP_VERSIONED_IDENTIFIER))))
#  else
#    define _LIBCPP_HIDE_FROM_ABI _LIBCPP_HIDDEN _LIBCPP_EXCLUDE_FROM_EXPLICIT_INSTANTIATION
#  endif
#  define _LIBCPP_HIDE_FROM_ABI_VIRTUAL _LIBCPP_HIDDEN _LIBCPP_EXCLUDE_FROM_EXPLICIT_INSTANTIATION

// This macro provides a HIDE_FROM_ABI equivalent that can be applied to extern
// "C" function, as those lack mangling.
#  define _LIBCPP_HIDE_FROM_ABI_C _LIBCPP_HIDDEN _LIBCPP_EXCLUDE_FROM_EXPLICIT_INSTANTIATION

#  ifdef _LIBCPP_BUILDING_LIBRARY
#    if _LIBCPP_ABI_VERSION > 1
#      define _LIBCPP_HIDE_FROM_ABI_AFTER_V1 _LIBCPP_HIDE_FROM_ABI
#    else
#      define _LIBCPP_HIDE_FROM_ABI_AFTER_V1
#    endif
#  else
#    define _LIBCPP_HIDE_FROM_ABI_AFTER_V1 _LIBCPP_HIDE_FROM_ABI
#  endif

// Just so we can migrate to the new macros gradually.
#  define _LIBCPP_INLINE_VISIBILITY _LIBCPP_HIDE_FROM_ABI

// Inline namespaces are available in Clang/GCC/MSVC regardless of C++ dialect.
// clang-format off
#  define _LIBCPP_BEGIN_NAMESPACE_STD namespace std { inline namespace _LIBCPP_ABI_NAMESPACE {
#  define _LIBCPP_END_NAMESPACE_STD }}
#  define _VSTD std

_LIBCPP_BEGIN_NAMESPACE_STD _LIBCPP_END_NAMESPACE_STD

#  if _LIBCPP_STD_VER >= 17
#    define _LIBCPP_BEGIN_NAMESPACE_FILESYSTEM                                                                         \
       _LIBCPP_BEGIN_NAMESPACE_STD inline namespace __fs { namespace filesystem {
#  else
#    define _LIBCPP_BEGIN_NAMESPACE_FILESYSTEM                                                                         \
      _LIBCPP_BEGIN_NAMESPACE_STD namespace __fs { namespace filesystem {
#  endif

#  define _LIBCPP_END_NAMESPACE_FILESYSTEM _LIBCPP_END_NAMESPACE_STD }}
// clang-format on

#  define _VSTD_FS std::__fs::filesystem

#  if __has_attribute(__enable_if__)
#    define _LIBCPP_PREFERRED_OVERLOAD __attribute__((__enable_if__(true, "")))
#  endif

#  ifndef __SIZEOF_INT128__
#    define _LIBCPP_HAS_NO_INT128
#  endif

#  if __has_attribute(__malloc__)
#    define _LIBCPP_NOALIAS __attribute__((__malloc__))
#  else
#    define _LIBCPP_NOALIAS
#  endif

#  if __has_attribute(__using_if_exists__)
#    define _LIBCPP_USING_IF_EXISTS __attribute__((__using_if_exists__))
#  else
#    define _LIBCPP_USING_IF_EXISTS
#  endif

#  ifdef _LIBCPP_CXX03_LANG
#    define _LIBCPP_DECLARE_STRONG_ENUM(x)                                                                             \
      struct _LIBCPP_TYPE_VIS x {                                                                                      \
        enum __lx
// clang-format off
#    define _LIBCPP_DECLARE_STRONG_ENUM_EPILOG(x)                                                                      \
      __lx __v_;                                                                                                       \
      _LIBCPP_INLINE_VISIBILITY x(__lx __v) : __v_(__v) {}                                                             \
      _LIBCPP_INLINE_VISIBILITY explicit x(int __v) : __v_(static_cast<__lx>(__v)) {}                                  \
      _LIBCPP_INLINE_VISIBILITY operator int() const { return __v_; }                                                  \
      };
// clang-format on

#  else // _LIBCPP_CXX03_LANG
#    define _LIBCPP_DECLARE_STRONG_ENUM(x) enum class _LIBCPP_ENUM_VIS x
#    define _LIBCPP_DECLARE_STRONG_ENUM_EPILOG(x)
#  endif // _LIBCPP_CXX03_LANG

#  if defined(__APPLE__) || defined(__FreeBSD__) || defined(_LIBCPP_MSVCRT_LIKE) || defined(__sun__) ||                \
      defined(__NetBSD__)
#    define _LIBCPP_LOCALE__L_EXTENSIONS 1
#  endif

#  ifdef __FreeBSD__
#    define _DECLARE_C99_LDBL_MATH 1
#  endif

// If we are getting operator new from the MSVC CRT, then allocation overloads
// for align_val_t were added in 19.12, aka VS 2017 version 15.3.
#  if defined(_LIBCPP_MSVCRT) && defined(_MSC_VER) && _MSC_VER < 1912
#    define _LIBCPP_HAS_NO_LIBRARY_ALIGNED_ALLOCATION
#  elif defined(_LIBCPP_ABI_VCRUNTIME) && !defined(__cpp_aligned_new)
// We're deferring to Microsoft's STL to provide aligned new et al. We don't
// have it unless the language feature test macro is defined.
#    define _LIBCPP_HAS_NO_LIBRARY_ALIGNED_ALLOCATION
#  elif defined(__MVS__)
#    define _LIBCPP_HAS_NO_LIBRARY_ALIGNED_ALLOCATION
#  endif

#  if defined(_LIBCPP_HAS_NO_LIBRARY_ALIGNED_ALLOCATION) || (!defined(__cpp_aligned_new) || __cpp_aligned_new < 201606)
#    define _LIBCPP_HAS_NO_ALIGNED_ALLOCATION
#  endif

// It is not yet possible to use aligned_alloc() on all Apple platforms since
// 10.15 was the first version to ship an implementation of aligned_alloc().
#  if defined(__APPLE__)
#    if (defined(__ENVIRONMENT_MAC_OS_X_VERSION_MIN_REQUIRED__) &&                                                     \
         __ENVIRONMENT_MAC_OS_X_VERSION_MIN_REQUIRED__ < 101500)
#      define _LIBCPP_HAS_NO_C11_ALIGNED_ALLOC
#    endif
#  elif defined(__ANDROID__) && __ANDROID_API__ < 28
// Android only provides aligned_alloc when targeting API 28 or higher.
#    define _LIBCPP_HAS_NO_C11_ALIGNED_ALLOC
#  endif

#  if defined(__APPLE__) || defined(__FreeBSD__)
#    define _LIBCPP_HAS_DEFAULTRUNELOCALE
#  endif

#  if defined(__APPLE__) || defined(__FreeBSD__) || defined(__sun__)
#    define _LIBCPP_WCTYPE_IS_MASK
#  endif

#  if _LIBCPP_STD_VER <= 17 || !defined(__cpp_char8_t)
#    define _LIBCPP_HAS_NO_CHAR8_T
#  endif

// Deprecation macros.
//
// Deprecations warnings are always enabled, except when users explicitly opt-out
// by defining _LIBCPP_DISABLE_DEPRECATION_WARNINGS.
#  if !defined(_LIBCPP_DISABLE_DEPRECATION_WARNINGS)
#    if __has_attribute(__deprecated__)
#      define _LIBCPP_DEPRECATED __attribute__((__deprecated__))
#      define _LIBCPP_DEPRECATED_(m) __attribute__((__deprecated__(m)))
#    elif _LIBCPP_STD_VER >= 14
#      define _LIBCPP_DEPRECATED [[deprecated]]
#      define _LIBCPP_DEPRECATED_(m) [[deprecated(m)]]
#    else
#      define _LIBCPP_DEPRECATED
#      define _LIBCPP_DEPRECATED_(m)
#    endif
#  else
#    define _LIBCPP_DEPRECATED
#    define _LIBCPP_DEPRECATED_(m)
#  endif

#  if !defined(_LIBCPP_CXX03_LANG)
#    define _LIBCPP_DEPRECATED_IN_CXX11 _LIBCPP_DEPRECATED
#  else
#    define _LIBCPP_DEPRECATED_IN_CXX11
#  endif

#  if _LIBCPP_STD_VER >= 14
#    define _LIBCPP_DEPRECATED_IN_CXX14 _LIBCPP_DEPRECATED
#  else
#    define _LIBCPP_DEPRECATED_IN_CXX14
#  endif

#  if _LIBCPP_STD_VER >= 17
#    define _LIBCPP_DEPRECATED_IN_CXX17 _LIBCPP_DEPRECATED
#  else
#    define _LIBCPP_DEPRECATED_IN_CXX17
#  endif

#  if _LIBCPP_STD_VER >= 20
#    define _LIBCPP_DEPRECATED_IN_CXX20 _LIBCPP_DEPRECATED
#  else
#    define _LIBCPP_DEPRECATED_IN_CXX20
#  endif

#if _LIBCPP_STD_VER >= 23
#  define _LIBCPP_DEPRECATED_IN_CXX23 _LIBCPP_DEPRECATED
#else
#  define _LIBCPP_DEPRECATED_IN_CXX23
#endif

#  if !defined(_LIBCPP_HAS_NO_CHAR8_T)
#    define _LIBCPP_DEPRECATED_WITH_CHAR8_T _LIBCPP_DEPRECATED
#  else
#    define _LIBCPP_DEPRECATED_WITH_CHAR8_T
#  endif

// Macros to enter and leave a state where deprecation warnings are suppressed.
#  if defined(_LIBCPP_COMPILER_CLANG_BASED) || defined(_LIBCPP_COMPILER_GCC)
#    define _LIBCPP_SUPPRESS_DEPRECATED_PUSH                                                                           \
      _Pragma("GCC diagnostic push") _Pragma("GCC diagnostic ignored \"-Wdeprecated\"")                                \
          _Pragma("GCC diagnostic ignored \"-Wdeprecated-declarations\"")
#    define _LIBCPP_SUPPRESS_DEPRECATED_POP _Pragma("GCC diagnostic pop")
#  else
#    define _LIBCPP_SUPPRESS_DEPRECATED_PUSH
#    define _LIBCPP_SUPPRESS_DEPRECATED_POP
#  endif

#  if _LIBCPP_STD_VER <= 11
#    define _LIBCPP_EXPLICIT_SINCE_CXX14
#  else
#    define _LIBCPP_EXPLICIT_SINCE_CXX14 explicit
#  endif

#  if _LIBCPP_STD_VER >= 14
#    define _LIBCPP_CONSTEXPR_SINCE_CXX14 constexpr
#  else
#    define _LIBCPP_CONSTEXPR_SINCE_CXX14
#  endif

#  if _LIBCPP_STD_VER >= 17
#    define _LIBCPP_CONSTEXPR_SINCE_CXX17 constexpr
#  else
#    define _LIBCPP_CONSTEXPR_SINCE_CXX17
#  endif

#  if _LIBCPP_STD_VER >= 20
#    define _LIBCPP_CONSTEXPR_SINCE_CXX20 constexpr
#  else
#    define _LIBCPP_CONSTEXPR_SINCE_CXX20
#  endif

#  if _LIBCPP_STD_VER >= 23
#    define _LIBCPP_CONSTEXPR_SINCE_CXX23 constexpr
#  else
#    define _LIBCPP_CONSTEXPR_SINCE_CXX23
#  endif

#  if __has_cpp_attribute(nodiscard)
#    define _LIBCPP_NODISCARD [[nodiscard]]
#  else
// We can't use GCC's [[gnu::warn_unused_result]] and
// __attribute__((warn_unused_result)), because GCC does not silence them via
// (void) cast.
#    define _LIBCPP_NODISCARD
#  endif

// _LIBCPP_NODISCARD_EXT may be used to apply [[nodiscard]] to entities not
// specified as such as an extension.
#  if !defined(_LIBCPP_DISABLE_NODISCARD_EXT)
#    define _LIBCPP_NODISCARD_EXT _LIBCPP_NODISCARD
#  else
#    define _LIBCPP_NODISCARD_EXT
#  endif

#  if _LIBCPP_STD_VER >= 20 || !defined(_LIBCPP_DISABLE_NODISCARD_EXT)
#    define _LIBCPP_NODISCARD_AFTER_CXX17 _LIBCPP_NODISCARD
#  else
#    define _LIBCPP_NODISCARD_AFTER_CXX17
#  endif

#  if __has_attribute(__no_destroy__)
#    define _LIBCPP_NO_DESTROY __attribute__((__no_destroy__))
#  else
#    define _LIBCPP_NO_DESTROY
#  endif

#  ifndef _LIBCPP_HAS_NO_ASAN
    extern "C" _LIBCPP_FUNC_VIS void
    __sanitizer_annotate_contiguous_container(const void*, const void*, const void*, const void*);
#  endif

// Try to find out if RTTI is disabled.
#  if !defined(__cpp_rtti) || __cpp_rtti < 199711L
#    define _LIBCPP_HAS_NO_RTTI
#  endif

#  ifndef _LIBCPP_WEAK
#    define _LIBCPP_WEAK __attribute__((__weak__))
#  endif

// Thread API
// clang-format off
#  if !defined(_LIBCPP_HAS_NO_THREADS) &&                                                                              \
      !defined(_LIBCPP_HAS_THREAD_API_PTHREAD) &&                                                                      \
      !defined(_LIBCPP_HAS_THREAD_API_WIN32) &&                                                                        \
      !defined(_LIBCPP_HAS_THREAD_API_EXTERNAL)

#    if defined(__FreeBSD__) ||                                                                                        \
        defined(__wasi__) ||                                                                                           \
        defined(__NetBSD__) ||                                                                                         \
        defined(__OpenBSD__) ||                                                                                        \
        defined(__NuttX__) ||                                                                                          \
        defined(__linux__) ||                                                                                          \
        defined(__GNU__) ||                                                                                            \
        defined(__APPLE__) ||                                                                                          \
        defined(__sun__) ||                                                                                            \
        defined(__MVS__) ||                                                                                            \
        defined(_AIX) ||                                                                                               \
        defined(__EMSCRIPTEN__)
// clang-format on
#      define _LIBCPP_HAS_THREAD_API_PTHREAD
#    elif defined(__Fuchsia__)
// TODO(44575): Switch to C11 thread API when possible.
#      define _LIBCPP_HAS_THREAD_API_PTHREAD
#    elif defined(_LIBCPP_WIN32API)
#      define _LIBCPP_HAS_THREAD_API_WIN32
#    else
#      error "No thread API"
#    endif // _LIBCPP_HAS_THREAD_API
#  endif   // _LIBCPP_HAS_NO_THREADS

#  if defined(_LIBCPP_HAS_THREAD_API_PTHREAD)
#    if defined(__ANDROID__) && __ANDROID_API__ >= 30
#      define _LIBCPP_HAS_COND_CLOCKWAIT
#    elif defined(_LIBCPP_GLIBC_PREREQ)
#      if _LIBCPP_GLIBC_PREREQ(2, 30)
#        define _LIBCPP_HAS_COND_CLOCKWAIT
#      endif
#    endif
#  endif

#  if defined(_LIBCPP_HAS_NO_THREADS) && defined(_LIBCPP_HAS_THREAD_API_PTHREAD)
#    error _LIBCPP_HAS_THREAD_API_PTHREAD may only be defined when \
       _LIBCPP_HAS_NO_THREADS is not defined.
#  endif

#  if defined(_LIBCPP_HAS_NO_THREADS) && defined(_LIBCPP_HAS_THREAD_API_EXTERNAL)
#    error _LIBCPP_HAS_THREAD_API_EXTERNAL may not be defined when \
       _LIBCPP_HAS_NO_THREADS is defined.
#  endif

#  if defined(_LIBCPP_HAS_NO_MONOTONIC_CLOCK) && !defined(_LIBCPP_HAS_NO_THREADS)
#    error _LIBCPP_HAS_NO_MONOTONIC_CLOCK may only be defined when \
       _LIBCPP_HAS_NO_THREADS is defined.
#  endif

#  if !defined(_LIBCPP_HAS_NO_THREADS) && !defined(__STDCPP_THREADS__)
#    define __STDCPP_THREADS__ 1
#  endif

// The glibc and Bionic implementation of pthreads implements
// pthread_mutex_destroy as nop for regular mutexes. Additionally, Win32
// mutexes have no destroy mechanism.
//
// This optimization can't be performed on Apple platforms, where
// pthread_mutex_destroy can allow the kernel to release resources.
// See https://llvm.org/D64298 for details.
//
// TODO(EricWF): Enable this optimization on Bionic after speaking to their
//               respective stakeholders.
// clang-format off
#  if (defined(_LIBCPP_HAS_THREAD_API_PTHREAD) && defined(__GLIBC__)) ||                                               \
      (defined(_LIBCPP_HAS_THREAD_API_C11) && defined(__Fuchsia__)) ||                                                 \
       defined(_LIBCPP_HAS_THREAD_API_WIN32)
// clang-format on
#    define _LIBCPP_HAS_TRIVIAL_MUTEX_DESTRUCTION
#  endif

// Destroying a condvar is a nop on Windows.
//
// This optimization can't be performed on Apple platforms, where
// pthread_cond_destroy can allow the kernel to release resources.
// See https://llvm.org/D64298 for details.
//
// TODO(EricWF): This is potentially true for some pthread implementations
// as well.
#  if (defined(_LIBCPP_HAS_THREAD_API_C11) && defined(__Fuchsia__)) || defined(_LIBCPP_HAS_THREAD_API_WIN32)
#    define _LIBCPP_HAS_TRIVIAL_CONDVAR_DESTRUCTION
#  endif

// Some systems do not provide gets() in their C library, for security reasons.
#  if defined(_LIBCPP_MSVCRT) || (defined(__FreeBSD_version) && __FreeBSD_version >= 1300043) || defined(__OpenBSD__)
#    define _LIBCPP_C_HAS_NO_GETS
#  endif

#  if defined(__BIONIC__) || defined(__NuttX__) || defined(__Fuchsia__) || defined(__wasi__) ||                        \
      defined(_LIBCPP_HAS_MUSL_LIBC) || defined(__OpenBSD__)
#    define _LIBCPP_PROVIDES_DEFAULT_RUNE_TABLE
#  endif

#  if __has_feature(cxx_atomic) || __has_extension(c_atomic) || __has_keyword(_Atomic)
#    define _LIBCPP_HAS_C_ATOMIC_IMP
#  elif defined(_LIBCPP_COMPILER_GCC)
#    define _LIBCPP_HAS_GCC_ATOMIC_IMP
#  endif

#  if !defined(_LIBCPP_HAS_C_ATOMIC_IMP) && !defined(_LIBCPP_HAS_GCC_ATOMIC_IMP) &&                                    \
      !defined(_LIBCPP_HAS_EXTERNAL_ATOMIC_IMP)
#    define _LIBCPP_HAS_NO_ATOMIC_HEADER
#  else
#    ifndef _LIBCPP_ATOMIC_FLAG_TYPE
#      define _LIBCPP_ATOMIC_FLAG_TYPE bool
#    endif
#    ifdef _LIBCPP_FREESTANDING
#      define _LIBCPP_ATOMIC_ONLY_USE_BUILTINS
#    endif
#  endif

#  ifndef _LIBCPP_DISABLE_UBSAN_UNSIGNED_INTEGER_CHECK
#    define _LIBCPP_DISABLE_UBSAN_UNSIGNED_INTEGER_CHECK
#  endif

#  if defined(_LIBCPP_ENABLE_THREAD_SAFETY_ANNOTATIONS)
#    if defined(__clang__) && __has_attribute(acquire_capability)
// Work around the attribute handling in clang.  When both __declspec and
// __attribute__ are present, the processing goes awry preventing the definition
// of the types. In MinGW mode, __declspec evaluates to __attribute__, and thus
// combining the two does work.
#      if !defined(_MSC_VER)
#        define _LIBCPP_HAS_THREAD_SAFETY_ANNOTATIONS
#      endif
#    endif
#  endif

#  ifdef _LIBCPP_HAS_THREAD_SAFETY_ANNOTATIONS
#    define _LIBCPP_THREAD_SAFETY_ANNOTATION(x) __attribute__((x))
#  else
#    define _LIBCPP_THREAD_SAFETY_ANNOTATION(x)
#  endif

#  if _LIBCPP_STD_VER >= 20
#    define _LIBCPP_CONSTINIT constinit
#  elif __has_attribute(__require_constant_initialization__)
#    define _LIBCPP_CONSTINIT __attribute__((__require_constant_initialization__))
#  else
#    define _LIBCPP_CONSTINIT
#  endif

#  if __has_attribute(__diagnose_if__) && !defined(_LIBCPP_DISABLE_ADDITIONAL_DIAGNOSTICS)
#    define _LIBCPP_DIAGNOSE_WARNING(...) __attribute__((__diagnose_if__(__VA_ARGS__, "warning")))
#  else
#    define _LIBCPP_DIAGNOSE_WARNING(...)
#  endif

// Use a function like macro to imply that it must be followed by a semicolon
#  if __has_cpp_attribute(fallthrough)
#    define _LIBCPP_FALLTHROUGH() [[fallthrough]]
#  elif __has_attribute(__fallthrough__)
#    define _LIBCPP_FALLTHROUGH() __attribute__((__fallthrough__))
#  else
#    define _LIBCPP_FALLTHROUGH() ((void)0)
#  endif

#  if __has_cpp_attribute(_Clang::__lifetimebound__)
#    define _LIBCPP_LIFETIMEBOUND [[_Clang::__lifetimebound__]]
#  else
#    define _LIBCPP_LIFETIMEBOUND
#  endif

#  if __has_attribute(__nodebug__)
#    define _LIBCPP_NODEBUG __attribute__((__nodebug__))
#  else
#    define _LIBCPP_NODEBUG
#  endif

#  if __has_attribute(__standalone_debug__)
#    define _LIBCPP_STANDALONE_DEBUG __attribute__((__standalone_debug__))
#  else
#    define _LIBCPP_STANDALONE_DEBUG
#  endif

#  if __has_attribute(__preferred_name__)
#    define _LIBCPP_PREFERRED_NAME(x) __attribute__((__preferred_name__(x)))
#  else
#    define _LIBCPP_PREFERRED_NAME(x)
#  endif

// We often repeat things just for handling wide characters in the library.
// When wide characters are disabled, it can be useful to have a quick way of
// disabling it without having to resort to #if-#endif, which has a larger
// impact on readability.
#  if defined(_LIBCPP_HAS_NO_WIDE_CHARACTERS)
#    define _LIBCPP_IF_WIDE_CHARACTERS(...)
#  else
#    define _LIBCPP_IF_WIDE_CHARACTERS(...) __VA_ARGS__
#  endif

#  if defined(_LIBCPP_ABI_MICROSOFT) && __has_declspec_attribute(empty_bases)
#    define _LIBCPP_DECLSPEC_EMPTY_BASES __declspec(empty_bases)
#  else
#    define _LIBCPP_DECLSPEC_EMPTY_BASES
#  endif

#  if defined(_LIBCPP_ENABLE_CXX17_REMOVED_FEATURES)
#    define _LIBCPP_ENABLE_CXX17_REMOVED_AUTO_PTR
#    define _LIBCPP_ENABLE_CXX17_REMOVED_BINDERS
#    define _LIBCPP_ENABLE_CXX17_REMOVED_RANDOM_SHUFFLE
#    define _LIBCPP_ENABLE_CXX17_REMOVED_UNEXPECTED_FUNCTIONS
#    define _LIBCPP_ENABLE_CXX17_REMOVED_UNARY_BINARY_FUNCTION
#  endif // _LIBCPP_ENABLE_CXX17_REMOVED_FEATURES

#  if defined(_LIBCPP_ENABLE_CXX20_REMOVED_FEATURES)
#    define _LIBCPP_ENABLE_CXX20_REMOVED_ALLOCATOR_MEMBERS
#    define _LIBCPP_ENABLE_CXX20_REMOVED_ALLOCATOR_VOID_SPECIALIZATION
#    define _LIBCPP_ENABLE_CXX20_REMOVED_BINDER_TYPEDEFS
#    define _LIBCPP_ENABLE_CXX20_REMOVED_NEGATORS
#    define _LIBCPP_ENABLE_CXX20_REMOVED_RAW_STORAGE_ITERATOR
#    define _LIBCPP_ENABLE_CXX20_REMOVED_TYPE_TRAITS
#  endif // _LIBCPP_ENABLE_CXX20_REMOVED_FEATURES

#  define _LIBCPP_PUSH_MACROS _Pragma("push_macro(\"min\")") _Pragma("push_macro(\"max\")")
#  define _LIBCPP_POP_MACROS _Pragma("pop_macro(\"min\")") _Pragma("pop_macro(\"max\")")

#  ifndef _LIBCPP_NO_AUTO_LINK
#    if defined(_LIBCPP_ABI_MICROSOFT) && !defined(_LIBCPP_BUILDING_LIBRARY)
#      if !defined(_LIBCPP_DISABLE_VISIBILITY_ANNOTATIONS)
#        pragma comment(lib, "c++.lib")
#      else
#        pragma comment(lib, "libc++.lib")
#      endif
#    endif // defined(_LIBCPP_ABI_MICROSOFT) && !defined(_LIBCPP_BUILDING_LIBRARY)
#  endif   // _LIBCPP_NO_AUTO_LINK

// Configures the fopen close-on-exec mode character, if any. This string will
// be appended to any mode string used by fstream for fopen/fdopen.
//
// Not all platforms support this, but it helps avoid fd-leaks on platforms that
// do.
#  if defined(__BIONIC__)
#    define _LIBCPP_FOPEN_CLOEXEC_MODE "e"
#  else
#    define _LIBCPP_FOPEN_CLOEXEC_MODE
#  endif

// Support for _FILE_OFFSET_BITS=64 landed gradually in Android, so the full set
// of functions used in cstdio may not be available for low API levels when
// using 64-bit file offsets on LP32.
#  if defined(__BIONIC__) && defined(__USE_FILE_OFFSET64) && __ANDROID_API__ < 24
#    define _LIBCPP_HAS_NO_FGETPOS_FSETPOS
#  endif

#  if __has_attribute(__init_priority__)
#    define _LIBCPP_INIT_PRIORITY_MAX __attribute__((__init_priority__(100)))
#  else
#    define _LIBCPP_INIT_PRIORITY_MAX
#  endif

#  if __has_attribute(__format__)
// The attribute uses 1-based indices for ordinary and static member functions.
// The attribute uses 2-based indices for non-static member functions.
#    define _LIBCPP_ATTRIBUTE_FORMAT(archetype, format_string_index, first_format_arg_index)                           \
      __attribute__((__format__(archetype, format_string_index, first_format_arg_index)))
#  else
#    define _LIBCPP_ATTRIBUTE_FORMAT(archetype, format_string_index, first_format_arg_index) /* nothing */
#  endif

#  if __has_cpp_attribute(msvc::no_unique_address)
// MSVC implements [[no_unique_address]] as a silent no-op currently.
// (If/when MSVC breaks its C++ ABI, it will be changed to work as intended.)
// However, MSVC implements [[msvc::no_unique_address]] which does what
// [[no_unique_address]] is supposed to do, in general.

// Clang-cl does not yet (14.0) implement either [[no_unique_address]] or
// [[msvc::no_unique_address]] though. If/when it does implement
// [[msvc::no_unique_address]], this should be preferred though.
#    define _LIBCPP_NO_UNIQUE_ADDRESS [[msvc::no_unique_address]]
#  elif __has_cpp_attribute(no_unique_address)
#    define _LIBCPP_NO_UNIQUE_ADDRESS [[no_unique_address]]
#  else
#    define _LIBCPP_NO_UNIQUE_ADDRESS /* nothing */
// Note that this can be replaced by #error as soon as clang-cl
// implements msvc::no_unique_address, since there should be no C++20
// compiler that doesn't support one of the two attributes at that point.
// We generally don't want to use this macro outside of C++20-only code,
// because using it conditionally in one language version only would make
// the ABI inconsistent.
#  endif

#  ifdef _LIBCPP_COMPILER_CLANG_BASED
#    define _LIBCPP_DIAGNOSTIC_PUSH _Pragma("clang diagnostic push")
#    define _LIBCPP_DIAGNOSTIC_POP _Pragma("clang diagnostic pop")
#    define _LIBCPP_CLANG_DIAGNOSTIC_IGNORED(str) _Pragma(_LIBCPP_TOSTRING(clang diagnostic ignored str))
#    define _LIBCPP_GCC_DIAGNOSTIC_IGNORED(str)
#  elif defined(_LIBCPP_COMPILER_GCC)
#    define _LIBCPP_DIAGNOSTIC_PUSH _Pragma("GCC diagnostic push")
#    define _LIBCPP_DIAGNOSTIC_POP _Pragma("GCC diagnostic pop")
#    define _LIBCPP_CLANG_DIAGNOSTIC_IGNORED(str)
#    define _LIBCPP_GCC_DIAGNOSTIC_IGNORED(str) _Pragma(_LIBCPP_TOSTRING(GCC diagnostic ignored str))
#  else
#    define _LIBCPP_DIAGNOSTIC_PUSH
#    define _LIBCPP_DIAGNOSTIC_POP
#    define _LIBCPP_CLANG_DIAGNOSTIC_IGNORED(str)
#    define _LIBCPP_GCC_DIAGNOSTIC_IGNORED(str)
#  endif

#  if defined(_AIX) && !defined(_LIBCPP_COMPILER_GCC)
#    define _LIBCPP_PACKED_BYTE_FOR_AIX _Pragma("pack(1)")
#    define _LIBCPP_PACKED_BYTE_FOR_AIX_END _Pragma("pack(pop)")
#  else
#    define _LIBCPP_PACKED_BYTE_FOR_AIX     /* empty */
#    define _LIBCPP_PACKED_BYTE_FOR_AIX_END /* empty */
#  endif

#  if __has_attribute(__packed__)
#    define _LIBCPP_PACKED __attribute__((__packed__))
#  else
#    define _LIBCPP_PACKED
#  endif

// c8rtomb() and mbrtoc8() were added in C++20 and C23. Support for these
// functions is gradually being added to existing C libraries. The conditions
// below check for known C library versions and conditions under which these
// functions are declared by the C library.
#  define _LIBCPP_HAS_NO_C8RTOMB_MBRTOC8
// GNU libc 2.36 and newer declare c8rtomb() and mbrtoc8() in C++ modes if
// __cpp_char8_t is defined or if C2X extensions are enabled. Determining
// the latter depends on internal GNU libc details that are not appropriate
// to depend on here, so any declarations present when __cpp_char8_t is not
// defined are ignored.
#  if defined(_LIBCPP_GLIBC_PREREQ)
#    if _LIBCPP_GLIBC_PREREQ(2, 36) && defined(__cpp_char8_t)
#      undef _LIBCPP_HAS_NO_C8RTOMB_MBRTOC8
#    endif
#  endif

// There are a handful of public standard library types that are intended to
// support CTAD but don't need any explicit deduction guides to do so. This
// macro is used to mark them as such, which suppresses the
// '-Wctad-maybe-unsupported' compiler warning when CTAD is used in user code
// with these classes.
#  if _LIBCPP_STD_VER >= 17
#    ifdef _LIBCPP_COMPILER_CLANG_BASED
#      define _LIBCPP_CTAD_SUPPORTED_FOR_TYPE(_ClassName)                                                              \
        template <class... _Tag>                                                                                       \
        [[maybe_unused]] _ClassName(typename _Tag::__allow_ctad...)->_ClassName<_Tag...>
#    else
#      define _LIBCPP_CTAD_SUPPORTED_FOR_TYPE(ClassName)                                                               \
        template <class... _Tag>                                                                                       \
        ClassName(typename _Tag::__allow_ctad...)->ClassName<_Tag...>
#    endif
#  else
#    define _LIBCPP_CTAD_SUPPORTED_FOR_TYPE(_ClassName) static_assert(true, "")
#  endif

// TODO(varconst): currently, there are bugs in Clang's intrinsics when handling Objective-C++ `id`, so don't use
// compiler intrinsics in the Objective-C++ mode.
#  ifdef __OBJC__
#    define _LIBCPP_WORKAROUND_OBJCXX_COMPILER_INTRINSICS
#  endif

#endif // __cplusplus

#endif // _LIBCPP___CONFIG


#if !defined(_LIBCPP_HAS_NO_PRAGMA_SYSTEM_HEADER)
#  pragma GCC system_header
#endif

#define _LIBCPP_BEGIN_NAMESPACE_EXPERIMENTAL namespace std { namespace experimental {
#define _LIBCPP_END_NAMESPACE_EXPERIMENTAL  } }
#define _VSTD_EXPERIMENTAL std::experimental

#define _LIBCPP_BEGIN_NAMESPACE_LFTS _LIBCPP_BEGIN_NAMESPACE_EXPERIMENTAL inline namespace fundamentals_v1 {
#define _LIBCPP_END_NAMESPACE_LFTS  } } }
#define _VSTD_LFTS _VSTD_EXPERIMENTAL::fundamentals_v1

#define _LIBCPP_BEGIN_NAMESPACE_LFTS_V2 _LIBCPP_BEGIN_NAMESPACE_EXPERIMENTAL inline namespace fundamentals_v2 {
#define _LIBCPP_END_NAMESPACE_LFTS_V2  } } }
#define _VSTD_LFTS_V2 _VSTD_EXPERIMENTAL::fundamentals_v2

#define _LIBCPP_BEGIN_NAMESPACE_LFTS_PMR _LIBCPP_BEGIN_NAMESPACE_LFTS namespace pmr {
#define _LIBCPP_END_NAMESPACE_LFTS_PMR _LIBCPP_END_NAMESPACE_LFTS }
#define _VSTD_LFTS_PMR _VSTD_LFTS::pmr

#define _LIBCPP_BEGIN_NAMESPACE_EXPERIMENTAL_SIMD \
    _LIBCPP_BEGIN_NAMESPACE_EXPERIMENTAL inline namespace parallelism_v2 {

#define _LIBCPP_END_NAMESPACE_EXPERIMENTAL_SIMD \
    } _LIBCPP_END_NAMESPACE_EXPERIMENTAL

#define _LIBCPP_BEGIN_NAMESPACE_EXPERIMENTAL_SIMD_ABI \
    _LIBCPP_BEGIN_NAMESPACE_EXPERIMENTAL_SIMD namespace simd_abi {

#define _LIBCPP_END_NAMESPACE_EXPERIMENTAL_SIMD_ABI \
    } _LIBCPP_END_NAMESPACE_EXPERIMENTAL_SIMD

// TODO: support more targets
#if defined(__AVX__)
#define _LIBCPP_NATIVE_SIMD_WIDTH_IN_BYTES 32
#else
#define _LIBCPP_NATIVE_SIMD_WIDTH_IN_BYTES 16
#endif

#endif


// file: experimental/__simd/config.h

#ifndef _LIBCPP_EXPERIMENTAL___SIMD_CONFIG_H
#define _LIBCPP_EXPERIMENTAL___SIMD_CONFIG_H

_LIBCPP_BEGIN_NAMESPACE_EXPERIMENTAL_SIMD

#ifdef __MMX__
#  define _LIBCPP_SIMD_HAVE_MMX 1
#else
#  define _LIBCPP_SIMD_HAVE_MMX 0
#endif

#ifdef __SSE__
#  define _LIBCPP_SIMD_HAVE_SSE 1
#else
#  define _LIBCPP_SIMD_HAVE_SSE 0
#endif

#ifdef __SSE2__
#  define _LIBCPP_SIMD_HAVE_SSE2 1
#else
#  define _LIBCPP_SIMD_HAVE_SSE2 0
#endif

#ifdef __SSE3__
#  define _LIBCPP_SIMD_HAVE_SSE3 1
#else
#  define _LIBCPP_SIMD_HAVE_SSE3 0
#endif

#ifdef __SSSE3__
#  define _LIBCPP_SIMD_HAVE_SSSE3 1
#else
#  define _LIBCPP_SIMD_HAVE_SSSE3 0
#endif

#ifdef __SSE4_1__
#  define _LIBCPP_SIMD_HAVE_SSE4_1 1
#else
#  define _LIBCPP_SIMD_HAVE_SSE4_1 0
#endif

#ifdef __SSE4_2__
#  define _LIBCPP_SIMD_HAVE_SSE4_2 1
#else
#  define _LIBCPP_SIMD_HAVE_SSE4_2 0
#endif

#ifdef __XOP__
#  define _LIBCPP_SIMD_HAVE_XOP 1
#else
#  define _LIBCPP_SIMD_HAVE_XOP 0
#endif

#ifdef __AVX__
#  define _LIBCPP_SIMD_HAVE_AVX 1
#else
#  define _LIBCPP_SIMD_HAVE_AVX 0
#endif

#ifdef __AVX2__
#  define _LIBCPP_SIMD_HAVE_AVX2 1
#else
#  define _LIBCPP_SIMD_HAVE_AVX2 0
#endif

#ifdef __BMI__
#  define _LIBCPP_SIMD_HAVE_BMI1 1
#else
#  define _LIBCPP_SIMD_HAVE_BMI1 0
#endif

#ifdef __BMI2__
#  define _LIBCPP_SIMD_HAVE_BMI2 1
#else
#  define _LIBCPP_SIMD_HAVE_BMI2 0
#endif

#ifdef __LZCNT__
#  define _LIBCPP_SIMD_HAVE_LZCNT 1
#else
#  define _LIBCPP_SIMD_HAVE_LZCNT 0
#endif

#ifdef __SSE4A__
#  define _LIBCPP_SIMD_HAVE_SSE4A 1
#else
#  define _LIBCPP_SIMD_HAVE_SSE4A 0
#endif

#ifdef __FMA__
#  define _LIBCPP_SIMD_HAVE_FMA 1
#else
#  define _LIBCPP_SIMD_HAVE_FMA 0
#endif

#ifdef __FMA4__
#  define _LIBCPP_SIMD_HAVE_FMA4 1
#else
#  define _LIBCPP_SIMD_HAVE_FMA4 0
#endif

#ifdef __F16C__
#  define _LIBCPP_SIMD_HAVE_F16C 1
#else
#  define _LIBCPP_SIMD_HAVE_F16C 0
#endif

#ifdef __POPCNT__
#  define _LIBCPP_SIMD_HAVE_POPCNT 1
#else
#  define _LIBCPP_SIMD_HAVE_POPCNT 0
#endif

#ifdef __AVX512F__
#  define _LIBCPP_SIMD_HAVE_AVX512F 1
#else
#  define _LIBCPP_SIMD_HAVE_AVX512F 0
#endif

#ifdef __AVX512DQ__
#  define _LIBCPP_SIMD_HAVE_AVX512DQ 1
#else
#  define _LIBCPP_SIMD_HAVE_AVX512DQ 0
#endif

#ifdef __AVX512VL__
#  define _LIBCPP_SIMD_HAVE_AVX512VL 1
#else
#  define _LIBCPP_SIMD_HAVE_AVX512VL 0
#endif

#ifdef __AVX512BW__
#  define _LIBCPP_SIMD_HAVE_AVX512BW 1
#else
#  define _LIBCPP_SIMD_HAVE_AVX512BW 0
#endif

#if _LIBCPP_SIMD_HAVE_SSE
#  define _LIBCPP_SIMD_HAVE_SSE_ABI 1
#else
#  define _LIBCPP_SIMD_HAVE_SSE_ABI 0
#endif
#if _LIBCPP_SIMD_HAVE_SSE2
#  define _LIBCPP_SIMD_HAVE_FULL_SSE_ABI 1
#else
#  define _LIBCPP_SIMD_HAVE_FULL_SSE_ABI 0
#endif

#if _LIBCPP_SIMD_HAVE_AVX
#  define _LIBCPP_SIMD_HAVE_AVX_ABI 1
#else
#  define _LIBCPP_SIMD_HAVE_AVX_ABI 0
#endif
#if _LIBCPP_SIMD_HAVE_AVX2
#  define _LIBCPP_SIMD_HAVE_FULL_AVX_ABI 1
#else
#  define _LIBCPP_SIMD_HAVE_FULL_AVX_ABI 0
#endif

#if _LIBCPP_SIMD_HAVE_AVX512F
#  define _LIBCPP_SIMD_HAVE_AVX512_ABI 1
#else
#  define _LIBCPP_SIMD_HAVE_AVX512_ABI 0
#endif
#if _LIBCPP_SIMD_HAVE_AVX512BW
#  define _LIBCPP_SIMD_HAVE_FULL_AVX512_ABI 1
#else
#  define _LIBCPP_SIMD_HAVE_FULL_AVX512_ABI 0
#endif

#if _LIBCPP_SIMD_HAVE_SSE || _LIBCPP_SIMD_HAVE_MMX
#  define _LIBCPP_SIMD_X86INTRIN 1
#else
#  define _LIBCPP_SIMD_X86INTRIN 0
#endif

#ifdef __ARM_NEON
#  define _LIBCPP_SIMD_HAVE_NEON 1
#else
#  define _LIBCPP_SIMD_HAVE_NEON 0
#endif

#if defined __ARM_NEON && (__ARM_ARCH >= 8 || defined __aarch64__)
#  define _LIBCPP_SIMD_HAVE_NEON_A32 1
#else
#  define _LIBCPP_SIMD_HAVE_NEON_A32 0
#endif

#if defined __ARM_NEON && defined __aarch64__
#  define _LIBCPP_SIMD_HAVE_NEON_A64 1
#else
#  define _LIBCPP_SIMD_HAVE_NEON_A64 0
#endif

#ifdef _ARCH_PWR10
#  define _LIBCPP_SIMD_HAVE_POWER10VEC 1
#else
#  define _LIBCPP_SIMD_HAVE_POWER10VEC 0
#endif

#ifdef __POWER9_VECTOR__
#  define _LIBCPP_SIMD_HAVE_POWER9VEC 1
#else
#  define _LIBCPP_SIMD_HAVE_POWER9VEC 0
#endif

#ifdef __POWER8_VECTOR__
#  define _LIBCPP_SIMD_HAVE_POWER8VEC 1
#else
#  define _LIBCPP_SIMD_HAVE_POWER8VEC _LIBCPP_SIMD_HAVE_POWER9VEC
#endif

#ifdef __VSX__
#  define _LIBCPP_SIMD_HAVE_VSX 1
#else
#  define _LIBCPP_SIMD_HAVE_VSX _LIBCPP_SIMD_HAVE_POWER8VEC
#endif

#ifdef __ALTIVEC__
#  define _LIBCPP_SIMD_HAVE_PPC 1
#else
#  define _LIBCPP_SIMD_HAVE_PPC _LIBCPP_SIMD_HAVE_VSX
#endif

_LIBCPP_END_NAMESPACE_EXPERIMENTAL_SIMD

#endif // _LIBCPP_EXPERIMENTAL___SIMD_CONFIG_H



#ifndef _LIBCPP_EXPERIMENTAL___SIMD_SIMD_STORAGE_H
#define _LIBCPP_EXPERIMENTAL___SIMD_SIMD_STORAGE_H


_LIBCPP_BEGIN_NAMESPACE_EXPERIMENTAL_SIMD

template <class _Tp, class _Abi>
struct __simd_storage;

template <class _Tp, class _Abi>
struct __mask_storage;

template <class _Tp, class _Abi>
struct __simd_traits;

template <class _Tp, class _Abi>
struct __mask_traits;

_LIBCPP_END_NAMESPACE_EXPERIMENTAL_SIMD

#endif // _LIBCPP_EXPERIMENTAL___SIMD_SIMD_STORAGE_H


// file: exprimental/__simd/utility.h
#ifndef _LIBCPP_EXPERIMENTAL___SIMD_UTILITY_H
#define _LIBCPP_EXPERIMENTAL___SIMD_UTILITY_H

#include <cstdint>
#include <tuple>
#include <type_traits> // fix git rebase error

_LIBCPP_BEGIN_NAMESPACE_EXPERIMENTAL_SIMD

class _Bool {
  const bool __v;

public:
  constexpr _Bool(bool __b) : __v(__b) {}
  _Bool(int) = delete;
  constexpr operator bool() const { return __v; }
};

// TODO: replace it by std::bit_ceil when bump to C++20
constexpr size_t __next_pow_of_2(size_t __val) {
  size_t __pow = 1;
  while (__pow < __val)
    __pow <<= 1;
  return __pow;
}

template <class _Tp>
auto __choose_mask_type() {
  if constexpr (sizeof(_Tp) == 1) {
    return uint8_t{};
  } else if constexpr (sizeof(_Tp) == 2) {
    return uint16_t{};
  } else if constexpr (sizeof(_Tp) == 4) {
    return uint32_t{};
  } else if constexpr (sizeof(_Tp) == 8) {
    return uint64_t{};
  }
#ifndef _LIBCPP_HAS_NO_INT128
  else if constexpr (sizeof(_Tp) == 16) {
    return __uint128_t{};
  }
#endif
}

template <class _Tp>
auto __set_all_bits(bool __v) {
  using _Up = decltype(__choose_mask_type<_Tp>());
  _Up __res = 0;
  for (unsigned long __i = 0; __i < __CHAR_BIT__ * sizeof(_Tp); __i++)
    __res |= static_cast<_Up>(__v) << __i;
  return __res;
}

template <class _To, class _From>
constexpr decltype(_To{declval<_From>()}, true) __is_non_narrowing_convertible_impl(_From) {
  return true;
}

template <class _To>
constexpr bool __is_non_narrowing_convertible_impl(...) {
  return false;
}

template <class _From, class _To>
constexpr bool __is_non_narrowing_arithmetic_convertible() {
  if constexpr (is_arithmetic_v<_To> && is_arithmetic_v<_From>)
    return __is_non_narrowing_convertible_impl<_To>(_From{});
  else
    return false;
}

template <class _Tp, class... _Args>
constexpr _Tp __variadic_sum(_Args... __args) {
  return (static_cast<_Tp>(__args) + ...);
}

template <class _Tp>
constexpr bool __is_vectorizable() {
  return is_arithmetic_v<_Tp> && !is_const_v<_Tp> && !is_volatile_v<_Tp> && !is_same_v<_Tp, bool>;
}

template <class _Tp, class _Up>
constexpr bool __can_broadcast() {
  return (is_arithmetic_v<_Up> && __is_non_narrowing_arithmetic_convertible<_Up, _Tp>()) ||
         (!is_arithmetic_v<_Up> && is_convertible_v<_Up, _Tp>) || is_same_v<remove_const_t<_Up>, int> ||
         (is_same_v<remove_const_t<_Up>, unsigned int> && is_unsigned_v<_Tp>);
}

template <class _Tp, class _Generator, size_t... __indicies>
constexpr decltype(forward_as_tuple(declval<_Generator>()(integral_constant<size_t, __indicies>())...), bool())
__can_generate(index_sequence<__indicies...>) {
  return !__variadic_sum<bool>(
      !__can_broadcast<_Tp, decltype(declval<_Generator>()(integral_constant<size_t, __indicies>()))>()...);
}

template <class _Tp, class _Generator>
bool __can_generate(...) {
  return false;
}

_LIBCPP_END_NAMESPACE_EXPERIMENTAL_SIMD

#endif // _LIBCPP_EXPERIMENTAL___SIMD_UTILITY_H





#ifndef _LIBCPP_EXPERIMENTAL___SIMD_SCALAR_H
#define _LIBCPP_EXPERIMENTAL___SIMD_SCALAR_H

#include <algorithm>

_LIBCPP_BEGIN_NAMESPACE_EXPERIMENTAL_SIMD_ABI

struct __scalar {
  static constexpr bool __is_abi_tag  = true;
  static constexpr size_t __simd_size = 1;
};

_LIBCPP_END_NAMESPACE_EXPERIMENTAL_SIMD_ABI

_LIBCPP_BEGIN_NAMESPACE_EXPERIMENTAL_SIMD

template <class _Tp>
struct __simd_storage<_Tp, simd_abi::__scalar> {
  _Tp __data;

  _Tp __get(size_t __idx) const noexcept { return (&__data)[__idx]; }

  void __set(size_t __idx, _Tp __v) noexcept { (&__data)[__idx] = __v; }
};

template <class _Tp>
struct __mask_storage<_Tp, simd_abi::__scalar> : __simd_storage<bool, simd_abi::__scalar> {};

template <class _Tp>
struct __simd_traits<_Tp, simd_abi::__scalar> {
  using _Simd = __simd_storage<_Tp, simd_abi::__scalar>;
  using _Mask = __mask_storage<_Tp, simd_abi::__scalar>;

  static _Simd __broadcast(_Tp __v) noexcept { return {__v}; }

  template <class _Generator>
  static _Simd __generate(_Generator&& __g) noexcept {
    return {__g(std::integral_constant<size_t, 0>())};
  }

  template <class _Up>
  static void __load(_Simd& __s, const _Up* __mem) noexcept {
    __s.__data = static_cast<_Tp>(__mem[0]);
  }

  template <class _Up>
  static void __store(_Simd __s, _Up* __mem) noexcept {
    *__mem = static_cast<_Up>(__s.__data);
  }

  static void __increment(_Simd& __s) noexcept { ++__s.__data; }

  static void __decrement(_Simd& __s) noexcept { --__s.__data; }

  static _Mask __negate(_Simd __s) noexcept { return {!__s.__data}; }

  static _Simd __bitwise_not(_Simd __s) noexcept { return {static_cast<_Tp>(~__s.__data)}; }

  static _Simd __unary_minus(_Simd __s) noexcept { return {static_cast<_Tp>(-__s.__data)}; }

  static _Simd __plus(_Simd __lhs, _Simd __rhs) noexcept { return {static_cast<_Tp>(__lhs.__data + __rhs.__data)}; }

  static _Simd __minus(_Simd __lhs, _Simd __rhs) noexcept { return {static_cast<_Tp>(__lhs.__data - __rhs.__data)}; }

  static _Simd __multiplies(_Simd __lhs, _Simd __rhs) noexcept {
    return {static_cast<_Tp>(__lhs.__data * __rhs.__data)};
  }

  static _Simd __divides(_Simd __lhs, _Simd __rhs) noexcept { return {static_cast<_Tp>(__lhs.__data / __rhs.__data)}; }

  static _Simd __modulus(_Simd __lhs, _Simd __rhs) noexcept { return {static_cast<_Tp>(__lhs.__data % __rhs.__data)}; }

  static _Simd __bitwise_and(_Simd __lhs, _Simd __rhs) noexcept {
    return {static_cast<_Tp>(__lhs.__data & __rhs.__data)};
  }

  static _Simd __bitwise_or(_Simd __lhs, _Simd __rhs) noexcept {
    return {static_cast<_Tp>(__lhs.__data | __rhs.__data)};
  }

  static _Simd __bitwise_xor(_Simd __lhs, _Simd __rhs) noexcept {
    return {static_cast<_Tp>(__lhs.__data ^ __rhs.__data)};
  }

  static _Simd __shift_left(_Simd __lhs, _Simd __rhs) noexcept {
    return {static_cast<_Tp>(__lhs.__data << __rhs.__data)};
  }

  static _Simd __shift_right(_Simd __lhs, _Simd __rhs) noexcept {
    return {static_cast<_Tp>(__lhs.__data >> __rhs.__data)};
  }

  static _Simd __shift_left(_Simd __lhs, int __rhs) noexcept { return {static_cast<_Tp>(__lhs.__data << __rhs)}; }

  static _Simd __shift_right(_Simd __lhs, int __rhs) noexcept { return {static_cast<_Tp>(__lhs.__data >> __rhs)}; }

  static _Mask __equal_to(_Simd __lhs, _Simd __rhs) noexcept { return {__lhs.__data == __rhs.__data}; }

  static _Mask __not_equal_to(_Simd __lhs, _Simd __rhs) noexcept { return {__lhs.__data != __rhs.__data}; }

  static _Mask __less_equal(_Simd __lhs, _Simd __rhs) noexcept { return {__lhs.__data <= __rhs.__data}; }

  static _Mask __less(_Simd __lhs, _Simd __rhs) noexcept { return {__lhs.__data < __rhs.__data}; }

  static _Tp __hmin(_Simd __s) { return __s.__data; }

  static _Tp __hmax(_Simd __s) { return __s.__data; }

  static _Simd __min(_Simd __a, _Simd __b) noexcept { return {std::min(__a.__data, __b.__data)}; }

  static _Simd __max(_Simd __a, _Simd __b) noexcept { return {std::max(__a.__data, __b.__data)}; }

  static std::pair<_Simd, _Simd> __minmax(_Simd __a, _Simd __b) noexcept { return {__min(__a, __b), __max(__a, __b)}; }

  static _Simd __clamp(_Simd __v, _Simd __lo, _Simd __hi) noexcept { return __min(__max(__v, __lo), __hi); }

  static _Simd __masked_assign(_Simd& __s, _Mask __m, _Simd __v) noexcept {
    __s.__data = __m.__data ? __v.__data : __s.__data;
    return __s;
  }

  template <class _BinaryOp>
  static _Tp __reduce(const _Simd& __s, _BinaryOp) {
    return __s.__data;
  }
};

template <class _Tp>
struct __mask_traits<_Tp, simd_abi::__scalar> {
  using _Mask = __mask_storage<_Tp, simd_abi::__scalar>;

  static _Mask __broadcast(bool __v) noexcept { return {__v}; }

  static void __load(_Mask& __s, const bool* __mem) noexcept { __s.__data = __mem[0]; }

  static void __store(_Mask __s, bool* __mem) noexcept { __mem[0] = __s.__data; }

  static _Mask __negate(_Mask __s) noexcept { return {{!__s.__data}}; }

  static _Mask __logical_and(_Mask __lhs, _Mask __rhs) noexcept { return {{__lhs.__data && __rhs.__data}}; }

  static _Mask __logical_or(_Mask __lhs, _Mask __rhs) noexcept { return {{__lhs.__data || __rhs.__data}}; }

  static _Mask __bitwise_and(_Mask __lhs, _Mask __rhs) noexcept { return {{__lhs.__data && __rhs.__data}}; }

  static _Mask __bitwise_or(_Mask __lhs, _Mask __rhs) noexcept { return {{__lhs.__data || __rhs.__data}}; }

  static _Mask __bitwise_xor(_Mask __lhs, _Mask __rhs) noexcept { return {{__lhs.__data != __rhs.__data}}; }

  static bool __all_of(_Mask __s) noexcept { return __s.__data; }

  static bool __any_of(_Mask __s) noexcept { return __s.__data; }

  static bool __none_of(_Mask __s) noexcept { return !__s.__data; }

  static bool __some_of(_Mask) noexcept { return false; }

  static int __popcount(_Mask __s) noexcept { return __s.__data; }

  static int __find_first_set(_Mask) { return 0; }

  static int __find_last_set(_Mask) { return 0; }

  static _Mask __masked_assign(_Mask& __s, _Mask __m, _Mask __v) noexcept {
    __s.__data = __m.__data ? __v.__data : __s.__data;
    return __s;
  }
};

_LIBCPP_END_NAMESPACE_EXPERIMENTAL_SIMD

#endif // _LIBCPP_EXPERIMENTAL___SIMD_SCALAR_H


// file: libcxx/include/experimental/__simd/vec_ext.h
#ifndef _LIBCPP_EXPERIMENTAL___SIMD_vec_ext_H
#define _LIBCPP_EXPERIMENTAL___SIMD_vec_ext_H

#include <functional>

_LIBCPP_BEGIN_NAMESPACE_EXPERIMENTAL_SIMD_ABI

template <int _Np>
struct __vec_ext {
  static constexpr bool __is_abi_tag  = _Np > 0 && _Np <= 32;
  static constexpr size_t __simd_size = _Np;
};

_LIBCPP_END_NAMESPACE_EXPERIMENTAL_SIMD_ABI

_LIBCPP_BEGIN_NAMESPACE_EXPERIMENTAL_SIMD

template <class _Tp, int _Np>
struct __simd_storage<_Tp, simd_abi::__vec_ext<_Np>> {
#if defined(_LIBCPP_COMPILER_CLANG_BASED)
  _Tp __data __attribute__((vector_size(sizeof(_Tp) * _Np)));
#else
  _Tp __data __attribute__((vector_size(__next_pow_of_2(sizeof(_Tp) * _Np))));
#endif

  _Tp __get(size_t __idx) const noexcept { return __data[__idx]; }

  void __set(size_t __idx, _Tp __v) noexcept { __data[__idx] = __v; }
};

template <class _Tp, int _Np>
struct __mask_storage<_Tp, simd_abi::__vec_ext<_Np>>
    : __simd_storage<decltype(__choose_mask_type<_Tp>()), simd_abi::__vec_ext<_Np>> {};

template <class _Tp, int _Np>
struct __simd_traits<_Tp, simd_abi::__vec_ext<_Np>> {
  using _Simd = __simd_storage<_Tp, simd_abi::__vec_ext<_Np>>;
  using _Mask = __mask_storage<_Tp, simd_abi::__vec_ext<_Np>>;

  static _Simd __broadcast(_Tp __v) noexcept {
    // TODO: Optimizeable
    return __generate([=](size_t) { return __v; });
  }

  template <class _Generator, size_t... _Is>
  static _Simd __generate_init(_Generator&& __g, std::index_sequence<_Is...>) {
    // TODO: Optimizeable
    // _Simd specified here is to work around GCC
    return _Simd{{__g(std::integral_constant<size_t, _Is>())...}};
  }

  template <class _Generator>
  static _Simd __generate(_Generator&& __g) noexcept {
    // TODO: Optimizeable
    return __generate_init(std::forward<_Generator>(__g), std::make_index_sequence<_Np>());
  }

  template <class _Up>
  static void __load(_Simd& __s, const _Up* __mem) noexcept {
    // TODO: Optimize with intrinsics
    for (size_t __i = 0; __i < _Np; __i++)
      __s.__data[__i] = static_cast<_Tp>(__mem[__i]);
  }

  template <class _Up>
  static void __store(_Simd __s, _Up* __mem) noexcept {
    // TODO: Optimize with intrinsics
    for (size_t __i = 0; __i < _Np; __i++)
      __mem[__i] = static_cast<_Up>(__s.__data[__i]);
  }

  static void __increment(_Simd& __s) noexcept { __s.__data = __s.__data + 1; }

  static void __decrement(_Simd& __s) noexcept { __s.__data = __s.__data - 1; }

  static _Mask __negate(_Simd __s) noexcept { return {!__s.__data}; }

  static _Simd __bitwise_not(_Simd __s) noexcept { return {~__s.__data}; }

  static _Simd __unary_minus(_Simd __s) noexcept { return {-__s.__data}; }

  static _Simd __plus(_Simd __lhs, _Simd __rhs) noexcept { return {__lhs.__data + __rhs.__data}; }

  static _Simd __minus(_Simd __lhs, _Simd __rhs) noexcept { return {__lhs.__data - __rhs.__data}; }

  static _Simd __multiplies(_Simd __lhs, _Simd __rhs) noexcept { return {__lhs.__data * __rhs.__data}; }

  static _Simd __divides(_Simd __lhs, _Simd __rhs) noexcept { return {__lhs.__data / __rhs.__data}; }

  static _Simd __modulus(_Simd __lhs, _Simd __rhs) noexcept { return {__lhs.__data % __rhs.__data}; }

  static _Simd __bitwise_and(_Simd __lhs, _Simd __rhs) noexcept { return {__lhs.__data & __rhs.__data}; }

  static _Simd __bitwise_or(_Simd __lhs, _Simd __rhs) noexcept { return {__lhs.__data | __rhs.__data}; }

  static _Simd __bitwise_xor(_Simd __lhs, _Simd __rhs) noexcept { return {__lhs.__data ^ __rhs.__data}; }

  static _Simd __shift_left(_Simd __lhs, _Simd __rhs) noexcept { return {__lhs.__data << __rhs.__data}; }

  static _Simd __shift_right(_Simd __lhs, _Simd __rhs) noexcept { return {__lhs.__data >> __rhs.__data}; }

  static _Simd __shift_left(_Simd __lhs, int __rhs) noexcept { return {__lhs.__data << __rhs}; }

  static _Simd __shift_right(_Simd __lhs, int __rhs) noexcept { return {__lhs.__data >> __rhs}; }

  static _Mask __equal_to(_Simd __lhs, _Simd __rhs) noexcept { return {{__lhs.__data == __rhs.__data}}; }

  static _Mask __not_equal_to(_Simd __lhs, _Simd __rhs) noexcept { return {{__lhs.__data != __rhs.__data}}; }

  static _Mask __less_equal(_Simd __lhs, _Simd __rhs) noexcept { return {{__lhs.__data <= __rhs.__data}}; }

  static _Mask __less(_Simd __lhs, _Simd __rhs) noexcept { return {{__lhs.__data < __rhs.__data}}; }

  static _Tp __hmin(_Simd __s) noexcept { return __builtin_reduce_min(__s.__data); }

  static _Tp __hmax(_Simd __s) noexcept { return __builtin_reduce_max(__s.__data); }

  static _Simd __min(_Simd __a, _Simd __b) noexcept { return {__a.__data < __b.__data ? __a.__data : __b.__data}; }

  static _Simd __max(_Simd __a, _Simd __b) noexcept { return {__a.__data > __b.__data ? __a.__data : __b.__data}; }

  static std::pair<_Simd, _Simd> __minmax(_Simd __a, _Simd __b) noexcept { return {__min(__a, __b), __max(__a, __b)}; }

  static _Simd __clamp(_Simd __v, _Simd __lo, _Simd __hi) noexcept { return __min(__max(__v, __lo), __hi); }

  static _Simd __masked_assign(_Simd& __s, _Mask __m, _Simd __v) noexcept {
    __s.__data = __m.__data ? __v.__data : __s.__data;
    return __s;
  }

  static _Tp __reduce(const _Simd& __s, plus<>) { return __builtin_reduce_add(__s.__data); }

  static _Tp __reduce(const _Simd& __s, multiplies<>) { return __builtin_reduce_mul(__s.__data); }

  static _Tp __reduce(const _Simd& __s, bit_and<>) { return __builtin_reduce_and(__s.__data); }

  static _Tp __reduce(const _Simd& __s, bit_or<>) { return __builtin_reduce_or(__s.__data); }

  static _Tp __reduce(const _Simd& __s, bit_xor<>) { return __builtin_reduce_xor(__s.__data); }
};

template <class _Tp, int _Np>
struct __mask_traits<_Tp, simd_abi::__vec_ext<_Np>> {
  using _Mask = __mask_storage<_Tp, simd_abi::__vec_ext<_Np>>;

  static _Mask __broadcast(bool __v) noexcept {
    // TODO: Optimizeable
    return __generate([=](size_t) { return __set_all_bits<_Tp>(__v); });
  }

  template <class _Generator, size_t... _Is>
  static _Mask __generate_init(_Generator&& __g, std::index_sequence<_Is...>) {
    // TODO: Optimizeable
    // _Simd specified here is to work around GCC
    return _Mask{{__g(std::integral_constant<size_t, _Is>())...}};
  }

  template <class _Generator>
  static _Mask __generate(_Generator&& __g) noexcept {
    // TODO: Optimizeable
    return __generate_init(std::forward<_Generator>(__g), std::make_index_sequence<_Np>());
  }

  static void __load(_Mask& __s, const bool* __mem) noexcept {
    // TODO: Optimize with intrinsics
    for (size_t __i = 0; __i < _Np; __i++)
      __s.__data[__i] = __set_all_bits<_Tp>(__mem[__i]);
  }

  static void __store(_Mask __s, bool* __mem) noexcept {
    // TODO: Optimize with intrinsics
    for (size_t __i = 0; __i < _Np; __i++)
      __mem[__i] = static_cast<bool>(__s.__data[__i]);
  }

  static _Mask __negate(_Mask __s) noexcept { return {{~__s.__data}}; }

  static _Mask __logical_and(_Mask __lhs, _Mask __rhs) noexcept { return {{__lhs.__data & __rhs.__data}}; }

  static _Mask __logical_or(_Mask __lhs, _Mask __rhs) noexcept { return {{__lhs.__data | __rhs.__data}}; }

  static _Mask __bitwise_and(_Mask __lhs, _Mask __rhs) noexcept { return {{__lhs.__data & __rhs.__data}}; }

  static _Mask __bitwise_or(_Mask __lhs, _Mask __rhs) noexcept { return {{__lhs.__data | __rhs.__data}}; }

  static _Mask __bitwise_xor(_Mask __lhs, _Mask __rhs) noexcept { return {{__lhs.__data ^ __rhs.__data}}; }

  static bool __all_of(_Mask __s) noexcept {
    // TODO: Optimizeable
    for (size_t __i = 0; __i < _Np; ++__i)
      if (!__s.__data[__i])
        return false;
    return true;
  }

  static bool __any_of(_Mask __s) noexcept {
    // TODO: Optimizeable
    for (size_t __i = 0; __i < _Np; ++__i)
      if (__s.__data[__i])
        return true;
    return false;
  }

  static bool __none_of(_Mask __s) noexcept {
    // TODO: Optimizeable
    for (size_t __i = 0; __i < _Np; ++__i)
      if (__s.__data[__i])
        return false;
    return true;
  }

  static bool __some_of(_Mask __s) noexcept {
    // TODO: Optimizeable
    for (size_t __i = 1; __i < _Np; ++__i)
      if (__s.__data[__i] != __s.__data[__i - 1])
        return true;
    return false;
  }

  static int __popcount(_Mask __s) noexcept {
    // TODO: Optimizeable
    int __count = 0;
    for (size_t __i = 0; __i < _Np; ++__i)
      __count += __s.__data[__i] != 0;
    return __count;
  }

  static int __find_first_set(_Mask __s) {
    // TODO: Optimizeable
    size_t __i = 0;
    for (; __i < _Np; ++__i)
      if (__s.__data[__i])
        break;
    return __i;
  }

  static int __find_last_set(_Mask __s) {
    // TODO: Optimizeable
    size_t __i = 1;
    for (; __i < _Np; ++__i)
      if (__s.__data[_Np - __i])
        break;
    return _Np - __i;
  }

  static _Mask __masked_assign(_Mask& __s, _Mask __m, _Mask __v) noexcept {
    __s.__data = __m.__data ? __v.__data : __s.__data;
    return __s;
  }
};

_LIBCPP_END_NAMESPACE_EXPERIMENTAL_SIMD

#endif // _LIBCPP_EXPERIMENTAL___SIMD_vec_ext_H

// file: libcxx/include/experimental/simd
#include <functional>
#include <type_traits>
#include <utility>
#include <bit>

#if !defined(_LIBCPP_HAS_NO_PRAGMA_SYSTEM_HEADER)
#  pragma GCC system_header
#endif

_LIBCPP_PUSH_MACROS
// file: #include <__undef_macros>
#ifdef min
#  undef min
#endif

#ifdef max
#  undef max
#endif



_LIBCPP_BEGIN_NAMESPACE_EXPERIMENTAL_SIMD

#if _LIBCPP_STD_VER >= 17

// TODO: handle _LIBCPP_HAS_NO_VECTOR_EXTENSION

template <class _Tp, class _Storage, class _ValueType>
class __simd_reference {
  template <class, class>
  friend class simd;

  template <class, class>
  friend class simd_mask;

  _Storage& __s_;
  size_t __idx_;

  __simd_reference(_Storage& __s, size_t __idx) : __s_(__s), __idx_(__idx) {}

  _ValueType __get() const { return __s_.__get(__idx_); }

  void __set(_ValueType __v) {
    if constexpr (is_same_v<_ValueType, bool>)
      __s_.__set(__idx_, __set_all_bits<_Tp>(__v));
    else
      __s_.__set(__idx_, __v);
  }

public:
  using value_type = _ValueType;

  __simd_reference()                        = delete;
  __simd_reference(const __simd_reference&) = delete;

  operator value_type() const noexcept { return __get(); }

  template <class _Up>
  enable_if_t<is_void_v<void_t<decltype(declval<value_type&>() = declval<_Up>())>>, __simd_reference>
  operator=(_Up&& __v) && noexcept {
    __set(static_cast<value_type>(std::forward<_Up>(__v)));
    return {__s_, __idx_};
  }

#  define _LIBCXX_SIMD_REFERENCE_OP_(__op)                                                                             \
    template <class _Up>                                                                                               \
    enable_if_t<is_void_v<void_t<decltype(declval<value_type&>() __op declval<_Up>())>>, __simd_reference>             \
    operator __op##=(_Up&& __v)&& noexcept {                                                                           \
      __set(__get() __op static_cast<value_type>(std::forward<_Up>(__v)));                                             \
      return {__s_, __idx_};                                                                                           \
    }
  _LIBCXX_SIMD_REFERENCE_OP_(+)
  _LIBCXX_SIMD_REFERENCE_OP_(-)
  _LIBCXX_SIMD_REFERENCE_OP_(*)
  _LIBCXX_SIMD_REFERENCE_OP_(/)
  _LIBCXX_SIMD_REFERENCE_OP_(%)
  _LIBCXX_SIMD_REFERENCE_OP_(^)
  _LIBCXX_SIMD_REFERENCE_OP_(<<)
  _LIBCXX_SIMD_REFERENCE_OP_(>>)
#  undef _LIBCXX_SIMD_REFERENCE_OP_

  template <class _Up>
  enable_if_t<is_void_v<void_t<decltype(declval<value_type&>() &= declval<_Up>())>>, __simd_reference>
  operator&=(_Up&& __v) && noexcept {
    if constexpr (is_same_v<_ValueType, bool>)
      __set(__get() && static_cast<value_type>(std::forward<_Up>(__v)));
    else
      __set(__get() & static_cast<value_type>(std::forward<_Up>(__v)));
    return {__s_, __idx_};
  }

  template <class _Up>
  enable_if_t<is_void_v<void_t<decltype(declval<value_type&>() |= declval<_Up>())>>, __simd_reference>
  operator|=(_Up&& __v) && noexcept {
    if constexpr (is_same_v<_ValueType, bool>)
      __set(__get() || static_cast<value_type>(std::forward<_Up>(__v)));
    else
      __set(__get() | static_cast<value_type>(std::forward<_Up>(__v)));
    return {__s_, __idx_};
  }

  template <class _Up = void, class = decltype(++declval<conditional_t<true, value_type, _Up>&>())>
  __simd_reference operator++() && noexcept {
    __set(__get() + 1);
    return {__s_, __idx_};
  }

  template <class _Up = void, class = decltype(declval<conditional_t<true, value_type, _Up>&>()++)>
  value_type operator++(int) && noexcept {
    auto __r = __get();
    __set(__get() + 1);
    return __r;
  }

  template <class _Up = void, class = decltype(--declval<conditional_t<true, value_type, _Up>&>())>
  __simd_reference operator--() && noexcept {
    __set(__get() - 1);
    return {__s_, __idx_};
  }

  template <class _Up = void, class = decltype(declval<conditional_t<true, value_type, _Up>&>()--)>
  value_type operator--(int) && noexcept {
    auto __r = __get();
    __set(__get() - 1);
    return __r;
  }

  friend void swap(__simd_reference&& __a, __simd_reference&& __b) noexcept {
    value_type __tmp                     = static_cast<__simd_reference&&>(__a);
    static_cast<__simd_reference&&>(__a) = static_cast<value_type>(__b);
    static_cast<__simd_reference&&>(__b) = std::move(__tmp);
  }

  friend void swap(value_type& __a, __simd_reference&& __b) noexcept {
    value_type __tmp(std::move(__a));
    __a                                  = static_cast<value_type>(__b);
    static_cast<__simd_reference&&>(__b) = std::move(__tmp);
  }

  friend void swap(__simd_reference&& __a, value_type& __b) noexcept {
    value_type __tmp(__a);
    static_cast<__simd_reference&&>(__a) = std::move(__b);
    __b                                  = std::move(__tmp);
  }
};

_LIBCPP_END_NAMESPACE_EXPERIMENTAL_SIMD

_LIBCPP_BEGIN_NAMESPACE_EXPERIMENTAL_SIMD_ABI
// TODO: Elaboration of implementation-defined ABIs

using scalar = __scalar;

template <class _Tp>
inline constexpr size_t max_fixed_size = 32;

template <int _Np>
using fixed_size = __vec_ext<_Np>;
template <class _Tp>
using compatible = __vec_ext<16 / sizeof(_Tp)>;
#  if defined(__AVX__)
template <class _Tp>
using native = __vec_ext<_LIBCPP_NATIVE_SIMD_WIDTH_IN_BYTES / sizeof(_Tp)>;
#  else
template <class _Tp>
using native = __vec_ext<16 / sizeof(_Tp)>;
#  endif

template <class _Tp, size_t _Np, class... Abis>
struct deduce {
  using type = fixed_size<_Np>;
};

template <class _Tp, size_t _Np, class... Abis>
using deduce_t = typename deduce<_Tp, _Np>::type;

_LIBCPP_END_NAMESPACE_EXPERIMENTAL_SIMD_ABI

_LIBCPP_BEGIN_NAMESPACE_EXPERIMENTAL_SIMD

// Class template simd [parallel.simd.class]
template <class _Tp, class _Abi = simd_abi::compatible<_Tp>>
class simd;

template <class _Tp>
using native_simd = simd<_Tp, simd_abi::native<_Tp>>;

template <class _Tp, int _Np>
using fixed_size_simd = simd<_Tp, simd_abi::fixed_size<_Np>>;

// Class template simd_mask [parallel.simd.mask.class]
template <class _Tp, class _Abi = simd_abi::compatible<_Tp>>
class simd_mask;

template <class _Tp>
using native_simd_mask = simd_mask<_Tp, simd_abi::native<_Tp>>;

template <class _Tp, int _Np>
using fixed_size_simd_mask = simd_mask<_Tp, simd_abi::fixed_size<_Np>>;

// Memory alignment
struct element_aligned_tag {
  template <class _Tp, class _Up = typename _Tp::value_type>
  static constexpr size_t __alignment = alignof(_Up);

  template <class _Tp, class _Up>
  static constexpr _Up* __apply(_Up* __ptr) {
    return __ptr;
  }
};

struct vector_aligned_tag {
  template <class _Tp, class _Up = typename _Tp::value_type>
  static constexpr size_t __alignment = __next_pow_of_2(sizeof(_Up) * _Tp::size());

  template <class _Tp, class _Up>
  static constexpr _Up* __apply(_Up* __ptr) {
    return static_cast<_Up*>(__builtin_assume_aligned(__ptr, __alignment<_Tp, _Up>));
  }
};

template <size_t _Np>
struct overaligned_tag {
  template <class _Tp, class _Up = typename _Tp::value_type>
  static constexpr size_t __alignment = _Np;

  template <class _Tp, class _Up>
  static constexpr _Up* __apply(_Up* __ptr) {
    return static_cast<_Up*>(__builtin_assume_aligned(__ptr, _Np));
  }
};

inline constexpr element_aligned_tag element_aligned{};

inline constexpr vector_aligned_tag vector_aligned{};

template <size_t _Np>
inline constexpr overaligned_tag<_Np> overaligned{};

// simd type traits [parallel.simd.traits]
template <class _Tp, class = void>
struct __is_abi_tag_impl : false_type {};

template <class _Tp>
struct __is_abi_tag_impl<_Tp, enable_if_t<_Tp::__is_abi_tag>> : bool_constant<_Tp::__is_abi_tag> {};

template <class _Tp>
struct is_abi_tag : __is_abi_tag_impl<_Tp> {};

template <class _Tp>
inline constexpr bool is_abi_tag_v = is_abi_tag<_Tp>::value;

template <class _Tp>
struct is_simd : false_type {};

template <class _Tp, class _Abi>
struct is_simd<simd<_Tp, _Abi>> : true_type {};

template <class _Tp>
inline constexpr bool is_simd_v = is_simd<_Tp>::value;

template <class _Tp>
struct is_simd_mask : false_type {};

template <class _Tp, class _Abi>
struct is_simd_mask<simd_mask<_Tp, _Abi>> : true_type {};

template <class _Tp>
inline constexpr bool is_simd_mask_v = is_simd_mask<_Tp>::value;

template <class _Tp>
struct is_simd_flag_type : false_type {};

template <>
struct is_simd_flag_type<element_aligned_tag> : true_type {};

template <>
struct is_simd_flag_type<vector_aligned_tag> : true_type {};

template <size_t _Np>
struct is_simd_flag_type<overaligned_tag<_Np>> : true_type {};

template <class _Tp>
inline constexpr bool is_simd_flag_type_v = is_simd_flag_type<_Tp>::value;

template <class _Tp, class _Abi, class = void>
struct __simd_size_impl {};

template <class _Tp, class _Abi>
struct __simd_size_impl<_Tp, _Abi, enable_if_t<__is_vectorizable<_Tp>() && is_abi_tag_v<_Abi>>>
    : integral_constant<size_t, _Abi::__simd_size> {};

template <class _Tp, class _Abi = simd_abi::compatible<_Tp>>
struct simd_size : __simd_size_impl<_Tp, _Abi> {};

template <class _Tp, class _Abi = simd_abi::compatible<_Tp>>
inline constexpr size_t simd_size_v = simd_size<_Tp, _Abi>::value;

template <class _Tp, class _Up, class = void>
struct __memory_alignment_impl {};

template <class _Tp, class _Up>
struct __memory_alignment_impl<
    _Tp,
    _Up,
    enable_if_t<(is_simd_v<_Tp> && __is_vectorizable<_Up>()) || (is_simd_mask_v<_Tp> && is_same_v<_Up, bool>)>>
    : integral_constant<size_t, vector_aligned_tag::__alignment<_Tp, _Up>> {};

template <class _Tp, class _Up = typename _Tp::value_type>
struct memory_alignment : __memory_alignment_impl<_Tp, _Up> {};

template <class _Tp, class _Up = typename _Tp::value_type>
inline constexpr size_t memory_alignment_v = memory_alignment<_Tp, _Up>::value;

template <class _Tp, class _Vp, class = void>
struct __rebind_simd_impl {};

template <class _Tp, class _Up, class _Abi>
struct __rebind_simd_impl<_Tp, simd<_Up, _Abi>, void_t<simd_abi::deduce_t<_Tp, simd_size_v<_Up, _Abi>, _Abi>> > {
  using type = simd<_Tp, simd_abi::deduce_t<_Tp, simd_size_v<_Up, _Abi>, _Abi>>;
};

template <class _Tp, class _Up, class _Abi>
struct __rebind_simd_impl<_Tp, simd_mask<_Up, _Abi>, void_t<simd_abi::deduce_t<_Tp, simd_size_v<_Up, _Abi>, _Abi>> > {
  using type = simd_mask<_Tp, simd_abi::deduce_t<_Tp, simd_size_v<_Up, _Abi>, _Abi>>;
};

template <class _Tp, class _Vp>
struct rebind_simd : __rebind_simd_impl<_Tp, _Vp> {};

template <class _Tp, class _Vp>
using rebind_simd_t = typename rebind_simd<_Tp, _Vp>::type;

template <int _Np, class _Vp, class = void>
struct __resize_simd_impl {};

template <int _Np, class _Tp, class _Abi>
struct __resize_simd_impl<_Np, simd<_Tp, _Abi>, void_t<simd_abi::deduce_t<_Tp, _Np, _Abi>> > {
  using type = simd<_Tp, simd_abi::deduce_t<_Tp, _Np, _Abi>>;
};

template <int _Np, class _Tp, class _Abi>
struct __resize_simd_impl<_Np, simd_mask<_Tp, _Abi>, void_t<simd_abi::deduce_t<_Tp, _Np, _Abi>> > {
  using type = simd_mask<_Tp, simd_abi::deduce_t<_Tp, _Np, _Abi>>;
};

template <int _Np, class _Vp>
struct resize_simd : __resize_simd_impl<_Np, _Vp> {};

template <int _Np, class _Vp>
using resize_simd_t = typename resize_simd<_Np, _Vp>::type;

// Casts [parallel.simd.casts]
template <class _Tp, class = void>
struct __safe_make_signed {
  using type = _Tp;
};

template <class _Tp>
struct __safe_make_signed<_Tp, enable_if_t<is_integral_v<_Tp>>> {
  using type = make_signed_t<_Tp>;
};

template <class _Tp, class _Up, class _Abi, class = void>
struct __static_simd_cast_return_type {};

template <class _Tp, class _Up, class _Abi>
struct __static_simd_cast_return_type<_Tp,
                                      _Up,
                                      _Abi,
                                      enable_if_t<is_simd_v<_Tp> && _Tp::size() == simd<_Up, _Abi>::size()>> {
  using type = _Tp;
};

template <class _Tp, class _Up, class _Abi>
struct __static_simd_cast_return_type<
    _Tp,
    _Up,
    _Abi,
    enable_if_t<!is_simd_v<_Tp> &&
                (is_same_v<_Tp, _Up> || is_same_v<__safe_make_signed<_Tp>, __safe_make_signed<_Up>>) >> {
  using type = simd<_Tp, _Abi>;
};

template <class _Tp, class _Up, class _Abi>
struct __static_simd_cast_return_type<_Tp,
                                      _Up,
                                      _Abi,
                                      enable_if_t<!is_simd_v<_Tp> && !is_same_v<_Tp, _Up> &&
                                                  !is_same_v<__safe_make_signed<_Up>, __safe_make_signed<_Tp>>>> {
  using type = simd<_Tp, simd_abi::fixed_size<simd<_Up, _Abi>::size()>>;
};

template <class _Tp, class _Up, class _Abi, class = void>
struct __simd_cast_return_type {};

template <class _Tp, class _Up, class _Abi>
struct __simd_cast_return_type<_Tp,
                               _Up,
                               _Abi,
                               enable_if_t<is_simd_v<_Tp> && _Tp::size() == simd<_Up, _Abi>::size() &&
                                           is_convertible_v<_Up, typename _Tp::value_type>>> {
  using type = _Tp;
};

template <class _Tp, class _Up, class _Abi>
struct __simd_cast_return_type<_Tp, _Up, _Abi, enable_if_t<!is_simd_v<_Tp> && is_same_v<_Tp, _Up>>> {
  using type = simd<_Tp, _Abi>;
};

template <class _Tp, class _Up, class _Abi>
struct __simd_cast_return_type<_Tp,
                               _Up,
                               _Abi,
                               enable_if_t<!is_simd_v<_Tp> && !is_same_v<_Tp, _Up> && is_convertible_v<_Up, _Tp>>> {
  using type = simd<_Tp, simd_abi::fixed_size<simd<_Up, _Abi>::size()>>;
};

template <class _To, class _From>
enable_if_t<is_simd_v<_To> && is_simd_v<_From> && _To::size() == _From::size(), _To>
__simd_conversion(_From __v) { // TODO: Optimizeable
  _To res;
  for (size_t __i = 0; __i < _From::size(); __i++) {
    res[__i] = static_cast<typename _To::value_type>(__v[__i]);
  }
  return res;
}

template <class _To, class _From>
enable_if_t<is_simd_mask_v<_To> && is_simd_mask_v<_From> && _To::size() == _From::size(), _To>
__mask_conversion(_From __m) { // TODO: Optimizeable
  _To res;
  for (size_t __i = 0; __i < _From::size(); __i++) {
    res[__i] = __m[__i];
  }
  return res;
}

template <class _Tp, class _Up, class _Abi>
typename __simd_cast_return_type<_Tp, _Up, _Abi>::type simd_cast(const simd<_Up, _Abi>& __v) {
  return __simd_conversion<typename __simd_cast_return_type<_Tp, _Up, _Abi>::type, simd<_Up, _Abi>>(__v);
}

template <class _Tp, class _Up, class _Abi>
typename __static_simd_cast_return_type<_Tp, _Up, _Abi>::type static_simd_cast(const simd<_Up, _Abi>& __v) {
  return __simd_conversion<typename __static_simd_cast_return_type<_Tp, _Up, _Abi>::type, simd<_Up, _Abi>>(__v);
}

template <class _Tp, class _Abi>
fixed_size_simd<_Tp, simd_size_v<_Tp, _Abi>> to_fixed_size(const simd<_Tp, _Abi>& __v) noexcept {
  return __simd_conversion<fixed_size_simd<_Tp, simd_size_v<_Tp, _Abi>>, simd<_Tp, _Abi>>(__v);
}

template <class _Tp, class _Abi>
fixed_size_simd_mask<_Tp, simd_size_v<_Tp, _Abi>> to_fixed_size(const simd_mask<_Tp, _Abi>& __m) noexcept {
  return __mask_conversion<fixed_size_simd_mask<_Tp, simd_size_v<_Tp, _Abi>>, simd_mask<_Tp, _Abi>>(__m);
}

template <class _Tp, size_t _Np>
enable_if_t<simd_size_v<_Tp, simd_abi::native<_Tp>> == _Np, native_simd<_Tp>>
to_native(const fixed_size_simd<_Tp, _Np>& __v) noexcept {
  return __simd_conversion<native_simd<_Tp>, fixed_size_simd<_Tp, _Np>>(__v);
}

template <class _Tp, size_t _Np>
enable_if_t<simd_size_v<_Tp, simd_abi::native<_Tp>> == _Np, native_simd_mask<_Tp>>
to_native(const fixed_size_simd_mask<_Tp, _Np>& __m) noexcept {
  return __mask_conversion<native_simd_mask<_Tp>, fixed_size_simd_mask<_Tp, _Np>>(__m);
}

template <class _Tp, size_t _Np>
enable_if_t<simd_size_v<_Tp, simd_abi::compatible<_Tp>> == _Np, simd<_Tp>>
to_compatible(const fixed_size_simd<_Tp, _Np>& __v) noexcept {
  return __simd_conversion<simd<_Tp>, fixed_size_simd<_Tp, _Np>>(__v);
}

template <class _Tp, size_t _Np>
enable_if_t<simd_size_v<_Tp, simd_abi::compatible<_Tp>> == _Np, simd_mask<_Tp>>
to_compatible(const fixed_size_simd_mask<_Tp, _Np>& __m) noexcept {
  return __mask_conversion<simd_mask<_Tp>, fixed_size_simd_mask<_Tp, _Np>>(__m);
}

template <class _SimdType, class _Simd>
void __split_assign(const _Simd& __v, _SimdType& __s, size_t& __count) {
  for (size_t __i = 0; __i < __s.size(); __i++)
    __s[__i] = __v[__count++];
}

template <size_t... _Ip, class _Tuple, class _SimdType>
void __split_tuple_impl(const _SimdType& __v, _Tuple& __t, size_t& __count, index_sequence<_Ip...>) {
  (__split_assign(__v, get<_Ip>(__t), __count), ...);
}

template <size_t... _Sizes, class _Tp, class _Abi>
enable_if_t<((_Sizes + ...) == simd_size_v<_Tp, _Abi>), tuple<simd<_Tp, simd_abi::deduce_t<_Tp, _Sizes>>...>>
split(const simd<_Tp, _Abi>& __v) noexcept {
  tuple<simd<_Tp, simd_abi::deduce_t<_Tp, _Sizes>>...> __t;
  size_t __count = 0;
  __split_tuple_impl(__v, __t, __count, make_index_sequence<sizeof...(_Sizes)>{});
  return __t;
}

template <size_t... _Sizes, class _Tp, class _Abi>
enable_if_t<((_Sizes + ...) == simd_size_v<_Tp, _Abi>), tuple<simd_mask<_Tp, simd_abi::deduce_t<_Tp, _Sizes>>...>>
split(const simd_mask<_Tp, _Abi>& __m) noexcept {
  tuple<simd_mask<_Tp, simd_abi::deduce_t<_Tp, _Sizes>>...> __t;
  size_t __count = 0;
  __split_tuple_impl(__m, __t, __count, make_index_sequence<sizeof...(_Sizes)>{});
  return __t;
}

template <class _SimdType, class _Abi>
// FIX ME: Why simd_size_v gives error here?
enable_if_t<is_simd_v<_SimdType> && (simd_size<typename _SimdType::value_type, _Abi>::value % _SimdType::size() == 0),
            array<_SimdType, simd_size_v<typename _SimdType::value_type, _Abi> / _SimdType::size()>>
split(const simd<typename _SimdType::value_type, _Abi>& __v) noexcept {
  const size_t __size = _SimdType::size();
  array<_SimdType, simd_size_v<typename _SimdType::value_type, _Abi> / __size> __arr{};
  for (size_t __i = 0; __i < __arr.size(); __i++) {
    for (size_t __j = 0; __j < __size; __j++)
      __arr[__i][__j] = __v[__i * __size + __j];
  }
  return __arr;
}

template <class _SimdMaskType, class _Abi>
enable_if_t<
    is_simd_mask_v<_SimdMaskType> &&
        (simd_size_v<typename _SimdMaskType::simd_type::value_type, _Abi> % _SimdMaskType::size() == 0),
    array<_SimdMaskType, simd_size_v<typename _SimdMaskType::simd_type::value_type, _Abi> / _SimdMaskType::size()>>
split(const simd_mask<typename _SimdMaskType::simd_type::value_type, _Abi>& __m) noexcept {
  const size_t __size = _SimdMaskType::size();
  array<_SimdMaskType, simd_size_v<typename _SimdMaskType::simd_type::value_type, _Abi> / __size> __arr{};
  for (size_t __i = 0; __i < __arr.size(); __i++) {
    for (size_t __j = 0; __j < __size; __j++)
      __arr[__i][__j] = __m[__i * __size + __j];
  }
  return __arr;
}

template <size_t _Num, class _Tp, class _Abi>
enable_if_t<simd_size_v<_Tp, _Abi> % _Num == 0,
            array<resize_simd_t<simd_size_v<_Tp, _Abi> / _Num, simd<_Tp, _Abi>>, _Num>>
split_by(const simd<_Tp, _Abi>& __v) noexcept {
  const size_t __size = simd_size_v<_Tp, _Abi> / _Num;
  array<resize_simd_t<__size, simd<_Tp, _Abi>>, _Num> __arr{};
  for (size_t __i = 0; __i < __arr.size(); __i++) {
    for (size_t __j = 0; __j < __size; __j++)
      __arr[__i][__j] = __v[__i * __size + __j];
  }
  return __arr;
}

template <size_t _Num, class _Tp, class _Abi>
enable_if_t<simd_size_v<_Tp, _Abi> % _Num == 0,
            array<resize_simd_t<simd_size_v<_Tp, _Abi> / _Num, simd_mask<_Tp, _Abi>>, _Num>>
split_by(const simd_mask<_Tp, _Abi>& __m) noexcept {
  const size_t __size = simd_size_v<_Tp, _Abi> / _Num;
  array<resize_simd_t<__size, simd_mask<_Tp, _Abi>>, _Num> __arr{};
  for (size_t __i = 0; __i < __arr.size(); __i++) {
    for (size_t __j = 0; __j < __size; __j++)
      __arr[__i][__j] = __m[__i * __size + __j];
  }
  return __arr;
}

template <class _SimdType, class _Simd>
void __concat_assign(const _Simd& __v, _SimdType& __s, size_t& __count) {
  for (size_t __i = 0; __i < __v.size(); __i++)
    __s[__count++] = __v[__i];
}

template <class _Tp, class... _Abis>
simd<_Tp, simd_abi::deduce_t<_Tp, (simd_size_v<_Tp, _Abis> + ...)>> concat(const simd<_Tp, _Abis>&... __v) noexcept {
  simd<_Tp, simd_abi::deduce_t<_Tp, (simd_size_v<_Tp, _Abis> + ...)>> __res;
  size_t __count = 0;
  (__concat_assign(__v, __res, __count), ...);
  return __res;
}

template <class _Tp, class... _Abis>
simd_mask<_Tp, simd_abi::deduce_t<_Tp, (simd_size_v<_Tp, _Abis> + ...)>>
concat(const simd_mask<_Tp, _Abis>&... __m) noexcept {
  simd_mask<_Tp, simd_abi::deduce_t<_Tp, (simd_size_v<_Tp, _Abis> + ...)>> __res;
  size_t __count = 0;
  (__concat_assign(__m, __res, __count), ...);
  return __res;
}

template <class _Tp, class _Abi, size_t _Num>
resize_simd_t<simd_size_v<_Tp, _Abi> * _Num, simd<_Tp, _Abi>>
concat(const array<simd<_Tp, _Abi>, _Num>& __arr) noexcept {
  const size_t __size = simd_size_v<_Tp, _Abi>;
  resize_simd_t<__size * _Num, simd<_Tp, _Abi>> __s;
  for (size_t __i = 0; __i < _Num; __i++) {
    for (size_t __j = 0; __j < __size; __j++)
      __s[__i * __size + __j] = __arr[__i][__j];
  }
  return __s;
}

template <class _Tp, class _Abi, size_t _Num>
resize_simd_t<simd_size_v<_Tp, _Abi> * _Num, simd_mask<_Tp, _Abi>>
concat(const array<simd_mask<_Tp, _Abi>, _Num>& __arr) noexcept {
  const size_t __size = simd_size_v<_Tp, _Abi>;
  resize_simd_t<__size * _Num, simd_mask<_Tp, _Abi>> __m;
  for (size_t __i = 0; __i < _Num; __i++) {
    for (size_t __j = 0; __j < __size; __j++)
      __m[__i * __size + __j] = __arr[__i][__j];
  }
  return __m;
}

// Reductions [parallel.simd.mask.reductions]
template <class _Tp, class _Abi>
bool all_of(const simd_mask<_Tp, _Abi>& __m) noexcept {
  return __mask_traits<_Tp, _Abi>::__all_of(__m.__s_);
}

template <class _Tp, class _Abi>
bool any_of(const simd_mask<_Tp, _Abi>& __m) noexcept {
  return __mask_traits<_Tp, _Abi>::__any_of(__m.__s_);
}

template <class _Tp, class _Abi>
bool none_of(const simd_mask<_Tp, _Abi>& __m) noexcept {
  return __mask_traits<_Tp, _Abi>::__none_of(__m.__s_);
}

template <class _Tp, class _Abi>
bool some_of(const simd_mask<_Tp, _Abi>& __m) noexcept {
  return __mask_traits<_Tp, _Abi>::__some_of(__m.__s_);
}

template <class _Tp, class _Abi>
int popcount(const simd_mask<_Tp, _Abi>& __m) noexcept {
  return __mask_traits<_Tp, _Abi>::__popcount(__m.__s_);
}

template <class _Tp, class _Abi>
int find_first_set(const simd_mask<_Tp, _Abi>& __m) {
  return __mask_traits<_Tp, _Abi>::__find_first_set(__m.__s_);
}

template <class _Tp, class _Abi>
int find_last_set(const simd_mask<_Tp, _Abi>& __m) {
  return __mask_traits<_Tp, _Abi>::__find_last_set(__m.__s_);
}

inline bool all_of(_Bool __v) noexcept { return __v; }

inline bool any_of(_Bool __v) noexcept { return __v; }

inline bool none_of(_Bool __v) noexcept { return !__v; }

inline bool some_of(_Bool) noexcept { return false; }

inline int popcount(_Bool __v) noexcept { return __v; }

inline int find_first_set(_Bool) noexcept { return 0; }

inline int find_last_set(_Bool) noexcept { return 0; }

// Where expression class templates [parallel.simd.whereexpr]
template <class _MaskType, class _SimdType>
class const_where_expression;

template <class _MaskType, class _SimdType>
class where_expression;

// where functions [parallel.simd.mask.where]
template <class _Tp, class _Abi>
where_expression<simd_mask<_Tp, _Abi>, simd<_Tp, _Abi>>
where(const typename simd<_Tp, _Abi>::mask_type& __m, simd<_Tp, _Abi>& __s) noexcept {
  return {__m, __s};
}

template <class _Tp, class _Abi>
const_where_expression<simd_mask<_Tp, _Abi>, simd<_Tp, _Abi>>
where(const typename simd<_Tp, _Abi>::mask_type& __m, const simd<_Tp, _Abi>& __s) noexcept {
  return {__m, __s};
}

// file: type_identity.h  manual extend to fix weird error

template <class _Tp>
struct __type_identity { typedef _Tp type; };

template <class _Tp>
using __type_identity_t _LIBCPP_NODEBUG = typename __type_identity<_Tp>::type;

#if _LIBCPP_STD_VER >= 20
template<class _Tp> struct type_identity { typedef _Tp type; };
template<class _Tp> using type_identity_t = typename type_identity<_Tp>::type;
#endif

template <class _Tp, class _Abi>
where_expression<simd_mask<_Tp, _Abi>, simd_mask<_Tp, _Abi>>
where(const __type_identity_t<simd_mask<_Tp, _Abi>>& __m, simd_mask<_Tp, _Abi>& __s) noexcept {
  return {__m, __s};
}

template <class _Tp, class _Abi>
const_where_expression<simd_mask<_Tp, _Abi>, simd_mask<_Tp, _Abi>>
where(const __type_identity_t<simd_mask<_Tp, _Abi>>& __m, const simd_mask<_Tp, _Abi>& __s) noexcept {
  return {__m, __s};
}

template <class _Tp>
enable_if_t<!(is_simd_v<_Tp> || is_simd_mask_v<_Tp>), where_expression<bool, _Tp>> where(_Bool __m, _Tp& __s) noexcept {
  return {__m, __s};
}

template <class _Tp>
enable_if_t<!(is_simd_v<_Tp> || is_simd_mask_v<_Tp>), const_where_expression<bool, _Tp>>
where(_Bool __m, const _Tp& __s) noexcept {
  return {__m, __s};
}

template <typename _Tp, typename _Abi>
void where(bool __m, simd<_Tp, _Abi>& __v) = delete;

template <typename _Tp, typename _Abi>
void where(bool __m, const simd<_Tp, _Abi>& __v) = delete;

// Reductions [parallel.simd.reductions]
template <class _Tp, class _Abi, class _BinaryOp = plus<>>
_Tp reduce(const simd<_Tp, _Abi>& __s, _BinaryOp __binary_op = {}) {
  return __simd_traits<_Tp, _Abi>::__reduce(__s.__s_, __binary_op);
}

template <class _MaskType, class _SimdType, class _BinaryOp>
typename _SimdType::value_type
reduce(const const_where_expression<_MaskType, _SimdType>& __w,
       typename _SimdType::value_type __identity,
       _BinaryOp __binary_op) {
  _SimdType __tmp(__w.__s_);
  return _SimdType::_Impl::__reduce(
      _SimdType::_Impl::__masked_assign(
          __tmp.__s_, _MaskType::_Impl::__negate(__w.__m_.__s_), _SimdType::_Impl::__broadcast(__identity)),
      __binary_op);
}

template <class _MaskType, class _SimdType>
typename _SimdType::value_type
reduce(const const_where_expression<_MaskType, _SimdType>& __w, plus<> __binary_op = {}) noexcept {
  return reduce(__w, 0, __binary_op);
};

template <class _MaskType, class _SimdType>
typename _SimdType::value_type
reduce(const const_where_expression<_MaskType, _SimdType>& __w, multiplies<> __binary_op) noexcept {
  return reduce(__w, 1, __binary_op);
};

template <class _MaskType, class _SimdType>
typename _SimdType::value_type
reduce(const const_where_expression<_MaskType, _SimdType>& __w, bit_and<> __binary_op) noexcept {
  return reduce(__w, ~typename _SimdType::value_type(), __binary_op);
};

template <class _MaskType, class _SimdType>
typename _SimdType::value_type
reduce(const const_where_expression<_MaskType, _SimdType>& __w, bit_or<> __binary_op) noexcept {
  return reduce(__w, 0, __binary_op);
};

template <class _MaskType, class _SimdType>
typename _SimdType::value_type
reduce(const const_where_expression<_MaskType, _SimdType>& __w, bit_xor<> __binary_op) noexcept {
  return reduce(__w, 0, __binary_op);
};

template <class _Tp, class _Abi>
_Tp hmin(const simd<_Tp, _Abi>& __s) noexcept {
  return __simd_traits<_Tp, _Abi>::__hmin(__s.__s_);
}

template <class _MaskType, class _SimdType>
typename _SimdType::value_type hmin(const const_where_expression<_MaskType, _SimdType>& __w) noexcept {
  _SimdType __tmp(__w.__s_);
  return _SimdType::_Impl::__hmin(_SimdType::_Impl::__masked_assign(
      __tmp.__s_,
      _MaskType::_Impl::__negate(__w.__m_.__s_),
      _SimdType::_Impl::__broadcast(std::numeric_limits<typename _SimdType::value_type>::max())));
};

template <class _Tp, class _Abi>
_Tp hmax(const simd<_Tp, _Abi>& __s) noexcept {
  return __simd_traits<_Tp, _Abi>::__hmax(__s.__s_);
}

template <class _MaskType, class _SimdType>
typename _SimdType::value_type hmax(const const_where_expression<_MaskType, _SimdType>& __w) noexcept {
  _SimdType __tmp(__w.__s_);
  return _SimdType::_Impl::__hmax(_SimdType::_Impl::__masked_assign(
      __tmp.__s_,
      _MaskType::_Impl::__negate(__w.__m_.__s_),
      _SimdType::_Impl::__broadcast(std::numeric_limits<typename _SimdType::value_type>::lowest())));
};

// Algorithms [parallel.simd.alg]
template <class _Tp, class _Abi>
simd<_Tp, _Abi> min(const simd<_Tp, _Abi>& __a, const simd<_Tp, _Abi>& __b) noexcept {
  return __simd_traits<_Tp, _Abi>::__min(__a.__s_, __b.__s_);
}

template <class _Tp, class _Abi>
simd<_Tp, _Abi> max(const simd<_Tp, _Abi>& __a, const simd<_Tp, _Abi>& __b) noexcept {
  return __simd_traits<_Tp, _Abi>::__max(__a.__s_, __b.__s_);
}

template <class _Tp, class _Abi>
pair<simd<_Tp, _Abi>, simd<_Tp, _Abi>> minmax(const simd<_Tp, _Abi>& __a, const simd<_Tp, _Abi>& __b) noexcept {
  return __simd_traits<_Tp, _Abi>::__minmax(__a.__s_, __b.__s_);
}

template <class _Tp, class _Abi>
simd<_Tp, _Abi> clamp(const simd<_Tp, _Abi>& __v, const simd<_Tp, _Abi>& __lo, const simd<_Tp, _Abi>& __hi) noexcept {
  return __simd_traits<_Tp, _Abi>::__clamp(__v.__s_, __lo.__s_, __hi.__s_);
}

// Where expression class templates [parallel.simd.whereexpr]
template <class _MaskType, class _SimdType>
class const_where_expression {
  // TODO: check type of _MaskType and _SimdType
  template <class _Mp, class _Vp, class _BinaryOp>
  friend typename _Vp::value_type
  reduce(const const_where_expression<_Mp, _Vp>& __w, typename _Vp::value_type __identity, _BinaryOp __op);

  template <class _Mp, class _Vp>
  friend typename _Vp::value_type hmin(const const_where_expression<_Mp, _Vp>& __w) noexcept;

  template <class _Mp, class _Vp>
  friend typename _Vp::value_type hmax(const const_where_expression<_Mp, _Vp>& __w) noexcept;

protected:
  using _Impl = typename _SimdType::_Impl;
  const _MaskType __m_;
  _SimdType& __s_;

public:
  const_where_expression(const const_where_expression&)            = delete;
  const_where_expression& operator=(const const_where_expression&) = delete;
  const_where_expression(const _MaskType& __m, const _SimdType& __s) : __m_(__m), __s_(const_cast<_SimdType&>(__s)) {}

  _SimdType operator-() const&& noexcept {
    if constexpr (is_simd_v<_SimdType>)
      return _Impl::__masked_assign(__s_.__s_, __m_.__s_, _Impl::__unary_minus(__s_.__s_));
    else
      return __s_;
  }
  _SimdType operator+() const&& noexcept { return __s_; }
  _SimdType operator~() const&& noexcept {
    if constexpr (is_simd_v<_SimdType>)
      return _Impl::__masked_assign(__s_.__s_, __m_.__s_, _Impl::__bitwise_not(__s_.__s_));
    else
      return _Impl::__masked_assign(__s_.__s_, __m_.__s_, _Impl::__negate(__s_.__s_));
  }

  template <class _Up, class _Flags>
  enable_if_t<is_simd_flag_type_v<_Flags> &&
              ((is_same_v<_Up, bool> && is_same_v<typename _SimdType::value_type, bool>) ||
               (__is_vectorizable<_Up>() && !is_same_v<typename _SimdType::value_type, bool>))>
  copy_to(_Up* __mem, _Flags) const&& {
    _SimdType __tmp;
    _Impl::__load(__tmp.__s_, _Flags::template __apply<_SimdType>(__mem));
    _Impl::__store(
        _Impl::__masked_assign(__tmp.__s_, __m_.__s_, __s_.__s_), _Flags::template __apply<_SimdType>(__mem));
  }
};

template <class _Tp>
class const_where_expression<bool, _Tp> {
  // TODO: check type of _Tp
  template <class _Mp, class _Vp, class _BinaryOp>
  friend typename _Vp::value_type
  reduce(const const_where_expression<_Mp, _Vp>& __w, typename _Vp::value_type __identity, _BinaryOp __op);

  template <class _Mp, class _Vp>
  friend typename _Vp::value_type hmin(const const_where_expression<_Mp, _Vp>& __w) noexcept;

  template <class _Mp, class _Vp>
  friend typename _Vp::value_type hmax(const const_where_expression<_Mp, _Vp>& __w) noexcept;

protected:
  const bool __m_;
  _Tp& __s_;

public:
  const_where_expression(const const_where_expression&)            = delete;
  const_where_expression& operator=(const const_where_expression&) = delete;
  const_where_expression(const bool __m, const _Tp& __s) : __m_(__m), __s_(const_cast<_Tp&>(__s)) {}

  _Tp operator-() const&& noexcept { return __m_ ? -__s_ : __s_; }
  _Tp operator+() const&& noexcept { return __s_; }
  _Tp operator~() const&& noexcept { return __m_ ? ~__s_ : __s_; }

  template <class _Up, class _Flags>
  enable_if_t<is_simd_flag_type_v<_Flags> &&
              ((is_same_v<_Up, bool> && is_same_v<_Tp, bool>) || (__is_vectorizable<_Up>() && !is_same_v<_Tp, bool>))>
  copy_to(_Up* __mem, _Flags) const&& {
    if (__m_)
      __mem[0] = __m_ ? __s_ : __mem[0];
  };
};

template <class _MaskType, class _SimdType>
class where_expression : public const_where_expression<_MaskType, _SimdType> {
  using _Impl = typename const_where_expression<_MaskType, _SimdType>::_Impl;
  using const_where_expression<_MaskType, _SimdType>::__m_;
  using const_where_expression<_MaskType, _SimdType>::__s_;

public:
  where_expression(const _MaskType& __m, _SimdType& __s) : const_where_expression<_MaskType, _SimdType>(__m, __s) {}

  template <class _Up>
  enable_if_t<is_convertible_v<_Up, _SimdType>> operator=(_Up&& __v) && noexcept {
    if constexpr (is_arithmetic_v<_Up>)
      _Impl::__masked_assign(__s_.__s_, __m_.__s_, _Impl::__broadcast(__v));
    else
      _Impl::__masked_assign(__s_.__s_, __m_.__s_, __v.__s_);
  }

#  define _LIBCXX_SIMD_MASK_OP_(__op, __name)                                                                          \
    template <class _Up>                                                                                               \
    enable_if_t<is_convertible_v<decltype(declval<_SimdType&>() __op declval<_Up>()), _SimdType>> operator __op##=(    \
        _Up&& __v)&& noexcept {                                                                                        \
      if constexpr (is_arithmetic_v<_Up>)                                                                              \
        _Impl::__masked_assign(__s_.__s_, __m_.__s_, _Impl::__name(__s_.__s_, _Impl::__broadcast(__v)));               \
      else                                                                                                             \
        _Impl::__masked_assign(__s_.__s_, __m_.__s_, _Impl::__name(__s_.__s_, __v.__s_));                              \
    }

  _LIBCXX_SIMD_MASK_OP_(+, __plus)
  _LIBCXX_SIMD_MASK_OP_(-, __minus)
  _LIBCXX_SIMD_MASK_OP_(*, __multiplies)
  _LIBCXX_SIMD_MASK_OP_(/, __divides)
  _LIBCXX_SIMD_MASK_OP_(%, __modulus)
  _LIBCXX_SIMD_MASK_OP_(&, __bitwise_and)
  _LIBCXX_SIMD_MASK_OP_(|, __bitwise_or)
  _LIBCXX_SIMD_MASK_OP_(^, __bitwise_xor)
  _LIBCXX_SIMD_MASK_OP_(<<, __shift_left)
  _LIBCXX_SIMD_MASK_OP_(>>, __shift_right)
#  undef _LIBCXX_SIMD_MASK_OP_

  template <class _Up = void, class = decltype(++declval<conditional_t<true, _SimdType, _Up>&>())>
  void operator++() && noexcept {
    _SimdType __tmp = __s_;
    _Impl::__increment(__tmp.__s_);
    _Impl::__masked_assign(__s_.__s_, __m_.__s_, __tmp.__s_);
  }

  template <class _Up = void, class = decltype(declval<conditional_t<true, _SimdType, _Up>&>()++)>
  void operator++(int) && noexcept {
    _SimdType __tmp = __s_;
    _Impl::__increment(__tmp.__s_);
    _Impl::__masked_assign(__s_.__s_, __m_.__s_, __tmp.__s_);
  }

  template <class _Up = void, class = decltype(--declval<conditional_t<true, _SimdType, _Up>&>())>
  void operator--() && noexcept {
    _SimdType __tmp = __s_;
    _Impl::__decrement(__tmp.__s_);
    _Impl::__masked_assign(__s_.__s_, __m_.__s_, __tmp.__s_);
  }

  template <class _Up = void, class = decltype(declval<conditional_t<true, _SimdType, _Up>&>()--)>
  void operator--(int) && noexcept {
    _SimdType __tmp = __s_;
    _Impl::__decrement(__tmp.__s_);
    _Impl::__masked_assign(__s_.__s_, __m_.__s_, __tmp.__s_);
  }

  template <class _Up, class _Flags>
  enable_if_t<is_simd_flag_type_v<_Flags> &&
              ((is_same_v<_Up, bool> && is_same_v<typename _SimdType::value_type, bool>) ||
               (__is_vectorizable<_Up>() && !is_same_v<typename _SimdType::value_type, bool>))>
  copy_from(const _Up* __mem, _Flags) && {
    _SimdType __tmp;
    _Impl::__load(__tmp.__s_, _Flags::template __apply<_SimdType>(__mem));
    _Impl::__masked_assign(__s_.__s_, __m_.__s_, __tmp.__s_);
  }
};

template <class _Tp>
class where_expression<bool, _Tp> : public const_where_expression<bool, _Tp> {
  using const_where_expression<bool, _Tp>::__m_;
  using const_where_expression<bool, _Tp>::__s_;

public:
  where_expression(const bool __m, _Tp& __s) : const_where_expression<bool, _Tp>(__m, __s) {}

  template <class _Up>
  enable_if_t<is_convertible_v<_Up, _Tp>> operator=(_Up&& __v) && noexcept {
    __s_ = __m_ ? static_cast<_Up&&>(__v) : __s_;
  }

#  define _LIBCXX_SIMD_MASK_OP_(__op)                                                                                  \
    template <class _Up>                                                                                               \
    enable_if_t<is_convertible_v<decltype(declval<_Tp&>() __op declval<_Up>()), _Tp>> operator __op##=(                \
        _Up&& __v)&& noexcept {                                                                                        \
      __s_ = __m_ ? __s_ __op static_cast<_Up&&>(__v) : __s_;                                                          \
    }
  _LIBCXX_SIMD_MASK_OP_(+)
  _LIBCXX_SIMD_MASK_OP_(-)
  _LIBCXX_SIMD_MASK_OP_(*)
  _LIBCXX_SIMD_MASK_OP_(/)
  _LIBCXX_SIMD_MASK_OP_(%)
  _LIBCXX_SIMD_MASK_OP_(&)
  _LIBCXX_SIMD_MASK_OP_(|)
  _LIBCXX_SIMD_MASK_OP_(^)
  _LIBCXX_SIMD_MASK_OP_(<<)
  _LIBCXX_SIMD_MASK_OP_(>>)
#  undef _LIBCXX_SIMD_MASK_OP_

  template <class _Up = void, class = decltype(++declval<conditional_t<true, _Tp, _Up>&>())>
  void operator++() && noexcept {
    if (__m_)
      __s_++;
  }

  template <class _Up = void, class = decltype(declval<conditional_t<true, _Tp, _Up>&>()++)>
  void operator++(int) && noexcept {
    if (__m_)
      ++__s_;
  }

  template <class _Up = void, class = decltype(--declval<conditional_t<true, _Tp, _Up>&>())>
  void operator--() && noexcept {
    if (__m_)
      __s_--;
  }

  template <class _Up = void, class = decltype(declval<conditional_t<true, _Tp, _Up>&>()--)>
  void operator--(int) && noexcept {
    if (__m_)
      --__s_;
  }

  template <class _Up, class _Flags>
  enable_if_t<is_simd_flag_type_v<_Flags> &&
              ((is_same_v<_Up, bool> && is_same_v<_Tp, bool>) || (__is_vectorizable<_Up>() && !is_same_v<_Tp, bool>))>
  copy_from(const _Up* __mem, _Flags) && {
    __s_ = __m_ ? __mem[0] : __s_;
  }
};

// Class template simd [parallel.simd.class]
template <class _Simd, class _Impl, bool>
class __simd_int_operators {};

template <class _Simd, class _Impl>
class __simd_int_operators<_Simd, _Impl, true> {
public:
  // unary operators for integral _Tp [simd.unary]
  _Simd operator~() const noexcept { return _Impl::__bitwise_not((*static_cast<const _Simd*>(this)).__s_); }

  // binary operators for integral _Tp [simd.binary]
  friend _Simd operator%(const _Simd& __lhs, const _Simd& __rhs) noexcept {
    return _Impl::__modulus(__lhs.__s_, __rhs.__s_);
  }

  friend _Simd operator&(const _Simd& __lhs, const _Simd& __rhs) noexcept {
    return _Impl::__bitwise_and(__lhs.__s_, __rhs.__s_);
  }

  friend _Simd operator|(const _Simd& __lhs, const _Simd& __rhs) noexcept {
    return _Impl::__bitwise_or(__lhs.__s_, __rhs.__s_);
  }

  friend _Simd operator^(const _Simd& __lhs, const _Simd& __rhs) noexcept {
    return _Impl::__bitwise_xor(__lhs.__s_, __rhs.__s_);
  }

  friend _Simd operator<<(const _Simd& __lhs, const _Simd& __rhs) noexcept {
    return _Impl::__shift_left(__lhs.__s_, __rhs.__s_);
  }

  friend _Simd operator>>(const _Simd& __lhs, const _Simd& __rhs) noexcept {
    return _Impl::__shift_right(__lhs.__s_, __rhs.__s_);
  }

  friend _Simd operator<<(const _Simd& __lhs, int __rhs) noexcept { return _Impl::__shift_left(__lhs.__s_, __rhs); }

  friend _Simd operator>>(const _Simd& __lhs, int __rhs) noexcept { return _Impl::__shift_right(__lhs.__s_, __rhs); }

  // compound assignment for integral _Tp [simd.cassign]

  friend _Simd& operator%=(_Simd& __lhs, const _Simd& __rhs) noexcept { return __lhs = __lhs % __rhs; }

  friend _Simd& operator&=(_Simd& __lhs, const _Simd& __rhs) noexcept { return __lhs = __lhs & __rhs; }

  friend _Simd& operator|=(_Simd& __lhs, const _Simd& __rhs) noexcept { return __lhs = __lhs | __rhs; }

  friend _Simd& operator^=(_Simd& __lhs, const _Simd& __rhs) noexcept { return __lhs = __lhs ^ __rhs; }

  friend _Simd& operator<<=(_Simd& __lhs, const _Simd& __rhs) noexcept { return __lhs = __lhs << __rhs; }

  friend _Simd& operator>>=(_Simd& __lhs, const _Simd& __rhs) noexcept { return __lhs = __lhs >> __rhs; }

  friend _Simd& operator<<=(_Simd& __lhs, int __rhs) noexcept { return __lhs = __lhs << __rhs; }

  friend _Simd& operator>>=(_Simd& __lhs, int __rhs) noexcept { return __lhs = __lhs >> __rhs; }
};

template <class _Tp, class _Abi>
class simd : public __simd_int_operators<simd<_Tp, _Abi>, __simd_traits<_Tp, _Abi>, is_integral_v<_Tp>> {
  using _Impl    = __simd_traits<_Tp, _Abi>;
  using _Storage = typename _Impl::_Simd;

  _Storage __s_;

  friend class simd_mask<_Tp, _Abi>;
  friend class __simd_int_operators<simd, _Impl, true>;

  template <class _MaskType, class _SimdType>
  friend class const_where_expression;
  template <class _MaskType, class _SimdType>
  friend class where_expression;

  friend simd min<>(const simd&, const simd&) noexcept;
  friend simd max<>(const simd&, const simd&) noexcept;
  friend pair<simd, simd> minmax<>(const simd&, const simd&) noexcept;
  friend simd clamp<>(const simd&, const simd&, const simd&) noexcept;
  friend _Tp hmin<>(const simd&) noexcept;
  friend _Tp hmax<>(const simd&) noexcept;

  template <class __Tp, class __Abi, class _BinaryOp>
  friend __Tp reduce(const simd<__Tp, __Abi>&, _BinaryOp);

  template <class _Mp, class _Vp, class _BinaryOp>
  friend typename _Vp::value_type
  reduce(const const_where_expression<_Mp, _Vp>& __w, typename _Vp::value_type __identity, _BinaryOp __op);

  template <class _Mp, class _Vp>
  friend typename _Vp::value_type hmin(const const_where_expression<_Mp, _Vp>& __w) noexcept;

  template <class _Mp, class _Vp>
  friend typename _Vp::value_type hmax(const const_where_expression<_Mp, _Vp>& __w) noexcept;

public:
  using value_type = _Tp;
  using reference  = __simd_reference<_Tp, _Storage, value_type>;
  using mask_type  = simd_mask<_Tp, _Abi>;
  using abi_type   = _Abi;

  simd()                       = default;
  simd(const simd&)            = default;
  simd& operator=(const simd&) = default;

  simd(_Storage __s) : __s_(__s) {}

  static constexpr size_t size() noexcept { return simd_size_v<value_type, abi_type>; }

  // implicit broadcast constructor
  template <class _Up, enable_if_t<__can_broadcast<value_type, _Up>(), int> = 0>
  simd(_Up&& __v) : __s_(_Impl::__broadcast(static_cast<value_type>(__v))) {}

  // implicit type conversion constructor
  template <class _Up,
            class = std::enable_if_t<std::is_same_v<abi_type, simd_abi::fixed_size<size()>> &&
                                     __is_non_narrowing_arithmetic_convertible<_Up, value_type>()>>
  simd(const simd<_Up, simd_abi::fixed_size<size()>>& __v) {
    for (size_t __i = 0; __i < size(); __i++) {
      (*this)[__i] = static_cast<_Tp>(__v[__i]);
    }
  }

  // generator constructor
  template <class _Generator,
            enable_if_t<__can_generate<value_type, _Generator>(make_index_sequence<size()>()), int> = 0>
  explicit simd(_Generator&& __g) : __s_(_Impl::__generate(std::forward<_Generator>(__g))) {}

  // load constructor
  template <class _Up, class _Flags, class = enable_if_t<__is_vectorizable<_Up>() && is_simd_flag_type_v<_Flags>>>
  simd(const _Up* __mem, _Flags) {
    _Impl::__load(__s_, _Flags::template __apply<simd>(__mem));
  }

  // loads [simd.load]
  template <class _Up, class _Flags>
  enable_if_t<__is_vectorizable<_Up>() && is_simd_flag_type_v<_Flags>> copy_from(const _Up* __mem, _Flags) {
    _Impl::__load(__s_, _Flags::template __apply<simd>(__mem));
  }

  // stores [simd.store]
  template <class _Up, class _Flags>
  enable_if_t<__is_vectorizable<_Up>() && is_simd_flag_type_v<_Flags>> copy_to(_Up* __mem, _Flags) const {
    _Impl::__store(__s_, _Flags::template __apply<simd>(__mem));
  }

  // scalar access [simd.subscr]
  reference operator[](size_t __i) { return reference(__s_, __i); }

  value_type operator[](size_t __i) const { return __s_.__get(__i); }

  // unary operators [simd.unary]
  simd& operator++() noexcept {
    _Impl::__increment(__s_);
    return *this;
  }

  simd operator++(int) noexcept {
    simd __r = *this;
    _Impl::__increment(__s_);
    return __r;
  }

  simd& operator--() noexcept {
    _Impl::__decrement(__s_);
    return *this;
  }

  simd operator--(int) noexcept {
    simd __r = *this;
    _Impl::__decrement(__s_);
    return __r;
  }

  mask_type operator!() const noexcept { return _Impl::__negate(__s_); }

  simd operator+() const noexcept { return *this; }

  simd operator-() const noexcept { return _Impl::__unary_minus(__s_); }

  // binary operators [simd.binary]
  friend simd operator+(const simd& __lhs, const simd& __rhs) noexcept { return _Impl::__plus(__lhs.__s_, __rhs.__s_); }

  friend simd operator-(const simd& __lhs, const simd& __rhs) noexcept {
    return _Impl::__minus(__lhs.__s_, __rhs.__s_);
  }

  friend simd operator*(const simd& __lhs, const simd& __rhs) noexcept {
    return _Impl::__multiplies(__lhs.__s_, __rhs.__s_);
  }

  friend simd operator/(const simd& __lhs, const simd& __rhs) noexcept {
    return _Impl::__divides(__lhs.__s_, __rhs.__s_);
  }

  // compound assignment [simd.cassign]
  friend simd& operator+=(simd& __lhs, const simd& __rhs) noexcept { return __lhs = __lhs + __rhs; }

  friend simd& operator-=(simd& __lhs, const simd& __rhs) noexcept { return __lhs = __lhs - __rhs; }

  friend simd& operator*=(simd& __lhs, const simd& __rhs) noexcept { return __lhs = __lhs * __rhs; }

  friend simd& operator/=(simd& __lhs, const simd& __rhs) noexcept { return __lhs = __lhs / __rhs; }

  // compares [simd.comparison]
  friend mask_type operator==(const simd& __lhs, const simd& __rhs) noexcept {
    return _Impl::__equal_to(__lhs.__s_, __rhs.__s_);
  }

  friend mask_type operator!=(const simd& __lhs, const simd& __rhs) noexcept {
    return _Impl::__not_equal_to(__lhs.__s_, __rhs.__s_);
  }

  friend mask_type operator>=(const simd& __lhs, const simd& __rhs) noexcept {
    return _Impl::__less_equal(__rhs.__s_, __lhs.__s_);
  }

  friend mask_type operator<=(const simd& __lhs, const simd& __rhs) noexcept {
    return _Impl::__less_equal(__lhs.__s_, __rhs.__s_);
  }

  friend mask_type operator>(const simd& __lhs, const simd& __rhs) noexcept {
    return _Impl::__less(__rhs.__s_, __lhs.__s_);
  }

  friend mask_type operator<(const simd& __lhs, const simd& __rhs) noexcept {
    return _Impl::__less(__lhs.__s_, __rhs.__s_);
  }
};

// Class template simd_mask [parallel.simd.mask.class]
template <class _Tp, class _Abi>
class simd_mask {
  using _Impl    = __mask_traits<_Tp, _Abi>;
  using _Storage = typename _Impl::_Mask;

  _Storage __s_;

  friend class simd<_Tp, _Abi>;

  template <class _MaskType, class _SimdType>
  friend class const_where_expression;
  template <class _MaskType, class _SimdType>
  friend class where_expression;

  template <class __Tp, class __Abi, class _BinaryOp>
  friend __Tp reduce(const simd<__Tp, __Abi>&, _BinaryOp);

  template <class _Mp, class _Vp, class _BinaryOp>
  friend typename _Vp::value_type
  reduce(const const_where_expression<_Mp, _Vp>& __w, typename _Vp::value_type __identity, _BinaryOp __op);

  friend bool all_of<>(const simd_mask&) noexcept;
  friend bool any_of<>(const simd_mask&) noexcept;
  friend bool none_of<>(const simd_mask&) noexcept;
  friend bool some_of<>(const simd_mask&) noexcept;
  friend int popcount<>(const simd_mask&) noexcept;
  friend int find_first_set<>(const simd_mask&);
  friend int find_last_set<>(const simd_mask&);

  template <class _Mp, class _Vp>
  friend typename _Vp::value_type hmin(const const_where_expression<_Mp, _Vp>& __w) noexcept;

  template <class _Mp, class _Vp>
  friend typename _Vp::value_type hmax(const const_where_expression<_Mp, _Vp>& __w) noexcept;

public:
  using value_type = bool;
  using reference  = __simd_reference<_Tp, _Storage, value_type>;
  using simd_type  = simd<_Tp, _Abi>;
  using abi_type   = _Abi;

  static constexpr size_t size() noexcept { return simd_type::size(); }

  simd_mask() = default;

  simd_mask(_Storage __s) : __s_(__s) {}

  // broadcast constructor
  explicit simd_mask(value_type __v) noexcept : __s_(_Impl::__broadcast(__v)) {}

  // implicit type conversion constructor
  template <class _Up,
             std::enable_if_t<!std::is_void_v<_Up> && std::is_same_v<abi_type, simd_abi::fixed_size<size()>>, int> = 0>
  simd_mask(const simd_mask<_Up, simd_abi::fixed_size<size()>>& __v) noexcept {
    for (size_t __i = 0; __i < size(); __i++) {
      (*this)[__i] = __v[__i];
    }
  }

  // load constructor
  template <class _Flags, class = enable_if_t<is_simd_flag_type_v<_Flags>>>
  simd_mask(const value_type* __mem, _Flags) {
    _Impl::__load(__s_, _Flags::template __apply<simd_mask>(__mem));
  }

  // loads [simd.mask.copy]
  template <class _Flags>
  enable_if_t<is_simd_flag_type_v<_Flags>> copy_from(const value_type* __mem, _Flags) {
    _Impl::__load(__s_, _Flags::template __apply<simd_mask>(__mem));
  }

  template <class _Flags>
  enable_if_t<is_simd_flag_type_v<_Flags>> copy_to(value_type* __mem, _Flags) const {
    _Impl::__store(__s_, _Flags::template __apply<simd_mask>(__mem));
  }

  // scalar access [simd.mask.subscr]
  reference operator[](size_t __i) { return reference(__s_, __i); }

  value_type operator[](size_t __i) const { return __s_.__get(__i); }

  // unary operators [simd.mask.unary]
  simd_mask operator!() const noexcept { return _Impl::__negate(__s_); }

  // simd_mask binary operators [simd.mask.binary]
  friend simd_mask operator&&(const simd_mask& __lhs, const simd_mask& __rhs) noexcept {
    return _Impl::__logical_and(__lhs.__s_, __rhs.__s_);
  }

  friend simd_mask operator||(const simd_mask& __lhs, const simd_mask& __rhs) noexcept {
    return _Impl::__logical_or(__lhs.__s_, __rhs.__s_);
  }

  friend simd_mask operator&(const simd_mask& __lhs, const simd_mask& __rhs) noexcept {
    return _Impl::__bitwise_and(__lhs.__s_, __rhs.__s_);
  }

  friend simd_mask operator|(const simd_mask& __lhs, const simd_mask& __rhs) noexcept {
    return _Impl::__bitwise_or(__lhs.__s_, __rhs.__s_);
  }

  friend simd_mask operator^(const simd_mask& __lhs, const simd_mask& __rhs) noexcept {
    return _Impl::__bitwise_xor(__lhs.__s_, __rhs.__s_);
  }

  // simd_mask compound assignment [simd.mask.cassign]
  friend simd_mask& operator&=(simd_mask& __lhs, const simd_mask& __rhs) noexcept { return __lhs = __lhs & __rhs; }

  friend simd_mask& operator|=(simd_mask& __lhs, const simd_mask& __rhs) noexcept { return __lhs = __lhs | __rhs; }

  friend simd_mask& operator^=(simd_mask& __lhs, const simd_mask& __rhs) noexcept { return __lhs = __lhs ^ __rhs; }

  // simd_mask compares [simd.mask.comparison]
  friend simd_mask operator==(const simd_mask& __lhs, const simd_mask& __rhs) noexcept {
    return _Impl::__negate(_Impl::__bitwise_xor(__lhs.__s_, __rhs.__s_));
  }

  friend simd_mask operator!=(const simd_mask& __lhs, const simd_mask& __rhs) noexcept {
    return _Impl::__bitwise_xor(__lhs.__s_, __rhs.__s_);
  }
};

// simd.math
template <class Abi> using scharv = simd<signed char, Abi>; // exposition only
template <class Abi> using shortv = simd<short, Abi>; // exposition only
template <class Abi> using intv = simd<int, Abi>; // exposition only
template <class Abi> using longv = simd<long int, Abi>; // exposition only
template <class Abi> using llongv = simd<long long int, Abi>; // exposition only
template <class Abi> using int128v = simd<__int128_t, Abi>; // exposition only
template <class Abi> using floatv = simd<float, Abi>; // exposition only
template <class Abi> using doublev = simd<double, Abi>; // exposition only
template <class Abi> using ldoublev = simd<long double, Abi>; // exposition only
template <class Abi> using uintv = simd<unsigned int, Abi>; // exposition only
template <class Abi> using ulongv = simd<unsigned long, Abi>; // exposition only
template <class Abi> using ullongv = simd<unsigned long long, Abi>; // exposition only
template <class Abi> using uint128v = simd<__uint128_t, Abi>; // exposition only

template <class Abi> using boolv = simd<bool, Abi>; // exposition only

template <class T, class V> using samesize = fixed_size_simd<T, V::size()>; // exposition only

template <class Abi>
union Abi_32suf
{
    intv<Abi> i;
    uintv<Abi> u;
    floatv<Abi> f;
};

template <class Abi>
union Abi_64suf
{
    longv<Abi> i;
    ulongv<Abi> u;
    doublev<Abi> f;
};

template <class Abi>
union Abi_128suf
{
    int128v<Abi> i;
    uint128v<Abi> u;
    ldoublev<Abi> f;
};

template<typename T1, typename T2>
T1 vld1q_f(T1 x){
  return static_simd_cast<T1>(static_simd_cast<T2>(x));
}

template<typename T1, typename T2>
T2 s2v(T1 x){
  T2 xv(x);
  return xv;
}

template <class Abi>
floatv<Abi> fma(floatv<Abi> x, floatv<Abi> y, floatv<Abi> z){
  return x * y + z;
}

template <class Abi>
doublev<Abi> fma(doublev<Abi> x, doublev<Abi> y, doublev<Abi> z){
  return x * y + z;
}

template<typename T>
T vfmaq(T z, T x, T y){
  return z+x*y;
}

template<typename T>
T vfmsq(T z, T x, T y){
  return z-x*y;
}

#define LLVM_NAN_32F (float)(0.0 / 0.0)
#define LLVM_NAN_64F (double)(0.0 / 0.0)
#define LLVM_NAN_128F (long double)(0.0 / 0.0)

#define LLVM_INF_32F (float)(1.0 / 0.0)
#define LLVM_INF_64F (double)(1.0 / 0.0)
#define LLVM_INF_128F (long double)(1.0 / 0.0)

#define FMAF_NEON(x,y,z) vfmaq<floatv<Abi>>(z,x,y)
#define FMA_NEON(x,y,z) vfmaq<doublev<Abi>>(z,x,y)

#define  HORNER_NEON_1_(x, c, i) FMAF_NEON(c(i + 1), x, c(i))
#define  HORNER_NEON_2_(x, c, i) FMAF_NEON(HORNER_NEON_1_ (x, c, i + 1), x, c(i))
#define  HORNER_NEON_3_(x, c, i) FMAF_NEON(HORNER_NEON_2_ (x, c, i + 1), x, c(i))
#define  HORNER_NEON_4_(x, c, i) FMAF_NEON(HORNER_NEON_3_ (x, c, i + 1), x, c(i))
#define  HORNER_NEON_4(x, c) HORNER_NEON_4_ (x, c, 0)

#define  ESTRIN_NEON_1_(x,                  c, i) FMA_NEON(x,   c(1 + i),                        c(i))
#define  ESTRIN_NEON_2_(x, x2,              c, i) FMA_NEON(x2,  c(2 + i),                        ESTRIN_NEON_1_(x,              c, i))
#define  ESTRIN_NEON_3_(x, x2,              c, i) FMA_NEON(x2,  ESTRIN_NEON_1_(x,         c,  2 + i), ESTRIN_NEON_1_(x,              c, i))
#define  ESTRIN_NEON_4_(x, x2, x4,          c, i) FMA_NEON(x4,  c(4 + i),                        ESTRIN_NEON_3_(x, x2,          c, i))
#define  ESTRIN_NEON_5_(x, x2, x4,          c, i) FMA_NEON(x4,  ESTRIN_NEON_1_(x,         c,  4 + i), ESTRIN_NEON_3_(x, x2,          c, i))
#define  ESTRIN_NEON_6_(x, x2, x4,          c, i) FMA_NEON(x4,  ESTRIN_NEON_2_(x, x2,     c,  4 + i), ESTRIN_NEON_3_(x, x2,          c, i))
#define  ESTRIN_NEON_7_(x, x2, x4,          c, i) FMA_NEON(x4,  ESTRIN_NEON_3_(x, x2,     c,  4 + i), ESTRIN_NEON_3_(x, x2,          c, i))
#define  ESTRIN_NEON_8_(x, x2, x4, x8,      c, i) FMA_NEON(x8,  c(8 + i),                        ESTRIN_NEON_7_(x, x2, x4,      c, i))
#define  ESTRIN_NEON_9_(x, x2, x4, x8,      c, i) FMA_NEON(x8,  ESTRIN_NEON_1_(x,         c,  8 + i), ESTRIN_NEON_7_(x, x2, x4,      c, i))
#define ESTRIN_NEON_10_(x, x2, x4, x8,      c, i) FMA_NEON(x8,  ESTRIN_NEON_2_(x, x2,     c,  8 + i), ESTRIN_NEON_7_(x, x2, x4,      c, i))
#define ESTRIN_NEON_11_(x, x2, x4, x8,      c, i) FMA_NEON(x8,  ESTRIN_NEON_3_(x, x2,     c,  8 + i), ESTRIN_NEON_7_(x, x2, x4,      c, i))
#define ESTRIN_NEON_12_(x, x2, x4, x8,      c, i) FMA_NEON(x8,  ESTRIN_NEON_4_(x, x2, x4, c,  8 + i), ESTRIN_NEON_7_(x, x2, x4,      c, i))
#define ESTRIN_NEON_13_(x, x2, x4, x8,      c, i) FMA_NEON(x8,  ESTRIN_NEON_5_(x, x2, x4, c,  8 + i), ESTRIN_NEON_7_(x, x2, x4,      c, i))
#define ESTRIN_NEON_14_(x, x2, x4, x8,      c, i) FMA_NEON(x8,  ESTRIN_NEON_6_(x, x2, x4, c,  8 + i), ESTRIN_NEON_7_(x, x2, x4,      c, i))
#define ESTRIN_NEON_15_(x, x2, x4, x8,      c, i) FMA_NEON(x8,  ESTRIN_NEON_7_(x, x2, x4, c,  8 + i), ESTRIN_NEON_7_(x, x2, x4,      c, i))
#define ESTRIN_NEON_16_(x, x2, x4, x8, x16, c, i) FMA_NEON(x16, c(16 + i),                       ESTRIN_NEON_15_(x, x2, x4, x8, c, i))
#define ESTRIN_NEON_17_(x, x2, x4, x8, x16, c, i) FMA_NEON(x16, ESTRIN_NEON_1_(x,         c, 16 + i), ESTRIN_NEON_15_(x, x2, x4, x8, c, i))
#define ESTRIN_NEON_18_(x, x2, x4, x8, x16, c, i) FMA_NEON(x16, ESTRIN_NEON_2_(x, x2,     c, 16 + i), ESTRIN_NEON_15_(x, x2, x4, x8, c, i))
#define ESTRIN_NEON_19_(x, x2, x4, x8, x16, c, i) FMA_NEON(x16, ESTRIN_NEON_3_(x, x2,     c, 16 + i), ESTRIN_NEON_15_(x, x2, x4, x8, c, i))

#define  ESTRIN_NEON_1(x,                  c)  ESTRIN_NEON_1_(x,                  c, 0)
#define  ESTRIN_NEON_2(x, x2,              c)  ESTRIN_NEON_2_(x, x2,              c, 0)
#define  ESTRIN_NEON_3(x, x2,              c)  ESTRIN_NEON_3_(x, x2,              c, 0)
#define  ESTRIN_NEON_4(x, x2, x4,          c)  ESTRIN_NEON_4_(x, x2, x4,          c, 0)
#define  ESTRIN_NEON_5(x, x2, x4,          c)  ESTRIN_NEON_5_(x, x2, x4,          c, 0)
#define  ESTRIN_NEON_6(x, x2, x4,          c)  ESTRIN_NEON_6_(x, x2, x4,          c, 0)
#define  ESTRIN_NEON_7(x, x2, x4,          c)  ESTRIN_NEON_7_(x, x2, x4,          c, 0)
#define  ESTRIN_NEON_8(x, x2, x4, x8,      c)  ESTRIN_NEON_8_(x, x2, x4, x8,      c, 0)
#define  ESTRIN_NEON_9(x, x2, x4, x8,      c)  ESTRIN_NEON_9_(x, x2, x4, x8,      c, 0)
#define ESTRIN_NEON_10(x, x2, x4, x8,      c) ESTRIN_NEON_10_(x, x2, x4, x8,      c, 0)
#define ESTRIN_NEON_11(x, x2, x4, x8,      c) ESTRIN_NEON_11_(x, x2, x4, x8,      c, 0)
#define ESTRIN_NEON_12(x, x2, x4, x8,      c) ESTRIN_NEON_12_(x, x2, x4, x8,      c, 0)
#define ESTRIN_NEON_13(x, x2, x4, x8,      c) ESTRIN_NEON_13_(x, x2, x4, x8,      c, 0)
#define ESTRIN_NEON_14(x, x2, x4, x8,      c) ESTRIN_NEON_14_(x, x2, x4, x8,      c, 0)
#define ESTRIN_NEON_15(x, x2, x4, x8,      c) ESTRIN_NEON_15_(x, x2, x4, x8,      c, 0)
#define ESTRIN_NEON_16(x, x2, x4, x8, x16, c) ESTRIN_NEON_16_(x, x2, x4, x8, x16, c, 0)
#define ESTRIN_NEON_17(x, x2, x4, x8, x16, c) ESTRIN_NEON_17_(x, x2, x4, x8, x16, c, 0)
#define ESTRIN_NEON_18(x, x2, x4, x8, x16, c) ESTRIN_NEON_18_(x, x2, x4, x8, x16, c, 0)
#define ESTRIN_NEON_19(x, x2, x4, x8, x16, c) ESTRIN_NEON_19_(x, x2, x4, x8, x16, c, 0)


static const float __asinf_data[]
= {0x1.55555ep-3, 0x1.33261ap-4, 0x1.70d7dcp-5, 0x1.b059dp-6, 0x1.3af7d8p-5,};

static const double __asin_data[] = 
    {0x1.555555555554ep-3, 0x1.3333333337233p-4,  0x1.6db6db67f6d9fp-5,
  0x1.f1c71fbd29fbbp-6, 0x1.6e8b264d467d6p-6,  0x1.1c5997c357e9dp-6,
  0x1.c86a22cd9389dp-7, 0x1.856073c22ebbep-7,  0x1.fd1151acb6bedp-8,
  0x1.087182f799c1dp-6, -0x1.6602748120927p-7, 0x1.cfa0dd1f9478p-6,};

#define MASKf_sign 0x80000000
#define Top16Maskf 0xffff0000

#define ExpShift23 0x1.8p23f
#define ExpShift52 0x1.8p52
#define ExpShift112 0x1.8p112

#define Bottom15Mask 0x7fff
#define Bottom32Mask 0xffffffff

#define MaskBottom24 0xffffffffff000000
#define MaskBottom41 0xfffffe0000000000


#define ExponetBitsf 0xff
#define ExponetBasef 0x7f
#define ExponetBits 0x7ff
#define ExponetBase 0x3ff

#define __asinf_c(i)  __asinf_data[i]
#define __asin_c(i)  __asin_data[i]

#define AbsMaskf 0x7fffffffU
#define PiD2f 0x1.921fb6p+0f

#define AbsMask 0x7fffffffffffffffUL
#define PiD2 0x1.921fb54442d18p+0

#define HalfOnef_N 0x3f000000
#define HalfOne_N 0x3fe0000000000000

// sqrt
#define ExpMask 0x800fffffffffffff
#define SqrtAbsMask 0x00000000000007ff
#define SqrtSignMask 0x00000000000003fe
#define SQRT2 1.41421356237309504880

// exp
// float
#define MASKf_exp 0x7f800000U
#define MASK_exp 0x7FF0000000000000UL

#define Top54Maskf 0xfffffffffffffc00

#define ASCTH_NAN 1073741824.0

// double
#define InvLn2_ha 92.33248261689366    // =1/ln2*64
#define Shift_ha 6755399441121216.0    //1.5000000000145377*2^52 

#define Ln2hi_ha 0.010830424696223417  //0x3f862e42fefa0000
#define Ln2lo_ha 2.572804622327669e-14 //0x3d1cf79abc9e3b3a

static const unsigned long _etab[] = {
0x0000000000000000,0x0000000000000000,
0x00002c9a3e778060,0x3cad7bbf0e03754d,
0x000059b0d3158574,0x3c8cd2523567f613,
0x0000874518759bc8,0x3c60f74e61e6c861,
0x0000b5586cf9890f,0x3c979aa65d837b6c,
0x0000e3ec32d3d1a2,0x3c3ebe3d702f9cd1,
0x00011301d0125b50,0x3ca3516e1e63bcd8,
0x0001429aaea92ddf,0x3ca4c55426f0387b,
0x000172b83c7d517a,0x3ca9515362523fb6,
0x0001a35beb6fcb75,0x3c8b898c3f1353bf,
0x0001d4873168b9aa,0x3c9aecf73e3a2f5f,
0x0002063b88628cd6,0x3c8a6f4144a6c38d,
0x0002387a6e756238,0x3c968efde3a8a894,
0x00026b4565e27cdd,0x3c80472b981fe7f2,
0x00029e9df51fdee1,0x3c82f7e16d09ab31,
0x0002d285a6e4030b,0x3c8b3782720c0ab3,
0x000306fe0a31b715,0x3c834d754db0abb6,
0x00033c08b26416ff,0x3c8fdd395dd3f84a,
0x000371a7373aa9ca,0x3ca12f8ccc187d29,
0x0003a7db34e59ff6,0x3ca7d229738b5e8b,
0x0003dea64c123422,0x3c859f48a72a4c6d,
0x0004160a21f72e29,0x3ca8b846259d9205,
0x00044e086061892d,0x3c4363ed60c2ac12,
0x000486a2b5c13cd0,0x3c6ecce1daa10379,
0x0004bfdad5362a27,0x3c7690cebb7aafb0,
0x0004f9b2769d2ca6,0x3ca083cc9b282a09,
0x0005342b569d4f81,0x3ca509b0c1aae707,
0x00056f4736b527da,0x3c93350518fdd78e,
0x0005ab07dd485429,0x3c9063e1e21c5409,
0x0005e76f15ad2148,0x3c9432e62b64c035,
0x0006247eb03a5584,0x3ca0128499f08c0a,
0x0006623882552224,0x3c99f0870073dc06,
0x0006a09e667f3bcc,0x3c998d4d0da05571,
0x0006dfb23c651a2e,0x3ca52bb986ce4786,
0x00071f75e8ec5f73,0x3ca32092206f0dab,
0x00075feb564267c8,0x3ca061228e17a7a6,
0x0007a11473eb0186,0x3ca244ac461e9f86,
0x0007e2f336cf4e62,0x3c65ebe1abd66c55,
0x00082589994cce12,0x3c96fe9fbbff67d0,
0x000868d99b4492ec,0x3c951f1414c801df,
0x0008ace5422aa0db,0x3c8db72fc1f0eab4,
0x0008f1ae99157736,0x3c7bf68359f35f44,
0x00093737b0cdc5e4,0x3ca360ba9c06283c,
0x00097d829fde4e4f,0x3c95e8d120f962aa,
0x0009c49182a3f090,0x3c71affc2b91ce27,
0x000a0c667b5de564,0x3c9b6d34589a2ebd,
0x000a5503b23e255c,0x3c95277c9ab89880,
0x000a9e6b5579fdbf,0x3c8469846e735ab3,
0x000ae89f995ad3ad,0x3c8c1a7792cb3387,
0x000b33a2b84f15fa,0x3ca22466dc2d1d96,
0x000b7f76f2fb5e46,0x3ca1112eb19505ae,
0x000bcc1e904bc1d2,0x3c74ffd70a5fddcd,
0x000c199bdd85529c,0x3c736eae30af0cb3,
0x000c67f12e57d14b,0x3c84e08fd10959ac,
0x000cb720dcef9069,0x3c676b2c6c921968,
0x000d072d4a07897b,0x3c93700936df99b3,
0x000d5818dcfba487,0x3c74a385a63d07a7,
0x000da9e603db3285,0x3c8e5a50d5c192ac,
0x000dfc97337b9b5e,0x3c98bb731c4a9792,
0x000e502ee78b3ff6,0x3c74b604603a88d3,
0x000ea4afa2a490d9,0x3c916f2792094926,
0x000efa1bee615a27,0x3c8ec3bc41aa2008,
0x000f50765b6e4540,0x3c8a64a931d185ee,
0x000fa7c1819e90d8,0x3c77893b4d91cd9d,
};

// exp2
#define ExpShift47 0x1.8p+47

static const unsigned long __exp2f_tab[] = {
    0x3ff0000000000000, 0x3fefd9b0d3158574, 0x3fefb5586cf9890f, 0x3fef9301d0125b51,
    0x3fef72b83c7d517b, 0x3fef54873168b9aa, 0x3fef387a6e756238, 0x3fef1e9df51fdee1,
    0x3fef06fe0a31b715, 0x3feef1a7373aa9cb, 0x3feedea64c123422, 0x3feece086061892d,
    0x3feebfdad5362a27, 0x3feeb42b569d4f82, 0x3feeab07dd485429, 0x3feea47eb03a5585,
    0x3feea09e667f3bcd, 0x3fee9f75e8ec5f74, 0x3feea11473eb0187, 0x3feea589994cce13,
    0x3feeace5422aa0db, 0x3feeb737b0cdc5e5, 0x3feec49182a3f090, 0x3feed503b23e255d,
    0x3feee89f995ad3ad, 0x3feeff76f2fb5e47, 0x3fef199bdd85529c, 0x3fef3720dcef9069,
    0x3fef5818dcfba487, 0x3fef7c97337b9b5f, 0x3fefa4afa2a490da, 0x3fefd0765b6e4540,
};
static const unsigned long __exp2_tab[] = {
    0x0, 0x3ff0000000000000,
    0x3c9b3b4f1a88bf6e, 0x3feff63da9fb3335,
    0xbc7160139cd8dc5d, 0x3fefec9a3e778061,
    0xbc905e7a108766d1, 0x3fefe315e86e7f85,
    0x3c8cd2523567f613, 0x3fefd9b0d3158574,
    0xbc8bce8023f98efa, 0x3fefd06b29ddf6de,
    0x3c60f74e61e6c861, 0x3fefc74518759bc8,
    0x3c90a3e45b33d399, 0x3fefbe3ecac6f383,
    0x3c979aa65d837b6d, 0x3fefb5586cf9890f,
    0x3c8eb51a92fdeffc, 0x3fefac922b7247f7,
    0x3c3ebe3d702f9cd1, 0x3fefa3ec32d3d1a2,
    0xbc6a033489906e0b, 0x3fef9b66affed31b,
    0xbc9556522a2fbd0e, 0x3fef9301d0125b51,
    0xbc5080ef8c4eea55, 0x3fef8abdc06c31cc,
    0xbc91c923b9d5f416, 0x3fef829aaea92de0,
    0x3c80d3e3e95c55af, 0x3fef7a98c8a58e51,
    0xbc801b15eaa59348, 0x3fef72b83c7d517b,
    0xbc8f1ff055de323d, 0x3fef6af9388c8dea,
    0x3c8b898c3f1353bf, 0x3fef635beb6fcb75,
    0xbc96d99c7611eb26, 0x3fef5be084045cd4,
    0x3c9aecf73e3a2f60, 0x3fef54873168b9aa,
    0xbc8fe782cb86389d, 0x3fef4d5022fcd91d,
    0x3c8a6f4144a6c38d, 0x3fef463b88628cd6,
    0x3c807a05b0e4047d, 0x3fef3f49917ddc96,
    0x3c968efde3a8a894, 0x3fef387a6e756238,
    0x3c875e18f274487d, 0x3fef31ce4fb2a63f,
    0x3c80472b981fe7f2, 0x3fef2b4565e27cdd,
    0xbc96b87b3f71085e, 0x3fef24dfe1f56381,
    0x3c82f7e16d09ab31, 0x3fef1e9df51fdee1,
    0xbc3d219b1a6fbffa, 0x3fef187fd0dad990,
    0x3c8b3782720c0ab4, 0x3fef1285a6e4030b,
    0x3c6e149289cecb8f, 0x3fef0cafa93e2f56,
    0x3c834d754db0abb6, 0x3fef06fe0a31b715,
    0x3c864201e2ac744c, 0x3fef0170fc4cd831,
    0x3c8fdd395dd3f84a, 0x3feefc08b26416ff,
    0xbc86a3803b8e5b04, 0x3feef6c55f929ff1,
    0xbc924aedcc4b5068, 0x3feef1a7373aa9cb,
    0xbc9907f81b512d8e, 0x3feeecae6d05d866,
    0xbc71d1e83e9436d2, 0x3feee7db34e59ff7,
    0xbc991919b3ce1b15, 0x3feee32dc313a8e5,
    0x3c859f48a72a4c6d, 0x3feedea64c123422,
    0xbc9312607a28698a, 0x3feeda4504ac801c,
    0xbc58a78f4817895b, 0x3feed60a21f72e2a,
    0xbc7c2c9b67499a1b, 0x3feed1f5d950a897,
    0x3c4363ed60c2ac11, 0x3feece086061892d,
    0x3c9666093b0664ef, 0x3feeca41ed1d0057,
    0x3c6ecce1daa10379, 0x3feec6a2b5c13cd0,
    0x3c93ff8e3f0f1230, 0x3feec32af0d7d3de,
    0x3c7690cebb7aafb0, 0x3feebfdad5362a27,
    0x3c931dbdeb54e077, 0x3feebcb299fddd0d,
    0xbc8f94340071a38e, 0x3feeb9b2769d2ca7,
    0xbc87deccdc93a349, 0x3feeb6daa2cf6642,
    0xbc78dec6bd0f385f, 0x3feeb42b569d4f82,
    0xbc861246ec7b5cf6, 0x3feeb1a4ca5d920f,
    0x3c93350518fdd78e, 0x3feeaf4736b527da,
    0x3c7b98b72f8a9b05, 0x3feead12d497c7fd,
    0x3c9063e1e21c5409, 0x3feeab07dd485429,
    0x3c34c7855019c6ea, 0x3feea9268a5946b7,
    0x3c9432e62b64c035, 0x3feea76f15ad2148,
    0xbc8ce44a6199769f, 0x3feea5e1b976dc09,
    0xbc8c33c53bef4da8, 0x3feea47eb03a5585,
    0xbc845378892be9ae, 0x3feea34634ccc320,
    0xbc93cedd78565858, 0x3feea23882552225,
    0x3c5710aa807e1964, 0x3feea155d44ca973,
    0xbc93b3efbf5e2228, 0x3feea09e667f3bcd,
    0xbc6a12ad8734b982, 0x3feea012750bdabf,
    0xbc6367efb86da9ee, 0x3fee9fb23c651a2f,
    0xbc80dc3d54e08851, 0x3fee9f7df9519484,
    0xbc781f647e5a3ecf, 0x3fee9f75e8ec5f74,
    0xbc86ee4ac08b7db0, 0x3fee9f9a48a58174,
    0xbc8619321e55e68a, 0x3fee9feb564267c9,
    0x3c909ccb5e09d4d3, 0x3feea0694fde5d3f,
    0xbc7b32dcb94da51d, 0x3feea11473eb0187,
    0x3c94ecfd5467c06b, 0x3feea1ed0130c132,
    0x3c65ebe1abd66c55, 0x3feea2f336cf4e62,
    0xbc88a1c52fb3cf42, 0x3feea427543e1a12,
    0xbc9369b6f13b3734, 0x3feea589994cce13,
    0xbc805e843a19ff1e, 0x3feea71a4623c7ad,
    0xbc94d450d872576e, 0x3feea8d99b4492ed,
    0x3c90ad675b0e8a00, 0x3feeaac7d98a6699,
    0x3c8db72fc1f0eab4, 0x3feeace5422aa0db,
    0xbc65b6609cc5e7ff, 0x3feeaf3216b5448c,
    0x3c7bf68359f35f44, 0x3feeb1ae99157736,
    0xbc93091fa71e3d83, 0x3feeb45b0b91ffc6,
    0xbc5da9b88b6c1e29, 0x3feeb737b0cdc5e5,
    0xbc6c23f97c90b959, 0x3feeba44cbc8520f,
    0xbc92434322f4f9aa, 0x3feebd829fde4e50,
    0xbc85ca6cd7668e4b, 0x3feec0f170ca07ba,
    0x3c71affc2b91ce27, 0x3feec49182a3f090,
    0x3c6dd235e10a73bb, 0x3feec86319e32323,
    0xbc87c50422622263, 0x3feecc667b5de565,
    0x3c8b1c86e3e231d5, 0x3feed09bec4a2d33,
    0xbc91bbd1d3bcbb15, 0x3feed503b23e255d,
    0x3c90cc319cee31d2, 0x3feed99e1330b358,
    0x3c8469846e735ab3, 0x3feede6b5579fdbf,
    0xbc82dfcd978e9db4, 0x3feee36bbfd3f37a,
    0x3c8c1a7792cb3387, 0x3feee89f995ad3ad,
    0xbc907b8f4ad1d9fa, 0x3feeee07298db666,
    0xbc55c3d956dcaeba, 0x3feef3a2b84f15fb,
    0xbc90a40e3da6f640, 0x3feef9728de5593a,
    0xbc68d6f438ad9334, 0x3feeff76f2fb5e47,
    0xbc91eee26b588a35, 0x3fef05b030a1064a,
    0x3c74ffd70a5fddcd, 0x3fef0c1e904bc1d2,
    0xbc91bdfbfa9298ac, 0x3fef12c25bd71e09,
    0x3c736eae30af0cb3, 0x3fef199bdd85529c,
    0x3c8ee3325c9ffd94, 0x3fef20ab5fffd07a,
    0x3c84e08fd10959ac, 0x3fef27f12e57d14b,
    0x3c63cdaf384e1a67, 0x3fef2f6d9406e7b5,
    0x3c676b2c6c921968, 0x3fef3720dcef9069,
    0xbc808a1883ccb5d2, 0x3fef3f0b555dc3fa,
    0xbc8fad5d3ffffa6f, 0x3fef472d4a07897c,
    0xbc900dae3875a949, 0x3fef4f87080d89f2,
    0x3c74a385a63d07a7, 0x3fef5818dcfba487,
    0xbc82919e2040220f, 0x3fef60e316c98398,
    0x3c8e5a50d5c192ac, 0x3fef69e603db3285,
    0x3c843a59ac016b4b, 0x3fef7321f301b460,
    0xbc82d52107b43e1f, 0x3fef7c97337b9b5f,
    0xbc892ab93b470dc9, 0x3fef864614f5a129,
    0x3c74b604603a88d3, 0x3fef902ee78b3ff6,
    0x3c83c5ec519d7271, 0x3fef9a51fbc74c83,
    0xbc8ff7128fd391f0, 0x3fefa4afa2a490da,
    0xbc8dae98e223747d, 0x3fefaf482d8e67f1,
    0x3c8ec3bc41aa2008, 0x3fefba1bee615a27,
    0x3c842b94c3a9eb32, 0x3fefc52b376bba97,
    0x3c8a64a931d185ee, 0x3fefd0765b6e4540,
    0xbc8e37bae43be3ed, 0x3fefdbfdad9cbe14,
    0x3c77893b4d91cd9d, 0x3fefe7c1819e90d8,
    0x3c5305c14160cc89, 0x3feff3c22b8f71f1,
};

static const long double __expl_table [] = {
 -3.47656250000000000584188889839535373E-01L, /* bffd640000000000002b1b04213cf000 */
  6.90417668990715641167244540876988960E-32L, /* 3f97667c3fdb588a6ae1af8748357a17 */
 -3.43749999999999981853132895957607418E-01L, /* bffd5ffffffffffffac4ff5f4050b000 */
 -7.16021898043268093462818380603370350E-33L, /* bf94296c8219427edc1431ac2498583e */
 -3.39843750000000013418643523138766329E-01L, /* bffd5c000000000003de1f027a30e000 */
  8.16920774283317801641347327589583265E-32L, /* 3f97a82b65774bdca1b4440d749ed8d3 */
 -3.35937500000000014998092453039303051E-01L, /* bffd5800000000000452a9f4d8857000 */
 -6.55865578425428447938248396879359670E-32L, /* bf97548b7d240f3d034b395e6eecfac8 */
 -3.32031250000000000981984049529998541E-01L, /* bffd540000000000004875277cda5000 */
  6.91213046334032232108944519541512737E-32L, /* 3f9766e5f925338a19045c94443b66e1 */
 -3.28124999999999986646017645350399708E-01L, /* bffd4ffffffffffffc26a667bf44d000 */
 -6.16281060996110316602421505683742661E-32L, /* bf973ffdcdcffb6fbffc86b2b8d42f5d */
 -3.24218749999999991645717430645867963E-01L, /* bffd4bfffffffffffd97901063e48000 */
 -7.90797211087760527593856542417304137E-32L, /* bf979a9afaaca1ada6a8ed1c80584d60 */
 -3.20312499999999998918211610690789652E-01L, /* bffd47ffffffffffffb02d9856d71000 */
  8.64024799457616856987630373786503376E-32L, /* 3f97c0a098623f95579d5d9b2b67342d */
 -3.16406249999999998153974811017181883E-01L, /* bffd43ffffffffffff77c991f1076000 */
 -2.73176610180696076418536105483668404E-32L, /* bf961baeccb32f9b1fcbb8e60468e95a */
 -3.12500000000000011420976192575972779E-01L, /* bffd400000000000034ab8240483d000 */
  7.16573502812389453744433792609989420E-32L, /* 3f977410f4c2cfc4335f28446c0fb363 */
 -3.08593750000000001735496343854851414E-01L, /* bffd3c000000000000800e995c176000 */
 -1.56292999645122272621237565671593071E-32L, /* bf95449b9cbdaff6ac1246adb2c826ac */
 -3.04687499999999982592401295899221626E-01L, /* bffd37fffffffffffafb8bc1e061a000 */
  6.48993208584888904958594509625158417E-32L, /* 3f9750f9fe8366d82d77afa0031a92e1 */
 -3.00781249999999999230616898937763959E-01L, /* bffd33ffffffffffffc73ac39da54000 */
  6.57082437496961397305801409357792029E-32L, /* 3f97552d3cb598ea80135cf3feb27ec4 */
 -2.96874999999999998788769281703245722E-01L, /* bffd2fffffffffffffa6a07fa5021000 */
 -3.26588297198283968096426564544269170E-32L, /* bf9653260fc1802f46b629aee171809b */
 -2.92968750000000015318089182805941695E-01L, /* bffd2c0000000000046a468614bd6000 */
 -1.73291974845198589684358727559290718E-32L, /* bf9567e9d158f52e483c8d8dcb5961dd */
 -2.89062500000000007736778942676309681E-01L, /* bffd280000000000023adf9f4c3d3000 */
 -6.83629745986675744404029225571026236E-32L, /* bf9762f5face6281c1daf1c6aedbdb45 */
 -2.85156250000000001367091555763661937E-01L, /* bffd2400000000000064dfa11e3fb000 */
 -5.44898442619766878281110054067026237E-32L, /* bf971aed6d2db9f542986a785edae072 */
 -2.81249999999999986958718100227029406E-01L, /* bffd1ffffffffffffc3db9265ca9d000 */
  1.13007318374506125723591889451107046E-32L, /* 3f94d569fe387f456a97902907ac3856 */
 -2.77343750000000000356078829380495179E-01L, /* bffd1c0000000000001a462390083000 */
 -4.98979365468978332358409063436543102E-32L, /* bf970315bbf3e0d14b5c94c900702d4c */
 -2.73437499999999990276993957508540484E-01L, /* bffd17fffffffffffd32919bcdc94000 */
 -8.79390484115892344533724650295100871E-32L, /* bf97c89b0b89cc19c3ab2b60da9bbbc3 */
 -2.69531250000000002434203866460082225E-01L, /* bffd14000000000000b39ccf9e130000 */
  9.44060754687026590886751809927191596E-32L, /* 3f97ea2f32cfecca5c64a26137a9210f */
 -2.65624999999999997296320716986257179E-01L, /* bffd0fffffffffffff3880f13a2bc000 */
  2.07142664067265697791007875348396921E-32L, /* 3f95ae37ee685b9122fbe377bd205ee4 */
 -2.61718750000000010237478733739017956E-01L, /* bffd0c000000000002f3648179d40000 */
 -6.10552936159265665298996309192680256E-32L, /* bf973d0467d31e407515a3cca0f3b4e2 */
 -2.57812500000000011948220522778370303E-01L, /* bffd08000000000003719f81275bd000 */
  6.72477169058908902499239631466443836E-32L, /* 3f975d2b8c475d3160cf72d227d8e6f9 */
 -2.53906249999999991822993360536596860E-01L, /* bffd03fffffffffffda4a4b62f818000 */
 -2.44868296623215865054704392917190994E-32L, /* bf95fc92516c6d057d29fc2528855976 */
 -2.49999999999999986862019457428548084E-01L, /* bffcfffffffffffff86d2d20d5ff4000 */
 -3.85302898949105073614122724961613078E-32L, /* bf96901f147cb7d643af71b6129ce929 */
 -2.46093750000000000237554160737318435E-01L, /* bffcf8000000000000230e8ade26b000 */
 -1.52823675242678363494345369284988589E-32L, /* bf953d6700c5f3fc303f79d0ec8c680a */
 -2.42187500000000003023380963205457065E-01L, /* bffcf0000000000001be2c1a78bb0000 */
 -7.78402037952209709489481182714311699E-34L, /* bf9102ab1f3998e887f0ee4cf940faa5 */
 -2.38281249999999995309623303145485725E-01L, /* bffce7fffffffffffd4bd2940f43f000 */
 -3.54307216794236899443913216397197696E-32L, /* bf966fef03ab69c3f289436205b21d02 */
 -2.34374999999999998425804947623207526E-01L, /* bffcdfffffffffffff17b097a6092000 */
 -2.86038428948386602859761879407549696E-32L, /* bf96290a0eba0131efe3a05fe188f2e3 */
 -2.30468749999999993822207406785200832E-01L, /* bffcd7fffffffffffc70519834eae000 */
 -2.54339521031747516806893838749365762E-32L, /* bf96081f0ad7f9107ae6cddb32c178ab */
 -2.26562499999999997823524030344489884E-01L, /* bffccffffffffffffebecf10093df000 */
  4.31904611473158635644635628922959401E-32L, /* 3f96c083f0b1faa7c4c686193e38d67c */
 -2.22656250000000004835132405125162742E-01L, /* bffcc8000000000002c98a233f19f000 */
  2.54709791629335691650310168420597566E-33L, /* 3f92a735903f5eed07a716ab931e20d9 */
 -2.18749999999999988969454021829236626E-01L, /* bffcbffffffffffff9a42dc14ce36000 */
 -3.77236096429336082213752014054909454E-32L, /* bf9687be8e5b2fca54d3e81157eac660 */
 -2.14843750000000010613256919115758495E-01L, /* bffcb80000000000061e3d828ecac000 */
 -4.55194148712216691177097854305964738E-32L, /* bf96d8b35c776aa3e1a4768271380503 */
 -2.10937499999999993204656148110447201E-01L, /* bffcaffffffffffffc152f2aea118000 */
 -2.95044199165561453749332254271716417E-32L, /* bf96326433b00b2439094d9bef22ddd1 */
 -2.07031250000000012233944895423355677E-01L, /* bffca80000000000070d695ee0e94000 */
  1.93146788688385419095981415411012357E-32L, /* 3f959126729135a5e390d4bb802a0bde */
 -2.03125000000000008030983633336321863E-01L, /* bffca0000000000004a129fbc51af000 */
  2.37361904671826193563212931215900137E-32L, /* 3f95ecfb3c4ba1b97ea3ad45cbb1e68a */
 -1.99218750000000001763815712796132779E-01L, /* bffc98000000000001044b12d9950000 */
 -3.63171243370923753295192486732883239E-33L, /* bf932db5fb3f27c38e0fa7bbcfc64f55 */
 -1.95312500000000004883660234506677272E-01L, /* bffc90000000000002d0b3779d1f9000 */
 -3.19989507343607877747980892249711601E-33L, /* bf9309d63de96bb3ef744c865f22f1bd */
 -1.91406250000000013720152363227519348E-01L, /* bffc88000000000007e8bcb387121000 */
 -1.89295754093147174148371614722178860E-32L, /* bf958926e2e67dfe812c508290add2e7 */
 -1.87500000000000000182342082774432620E-01L, /* bffc800000000000001ae8b06a39f000 */
 -2.96812835183184815200854214892983927E-32L, /* bf96343a62d156bbe71f55d14ca4b6e5 */
 -1.83593750000000012410147185883290345E-01L, /* bffc78000000000007276a1adda8d000 */
 -2.02191931237489669058466239995304587E-32L, /* bf95a3efab92d26ec2df90df036a117f */
 -1.79687499999999997439177363346082917E-01L, /* bffc6ffffffffffffe8616db2927d000 */
 -9.92752326937775530007399526834009465E-33L, /* bf949c5f88ed17041e1a3f1829d543cd */
 -1.75781249999999995824373974504785174E-01L, /* bffc67fffffffffffd97c94f13ea3000 */
  1.44184772065335613487885714828816178E-32L, /* 3f952b75c63476e7fcc2f5841c27bcce */
 -1.71874999999999986685050259043077809E-01L, /* bffc5ffffffffffff8530f6bc531a000 */
 -3.49007014971241147689894940544402482E-32L, /* bf966a6dfaa012aea8ffe6d90b02330f */
 -1.67968749999999997316058782350439701E-01L, /* bffc57fffffffffffe73eb914f2aa000 */
  3.34025733574205019081305778794376391E-32L, /* 3f965adf4572561fd5456a6c13d8babf */
 -1.64062499999999993322730602128318480E-01L, /* bffc4ffffffffffffc269be4f68f3000 */
 -1.83345916769684984022099095506340635E-32L, /* bf957ccb69026cb2f6024c211576d5f4 */
 -1.60156249999999992419000744447607979E-01L, /* bffc47fffffffffffba13df21784a000 */
  2.73442789798110494773517431626534726E-32L, /* 3f961bf58ff22c9b30f1e2b39f26d7d5 */
 -1.56249999999999987665010524130393080E-01L, /* bffc3ffffffffffff8e3ad45e7508000 */
  2.02695576464836145806428118889332191E-32L, /* 3f95a4fb7435a4a2f71de81eb8ae75d1 */
 -1.52343749999999989905291167951491803E-01L, /* bffc37fffffffffffa2e48aecfc24000 */
 -3.61436631548815190395331054871041524E-32L, /* bf967756567ebd108075ae527cc2e7f0 */
 -1.48437500000000006686107754967759751E-01L, /* bffc30000000000003dab20261b3c000 */
 -2.15524270159131591469319477922198390E-32L, /* bf95bfa05b82ef3a708c4f0395e9fcf6 */
 -1.44531250000000005132889939177166485E-01L, /* bffc28000000000002f57b1969e7b000 */
  2.74741116529653547935086189244019604E-32L, /* 3f961d4eb77c1185d34fe1b04a3f3cf5 */
 -1.40625000000000000707469094533647325E-01L, /* bffc2000000000000068676d3d5c4000 */
  4.40607097220049957013547629906723266E-33L, /* 3f936e0ac425daf795b42913cf0ef881 */
 -1.36718749999999995713752139187543306E-01L, /* bffc17fffffffffffd87762255991000 */
 -3.73751317180116492404578048203389108E-32L, /* bf9684202491e9cbb7ceb67d9ff7e0c9 */
 -1.32812500000000007198453630478482191E-01L, /* bffc10000000000004264de3a4379000 */
 -3.97050085179660203884930593717220728E-32L, /* bf969c52048de14be3c9c1971e50869c */
 -1.28906250000000006070486371645733082E-01L, /* bffc080000000000037fd87db2cb0000 */
  3.59610068058504988294019521946586131E-32L, /* 3f967570c10687cb8e9ebd0b280abf5a */
 -1.25000000000000003700729208608337966E-01L, /* bffc00000000000002222198bbc74000 */
  3.23464851393124362331846965931995969E-33L, /* 3f930cb95da3bfc847e593716c91d57a */
 -1.21093750000000013729038501177102555E-01L, /* bffbf000000000000fd418d1f5fda000 */
  2.45242487730722066611358741283977619E-32L, /* 3f95fd5945ad86a464292e26ac192a84 */
 -1.17187499999999999765305306880205578E-01L, /* bffbdfffffffffffffbabaf869845000 */
 -1.14557520298960389903199646350205537E-32L, /* bf94dbda735322179d9bcf392e1dd06d */
 -1.13281250000000009579647893740755690E-01L, /* bffbd000000000000b0b69bae7ab9000 */
  2.37873962873837390105423621772752350E-32L, /* 3f95ee0b7e0bd5ac1f6fab1e2a71abc3 */
 -1.09375000000000008981153004560108539E-01L, /* bffbc000000000000a5ac4bc1d2c3000 */
  1.53152444860014076105003555837231015E-32L, /* 3f953e15ce931e12ef9a152522e32bdd */
 -1.05468749999999992399063850363228723E-01L, /* bffbaffffffffffff73c998091408000 */
 -8.75920903597804862471749360196688834E-33L, /* bf946bd7e310a01bae5687ebdc47fcc5 */
 -1.01562500000000007685885179918350550E-01L, /* bffba0000000000008dc7910a648c000 */
 -4.63820993797174451904075397785059501E-33L, /* bf938153d0e54001a472da180fb5e8aa */
 -9.76562499999999887262211517861331814E-02L, /* bffb8ffffffffffff300915aa6fd6000 */
 -2.63767025974952608658936466715705903E-33L, /* bf92b64215bb8d520be5404620d38088 */
 -9.37499999999999939650246024457439795E-02L, /* bffb7ffffffffffff90aca26bd0fc000 */
 -1.72047822349322956713582039121348377E-32L, /* bf9565545015c5b9b56d02cfefca2c7d */
 -8.98437500000000033088896383977486369E-02L, /* bffb70000000000003d09ca1e3cbe000 */
  3.04831994420989436248526129869697270E-33L, /* 3f92fa7d30d2ed90e7ebbd6231fd08b1 */
 -8.59374999999999947312400115121319225E-02L, /* bffb5ffffffffffff9ecefc03376e000 */
  1.50416954438393392150792422537312281E-32L, /* 3f9538675ee99bd722fad0023c09c915 */
 -8.20312500000000054182280847004695514E-02L, /* bffb500000000000063f2dbd40200000 */
  2.68399664523430004488075638997207289E-33L, /* 3f92bdf49766629882c49a3da88928ed */
 -7.81250000000000114767533968079748798E-02L, /* bffb4000000000000d3b56f81ba70000 */
  1.72318124201659121296305402819694281E-32L, /* 3f9565e407aaabfb359e8a567d760de3 */
 -7.42187500000000035531829472486812869E-02L, /* bffb3000000000000418b6e9b5388000 */
  2.09401756478514117051383998628099655E-32L, /* 3f95b2e91221fcd74be0a86d8ad658d2 */
 -7.03124999999999987474933134860732535E-02L, /* bffb1ffffffffffffe8e53453d2ac000 */
  2.28515798224350800271565551341211666E-32L, /* 3f95da9bd6adf00894f05b5cc5530125 */
 -6.64062500000000042267533361089054159E-02L, /* bffb10000000000004df8473dbcf2000 */
  1.97576478800281368377376002585430031E-32L, /* 3f959a59acbddb2f53bd3096b66370e9 */
 -6.25000000000000066329769382774201686E-02L, /* bffb00000000000007a5b5914e336000 */
 -1.46422615813786836245343723048221678E-33L, /* bf91e69295f069fc0c4a9db181ea25a3 */
 -5.85937500000000002823707957982406053E-02L, /* bffae0000000000000a6aeab10592000 */
  9.25637741701318872896718218457555829E-33L, /* 3f94807eb021f1f40a37d4015b1eb76b */
 -5.46875000000000081586888005226044448E-02L, /* bffac0000000000012d00a3171e3a000 */
 -4.87144542459404765480424673678105050E-33L, /* bf9394b42faba6b7036fe7b36269daf3 */
 -5.07812499999999927720348253140567013E-02L, /* bffa9fffffffffffef555cc8dd914000 */
 -3.01901021987395945826043649523451725E-33L, /* bf92f59e7e3025691f290f8f67277faf */
 -4.68749999999999935349476738962633103E-02L, /* bffa7ffffffffffff117b4ea2b876000 */
  1.21521638219189777347767475937119750E-32L, /* 3f94f8c7f88c5b56674b94d984ac8ecb */
 -4.29687500000000056305562847814228219E-02L, /* bffa6000000000000cfbb19be30c0000 */
 -1.18643699217679276275559592978275214E-32L, /* bf94ecd39f0833a876550e83eb012b99 */
 -3.90624999999999962692914526031373542E-02L, /* bffa3ffffffffffff765c743922f9000 */
 -4.91277156857520035712509544689973679E-33L, /* bf939823189996193872e58ac0dececb */
 -3.51562500000000108152468207687602886E-02L, /* bffa20000000000018f031e41177f000 */
  1.18599806302656253755207072755609820E-32L, /* 3f94eca4f23e787fab73ce8f6b9b8d64 */
 -3.12500000000000077376981036742289578E-02L, /* bffa00000000000011d787e0b386f000 */
  9.97730386477005171963635210799577079E-33L, /* 3f949e70e498c46a0173ac0d46c699fc */
 -2.73437500000000139436129596418623235E-02L, /* bff9c00000000000404db66e70a08000 */
  2.25755321633070123579875157841633859E-33L, /* 3f927719b1a93074bdf9f3c2cb784785 */
 -2.34375000000000088003629211828324876E-02L, /* bff98000000000002895a27d45feb000 */
  2.84374279216848803102126617873942975E-33L, /* 3f92d87f70e749d6da6c260b68dc210b */
 -1.95312500000000107408831063404855424E-02L, /* bff9400000000000318898ba69f71000 */
  2.47348089686935458989103979140011912E-33L, /* 3f929afa3de45086fe909fdddb41edce */
 -1.56250000000000081443917555362290635E-02L, /* bff9000000000000258f335e9cdd6000 */
 -2.43379314483517422161458863218426254E-33L, /* bf9294621c8a9ccacf2b020ec19cad27 */
 -1.17187500000000051490597418161403184E-02L, /* bff88000000000002f7ddfa26221f000 */
  1.83405297208145390679150568810924707E-33L, /* 3f9230bbfc5d5fe1b534fbcda0465bb9 */
 -7.81249999999999715861805208310174953E-03L, /* bff7ffffffffffffcb95f3fff157d000 */
  3.51548384878710915171654413641872451E-34L, /* 3f8fd349b76c22966f77a39fc37ed704 */
 -3.90625000000000309326013918295097128E-03L, /* bff7000000000000390f820c8e153000 */
  6.38058004651791109324060099097251911E-36L, /* 3f8a0f665d3ac25a1ac94d688273dbcd */
#define T_EXPL_ARG1 (2*89)
  0.00000000000000000000000000000000000E+00L, /* 00000000000000000000000000000000 */
  0.00000000000000000000000000000000000E+00L, /* 00000000000000000000000000000000 */
  3.90625000000000245479958859972588985E-03L, /* 3ff70000000000002d48769ac9874000 */
 -6.58439598384342854976169982902779828E-36L, /* bf8a1811b923e6c626b07ef29761482a */
  7.81250000000001311374391093664996358E-03L, /* 3ff800000000000078f3f3cd89111000 */
  2.60265650555493781464273319671555602E-33L, /* 3f92b070c3b635b87af426735a71fc87 */
  1.17187500000000269581156218247101912E-02L, /* 3ff8800000000000f8a50d02fe20d000 */
  1.00961747974945520631836275894919326E-33L, /* 3f914f80c1a4f8042044fe3b757b030b */
  1.56249999999999797878275270751825475E-02L, /* 3ff8ffffffffffff45935b69da62e000 */
  2.03174577741375590087897353146748580E-33L, /* 3f925194e863496e0f6e91cbf6b22e26 */
  1.95312499999999760319884511789111533E-02L, /* 3ff93fffffffffff917790ff9a8f4000 */
  4.62788519658803722282100289809515007E-33L, /* 3f9380783ba81295feeb3e4879d7d52d */
  2.34374999999999822953909016349145918E-02L, /* 3ff97fffffffffffae5a163bd3cd5000 */
 -3.19499956304699705390404384504876533E-33L, /* bf93096e2037ced8194cf344c692f8d6 */
  2.73437500000000137220327275871555682E-02L, /* 3ff9c000000000003f481dea5dd51000 */
 -2.25757776523031994464630107442723424E-33L, /* bf92771abcf988a02b414bf2614e3734 */
  3.12499999999999790857640618332718621E-02L, /* 3ff9ffffffffffff9f8cd40b51509000 */
 -4.22479470489989916319395454536511458E-33L, /* bf935efb7245612f371deca17cb7b30c */
  3.51562499999999840753382405747597346E-02L, /* 3ffa1fffffffffffdb47bd275f722000 */
  1.08459658374118041980976756063083500E-34L, /* 3f8e2055d18b7117c9db1c318b1e889b */
  3.90624999999999989384433621470426757E-02L, /* 3ffa3ffffffffffffd8d5e18b042e000 */
 -7.41674226146122000759491297811091830E-33L, /* bf94341454e48029e5b0205d91baffdc */
  4.29687500000000107505739500500200462E-02L, /* 3ffa60000000000018ca04cd9085c000 */
 -4.74689012756713017494437969420919847E-34L, /* bf903b7c268103c6f7fbaaa24142e287 */
  4.68749999999999978700749928325717352E-02L, /* 3ffa7ffffffffffffb16b6d5479e3000 */
 -1.06208165308448830117773486334902917E-32L, /* bf94b92be4b3b5b5a596a0a5187cc955 */
  5.07812499999999815072625435955786253E-02L, /* 3ffa9fffffffffffd55bd086d5cbc000 */
 -9.37038897148383660401929567549111394E-33L, /* bf94853b111b0175b491c80d00419416 */
  5.46874999999999809511553152189867394E-02L, /* 3ffabfffffffffffd4138bfa74a61000 */
  1.06642963074562437340498606682822123E-32L, /* 3f94bafa3fe991b39255d563dfa05d89 */
  5.85937500000000184331996330905145551E-02L, /* 3ffae000000000002a810a5f2f8bf000 */
 -1.76639977694797200820296641773791945E-34L, /* bf8ed596f07ce4408f1705c8ec16864c */
  6.25000000000000021544696744852045001E-02L, /* 3ffb000000000000027be32045e2b000 */
  1.68616371995798354366633034788947149E-32L, /* 3f955e33d7440794d8a1b25233d086ab */
  6.64062499999999965563110718495802889E-02L, /* 3ffb0ffffffffffffc079a38a3fed000 */
 -1.82463217667830160048872113565316215E-32L, /* bf957af6163bcdb97cefab44a942482a */
  7.03124999999999759989183341261898222E-02L, /* 3ffb1fffffffffffe454218acea05000 */
 -1.07843770101525495515646940862541503E-32L, /* bf94bff72aada26d94e76e71c07e0580 */
  7.42187499999999898968873730710101412E-02L, /* 3ffb2ffffffffffff45a166496dc1000 */
  1.28629441689592874462780757154138223E-32L, /* 3f950b2724597b8b93ce1e9d1cf4d035 */
  7.81249999999999957198938523510804668E-02L, /* 3ffb3ffffffffffffb10bc52adbc5000 */
  1.13297573459968118467100063135856856E-33L, /* 3f91787eea895b3c245899cf34ad0abd */
  8.20312500000000199911640621145851159E-02L, /* 3ffb500000000000170c59a661a89000 */
 -1.51161335208135146756554123073528707E-32L, /* bf9539f326c5ca84e7db5401566f3775 */
  8.59375000000000134175373433347670743E-02L, /* 3ffb6000000000000f78287547af0000 */
  1.09763629458404270323909815379924900E-32L, /* 3f94c7f0b61b6e3e27d44b9f5bbc7e9d */
  8.98437500000000036533922600308306335E-02L, /* 3ffb70000000000004364a83b7a14000 */
  3.11459653680110433194288029777718358E-33L, /* 3f9302c0248136d65cebeab69488d949 */
  9.37500000000000184977946245216914691E-02L, /* 3ffb800000000000155395d870b17000 */
 -4.66656154468277949130395786965043927E-33L, /* bf9383aec9b993b6db492b1ede786d8a */
  9.76562500000000237839723100419376084E-02L, /* 3ffb9000000000001b6bca237f6c4000 */
 -1.03028043424658760249140747856831301E-32L, /* bf94abf6352e3d2bb398e47919a343fb */
  1.01562500000000012345545575236836572E-01L, /* 3ffba000000000000e3bc30cd9a1f000 */
  2.15755372310795701322789783729456319E-32L, /* 3f95c01b3b819edd9d07548fafd61550 */
  1.05468749999999976493840484471911438E-01L, /* 3ffbafffffffffffe4e634cd77985000 */
  1.78771847038773333029677216592309083E-32L, /* 3f95734b6ae650f33dd43c49a1df9fc0 */
  1.09375000000000002267015055992785402E-01L, /* 3ffbc00000000000029d1ad08de7b000 */
  6.23263106693943817730045115112427717E-33L, /* 3f9402e4b39ce2198a45e1d045868cd6 */
  1.13281250000000022354208618429577398E-01L, /* 3ffbd0000000000019c5cc3f9d2b5000 */
  5.40514416644786448581426756221178868E-33L, /* 3f93c10ab4021472c662f69435de9269 */
  1.17187500000000013252367133076817603E-01L, /* 3ffbe000000000000f47688cc561b000 */
 -7.12412585457324989451327215568641325E-33L, /* bf9427ecb343a8d1758990565fcfbf45 */
  1.21093750000000020759863992944300792E-01L, /* 3ffbf0000000000017ef3af97bf04000 */
  6.26591408357572503875647872077266444E-33L, /* 3f940446a09a2da771b45fc075514d12 */
  1.25000000000000004739659392396765618E-01L, /* 3ffc00000000000002bb7344ecd89000 */
 -1.55611398459729463981000080101758830E-32L, /* bf95433135febefa9e6aa4db39e263d2 */
  1.28906249999999982360888081057894783E-01L, /* 3ffc07fffffffffff5d4ed3154361000 */
 -1.77531518652835570781208599686606474E-32L, /* bf9570b7f225ea076f97f418d11359c1 */
  1.32812500000000010568583998727400436E-01L, /* 3ffc1000000000000617a5d09526a000 */
  2.12104021624990594668286391598300893E-32L, /* 3f95b885d767a1048d93055927a27adc */
  1.36718749999999998434125157367005292E-01L, /* 3ffc17ffffffffffff18eaebc7970000 */
  2.50454798592543203967309921276955297E-32L, /* 3f9604164e5598528a76faff26cd1c97 */
  1.40625000000000015550032422969330356E-01L, /* 3ffc20000000000008f6c79d8928c000 */
  7.80972982879849783680252962992639832E-33L, /* 3f9444674acf2b3225c7647e0d95edf3 */
  1.44531250000000012402535562111122522E-01L, /* 3ffc28000000000007264a8bc1ff1000 */
  2.79662468716455159585514763921671876E-32L, /* 3f96226b095bd78aa650faf95a221993 */
  1.48437500000000007761020440087419948E-01L, /* 3ffc3000000000000479530ff8fe3000 */
  2.15518492972728435680556239996258527E-32L, /* 3f95bf9d49295e73a957906a029768cb */
  1.52343750000000001733189947520484032E-01L, /* 3ffc38000000000000ffc6109f71f000 */
  8.34032236093545825619420380704500188E-33L, /* 3f945a71851226a1d0ce5e656693153e */
  1.56249999999999988073295321246958484E-01L, /* 3ffc3ffffffffffff91fedd62ae0f000 */
  2.44119337150624789345260194989620908E-32L, /* 3f95fb041a57bc1c1280680ac1620bea */
  1.60156250000000002076894210913572460E-01L, /* 3ffc48000000000001327ed84a199000 */
 -7.36124501128859978061216696286151753E-33L, /* bf9431c62f01e59d2c1e00f195a0037f */
  1.64062500000000000950861276373482172E-01L, /* 3ffc500000000000008c5285fba85000 */
 -4.80566184447001164583855800470217373E-33L, /* bf938f3d1fcafd390f22f80e6c19421f */
  1.67968749999999989878071706155265999E-01L, /* 3ffc57fffffffffffa2a445c548c5000 */
 -4.42154428718618459799673088733365064E-32L, /* bf96cb28cf1c1b28006d53ffe633b22a */
  1.71874999999999999459734108403218175E-01L, /* 3ffc5fffffffffffffb04554e9dd4000 */
 -3.29736288190321377985697972236270628E-32L, /* bf96566af0ebc852e84be12859b24a31 */
  1.75781249999999997987525759778901845E-01L, /* 3ffc67fffffffffffed702df6ffff000 */
 -1.28800728638468399687523924685844352E-32L, /* bf950b8236b88ca0c1b739dc91a7e3fc */
  1.79687500000000004929565820437175783E-01L, /* 3ffc70000000000002d779bb32d2e000 */
  1.60624461317978482424582320675174225E-32L, /* 3f954d9a9cc0c963fd081f3dc922d04e */
  1.83593750000000016873727045739708856E-01L, /* 3ffc78000000000009ba1f6263c9a000 */
 -3.83390389582056606880506003118452558E-32L, /* bf968e22a5d826f77f19ee788474df22 */
  1.87500000000000013443068740761666872E-01L, /* 3ffc80000000000007bfd8c72a1bf000 */
 -2.74141662712926256150154726565203091E-32L, /* bf961caf5ac59c7f941f928e324c2cc1 */
  1.91406249999999981494101786848611970E-01L, /* 3ffc87fffffffffff55502eeae001000 */
  3.68992437075565165346469517256118001E-32L, /* 3f967f2f03f9096793372a27b92ad79d */
  1.95312499999999989069921848800501648E-01L, /* 3ffc8ffffffffffff9b3015280394000 */
  3.69712249337856518452988332367785220E-32L, /* 3f967fee5fdb5bd501ff93516999faa0 */
  1.99218750000000021148042946919300804E-01L, /* 3ffc9800000000000c30e67939095000 */
  2.50142536781142175091322844848566649E-32L, /* 3f9603c34ae58e10b300b07137ee618a */
  2.03124999999999977732559198825437141E-01L, /* 3ffc9ffffffffffff329e7df079e4000 */
 -2.41951877287895024779300892731537816E-32L, /* bf95f683aefe6965f080df8f59dd34a1 */
  2.07031249999999996744030653771913124E-01L, /* 3ffca7fffffffffffe1f80f4b73ca000 */
 -1.94346475904454000031592792989765585E-32L, /* bf9593a44f87870a3d100d498501ecc7 */
  2.10937500000000000251399259834392298E-01L, /* 3ffcb000000000000025199873310000 */
 -1.33528748788094249098998693871759411E-33L, /* bf91bbb9b25c813668d6103d08acac35 */
  2.14843749999999993936323609611875097E-01L, /* 3ffcb7fffffffffffc8128c866236000 */
  1.14839877977014974625242788556545292E-32L, /* 3f94dd06b4655c9b83a1305b240e7a42 */
  2.18750000000000015181732784749663837E-01L, /* 3ffcc0000000000008c06da5fff24000 */
  1.42689085313142539755499441881408391E-32L, /* 3f95285a87dfa7ea7dad5b3be8c669f4 */
  2.22656249999999992172647770539596569E-01L, /* 3ffcc7fffffffffffb7ce2fe531f6000 */
 -3.34421462850496887359128610229650547E-32L, /* bf965b487962b5c2d9056ca6ac0c2e5c */
  2.26562499999999989595607223847082419E-01L, /* 3ffccffffffffffffa0095277be5c000 */
 -3.08983588107248752517344356508205569E-32L, /* bf9640dded57157f8eded311213bdbcd */
  2.30468749999999979130462438434567117E-01L, /* 3ffcd7fffffffffff3f8332996560000 */
 -3.01407539802851697849105682795217019E-32L, /* bf9638ffde35dbdfe1a1ffe45185de5d */
  2.34375000000000012194252337217891971E-01L, /* 3ffce0000000000007078dd402c86000 */
 -8.46879710915628592284714319904522657E-33L, /* bf945fc7b29a2ac6c9eff9eb258a510f */
  2.38281249999999982991877076137149870E-01L, /* 3ffce7fffffffffff6320b486eece000 */
 -2.93563878880439245627127095245798544E-32L, /* bf9630daaa4f40ff05caf29ace2ea7d4 */
  2.42187499999999981447559841442773990E-01L, /* 3ffceffffffffffff54e24a09a8d5000 */
 -4.56766746558806021264215486909850481E-32L, /* bf96da556dee11f3113e5a3467b908e6 */
  2.46093749999999991067720539980207318E-01L, /* 3ffcf7fffffffffffad9d405dcb5d000 */
  2.14033004219908074003010247652128251E-32L, /* 3f95bc8776e8f9ae098884aa664cc3df */
  2.50000000000000016613825838126835953E-01L, /* 3ffd00000000000004c9e24c12bb3000 */
  2.57617532593749185996714235009382870E-32L, /* 3f960b867cc01178c0ec68226c6cb47d */
  2.53906250000000013372004437827044321E-01L, /* 3ffd04000000000003daae05b3168000 */
  7.20177123439204414298152646284640101E-32L, /* 3f9775eff59ddad7e7530b83934af87f */
  2.57812499999999995765234725413886085E-01L, /* 3ffd07fffffffffffec7878bad9d5000 */
  6.51253187532920882777046064603770602E-32L, /* 3f975226659ca241402e71c2011583b0 */
  2.61718750000000007647689994011222248E-01L, /* 3ffd0c000000000002344cc793a0f000 */
  3.02370610028725823590045201871491395E-32L, /* 3f9639ffe55fa2fa011674448b4e5b96 */
  2.65624999999999986893899042596554269E-01L, /* 3ffd0ffffffffffffc38f0c0a1e9f000 */
 -2.07683715950724761146070082510569258E-32L, /* bf95af579a92e872fef81abfdf06bae8 */
  2.69531249999999979842788204900639327E-01L, /* 3ffd13fffffffffffa30a908d67db000 */
  8.71465252506557329027658736641075706E-32L, /* 3f97c47d99e19830447a42b1c0ffac61 */
  2.73437500000000006712165837793818271E-01L, /* 3ffd18000000000001ef453a58edb000 */
 -6.62704045767568912140550474455810301E-32L, /* bf9758187a204dcb06ece46588aeeaba */
  2.77343749999999994411329302988535617E-01L, /* 3ffd1bfffffffffffe63a0fec9c9e000 */
 -4.87273466291944117406493607771338767E-32L, /* bf96fa0381b0844a0be46bac2d673f0c */
  2.81250000000000012677892447379453135E-01L, /* 3ffd20000000000003a7769e125d6000 */
 -8.55871796664700790726282049552906783E-32L, /* bf97bc64e01332cf7616b0091b8dff2c */
  2.85156249999999998558643013736363981E-01L, /* 3ffd23ffffffffffff95a5894bccf000 */
 -1.33068334720606220176455289635046875E-32L, /* bf95145f43290ecf5b7adcb24697bc73 */
  2.89062500000000008831431235621753924E-01L, /* 3ffd280000000000028ba504fac59000 */
 -9.34157398616814623985483776710704237E-32L, /* bf97e50ad1115b941fcb5f0c88a428f7 */
  2.92968750000000019840235286110877063E-01L, /* 3ffd2c000000000005b7f372d184f000 */
  4.99302093775173155906059132992249671E-33L, /* 3f939ecdcfb97bad3f8dbec5df5ec67d */
  2.96875000000000015867911730971630513E-01L, /* 3ffd3000000000000492d860c79db000 */
  7.86107787827057767235127454590866211E-33L, /* 3f944689517ee8f16cdb97d6a6938f32 */
  3.00781250000000015814100002286124758E-01L, /* 3ffd340000000000048edfe73a17d000 */
 -1.65419431293024229981937172317171504E-32L, /* bf9557900e3efca16c89646b57f68dc0 */
  3.04687499999999985213157159965287195E-01L, /* 3ffd37fffffffffffbbcec6f99b36000 */
  9.68753602893894024018934325652944198E-32L, /* 3f97f70170e5458660c33a7e8d43d049 */
  3.08593749999999989969324338045156215E-01L, /* 3ffd3bfffffffffffd1bdde4d0fb1000 */
  7.10268609610294706092252562643261106E-32L, /* 3f9770cae45cdf615010401a4b37d8d4 */
  3.12500000000000002971606591018488854E-01L, /* 3ffd40000000000000db440fbc06b000 */
  6.38924218802905979887732294952782964E-32L, /* 3f974bbf988bb5622bd8fbaa46e8b811 */
  3.16406250000000006594921047402056305E-01L, /* 3ffd44000000000001e69e8954814000 */
  3.96079878754651470094149874444850097E-32L, /* 3f969b5017b9fa7a1e86975258c73d3d */
  3.20312500000000006713799366908329147E-01L, /* 3ffd48000000000001ef64159c065000 */
 -1.86401314975634286055150437995880517E-32L, /* bf958323f0434911794e5fb8bfe136ba */
  3.24218749999999987061246567584951210E-01L, /* 3ffd4bfffffffffffc4549db9b928000 */
 -3.18643523744758601387071062700407431E-32L, /* bf964ae5fa7e26c2c3981bed12e14372 */
  3.28124999999999991782776266707412953E-01L, /* 3ffd4ffffffffffffda1ad0840ca8000 */
 -4.46964199751314296839915534813144652E-32L, /* bf96d0277729ffd74727150df6d15547 */
  3.32031250000000000393816557756032682E-01L, /* 3ffd540000000000001d0efc04fad000 */
 -9.03246333902065439930373230002688649E-33L, /* bf947731a008748cc6dee948839ef7ae */
  3.35937499999999983810482995064392173E-01L, /* 3ffd57fffffffffffb556cab8ae61000 */
  5.27742727066129518825981597650621794E-32L, /* 3f9712050a6ddbf1cabf1b971f4b5d0b */
  3.39843750000000004310441349760912471E-01L, /* 3ffd5c0000000000013e0def5ddc4000 */
 -3.85927263474732591932884416445586106E-32L, /* bf9690c51088ef3db9ca000829c450c2 */
  3.43749999999999990248130003997484364E-01L, /* 3ffd5ffffffffffffd3070624a0af000 */
  9.62005170171527308106468341512327487E-34L, /* 3f913fae595cea84432eb01430817fca */
  3.47656250000000004085726414568625697E-01L, /* 3ffd640000000000012d79309e291000 */
 -6.59664093705705297250259434519072507E-32L, /* bf97568465eafb0e662e64a5dbfaf35f */

 -1.98364257812501251077851763965418372E-03L, /* bff6040000000001cd90f658cf0b1000 */
 -3.71984513103117734260309047540278737E-34L, /* bf8fee73c54483194782aac4a6154d11 */
 -1.95312500000000378520649630233891879E-03L, /* bff60000000000008ba643bb5e2e8000 */
 -1.12194202736719050440745599339855038E-34L, /* bf8e2a436aeff7bc529873354f47a3f5 */
 -1.92260742187499397430259771221991482E-03L, /* bff5f7fffffffffe4361cb51170da000 */
 -2.30068299876822157331268484824540848E-34L, /* bf8f31d02f85cfe8c0cc02276ce0f437 */
 -1.89208984375001137424603270262074989E-03L, /* bff5f0000000000347456ed490c23000 */
 -1.15012507244426243338260435466985403E-34L, /* bf8e31c174d5677a937a34ad8d2a70b4 */
 -1.86157226562500172319250342061336738E-03L, /* bff5e800000000007f262fa3617b4000 */
 -3.12438344643346437509767736937785561E-34L, /* bf8f9f4d426a2457c273d34ef7d9bde9 */
 -1.83105468749999505256246872355430379E-03L, /* bff5dffffffffffe92f18c1c2b6fa000 */
 -5.91130415288336591179087455220308942E-35L, /* bf8d3a4c80b42dc036bae446c9807f78 */
 -1.80053710937499445182387245573120522E-03L, /* bff5d7fffffffffe669dea82b4a4c000 */
 -1.92396289352411531324908916321392100E-34L, /* bf8eff7a2123fb573ba9778550d669bd */
 -1.77001953125000387737631542516323906E-03L, /* bff5d000000000011e19915c3ddb7000 */
  7.91101758977203355387806553469731354E-36L, /* 3f8a507f5a70faaccf469e3461873dea */
 -1.73950195312500034854670281415554486E-03L, /* bff5c8000000000019b7dc6ef97bd000 */
  1.55906551582436824067407021178835755E-34L, /* 3f8e9e7880333e34955aebcde3cfb053 */
 -1.70898437499998955782591472611429852E-03L, /* bff5bffffffffffcfd80e88aa6b96000 */
  8.22951661962611381718215899498500357E-35L, /* 3f8db58e6031a779b59f6ece191de7cc */
 -1.67846679687500586652037711131708544E-03L, /* bff5b80000000001b0df6fd21c133000 */
 -8.96642618848426299713145894522897419E-35L, /* bf8ddcbcab46d531801bfae4121f2f8a */
 -1.64794921875000109499161354039904782E-03L, /* bff5b0000000000050cbce8915575000 */
 -2.88077905394253859590587789680486639E-34L, /* bf8f7eebd4dd860ef73b674d5e707959 */
 -1.61743164062501133830507079150388351E-03L, /* bff5a80000000003449e8700c3e82000 */
 -3.68271725851639066312899986829350273E-34L, /* bf8fe9845fe20a5fe74059e0cae185d6 */
 -1.58691406249999015546015764131101956E-03L, /* bff59ffffffffffd2999e668cdd28000 */
  8.48197657099957029953716507898788812E-35L, /* 3f8dc2faaebb97392e451b07b28c4b12 */
 -1.55639648437500317366570219290722587E-03L, /* bff5980000000000ea2cd9a40d256000 */
 -3.45156704719737676412949957712570373E-36L, /* bf8925a079505516c8e317ac1ff53255 */
 -1.52587890625000568759013197767046039E-03L, /* bff5900000000001a3ab8a3f6b698000 */
 -1.01902948542497496574967177677556729E-34L, /* bf8e0ee78d94d9b5ad3d63ae35c9b554 */
 -1.49536132812500945889014955936485340E-03L, /* bff5880000000002b9f1621b57743000 */
 -3.32264697086631598830366079048117140E-34L, /* bf8fb9a7d14c32289204fbb0c9eb20e0 */
 -1.46484374999999931883259902869504725E-03L, /* bff57fffffffffffcdbd1c90e1b4a000 */
 -1.76487524793892929381101031660811433E-34L, /* bf8ed52f2f724bc1ae870b18356337b4 */
 -1.43432617187498876325946983333888768E-03L, /* bff577fffffffffcc2dff8faa5570000 */
 -3.54550084538495708816233114576143814E-34L, /* bf8fd74724576915868c1e8ce9f430f1 */
 -1.40380859374999215367421282192718062E-03L, /* bff56ffffffffffdbd0b18aac65ed000 */
 -1.90585907028351204486765167064669639E-34L, /* bf8efaaa0c0e23e50c11b2120348054f */
 -1.37329101562499692341771212945644892E-03L, /* bff567ffffffffff1cfd00f1b0577000 */
 -3.59631150411372589637918252836880320E-34L, /* bf8fde08239ac74942a46298ea4fb715 */
 -1.34277343749999137467356674296739172E-03L, /* bff55ffffffffffd839030b05d53d000 */
 -1.49571076125940368185068762485268117E-35L, /* bf8b3e1a3d5c684b27a9f835b1d8d3c9 */
 -1.31225585937499247038404301859788734E-03L, /* bff557fffffffffdd469936e691e3000 */
  3.10375845385355395586146533282311300E-34L, /* 3f8f9c8f6d63b7a4145716ffd92491fb */
 -1.28173828124999024755581675764821898E-03L, /* bff54ffffffffffd306589b0ab21d000 */
 -1.98541096105909793397376077900810019E-34L, /* bf8f07e808bbb1e35106c294ffbb9687 */
 -1.25122070312500340204619591143332523E-03L, /* bff5480000000000fb06d5f16ad2c000 */
  3.62884195935761446237911443317457521E-34L, /* 3f8fe25b17d623178a386a6fa6c5afb2 */
 -1.22070312499999591578388993012071279E-03L, /* bff53ffffffffffed2a356c440074000 */
 -2.96756662615653130862526710937493307E-35L, /* bf8c3b90d8ff2a991e5bd16718fb0645 */
 -1.19018554687498821966212632349422735E-03L, /* bff537fffffffffc9ac3b585dda89000 */
  1.44659971891167323357060028901142644E-34L, /* 3f8e809279ab249edf1dad9fe13fb0bf */
 -1.15966796875000160938908064907298384E-03L, /* bff530000000000076c0800db9639000 */
  2.50088010538742402346270685365928513E-34L, /* 3f8f4c6c8a483b60201d30c1a83c3cb7 */
 -1.12915039062500267151512523291939657E-03L, /* bff5280000000000c51f7e7315137000 */
  7.56402096465615210500092443924888831E-35L, /* 3f8d922c1e485d99aea2668ed32b55a6 */
 -1.09863281249998665006360103291051571E-03L, /* bff51ffffffffffc26f2d4c9ce2ba000 */
  1.43982174467233642713619821353592061E-34L, /* 3f8e7ec530b3d92b6303bec1c81214d1 */
 -1.06811523437500522742248711752028025E-03L, /* bff518000000000181b7380f10446000 */
  5.41265133745862349181293024531133174E-35L, /* 3f8d1fc9313d018b30e790e06b6be723 */
 -1.03759765624999980942114138999770552E-03L, /* bff50ffffffffffff1f01130490e1000 */
  1.21525139612685854366189534669623436E-34L, /* 3f8e4311b96b6fcde412caf3f0d86fb9 */
 -1.00708007812499602697537601515759439E-03L, /* bff507fffffffffedad7afcce7051000 */
  1.00020246351201558505328236381833392E-34L, /* 3f8e09e640992512b1300744a7e984ed */
 -9.76562499999992592487302113340463694E-04L, /* bff4fffffffffffbbad8151f8adf6000 */
 -1.64984406575162932060422892046851002E-34L, /* bf8eb69a919986e8054b86fc34300f24 */
 -9.46044921874989085824996924138179594E-04L, /* bff4effffffffff9b55a204fd9792000 */
 -9.29539174108308550334255350011347171E-35L, /* bf8dee3a50ed896b4656fa577a1df3d7 */
 -9.15527343750013735214860599791540029E-04L, /* bff4e00000000007eaf5bf103f82d000 */
  3.07557018309280519949818825519490586E-35L, /* 3f8c470cfbef77d32c74cb8042f6ee81 */
 -8.85009765625012292294986105781516428E-04L, /* bff4d000000000071605c65403b97000 */
  4.77499983783821950338363358545463558E-35L, /* 3f8cfbc3dc18884c4c4f9e07d90d7bd3 */
 -8.54492187499986941239470706817188192E-04L, /* bff4bffffffffff878ddf9cab264a000 */
 -1.60128240346239526958630011447901568E-34L, /* bf8ea9b1a21e19e2d5bd84b0fbffcf95 */
 -8.23974609374996290174598690241743810E-04L, /* bff4affffffffffddc86c249ebe06000 */
  1.61677540391961912631535763471935882E-34L, /* 3f8eadd00841366b0dc2bc262c2c8c36 */
 -7.93457031249988696952538334288757473E-04L, /* bff49ffffffffff97bf6f0aa85a5f000 */
  1.22318577008381887076634753347515709E-34L, /* 3f8e452db5b5d250878f71040da06d14 */
 -7.62939453124996723316499040007097041E-04L, /* bff48ffffffffffe1c7265b431108000 */
 -1.03845161748762410745671891558398468E-34L, /* bf8e14115ad884c96d1a820c73647220 */
 -7.32421874999998242520117923997325794E-04L, /* bff47ffffffffffefca4498b7aa8a000 */
  5.64005211953031009549514026639438083E-35L, /* 3f8d2be06950f68f1a6d8ff829a6928e */
 -7.01904296874999772890934814265622012E-04L, /* bff46fffffffffffde7c0fe5d8041000 */
  5.90245467325173644235991233229525762E-35L, /* 3f8d39d40cc49002189243c194b1db0e */
 -6.71386718750008699269643939210658742E-04L, /* bff460000000000503c91d798b60c000 */
 -5.20515801723324452151498579012322191E-35L, /* bf8d14c0f08a6a9285b32b8bda003eb5 */
 -6.40869140625005499535275057463709988E-04L, /* bff45000000000032b969184e9751000 */
 -6.69469163285461870099846471658294534E-35L, /* bf8d63f36bab7b24d936c9380e3d3fa6 */
 -6.10351562499999293780097329596079841E-04L, /* bff43fffffffffff97c7c433e35ed000 */
 -1.16941808547394177991845382085515086E-34L, /* bf8e36e27886f10b234a7dd8fc588bf0 */
 -5.79833984375000068291972326409994795E-04L, /* bff43000000000000a13ff6dcf2bf000 */
  1.17885044988246219185041488459766001E-34L, /* 3f8e3964677e001a00412aab52790842 */
 -5.49316406249990904622170867910987793E-04L, /* bff41ffffffffffac1c25739c716b000 */
 -3.31875702128137033065075734368960972E-35L, /* bf8c60e928d8982c3c99aef4f885a121 */
 -5.18798828125011293653756992177727236E-04L, /* bff410000000000682a62cff36775000 */
 -5.69971237642088463334239430962628187E-35L, /* bf8d2f0c76f8757d61cd1abc7ea7d066 */
 -4.88281249999990512232251384917893121E-04L, /* bff3fffffffffff50fb48992320df000 */
  1.02144616714408655325510171265051108E-35L, /* 3f8ab279a3626612710b9b3ac71734ac */
 -4.57763671874997554564967307956493434E-04L, /* bff3dffffffffffd2e3c272e3cca9000 */
 -8.25484058867957231164162481843653503E-35L, /* bf8db6e71158e7bf93e2e683f07aa841 */
 -4.27246093749991203999790346349633286E-04L, /* bff3bffffffffff5dbe103cba0eb2000 */
 -3.51191203319375193921924105905691755E-35L, /* bf8c757356d0f3dd7fbefc0dd419ab50 */
 -3.96728515624986649402960638705483281E-04L, /* bff39ffffffffff09b996882706ec000 */
 -5.51925962073095883016589497244931171E-36L, /* bf89d586d49f22289cfc860bebb99056 */
 -3.66210937499999945095511981300980754E-04L, /* bff37fffffffffffefcb88bfc7df6000 */
 -2.11696465278144529364423332249588595E-35L, /* bf8bc23a84d28e5496c874ef9833be25 */
 -3.35693359374992480958458008559640163E-04L, /* bff35ffffffffff754c548a8798f2000 */
 -8.58941791799705081104736787493668352E-35L, /* bf8dc8b1192fb7c3662826d43acb7c68 */
 -3.05175781250009811036303273640122156E-04L, /* bff340000000000b4fb4f1aad1c76000 */
 -8.61173897858769926480551302277426632E-35L, /* bf8dc9e0eabb1c0b33051011b64769fa */
 -2.74658203124987298321920308390303850E-04L, /* bff31ffffffffff15b2056ac252fd000 */
  3.35152809454778381053519808988046631E-37L, /* 3f85c82fb59ff8d7c80d44e635420ab1 */
 -2.44140624999999992770514819575735516E-04L, /* bff2fffffffffffffbbb82d6a7636000 */
  3.54445837111124472730013879165516908E-35L, /* 3f8c78e955b01378be647b1c92aa9a77 */
 -2.13623046875012756463165168672749438E-04L, /* bff2c0000000001d6a1635fea6bbf000 */
  1.50050816288650121729916777279129473E-35L, /* 3f8b3f1f6f616a61129a58e131cbd31d */
 -1.83105468749991323078784464300306893E-04L, /* bff27fffffffffebfe0cbd0c82399000 */
 -9.14919506501448661140572099029756008E-37L, /* bf873754bacaa9d9513b6127e791eb47 */
 -1.52587890625013337032336300236461546E-04L, /* bff240000000001ec0cb57f2cc995000 */
  2.84906084373176180870418394956384516E-35L, /* 3f8c2ef6d03a7e6ab087c4f099e4de89 */
 -1.22070312499990746786116828458007518E-04L, /* bff1ffffffffffd553bbb49f35a34000 */
  6.71618008964968339584520728412444537E-36L, /* 3f8a1dacb99c60071fc9cd2349495bf0 */
 -9.15527343750029275602791047595142231E-05L, /* bff180000000000d8040cd6ecde28000 */
 -1.95753652091078750312541716951402172E-35L, /* bf8ba0526cfb24d8d59122f1c7a09a14 */
 -6.10351562499913258461494008080572701E-05L, /* bff0ffffffffffaffebbb92d7f6a9000 */
  5.69868489273961111703398456218119973E-36L, /* 3f89e4ca5df09ef4a4386dd5b3bf0331 */
 -3.05175781250092882818419203884960853E-05L, /* bff0000000000055ab55de88fac1d000 */
  9.03341100018476837609128961872915953E-36L, /* 3f8a803d229fa3a0e834a63abb06662b */
#define T_EXPL_ARG2 (2*T_EXPL_ARG1 + 2 + 2*65)
  0.00000000000000000000000000000000000E+00L, /* 00000000000000000000000000000000 */
  0.00000000000000000000000000000000000E+00L, /* 00000000000000000000000000000000 */
  3.05175781249814607084128277672749162E-05L, /* 3feffffffffffeaa02abb9102f499000 */
  1.00271855391179733380665816525889949E-36L, /* 3f8755351afa042ac3f58114824d4c10 */
  6.10351562500179243748093427073421439E-05L, /* 3ff1000000000052a95de07a4c26d000 */
  1.67231624299180373502350811501181670E-36L, /* 3f881c87a53691cae9d77f4e40d66616 */
  9.15527343749970728685313252158399200E-05L, /* 3ff17ffffffffff28040cc2acde28000 */
  2.43665747834893104318707597514407880E-36L, /* 3f889e9366c7c6c6a2ecb78dc9b0509e */
  1.22070312500027751961838150070880064E-04L, /* 3ff200000000003ffddde6c153b53000 */
 -1.73322146370624186623546452226755405E-35L, /* bf8b709d8d658ed5dbbe943de56ee84e */
  1.52587890624995916105682628143179430E-04L, /* 3ff23ffffffffff6954b56e285d23000 */
  1.23580432650945898349135528000443828E-35L, /* 3f8b06d396601dde16de7d7bc27346e6 */
  1.83105468750008670314358488289621794E-04L, /* 3ff2800000000013fe0cdc8c823b7000 */
  4.30446229148833293310207915930740796E-35L, /* 3f8cc9ba9bfe554a4f7f2fece291eb23 */
  2.13623046875005741337455947623248132E-04L, /* 3ff2c0000000000d3d1662de21a3f000 */
 -3.96110759869520786681660669615255057E-35L, /* bf8ca5379b04ff4a31aab0ceacc917e6 */
  2.44140624999981493573336463433440506E-04L, /* 3ff2ffffffffffd553bbdf48e0534000 */
 -1.39617373942387888957350179316792928E-35L, /* bf8b28eeedc286015802b63f96b8c5cd */
  2.74658203124984920706309918754626834E-04L, /* 3ff31fffffffffee9d60c8439ec1d000 */
 -3.16168080483901830349738314447356223E-36L, /* bf890cf74f81c77a611abc1243812444 */
  3.05175781250008648918265055410966055E-04L, /* 3ff3400000000009f8b5c9a346636000 */
  8.54421306185008998867856704677221443E-35L, /* 3f8dc649cd40922fc08adc6b6b20ead0 */
  3.35693359374988945462612499316774515E-04L, /* 3ff35ffffffffff34146c540f15b2000 */
  7.96443137431639500475160850431097078E-35L, /* 3f8da77638ed3148fc4d99d1c9e13446 */
  3.66210937500027690542093987739604535E-04L, /* 3ff380000000001fecce34bea89c4000 */
  2.14507323877752361258862577769090367E-35L, /* 3f8bc834e554d38894cf91957b0253d3 */
  3.96728515625003928083564943615052121E-04L, /* 3ff3a00000000004875d9a4acf6ab000 */
  4.88358523466632050664019922448605508E-35L, /* 3f8d03a7eaeef1a9f78c71a12c44dd28 */
  4.27246093750017799227172345607351585E-04L, /* 3ff3c00000000014856794c3ee850000 */
  6.66520494592631402182216588784828935E-35L, /* 3f8d6262118fcdb59b8f16108f5f1a6c */
  4.57763671875002108342364320152138181E-04L, /* 3ff3e000000000026e45d855410b9000 */
  7.21799615960261390920033272189522298E-35L, /* 3f8d7fc645cff8879462296af975c9fd */
  4.88281249999999768797631616370963356E-04L, /* 3ff3ffffffffffffbbc2d7cc004df000 */
 -5.30564629906905979452258114088325361E-35L, /* bf8d1a18b71929a30d67a217a27ae851 */
  5.18798828124997339054881383202487041E-04L, /* 3ff40ffffffffffe775055eea5851000 */
 -4.03682911253647925867848180522846377E-35L, /* bf8cad44f0f3e5199d8a589d9332acad */
  5.49316406249980511907933706754958501E-04L, /* 3ff41ffffffffff4c410b29bb62fb000 */
 -2.08166843948323917121806956728438051E-35L, /* bf8bbab8cf691403249fe5b699e25143 */
  5.79833984374989593561576568548497165E-04L, /* 3ff42ffffffffffa0047df328d817000 */
 -1.72745033420153042445343706432627539E-34L, /* bf8ecb3c2d7d3a9e6e960576be901fdf */
  6.10351562500008540711511259540838154E-04L, /* 3ff4400000000004ec62f54f8c271000 */
  7.41889382604319545724663095428976499E-35L, /* 3f8d8a74c002c81a47c93b8e05d15f8e */
  6.40869140625020444702875407535884986E-04L, /* 3ff450000000000bc91b09718515d000 */
 -4.47321009727305792048065440180490107E-35L, /* bf8cdbac5c8fe70822081d8993eb5cb6 */
  6.71386718750007531635964622352684074E-04L, /* 3ff460000000000457792973db05c000 */
  5.13698959677949336513874456684462092E-35L, /* 3f8d112114436949c5ef38d8049004ab */
  7.01904296875006634673332887754430334E-04L, /* 3ff4700000000003d31adf2cb8b1d000 */
 -8.25665755717729437292989870760751482E-35L, /* bf8db6ffcc8ef71f8e648e3a8b160f5a */
  7.32421874999998244664170215504673504E-04L, /* 3ff47ffffffffffefcf5498bd5c8a000 */
 -5.64005234937832153139057628112753364E-35L, /* bf8d2be06a1dfe90e7bf90fba7c12a98 */
  7.62939453125017456345986752604096408E-04L, /* 3ff490000000000a101a1b093d4a8000 */
 -1.11084094120417622468550608896588329E-34L, /* bf8e274feabd2d94f6694507a46accb1 */
  7.93457031249987558617598988993908016E-04L, /* 3ff49ffffffffff8d3f9dcab74bbf000 */
 -1.22966480225449015129079129940978828E-34L, /* bf8e46e6a65eef8fa9e42eddf3da305e */
  8.23974609374997378723747633335135819E-04L, /* 3ff4affffffffffe7d2afbaa55b26000 */
 -1.62270010016794279091906973366704963E-34L, /* bf8eaf633f057ebdb664a34566401c4e */
  8.54492187500023938282350821569920958E-04L, /* 3ff4c0000000000dccaabce399e59000 */
 -1.39076361712838158775374263169606160E-34L, /* bf8e71ba779364b3bbdba7841f2c4ca1 */
  8.85009765624987932362186815286691297E-04L, /* 3ff4cffffffffff90b218886edc2a000 */
  4.07328275060905585228261577392403980E-35L, /* 3f8cb1254dbb6ea4b8cfa5ed4cf28d24 */
  9.15527343749975579461305518559161974E-04L, /* 3ff4dffffffffff1ec2a21f25df33000 */
  1.16855112459192484947855553716334015E-35L, /* 3f8af10bf319e9f5270cf249eeffbe5c */
  9.46044921875016761584725882821122521E-04L, /* 3ff4f00000000009a992c46c16d71000 */
  9.51660680007524262741115611071680436E-35L, /* 3f8df9fd56e81f8edf133843910ee831 */
  9.76562499999974118878133088548272636E-04L, /* 3ff4fffffffffff1149edc46a6df6000 */
 -5.65271128977550656964071208289181661E-36L, /* bf89e0e12689dd721aa2314c81eb6429 */
  1.00708007812498671732140389760347830E-03L, /* 3ff507fffffffffc2be94b90ed091000 */
 -1.43355074891483635310132767255371379E-34L, /* bf8e7d1a688c247b16022daab1316d55 */
  1.03759765625002637786192745235343007E-03L, /* 3ff51000000000079a57b966bc158000 */
  2.95905815240957629366749917020106928E-34L, /* 3f8f895387fc73bb38f8a1b254c01a60 */
  1.06811523437500860568717813047520763E-03L, /* 3ff51800000000027afcd5b35f5e6000 */
 -5.98328495358586628195372356742878314E-35L, /* bf8d3e204130013bf6328f1b70ff8c76 */
  1.09863281250001439958487251556220070E-03L, /* 3ff5200000000004268077c6c66bd000 */
  2.41371837889426603334113000868144760E-34L, /* 3f8f40d6948edf864054ccf151f9815e */
  1.12915039062501298413451613770002366E-03L, /* 3ff5280000000003be0f5dd8fe81b000 */
 -1.28815268997394164973472617519705703E-34L, /* bf8e567321172ea089dce4bc8354ecb7 */
  1.15966796874997272036339054191407232E-03L, /* 3ff52ffffffffff8231e3bcfff1e8000 */
  1.02996064554316248496839462594377804E-34L, /* 3f8e11cf7d402789244f68e2d4f985b1 */
  1.19018554687502744121802585360546796E-03L, /* 3ff5380000000007e8cdf3f8f6c20000 */
 -1.43453217726255628994625761307322163E-34L, /* bf8e7d5d3370d85a374f5f4802fc517a */
  1.22070312499997743541996266398850614E-03L, /* 3ff53ffffffffff97f0722561f454000 */
 -1.41086259180534339713692694428211646E-34L, /* bf8e77125519ff76244dfec5fbd58402 */
  1.25122070312501024092560690174507039E-03L, /* 3ff5480000000002f3a59d8820691000 */
  3.84102646020099293168698506729765213E-34L, /* 3f8ffe8f5b86f9c3569c8f26e19b1f50 */
  1.28173828124997986521442660131425390E-03L, /* 3ff54ffffffffffa3250a764439d9000 */
  1.44644589735033114377952806106652650E-34L, /* 3f8e808801b80dcf38323cdbfdca2549 */
  1.31225585937501665804856968749058137E-03L, /* 3ff5580000000004cd25a414c6d62000 */
  1.67474574742200577294563576414361377E-34L, /* 3f8ebd394a151dbda4f81d5d83c0f1e9 */
  1.34277343749997290265837386401818888E-03L, /* 3ff55ffffffffff83091b042cfd59000 */
 -1.55650565030381326742591837551559103E-34L, /* bf8e9dca490d7fecfadba9625ffb91c5 */
  1.37329101562497720784949380297774268E-03L, /* 3ff567fffffffff96e3c7312f5ccf000 */
  1.65279335325630026116581677369221748E-34L, /* 3f8eb763496f5bd7404f2298b402074f */
  1.40380859374999099958354100336136647E-03L, /* 3ff56ffffffffffd67e2f09f2a381000 */
  1.89919944388961890195706641264717076E-34L, /* 3f8ef8e4d0ffdfeba982aa8829501389 */
  1.43432617187497484122173130998160625E-03L, /* 3ff577fffffffff8bf9c1d71af8a8000 */
  2.57638517142061429772064578590009568E-34L, /* 3f8f5675d82c1cc4ada70fd3a957b89a */
  1.46484374999999929342158925502052945E-03L, /* 3ff57fffffffffffcbdd1c7671b46000 */
  1.76487201934184070490166772482073801E-34L, /* 3f8ed52ef732458f6e4c5c07504f33cc */
  1.49536132812502318451070466256902933E-03L, /* 3ff5880000000006aeb7066c8ad43000 */
  2.38068367275295804321313550609246656E-34L, /* 3f8f3c7277ae6fc390ace5e06c0b025b */
  1.52587890625000448053340248672949543E-03L, /* 3ff59000000000014a9ae2104b3bc000 */
  1.01174455568392813258454590274740959E-34L, /* 3f8e0cf7c434762991bb38e12acee215 */
  1.55639648437501113499837053523090913E-03L, /* 3ff5980000000003359e2c204355e000 */
 -2.82398418808099749023517211651363693E-35L, /* bf8c2c4c2971d88caa95e15fb1ccb1a1 */
  1.58691406249999937955142588308171026E-03L, /* 3ff59fffffffffffd2380ecbc87c2000 */
 -1.27361695572422741562701199136538047E-34L, /* bf8e5295e0e206dfb0f0266c07225448 */
  1.61743164062498000531048954475329309E-03L, /* 3ff5a7fffffffffa3ca6fe61ed94c000 */
 -1.22606548862580061633942923016222044E-34L, /* bf8e45f1b17bb61039d21a351bb207b8 */
  1.64794921875001835451453858682255576E-03L, /* 3ff5b000000000054a52fa20f6565000 */
  1.39132339594152335892305491425264583E-34L, /* 3f8e71e0904c5449b414ee49b191cef2 */
  1.67846679687501263995029340691547953E-03L, /* 3ff5b80000000003a4a9e912c910b000 */
  6.67245854693585315412242764786197029E-35L, /* 3f8d62c4ccac1e7511a617d469468ccd */
  1.70898437500002646861403514115369655E-03L, /* 3ff5c00000000007a109fbaa7e015000 */
  6.87367172354719289559624829652240928E-36L, /* 3f8a245fa835eceb42bae8128d9336db */
  1.73950195312501174308226096992992128E-03L, /* 3ff5c80000000003627c8d637a005000 */
 -2.20824271875474985927385878948759352E-34L, /* bf8f25869b1cbefb25e735992f232f57 */
  1.77001953124997491747605207736194513E-03L, /* 3ff5cffffffffff8c53c84b6883b8000 */
  3.43123048533596296514343180408963705E-34L, /* 3f8fc816b91d173ddadbbf09b1287906 */
  1.80053710937497698911127570705069398E-03L, /* 3ff5d7fffffffff95e1899f4a8430000 */
  3.99231237340890073475077494556136100E-35L, /* 3f8ca889148f62fa854da5674df41279 */
  1.83105468750002267094899598630423914E-03L, /* 3ff5e0000000000688d21e62ba674000 */
 -3.22274595655810623999007524769365273E-34L, /* bf8fac605cb9ae01eb719675ced25560 */
  1.86157226562500499224728040579690330E-03L, /* 3ff5e80000000001705ce28a6d89e000 */
  3.07094985075881613489605622068441083E-34L, /* 3f8f98330225ec7e2c8f3c0d1c432b91 */
  1.89208984374998234666824993196980949E-03L, /* 3ff5effffffffffae969fdc7cd8cf000 */
 -3.06287628722973914692165056776495733E-34L, /* bf8f9720477d9cfa10e464df7f91020c */
  1.92260742187501225343755557292811682E-03L, /* 3ff5f800000000038824e428ed49a000 */
  6.30049124729794620592961282769623368E-35L, /* 3f8d4efdd7cd4336d88a6aa49e1e96bc */
  1.95312499999998514894032051116231258E-03L, /* 3ff5fffffffffffbb82f6a04f1ae0000 */
 -6.14610057507500948543216998736262902E-35L, /* bf8d46c862d39255370e7974d48daa7e */
  1.98364257812501222021119324146882732E-03L, /* 3ff6040000000001c2d8a1aa5188d000 */
  3.71942298418113774118754986159801984E-34L, /* 3f8fee6567d9940495519ffe62cbc9a4 */

  7.06341639425619532977052017486130353E-01L, /* 3ffe69a59c8245a9ac00000000000000 */
  7.09106182437398424589503065362805501E-01L, /* 3ffe6b0ff72deb89d000000000000000 */
  7.11881545564596485142772053222870454E-01L, /* 3ffe6c7bbce9a6d93000000000000000 */
  7.14667771155948150507697391731198877E-01L, /* 3ffe6de8ef213d71e000000000000000 */
  7.17464901725936049503573599395167548E-01L, /* 3ffe6f578f41e1a9e400000000000000 */
  7.20272979955439790478166628417966422E-01L, /* 3ffe70c79eba33c06c00000000000000 */
  7.23092048692387218133958981525211129E-01L, /* 3ffe72391efa434c7400000000000000 */
  7.25922150952408251622927082280511968E-01L, /* 3ffe73ac117390acd800000000000000 */
  7.28763329919491220643124052003258839E-01L, /* 3ffe752077990e79d000000000000000 */
  7.31615628946641782803794740175362676E-01L, /* 3ffe769652df22f7e000000000000000 */
  7.34479091556544505525749855223693885E-01L, /* 3ffe780da4bba98c4800000000000000 */
  7.37353761442226890432394270646909717E-01L, /* 3ffe79866ea5f432d400000000000000 */
  7.40239682467726090031590047146892175E-01L, /* 3ffe7b00b216ccf53000000000000000 */
  7.43136898668758316688354170764796436E-01L, /* 3ffe7c7c70887763c000000000000000 */
  7.46045454253390638577059235103661194E-01L, /* 3ffe7df9ab76b20fd000000000000000 */
  7.48965393602715662213498148958024103E-01L, /* 3ffe7f78645eb8076400000000000000 */
  7.51896761271528629722027403659012634E-01L, /* 3ffe80f89cbf42526400000000000000 */
  7.54839601989007347171423134568613023E-01L, /* 3ffe827a561889716000000000000000 */
  7.57793960659394638668118204805068672E-01L, /* 3ffe83fd91ec46ddc000000000000000 */
  7.60759882362683631518152083117456641E-01L, /* 3ffe858251bdb68b8c00000000000000 */
  7.63737412355305483879774897104653064E-01L, /* 3ffe87089711986c9400000000000000 */
  7.66726596070820082262642358728044201E-01L, /* 3ffe8890636e31f54400000000000000 */
  7.69727479120609181517664865168626420E-01L, /* 3ffe8a19b85b4fa2d800000000000000 */
  7.72740107294572486917871856348938309E-01L, /* 3ffe8ba4976246833800000000000000 */
  7.75764526561826289752232810315035749E-01L, /* 3ffe8d31020df5be4400000000000000 */
  7.78800783071404878477039801509818062E-01L, /* 3ffe8ebef9eac820b000000000000000 */
  7.81848923152964780936002853195532225E-01L, /* 3ffe904e8086b5a87800000000000000 */
  7.84908993317491698871180005880887620E-01L, /* 3ffe91df97714512d800000000000000 */
  7.87981040258010162480317717381694820E-01L, /* 3ffe9372403b8d6bcc00000000000000 */
  7.91065110850296016042904057030682452E-01L, /* 3ffe95067c78379f2800000000000000 */
  7.94161252153591734614934694036492147E-01L, /* 3ffe969c4dbb800b4800000000000000 */
  7.97269511411324433014513601847284008E-01L, /* 3ffe9833b59b38154400000000000000 */
  8.00389936051826789142893403550260700E-01L, /* 3ffe99ccb5aec7bec800000000000000 */
  8.03522573689060742863077280162542593E-01L, /* 3ffe9b674f8f2f3d7c00000000000000 */
  8.06667472123343942680406826184480451E-01L, /* 3ffe9d0384d70893f800000000000000 */
  8.09824679342079301047618855591281317E-01L, /* 3ffe9ea15722892c7800000000000000 */
  8.12994243520486992160556383169023320E-01L, /* 3ffea040c80f8374f000000000000000 */
  8.16176213022339780422953481320291758E-01L, /* 3ffea1e1d93d687d0000000000000000 */
  8.19370636400700819157449927843117621E-01L, /* 3ffea3848c4d49954c00000000000000 */
  8.22577562398664585696650419777142815E-01L, /* 3ffea528e2e1d9f09800000000000000 */
  8.25797039950100647542896581398963463E-01L, /* 3ffea6cede9f70467c00000000000000 */
  8.29029118180400342863478613253391813E-01L, /* 3ffea876812c0877bc00000000000000 */
  8.32273846407226292054559735333896242E-01L, /* 3ffeaa1fcc2f45343800000000000000 */
  8.35531274141265073440720811959181447E-01L, /* 3ffeabcac15271a2a400000000000000 */
  8.38801451086982535754188461396552157E-01L, /* 3ffead7762408309bc00000000000000 */
  8.42084427143382358016410194068157580E-01L, /* 3ffeaf25b0a61a7b4c00000000000000 */
  8.45380252404767357221615498019673396E-01L, /* 3ffeb0d5ae318680c400000000000000 */
  8.48688977161503960155997106085123960E-01L, /* 3ffeb2875c92c4c99400000000000000 */
  8.52010651900789478530029441571969073E-01L, /* 3ffeb43abd7b83db1c00000000000000 */
  8.55345327307422548246407245642330963E-01L, /* 3ffeb5efd29f24c26400000000000000 */
  8.58693054264576483003423845730139874E-01L, /* 3ffeb7a69db2bcc77800000000000000 */
  8.62053883854575708767242758767679334E-01L, /* 3ffeb95f206d17228000000000000000 */
  8.65427867359675251357487013592617586E-01L, /* 3ffebb195c86b6b29000000000000000 */
  8.68815056262843166123843730019871145E-01L, /* 3ffebcd553b9d7b62000000000000000 */
  8.72215502248546159513864495238522068E-01L, /* 3ffebe9307c271855000000000000000 */
  8.75629257203538208242932228131394368E-01L, /* 3ffec0527a5e384ddc00000000000000 */
  8.79056373217652342599848225290770642E-01L, /* 3ffec213ad4c9ed0d800000000000000 */
  8.82496902584595399599010079327854328E-01L, /* 3ffec3d6a24ed8221800000000000000 */
  8.85950897802745995779361010136199184E-01L, /* 3ffec59b5b27d9696800000000000000 */
  8.89418411575955636383383762222365476E-01L, /* 3ffec761d99c5ba58800000000000000 */
  8.92899496814352794382685374330321793E-01L, /* 3ffec92a1f72dd70d400000000000000 */
  8.96394206635150403439382671422208659E-01L, /* 3ffecaf42e73a4c7d800000000000000 */
  8.99902594363456265202927397695020773E-01L, /* 3ffeccc00868c0d18800000000000000 */
  9.03424713533086704009278378180169966E-01L, /* 3ffece8daf1e0ba94c00000000000000 */
  9.06960617887383580004723171441582963E-01L, /* 3ffed05d24612c2af000000000000000 */
  9.10510361380034133338412516422977205E-01L, /* 3ffed22e6a0197c02c00000000000000 */
  9.14073998175894436579724811053893063E-01L, /* 3ffed40181d094303400000000000000 */
  9.17651582651815816982221463149471674E-01L, /* 3ffed5d66da13970f400000000000000 */
  9.21243169397474526149949269893113524E-01L, /* 3ffed7ad2f48737a2000000000000000 */
  9.24848813216204823639543519675498828E-01L, /* 3ffed985c89d041a3000000000000000 */
  9.28468569125835141431224428743007593E-01L, /* 3ffedb603b7784cd1800000000000000 */
  9.32102492359527579068867453315760940E-01L, /* 3ffedd3c89b26894e000000000000000 */
  9.35750638366620729469147477175283711E-01L, /* 3ffedf1ab529fdd41c00000000000000 */
  9.39413062813475779888605643463961314E-01L, /* 3ffee0fabfbc702a3c00000000000000 */
  9.43089821584325888048638830696290825E-01L, /* 3ffee2dcab49ca51b400000000000000 */
  9.46780970782128888929563004239753354E-01L, /* 3ffee4c079b3f8000400000000000000 */
  9.50486566729423443256052905780961737E-01L, /* 3ffee6a62cdec7c7b000000000000000 */
  9.54206665969188322362626308859034907E-01L, /* 3ffee88dc6afecfbfc00000000000000 */
  9.57941325265705301283958306157728657E-01L, /* 3ffeea77490f0196b000000000000000 */
  9.61690601605425299247542625380447134E-01L, /* 3ffeec62b5e5881fb000000000000000 */
  9.65454552197837823079851204965962097E-01L, /* 3ffeee500f1eed967000000000000000 */
  9.69233234476344074348475032820715569E-01L, /* 3ffef03f56a88b5d7800000000000000 */
  9.73026706099133165128733935489435680E-01L, /* 3ffef2308e71a927a800000000000000 */
  9.76835024950062025261843245971249416E-01L, /* 3ffef423b86b7ee79000000000000000 */
  9.80658249139538557015427500118676107E-01L, /* 3ffef618d68936c09c00000000000000 */
  9.84496437005408397968864164795377292E-01L, /* 3ffef80feabfeefa4800000000000000 */
  9.88349647113845042323276857132441364E-01L, /* 3ffefa08f706bbf53800000000000000 */
  9.92217938260243514925207364285597578E-01L, /* 3ffefc03fd56aa225000000000000000 */
  9.96101369470117486981664001177705359E-01L, /* 3ffefe00ffaabffbbc00000000000000 */
#define T_EXPL_RES1 (T_EXPL_ARG2 + 2 + 2*65 + 89)
  1.00000000000000000000000000000000000E+00L, /* 3fff0000000000000000000000000000 */
  1.00391388933834757590801700644078664E+00L, /* 3fff0100802ab5577800000000000000 */
  1.00784309720644799091004983893071767E+00L, /* 3fff0202015600445c00000000000000 */
  1.01178768355933151879000320150225889E+00L, /* 3fff0304848362076c00000000000000 */
  1.01574770858668572692806719715008512E+00L, /* 3fff04080ab55de39000000000000000 */
  1.01972323271377413034244341361045372E+00L, /* 3fff050c94ef7a206c00000000000000 */
  1.02371431660235789884438872832106426E+00L, /* 3fff06122436410dd000000000000000 */
  1.02772102115162167201845022646011785E+00L, /* 3fff0718b98f42085000000000000000 */
  1.03174340749910264936062276319717057E+00L, /* 3fff08205601127ec800000000000000 */
  1.03578153702162378824169763902318664E+00L, /* 3fff0928fa934ef90800000000000000 */
  1.03983547133622999947277776300325058E+00L, /* 3fff0a32a84e9c1f5800000000000000 */
  1.04390527230112850620713516036630608E+00L, /* 3fff0b3d603ca7c32800000000000000 */
  1.04799100201663270004459604933799710E+00L, /* 3fff0c49236829e8bc00000000000000 */
  1.05209272282610977189420964350574650E+00L, /* 3fff0d55f2dce5d1e800000000000000 */
  1.05621049731693195106174698594259098E+00L, /* 3fff0e63cfa7ab09d000000000000000 */
  1.06034438832143151909548350886325352E+00L, /* 3fff0f72bad65671b800000000000000 */
  1.06449445891785943185681162503897212E+00L, /* 3fff1082b577d34ed800000000000000 */
  1.06866077243134810492719566354935523E+00L, /* 3fff1193c09c1c595c00000000000000 */
  1.07284339243487741866189821848820429E+00L, /* 3fff12a5dd543ccc4c00000000000000 */
  1.07704238275024494209120007326419000E+00L, /* 3fff13b90cb25176a400000000000000 */
  1.08125780744903959851299646288680378E+00L, /* 3fff14cd4fc989cd6400000000000000 */
  1.08548973085361949442173568058933597E+00L, /* 3fff15e2a7ae28fecc00000000000000 */
  1.08973821753809324563988525369495619E+00L, /* 3fff16f9157587069400000000000000 */
  1.09400333232930546678574046381982043E+00L, /* 3fff18109a3611c35000000000000000 */
  1.09828514030782586896606289883493446E+00L, /* 3fff192937074e0cd800000000000000 */
  1.10258370680894224324930519287590869E+00L, /* 3fff1a42ed01d8cbc800000000000000 */
  1.10689909742365749645287564817408565E+00L, /* 3fff1b5dbd3f68122400000000000000 */
  1.11123137799969046168868658241990488E+00L, /* 3fff1c79a8dacc350c00000000000000 */
  1.11558061464248076122274255794764031E+00L, /* 3fff1d96b0eff0e79400000000000000 */
  1.11994687371619722204840741142106708E+00L, /* 3fff1eb4d69bde569c00000000000000 */
  1.12433022184475073235176978414529003E+00L, /* 3fff1fd41afcba45e800000000000000 */
  1.12873072591281087273529237791080959E+00L, /* 3fff20f47f31c92e4800000000000000 */
  1.13314845306682632219974493636982515E+00L, /* 3fff2216045b6f5cd000000000000000 */
  1.13758347071604959399593326452304609E+00L, /* 3fff2338ab9b32134800000000000000 */
  1.14203584653356560174586320499656722E+00L, /* 3fff245c7613b8a9b000000000000000 */
  1.14650564845732405583333957110880874E+00L, /* 3fff258164e8cdb0d800000000000000 */
  1.15099294469117646722011727433709893E+00L, /* 3fff26a7793f60164400000000000000 */
  1.15549780370591653744227755851170514E+00L, /* 3fff27ceb43d84490400000000000000 */
  1.16002029424032515603215642840950750E+00L, /* 3fff28f7170a755fd800000000000000 */
  1.16456048530221917269855680387991015E+00L, /* 3fff2a20a2ce96406400000000000000 */
  1.16911844616950438835445424956560601E+00L, /* 3fff2b4b58b372c79400000000000000 */
  1.17369424639123270948104504896036815E+00L, /* 3fff2c7739e3c0f32c00000000000000 */
  1.17828795578866324378353169777255971E+00L, /* 3fff2da4478b620c7400000000000000 */
  1.18289964445632783673900689791480545E+00L, /* 3fff2ed282d763d42400000000000000 */
  1.18752938276310060494722620205720887E+00L, /* 3fff3001ecf601af7000000000000000 */
  1.19217724135327157730657177125976887E+00L, /* 3fff31328716a5d63c00000000000000 */
  1.19684329114762477708211463323095813E+00L, /* 3fff32645269ea829000000000000000 */
  1.20152760334452030077656559114984702E+00L, /* 3fff339750219b212c00000000000000 */
  1.20623024942098072687102217059873510E+00L, /* 3fff34cb8170b5835400000000000000 */
  1.21095130113378179892436037334846333E+00L, /* 3fff3600e78b6b11d000000000000000 */
  1.21569083052054743854242246925423387E+00L, /* 3fff373783a722012400000000000000 */
  1.22044890990084875515009343871497549E+00L, /* 3fff386f56fa7686e800000000000000 */
  1.22522561187730755216662714701669756E+00L, /* 3fff39a862bd3c106400000000000000 */
  1.23002100933670455162882717559114099E+00L, /* 3fff3ae2a8287e7a8000000000000000 */
  1.23483517545109100499445276000187732E+00L, /* 3fff3c1e2876834aa800000000000000 */
  1.23966818367890557750499169742397498E+00L, /* 3fff3d5ae4e2cae92c00000000000000 */
  1.24452010776609517384017067342938390E+00L, /* 3fff3e98deaa11dcbc00000000000000 */
  1.24939102174724003813111039562500082E+00L, /* 3fff3fd8170a52071800000000000000 */
  1.25428099994668373895478907797951251E+00L, /* 3fff41188f42c3e32000000000000000 */
  1.25919011697966698459794088194030337E+00L, /* 3fff425a4893dfc3f800000000000000 */
  1.26411844775346637881341393949696794E+00L, /* 3fff439d443f5f159000000000000000 */
  1.26906606746853711786826579555054195E+00L, /* 3fff44e183883d9e4800000000000000 */
  1.27403305161966090564007458851847332E+00L, /* 3fff462707b2bac20c00000000000000 */
  1.27901947599709753244923149395617656E+00L, /* 3fff476dd2045ac67800000000000000 */
  1.28402541668774150540599521264084615E+00L, /* 3fff48b5e3c3e8186800000000000000 */
  1.28905095007628295311619126550795045E+00L, /* 3fff49ff3e397492bc00000000000000 */
  1.29409615284637330434591717676084954E+00L, /* 3fff4b49e2ae5ac67400000000000000 */
  1.29916110198179535206719492634874769E+00L, /* 3fff4c95d26d3f440800000000000000 */
  1.30424587476763775839572190307080746E+00L, /* 3fff4de30ec211e60000000000000000 */
  1.30935054879147461104338390214252286E+00L, /* 3fff4f3198fa0f1cf800000000000000 */
  1.31447520194454914310711046709911898E+00L, /* 3fff50817263c13cd000000000000000 */
  1.31961991242296217130558488861424848E+00L, /* 3fff51d29c4f01cb3000000000000000 */
  1.32478475872886558573071624778094701E+00L, /* 3fff5325180cfacf7800000000000000 */
  1.32996981967165983640200010995613411E+00L, /* 3fff5478e6f02823d000000000000000 */
  1.33517517436919680440254865061433520E+00L, /* 3fff55ce0a4c58c7bc00000000000000 */
  1.34040090224898678084031189428060316E+00L, /* 3fff57248376b033d800000000000000 */
  1.34564708304941055283521222918352578E+00L, /* 3fff587c53c5a7af0400000000000000 */
  1.35091379682093615244298234756570309E+00L, /* 3fff59d57c910fa4e000000000000000 */
  1.35620112392734021300455538039386738E+00L, /* 3fff5b2fff3210fd9400000000000000 */
  1.36150914504693443252136830778908916E+00L, /* 3fff5c8bdd032e770800000000000000 */
  1.36683794117379636690046140756749082E+00L, /* 3fff5de9176045ff5400000000000000 */
  1.37218759361900544124779344201670028E+00L, /* 3fff5f47afa69210a800000000000000 */
  1.37755818401188367960941150158760138E+00L, /* 3fff60a7a734ab0e8800000000000000 */
  1.38294979430124120867162673675920814E+00L, /* 3fff6208ff6a88a46000000000000000 */
  1.38836250675662681297595213436579797E+00L, /* 3fff636bb9a983258400000000000000 */
  1.39379640396958309755959248832368758E+00L, /* 3fff64cfd75454ee7c00000000000000 */
  1.39925156885490681313299887733592186E+00L, /* 3fff663559cf1bc7c400000000000000 */
  1.40472808465191417726103395580139477E+00L, /* 3fff679c427f5a49f400000000000000 */
  1.41022603492571069194738697660795879E+00L, /* 3fff690492cbf9432c00000000000000 */
  1.41574550356846662335641440222389065E+00L, /* 3fff6a6e4c1d491e1800000000000000 */

  9.98018323540573404351050612604012713E-01L, /* 3ffefefc41f8d4bdb000000000000000 */
  9.98048781107475468932221929208026268E-01L, /* 3ffeff003ff556aa8800000000000000 */
  9.98079239603882895082165305211674422E-01L, /* 3ffeff043df9d4986000000000000000 */
  9.98109699029824021243584297735651489E-01L, /* 3ffeff083c064e972c00000000000000 */
  9.98140159385327269125909310787392315E-01L, /* 3ffeff0c3a1ac4b6ec00000000000000 */
  9.98170620670420977171843901487591211E-01L, /* 3ffeff10383737079400000000000000 */
  9.98201082885133511579667242585856002E-01L, /* 3ffeff14365ba5991c00000000000000 */
  9.98231546029493238547658506831794512E-01L, /* 3ffeff183488107b7c00000000000000 */
  9.98262010103528552029672482603928074E-01L, /* 3ffeff1c32bc77beb000000000000000 */
  9.98292475107267818223988342651864514E-01L, /* 3ffeff2030f8db72b000000000000000 */
  9.98322941040739375573309644096298143E-01L, /* 3ffeff242f3d3ba77000000000000000 */
  9.98353407903971645787066790944663808E-01L, /* 3ffeff282d89986cf000000000000000 */
  9.98383875696992967307963340317655820E-01L, /* 3ffeff2c2bddf1d32400000000000000 */
  9.98414344419831761845429696222709026E-01L, /* 3ffeff302a3a47ea0c00000000000000 */
  9.98444814072516340086593800151604228E-01L, /* 3ffeff34289e9ac19800000000000000 */
  9.98475284655075123740886056111776270E-01L, /* 3ffeff38270aea69c800000000000000 */
  9.98505756167536479006585636852832977E-01L, /* 3ffeff3c257f36f29400000000000000 */
  9.98536228609928799837547330753295682E-01L, /* 3ffeff4023fb806bf800000000000000 */
  9.98566701982280452432050310562772211E-01L, /* 3ffeff44227fc6e5ec00000000000000 */
  9.98597176284619802988373749030870385E-01L, /* 3ffeff48210c0a706800000000000000 */
  9.98627651516975245460372434536111541E-01L, /* 3ffeff4c1fa04b1b6800000000000000 */
  9.98658127679375173801901155457017012E-01L, /* 3ffeff501e3c88f6e800000000000000 */
  9.98688604771847954211239084543194622E-01L, /* 3ffeff541ce0c412e000000000000000 */
  9.98719082794421980642241010173165705E-01L, /* 3ffeff581b8cfc7f4c00000000000000 */
  9.98749561747125619293186105096538085E-01L, /* 3ffeff5c1a41324c2400000000000000 */
  9.98780041629987291873504773320746608E-01L, /* 3ffeff6018fd65896800000000000000 */
  9.98810522443035364581476187595399097E-01L, /* 3ffeff6417c196471000000000000000 */
  9.98841004186298203615379520670103375E-01L, /* 3ffeff68168dc4951400000000000000 */
  9.98871486859804230684645176552294288E-01L, /* 3ffeff6c1561f0837400000000000000 */
  9.98901970463581839743127943620493170E-01L, /* 3ffeff70143e1a222c00000000000000 */
  9.98932454997659369233531378995394334E-01L, /* 3ffeff74132241813000000000000000 */
  9.98962940462065268620861502313346136E-01L, /* 3ffeff78120e66b08400000000000000 */
  9.98993426856827904103397486323956400E-01L, /* 3ffeff7c110289c02000000000000000 */
  9.99023914181975669634994119405746460E-01L, /* 3ffeff800ffeaac00000000000000000 */
  9.99054402437536959169506189937237650E-01L, /* 3ffeff840f02c9c02000000000000000 */
  9.99084891623540138905212870668037795E-01L, /* 3ffeff880e0ee6d07800000000000000 */
  9.99115381740013658307120181234495249E-01L, /* 3ffeff8c0d2302010c00000000000000 */
  9.99145872786985911329082910015131347E-01L, /* 3ffeff900c3f1b61d800000000000000 */
  9.99176364764485236413804614130640402E-01L, /* 3ffeff940b633302d000000000000000 */
  9.99206857672540083026291313217370771E-01L, /* 3ffeff980a8f48f3f800000000000000 */
  9.99237351511178817364822180024930276E-01L, /* 3ffeff9c09c35d454800000000000000 */
  9.99267846280429861138827618560753763E-01L, /* 3ffeffa008ff7006c000000000000000 */
  9.99298341980321608302162417203362565E-01L, /* 3ffeffa4084381485c00000000000000 */
  9.99328838610882452808681364331278019E-01L, /* 3ffeffa8078f911a1800000000000000 */
  9.99359336172140816367814863951934967E-01L, /* 3ffeffac06e39f8bf400000000000000 */
  9.99389834664125092933417704443854745E-01L, /* 3ffeffb0063facadec00000000000000 */
  9.99420334086863676459344674185558688E-01L, /* 3ffeffb405a3b88ffc00000000000000 */
  9.99450834440384988655026177184481639E-01L, /* 3ffeffb8050fc3422400000000000000 */
  9.99481335724717395718741386190231424E-01L, /* 3ffeffbc0483ccd45c00000000000000 */
  9.99511837939889374871071936468069907E-01L, /* 3ffeffc003ffd556ac00000000000000 */
  9.99542341085929264554721385138691403E-01L, /* 3ffeffc40383dcd90800000000000000 */
  9.99572845162865514234695751838444266E-01L, /* 3ffeffc8030fe36b7400000000000000 */
  9.99603350170726517864849824945849832E-01L, /* 3ffeffcc02a3e91dec00000000000000 */
  9.99633856109540669399038392839429434E-01L, /* 3ffeffd0023fee006c00000000000000 */
  9.99664362979336418302267475155531429E-01L, /* 3ffeffd401e3f222f800000000000000 */
  9.99694870780142130772816244643763639E-01L, /* 3ffeffd8018ff5958800000000000000 */
  9.99725379511986284031266336569387931E-01L, /* 3ffeffdc0143f8682400000000000000 */
  9.99755889174897216520321308053098619E-01L, /* 3ffeffe000fffaaac000000000000000 */
  9.99786399768903377704987178731244057E-01L, /* 3ffeffe400c3fc6d6000000000000000 */
  9.99816911294033217050269968240172602E-01L, /* 3ffeffe8008ffdc00800000000000000 */
  9.99847423750315072998873233700578567E-01L, /* 3ffeffec0063feb2ac00000000000000 */
  9.99877937137777450526954226006637327E-01L, /* 3ffefff0003fff555800000000000000 */
  9.99908451456448688077216502279043198E-01L, /* 3ffefff40023ffb80000000000000000 */
  9.99938966706357262870241697783058044E-01L, /* 3ffefff8000fffeaac00000000000000 */
  9.99969482887531541104308985268289689E-01L, /* 3ffefffc0003fffd5400000000000000 */
#define T_EXPL_RES2 (T_EXPL_RES1 + 1 + 89 + 65)
  1.00000000000000000000000000000000000E+00L, /* 3fff0000000000000000000000000000 */
  1.00003051804379100575559391472779680E+00L, /* 3fff0002000200015400000000000000 */
  1.00006103701893306334724798034585547E+00L, /* 3fff00040008000aac00000000000000 */
  1.00009155692545448346209013834595680E+00L, /* 3fff0006001200240000000000000000 */
  1.00012207776338379883185325525118969E+00L, /* 3fff0008002000555800000000000000 */
  1.00015259953274932014366527255333494E+00L, /* 3fff000a003200a6ac00000000000000 */
  1.00018312223357958012925905677548144E+00L, /* 3fff000c004801200400000000000000 */
  1.00021364586590294498691378066723701E+00L, /* 3fff000e006201c95c00000000000000 */
  1.00024417042974783642605984823603649E+00L, /* 3fff0010008002aab400000000000000 */
  1.00027469592514273166727889474714175E+00L, /* 3fff001200a203cc1000000000000000 */
  1.00030522235211605242000132420798764E+00L, /* 3fff001400c805357000000000000000 */
  1.00033574971069616488250630936818197E+00L, /* 3fff001600f206eed000000000000000 */
  1.00036627800091160178652671675081365E+00L, /* 3fff0018012009003800000000000000 */
  1.00039680722279067381919048784766346E+00L, /* 3fff001a01520b71a000000000000000 */
  1.00042733737636191371223048918182030E+00L, /* 3fff001c01880e4b1000000000000000 */
  1.00045786846165368766392589350289200E+00L, /* 3fff001e01c211948400000000000000 */
  1.00048840047869447289485833607614040E+00L, /* 3fff0020020015560000000000000000 */
  1.00051893342751269111445822090900037E+00L, /* 3fff0022024219978400000000000000 */
  1.00054946730813676403215595200890675E+00L, /* 3fff002402881e611000000000000000 */
  1.00058000212059516886853316464112140E+00L, /* 3fff002602d223baa800000000000000 */
  1.00061053786491632733302026281307917E+00L, /* 3fff0028032029ac4c00000000000000 */
  1.00064107454112866113504765053221490E+00L, /* 3fff002a0372303dfc00000000000000 */
  1.00067161214926059198404573180596344E+00L, /* 3fff002c03c83777b800000000000000 */
  1.00070215068934059710059614189958666E+00L, /* 3fff002e04223f618400000000000000 */
  1.00073269016139709819412928482051939E+00L, /* 3fff0030048048036000000000000000 */
  1.00076323056545857248522679583402351E+00L, /* 3fff003204e251655000000000000000 */
  1.00079377190155338617216784768970683E+00L, /* 3fff003405485b8f5000000000000000 */
  1.00082431416971007198668530691065826E+00L, /* 3fff003605b266896800000000000000 */
  1.00085485736995705163820957750431262E+00L, /* 3fff00380620725b9800000000000000 */
  1.00088540150232269132501983222027775E+00L, /* 3fff003a06927f0ddc00000000000000 */
  1.00091594656683552377884893758164253E+00L, /* 3fff003c07088ca83c00000000000000 */
  1.00094649256352402622027852885366883E+00L, /* 3fff003e07829b32bc00000000000000 */
  1.00097703949241650933643654752813745E+00L, /* 3fff00400800aab55400000000000000 */
  1.00100758735354156137020709138596430E+00L, /* 3fff00420882bb381000000000000000 */
  1.00103813614692760403102056443458423E+00L, /* 3fff00440908ccc2f000000000000000 */
  1.00106868587260300351715613942360505E+00L, /* 3fff00460992df5df000000000000000 */
  1.00109923653059629256034668287611566E+00L, /* 3fff00480a20f3111800000000000000 */
  1.00112978812093589287002259879955091E+00L, /* 3fff004a0ab307e46800000000000000 */
  1.00116034064365022615561429120134562E+00L, /* 3fff004c0b491ddfe000000000000000 */
  1.00119089409876788066000585786241572E+00L, /* 3fff004e0be3350b8c00000000000000 */
  1.00122144848631711155917400901671499E+00L, /* 3fff00500c814d6f6000000000000000 */
  1.00125200380632656260715407370298635E+00L, /* 3fff00520d2367136c00000000000000 */
  1.00128256005882454449107399341301061E+00L, /* 3fff00540dc981ffa800000000000000 */
  1.00131311724383964545381786592770368E+00L, /* 3fff00560e739e3c2000000000000000 */
  1.00134367536140017618251363273884635E+00L, /* 3fff00580f21bbd0cc00000000000000 */
  1.00137423441153472492004539162735455E+00L, /* 3fff005a0fd3dac5b800000000000000 */
  1.00140479439427171337584354660066310E+00L, /* 3fff005c1089fb22e400000000000000 */
  1.00143535530963956325933850166620687E+00L, /* 3fff005e11441cf05000000000000000 */
  1.00146591715766680730226312334707472E+00L, /* 3fff0060120240360400000000000000 */
  1.00149647993838186721404781565070152E+00L, /* 3fff006212c464fc0000000000000000 */
  1.00152704365181316470412298258452211E+00L, /* 3fff0064138a8b4a4400000000000000 */
  1.00155760829798923250422149067162536E+00L, /* 3fff00661454b328d800000000000000 */
  1.00158817387693849232377374391944613E+00L, /* 3fff00681522dc9fbc00000000000000 */
  1.00161874038868942138336137759324629E+00L, /* 3fff006a15f507b6f400000000000000 */
  1.00164930783327055241471725821611471E+00L, /* 3fff006c16cb34768800000000000000 */
  1.00167987621071025161612055853765924E+00L, /* 3fff006e17a562e67400000000000000 */
  1.00171044552103705171930414508096874E+00L, /* 3fff00701883930ec000000000000000 */
  1.00174101576427937443369842185347807E+00L, /* 3fff00721965c4f76c00000000000000 */
  1.00177158694046569697988502412044909E+00L, /* 3fff00741a4bf8a87c00000000000000 */
  1.00180215904962455208959681840497069E+00L, /* 3fff00761b362e29f800000000000000 */
  1.00183273209178441698341543997230474E+00L, /* 3fff00781c246583e400000000000000 */
  1.00186330606697365785962006157205906E+00L, /* 3fff007a1d169ebe3c00000000000000 */
  1.00189388097522080744994354972732253E+00L, /* 3fff007c1e0cd9e10800000000000000 */
  1.00192445681655439848611877096118405E+00L, /* 3fff007e1f0716f45000000000000000 */
  1.00195503359100279716642489802325144E+00L, /* 3fff0080200556001000000000000000 */
  1.00198561129859459173374602869444061E+00L, /* 3fff00822107970c5400000000000000 */
};

// pow ln
// float
#define LN_2  0.69314718055994530941723212145818
#define MASKf_mant 0x007fffff
#define TwoThirdf 0x3f2aaaab

static const float _ln_pf[] = {
  -0.4999991655349731445312500, 0.3333644270896911621093750, -0.2500934004783630371093750,
  0.1982789635658264160156250, -0.1638664305210113525390625, 0.1692402511835098266601562,
  -0.1554937064647674560546875
};

// double
#define LogA0 -0.4999999999999995003996389186795568093657
#define LogA1 0.3333333333191721425947662282851524651051
#define LogA2 -0.2500000002095838502746971698798006400466
#define LogA3 0.2000030172322680432905883662897394970059
#define LogA4 -0.1666533130870683776514340479479869827628
#define Ln2 0x1.62e42fefa39efp-1
#define OFF_d 0x3fe6900900000000

#define Top19f 0xffffe000
#define Pif 0x40490fdb
#define Pid2f 0x3fc90fdb

#define MASK_sign 0x8000000000000000
#define Pi 0x400921fb54442d18
#define Pid2 0x3ff921fb54442d18
#define Y 0x3ca1a62633145c07
#define Yd2 0x3c91a62633145c07

#define ASCTH_P1 0.20000036659494241
#define ASCTH_P2 0.2500003054940248
#define ASCTH_P3 0.33333333333308374
#define ASCTH_P4 0.49999999999988803
#define ASCTH_P5 0.69314718055994529

// Acosh
#define LN2f 0.693147181
#define ACOSH_P1 0.24609376763339827
#define ACOSH_P2 0.27343751848758524
#define ACOSH_P3 0.31249999999999967
#define ACOSH_P4 0.37499999999999967
#define ACOSH_P5 0.5

#define InvPi_f32 0.318309873342514038
#define HalfPi_f32 1.570796370506286621
#define InvPi_f64 0.318309886183790691216444
#define HalfPi_f64 1.570796326794896557998982

static const float SC_Pi1_f32 = 0x1.921fb6p+1f, SC_Pi2_f32 = -0x1.777a5cp-24f, SC_Pi3_f32 = -0x1.ee59dap-49f;
static const float SC_A3_f32 = -0.166666567325592041, SC_A5_f32 = 0.008332962170243263, SC_A7_f32 = -0.000198012057808228, SC_A9_f32 = 0.000002586703658380;

static const double SC_Pi1_f64 = 0x1.921fb54442d18p+1, SC_Pi2_f64 = 0x1.1a62633145c06p-53, SC_Pi3_f64 = 0x1.c1cd129024e09p-106;
static const double SC_C7_f64 = -0.000000000000737705809620, SC_C6_f64 = 0.000000000160484140302171, SC_C5_f64 = -0.000000025051890975380964,
      SC_C4_f64 = 0.000002755731677762568267, SC_C3_f64 = -0.000198412698265405779792, SC_C2_f64 = 0.008333333333291278316457,
      SC_C1_f64 = -0.166666666666662605100768;

static const unsigned long acosh_table_f64_la[1552]=
{0xc086232bdd7a8300,0xbe1ce91eef3fb100,
0xc086232fdc7ad828,0xbe1cefcffda73b6a,
0xc0862333d97d2ba0,0xbe1cef406748f1ff,
0xc0862337d48378e0,0xbe1cef2a9429925a,
0xc086233bcd8fb878,0xbe1cf138d17ebecb,
0xc086233fc4a3e018,0xbe1ceff2dbbbb29e,
0xc0862343b9c1e270,0xbe1cf1a42aae437b,
0xc0862347acebaf68,0xbe1cef3b152048af,
0xc086234b9e2333f0,0xbe1cef20e127805e,
0xc086234f8d6a5a30,0xbe1cf00ad6052cf4,
0xc08623537ac30980,0xbe1cefc4642ee597,
0xc0862357662f2660,0xbe1cf1f277d36e16,
0xc086235b4fb092a0,0xbe1ceed009e8d8e6,
0xc086235f37492d28,0xbe1cf1e4038cb362,
0xc08623631cfad250,0xbe1cf0b0873b8557,
0xc086236700c75b98,0xbe1cf15bb3227c0b,
0xc086236ae2b09fe0,0xbe1cf151ef8ca9ed,
0xc086236ec2b87358,0xbe1cefe1dc2cd2ed,
0xc0862372a0e0a780,0xbe1cf0d1eec5454f,
0xc08623767d2b0b48,0xbe1ceeefd570bbce,
0xc086237a57996af0,0xbe1cee99ae91b3a7,
0xc086237e302d9028,0xbe1cf0412830fbd1,
0xc086238206e94218,0xbe1ceee898588610,
0xc0862385dbce4548,0xbe1cee9a1fbcaaea,
0xc0862389aede5bc0,0xbe1ceed8e7cc1ad6,
0xc086238d801b4500,0xbe1cf10c8d059da6,
0xc08623914f86be18,0xbe1ceee6c63a8165,
0xc08623951d228180,0xbe1cf0c3592d2ff1,
0xc0862398e8f04758,0xbe1cf0026cc4cb1b,
0xc086239cb2f1c538,0xbe1cf15d48d8e670,
0xc08623a07b28ae60,0xbe1cef359363787c,
0xc08623a44196b390,0xbe1cefdf1ab2e82c,
0xc08623a8063d8338,0xbe1cefe43c02aa84,
0xc08623abc91ec960,0xbe1cf044f5ae35b7,
0xc08623af8a3c2fb8,0xbe1cf0b0b4001e1b,
0xc08623b349975d98,0xbe1cf1bae76dfbcf,
0xc08623b70731f810,0xbe1cef0a72e13a62,
0xc08623bac30da1c8,0xbe1cf184007d2b6b,
0xc08623be7d2bfb40,0xbe1cf16f4b239e98,
0xc08623c2358ea2a0,0xbe1cf0976acada87,
0xc08623c5ec3733d0,0xbe1cf066318a16ff,
0xc08623c9a1274880,0xbe1ceffaa7148798,
0xc08623cd54607820,0xbe1cf23ab02e9b6e,
0xc08623d105e45800,0xbe1cefdfef7d4fde,
0xc08623d4b5b47b20,0xbe1cf17fece44f2b,
0xc08623d863d27270,0xbe1cf18f907d0d7c,
0xc08623dc103fccb0,0xbe1cee61fe072c98,
0xc08623dfbafe1668,0xbe1cf022dd891e2f,
0xc08623e3640eda20,0xbe1ceecc1daf4358,
0xc08623e70b73a028,0xbe1cf0173c4fa380,
0xc08623eab12deec8,0xbe1cf16a2150c2f4,
0xc08623ee553f4a30,0xbe1cf1bf980b1f4b,
0xc08623f1f7a93480,0xbe1cef8b731663c2,
0xc08623f5986d2dc0,0xbe1cee9a664d7ef4,
0xc08623f9378cb3f0,0xbe1cf1eda2af6400,
0xc08623fcd5094320,0xbe1cf1923f9d68d7,
0xc086240070e45548,0xbe1cf0747cd3e03a,
0xc08624040b1f6260,0xbe1cf22ee855bd6d,
0xc0862407a3bbe078,0xbe1cf0d57360c00b,
0xc086240b3abb4398,0xbe1ceebc815cd575,
0xc086240ed01efdd0,0xbe1cf03bfb970951,
0xc086241263e87f50,0xbe1cf16e74768529,
0xc0862415f6193658,0xbe1cefec64b8becb,
0xc086241986b28f30,0xbe1cf0838d210baa,
0xc086241d15b5f448,0xbe1cf0ea86e75b11,
0xc0862420a324ce28,0xbe1cf1708d11d805,
0xc08624242f008380,0xbe1ceea988c5a417,
0xc0862427b94a7910,0xbe1cef166a7bbca5,
0xc086242b420411d0,0xbe1cf0c9d9e86a38,
0xc086242ec92eaee8,0xbe1cef0946455411,
0xc08624324ecbaf98,0xbe1cefea60907739,
0xc0862435d2dc7160,0xbe1cf1ed0934ce42,
0xc086243955624ff8,0xbe1cf191ba746c7d,
0xc086243cd65ea548,0xbe1ceeec78cf2a7e,
0xc086244055d2c968,0xbe1cef345284c119,
0xc0862443d3c012b8,0xbe1cf24f77355219,
0xc08624475027d5e8,0xbe1cf05bf087e114,
0xc086244acb0b65d0,0xbe1cef3504a32189,
0xc086244e446c1398,0xbe1ceff54b2a406f,
0xc0862451bc4b2eb8,0xbe1cf0757d54ed4f,
0xc086245532aa04f0,0xbe1cf0c8099fdfd5,
0xc0862458a789e250,0xbe1cf0b173796a31,
0xc086245c1aec1138,0xbe1cf11d8734540d,
0xc086245f8cd1da60,0xbe1cf1916a723ceb,
0xc0862462fd3c84d8,0xbe1cf19a911e1da7,
0xc08624666c2d5608,0xbe1cf23a9ef72e4f,
0xc0862469d9a591c0,0xbe1cef503d947663,
0xc086246d45a67a18,0xbe1cf0fceeb1a0b2,
0xc0862470b0314fa8,0xbe1cf107e27e4fbc,
0xc086247419475160,0xbe1cf03dd9922331,
0xc086247780e9bc98,0xbe1cefce1a10e129,
0xc086247ae719cd18,0xbe1ceea47f73c4f6,
0xc086247e4bd8bd10,0xbe1ceec0ac56d100,
0xc0862481af27c528,0xbe1cee8a6593278a,
0xc086248511081c70,0xbe1cf2231dd9dec7,
0xc0862488717af888,0xbe1cf0b4b8ed7da8,
0xc086248bd0818d68,0xbe1cf1bd8d835002,
0xc086248f2e1d0d98,0xbe1cf259acc107f4,
0xc08624928a4eaa20,0xbe1cee897636b00c,
0xc0862495e5179270,0xbe1cee757f20c326,
0xc08624993e78f490,0xbe1cefafd3aa54a4,
0xc086249c9673fd10,0xbe1cee7298d38b97,
0xc086249fed09d6f8,0xbe1ceedc158d4ceb,
0xc08624a3423babe0,0xbe1cf2282987cb2e,
0xc08624a6960aa400,0xbe1cefe7381ecc4b,
0xc08624a9e877e600,0xbe1cef328dbbce80,
0xc08624ad39849728,0xbe1cefde45f3cc71,
0xc08624b08931db58,0xbe1cefa8b89433b9,
0xc08624b3d780d500,0xbe1cef6773c0b139,
0xc08624b72472a528,0xbe1cf031c931c11f,
0xc08624ba70086b78,0xbe1cf088f49275e7,
0xc08624bdba434630,0xbe1cf17de0eaa86d,
0xc08624c103245238,0xbe1cefd492f1ba75,
0xc08624c44aacab08,0xbe1cf1253e154466,
0xc08624c790dd6ad0,0xbe1cf0fb09ee6d55,
0xc08624cad5b7aa58,0xbe1cf1f08dd048fe,
0xc08624ce193c8120,0xbe1ceeca0809697f,
0xc08624d15b6d0538,0xbe1cef8d5662d968,
0xc08624d49c4a4b78,0xbe1cee97b556ed78,
0xc08624d7dbd56750,0xbe1cf1b14b6acb75,
0xc08624db1a0f6b00,0xbe1cef1e860623f2,
0xc08624de56f96758,0xbe1ceeaf4d156f3d,
0xc08624e192946bf0,0xbe1ceecc12b400ed,
0xc08624e4cce18710,0xbe1cf180c40c794f,
0xc08624e805e1c5c8,0xbe1cf185a08f7f65,
0xc08624eb3d9633d8,0xbe1cef45fc924078,
0xc08624ee73ffdbb0,0xbe1cf1e4f457f32a,
0xc08624f1a91fc6a0,0xbe1cf040147b8a5a,
0xc08624f4dcf6fc98,0xbe1cf1effca0dfb2,
0xc08624f80f868468,0xbe1cf0470146e5bc,
0xc08624fb40cf6390,0xbe1cef4dd186e501,
0xc08624fe70d29e60,0xbe1ceebe257f66c7,
0xc08625019f9137f0,0xbe1ceefb7a1c395c,
0xc0862504cd0c3220,0xbe1cf209dedfed8c,
0xc0862507f9448db0,0xbe1cf082da464994,
0xc086250b243b4a18,0xbe1cee88694a73cf,
0xc086250e4df165a0,0xbe1cf0b61e8f0531,
0xc08625117667dd78,0xbe1cf1106599c962,
0xc08625149d9fad98,0xbe1ceff1ee88af1f,
0xc0862517c399d0c8,0xbe1cf0f746994ef6,
0xc086251ae85740b8,0xbe1cefe8a1d077e4,
0xc086251e0bd8f5e0,0xbe1cf1a1da036092,
0xc08625212e1fe7a8,0xbe1cf0f8a7786fcd,
0xc08625244f2d0c48,0xbe1cefa1174a07a7,
0xc08625276f0158d8,0xbe1cef1043aa5b25,
0xc086252a8d9dc150,0xbe1cf15d521c169d,
0xc086252dab033898,0xbe1cf220bba8861f,
0xc0862530c732b078,0xbe1cef51e310eae2,
0xc0862533e22d1988,0xbe1cf222fcedd8ae,
0xc0862536fbf36370,0xbe1cefdb4da4bda8,
0xc086253a14867ca0,0xbe1ceeafc1112171,
0xc086253d2be75280,0xbe1cee99dfb4b408,
0xc08625404216d160,0xbe1cf22d2536f06b,
0xc08625435715e498,0xbe1cef6abbf2e268,
0xc08625466ae57648,0xbe1cf093a14789f5,
0xc08625497d866fa0,0xbe1cf0f93655603c,
0xc086254c8ef9b8b8,0xbe1cf1cc40c9aafc,
0xc086254f9f4038a8,0xbe1ceeea5f4e9157,
0xc0862552ae5ad568,0xbe1cefa9f52d4997,
0xc0862555bc4a7400,0xbe1cefa490a638ff,
0xc0862558c90ff868,0xbe1cef7fcf797d6f,
0xc086255bd4ac4590,0xbe1cf1b4c51113c9,
0xc086255edf203d78,0xbe1cef55e5b4a55d,
0xc0862561e86cc100,0xbe1cf0d37a25f9dc,
0xc0862564f092b028,0xbe1ceebe9efc19d9,
0xc0862567f792e9d8,0xbe1cee8ad30a57b5,
0xc086256afd6e4c08,0xbe1cef4e1817b90b,
0xc086256e0225b3b8,0xbe1cee7fa9229996,
0xc086257105b9fce0,0xbe1cf0b54963d945,
0xc0862574082c0298,0xbe1cee5f2f3c7995,
0xc0862577097c9ee0,0xbe1cf0828e303a2c,
0xc086257a09acaae0,0xbe1cf172c3078947,
0xc086257d08bcfec0,0xbe1cf189252afa22,
0xc086258006ae71b8,0xbe1cefdb80426923,
0xc08625830381da08,0xbe1ceef1391a0372,
0xc0862585ff380d00,0xbe1cf17720c78d13,
0xc0862588f9d1df18,0xbe1ceef1f9027d83,
0xc086258bf35023b8,0xbe1cf06fac99dec9,
0xc086258eebb3ad78,0xbe1cf1373eeb45c0,
0xc0862591e2fd4e00,0xbe1cef777536bb81,
0xc0862594d92dd600,0xbe1cf0f43ca40766,
0xc0862597ce461558,0xbe1cefb2cfc6766b,
0xc086259ac246daf0,0xbe1ceea49e64ffa2,
0xc086259db530f4c8,0xbe1cf250fa457dec,
0xc08625a0a7053018,0xbe1cf17d8bb2a44e,
0xc08625a397c45918,0xbe1cf1d5906d54b7,
0xc08625a6876f3b30,0xbe1cf08fe7b31780,
0xc08625a97606a0e0,0xbe1cef13edfc9d11,
0xc08625ac638b53c8,0xbe1cef9d2b107219,
0xc08625af4ffe1cb0,0xbe1cf1ddd4ff6160,
0xc08625b23b5fc390,0xbe1cefa02a996495,
0xc08625b525b10f68,0xbe1cf166a7e37ee5,
0xc08625b80ef2c680,0xbe1cef0b171068a5,
0xc08625baf725ae28,0xbe1cf05c80779283,
0xc08625bdde4a8af0,0xbe1cf1bbfbffb889,
0xc08625c0c4622090,0xbe1cf0b8666c0124,
0xc08625c3a96d31e0,0xbe1cf0a8fcf47a86,
0xc08625c68d6c80f0,0xbe1cef46e18cb092,
0xc08625c97060cef0,0xbe1cf1458a350efb,
0xc08625cc524adc58,0xbe1ceeea1dadce12,
0xc08625cf332b68b0,0xbe1cf0a1bfdc44c7,
0xc08625d2130332d0,0xbe1cef96d02da73e,
0xc08625d4f1d2f8a8,0xbe1cf2451c3c7701,
0xc08625d7cf9b7778,0xbe1cf10d08f83812,
0xc08625daac5d6ba0,0xbe1ceec5b4895c5e,
0xc08625dd881990b0,0xbe1cf14e1325c5e4,
0xc08625e062d0a188,0xbe1cf21d0904be12,
0xc08625e33c835838,0xbe1ceed0839bcf21,
0xc08625e615326df0,0xbe1cf1bb944889d2,
0xc08625e8ecde9b48,0xbe1cee738e85eece,
0xc08625ebc38897e0,0xbe1cf25c2bc6ef12,
0xc08625ee99311ac8,0xbe1cf132b70a41ad,
0xc08625f16dd8da28,0xbe1cf1984236a6e3,
0xc08625f441808b78,0xbe1cf19ae74998f9,
0xc08625f71428e370,0xbe1cef3e175d61a1,
0xc08625f9e5d295f8,0xbe1cf101f9868fd9,
0xc08625fcb67e5658,0xbe1cee69db83dcd2,
0xc08625ff862cd6f8,0xbe1cf081b636af51,
0xc086260254dec9a8,0xbe1cee62c7d59b3e,
0xc08626052294df58,0xbe1cf1b745c57716,
0xc0862607ef4fc868,0xbe1cef3d2800ea23,
0xc086260abb103458,0xbe1cef480ff1acd2,
0xc086260d85d6d200,0xbe1cf2424c9a17ef,
0xc08626104fa44f90,0xbe1cf12cfde90fd5,
0xc086261318795a68,0xbe1cf21f590dd5b6,
0xc0862615e0569f48,0xbe1cf0c50f9cd28a,
0xc0862618a73cca30,0xbe1ceedbdb520545,
0xc086261b6d2c8668,0xbe1cf0b030396011,
0xc086261e32267e98,0xbe1cf19917010e96,
0xc0862620f62b5cb0,0xbe1cf07331355985,
0xc0862623b93bc9e8,0xbe1cf01ae921a1c3,
0xc08626267b586ed0,0xbe1cefe5cf0dbf0c,
0xc08626293c81f348,0xbe1cf01b258aeb50,
0xc086262bfcb8fe88,0xbe1cee6b9e7f4c68,
0xc086262ebbfe3710,0xbe1cee684a9b21c9,
0xc08626317a5242b8,0xbe1cf1f8bcde9a8b,
0xc086263437b5c6c0,0xbe1cf1d063d36238,
0xc0862636f42967a8,0xbe1cf1e31a19075e,
0xc0862639afadc950,0xbe1cf1d8efdf7e7d,
0xc086263c6a438ef0,0xbe1cf1812ee72dba,
0xc086263f23eb5b18,0xbe1cf1449a9a2279,
0xc0862641dca5cfb8,0xbe1cee96edce5085,
0xc086264494738e08,0xbe1cf06797bd03b2,
0xc08626474b5536b8,0xbe1cef91b9b7ffc1,
0xc086264a014b69c0,0xbe1cef4b6721278f,
0xc086264cb656c678,0xbe1cf1942925eb4a,
0xc086264f6a77eba8,0xbe1cefa2c7bc2e39,
0xc08626521daf7758,0xbe1cf252595aceb3,
0xc0862654cffe0718,0xbe1cee8e9ae47ec2,
0xc0862657816437a8,0xbe1cf1bf913828fa,
0xc086265a31e2a558,0xbe1cf23475d6b366,
0xc086265ce179ebc8,0xbe1cef8df00a922b,
0xc086265f902aa5f0,0xbe1cef279bfa43e0,
0xc08626623df56e38,0xbe1cf080e10b8365,
0xc0862664eadade70,0xbe1cf1a518f9b544,
0xc086266796db8fd0,0xbe1cef9308fed9e9,
0xc086266a41f81ae8,0xbe1ceea3ae6b19c9,
0xc086266cec3117b8,0xbe1ceef06003d4c2,
0xc086266f95871da8,0xbe1cf0b8457ffb0c,
0xc08626723dfac390,0xbe1cf0c526745ad6,
0xc0862674e58c9fa8,0xbe1cf0cf91ff7b5d,
0xc08626778c3d4798,0xbe1cefe260819380,
0xc086267a320d5070,0xbe1ceebd90aa27a3,
0xc086267cd6fd4ea8,0xbe1cf0388121dffa,
0xc086267f7b0dd630,0xbe1cf1a3881435f1,
0xc08626821e3f7a68,0xbe1cef28e9d9ac52,
0xc0862684c092ce08,0xbe1cf02d300062dd,
0xc086268762086350,0xbe1cefaee1edfa35,
0xc086268a02a0cbe0,0xbe1cf0a5a052e936,
0xc086268ca25c98d8,0xbe1cee60a4a497ed,
0xc086268f413c5ab0,0xbe1cf0e4a5d0cf49,
0xc0862691df40a170,0xbe1cf149235a4e6e,
0xc08626947c69fc80,0xbe1cf215180b9fcc,
0xc086269718b8fac8,0xbe1cef9b156a9840,
0xc0862699b42e2a90,0xbe1cf054c91441be,
0xc086269c4eca19a8,0xbe1cf13ded26512c,
0xc086269ee88d5550,0xbe1cf22ea4d8ac06,
0xc08626a181786a40,0xbe1cf2354666ee2e,
0xc08626a4198be4a8,0xbe1cefef936752b3,
0xc08626a6b0c85020,0xbe1cf1e360a9db68,
0xc08626a9472e37d8,0xbe1ceed6aeb812c5,
0xc08626abdcbe2650,0xbe1cf227340b4986,
0xc08626ae7178a5b0,0xbe1cf0215a0cbe0d,
0xc08626b1055e3f70,0xbe1cf256adf0ae26,
0xc08626b3986f7ca8,0xbe1ceff3c67aed06,
0xc08626b62aace5c8,0xbe1cf2159fb93652,
0xc08626b8bc1702e0,0xbe1cf01e6dbd1c7f,
0xc08626bb4cae5b60,0xbe1cf009e75d1c0c,
0xc08626bddc737648,0xbe1ceec10a020e73,
0xc08626c06b66da08,0xbe1cf06d5783eee7,
0xc08626c2f9890ca0,0xbe1cf0cb8f169ffe,
0xc08626c586da9388,0xbe1cef7de2452430,
0xc08626c8135bf3b0,0xbe1cf05da6f783ae,
0xc08626ca9f0db198,0xbe1cefcc877d681d,
0xc08626cd29f05138,0xbe1cef0531954ab3,
0xc08626cfb4045608,0xbe1cf06b8565ea3d,
0xc08626d23d4a4310,0xbe1cefdc455d9d7e,
0xc08626d4c5c29ad0,0xbe1ceefc47e8fa64,
0xc08626d74d6ddf48,0xbe1cf1872bf033f2,
0xc08626d9d44c9210,0xbe1cf19d91087f9d,
0xc08626dc5a5f3438,0xbe1cf012d444c6ab,
0xc08626dedfa64650,0xbe1cf0ba528ee153,
0xc08626e164224880,0xbe1ceeb431709788,
0xc08626e3e7d3ba60,0xbe1cf0b9af31a6a5,
0xc08626e66abb1b28,0xbe1cf168fb2e135b,
0xc08626e8ecd8e990,0xbe1cef9097461c93,
0xc08626eb6e2da3d0,0xbe1cee7a434735d8,
0xc08626edeeb9c7a8,0xbe1cf235732b86f2,
0xc08626f06e7dd280,0xbe1cefe1510b89e6,
0xc08626f2ed7a4120,0xbe1cf1f64b9b80ef,
0xc08626f56baf9000,0xbe1cf08f320ca339,
0xc08626f7e91e3b08,0xbe1cf1b1de2808a1,
0xc08626fa65c6bdc0,0xbe1cf1976d778b28,
0xc08626fce1a99338,0xbe1ceef40a4f076f,
0xc08626ff5cc73600,0xbe1cef3e45869ce3,
0xc0862701d7202048,0xbe1ceef601b4c9d6,
0xc086270450b4cbc0,0xbe1cf1eaf0b57fd6,
0xc0862706c985b1c0,0xbe1cef82a44990f3,
0xc086270941934b10,0xbe1ceefe32981f2c,
0xc086270bb8de1018,0xbe1cefbf6f5a0445,
0xc086270e2f6678d0,0xbe1cf18dba75792c,
0xc0862710a52cfcc8,0xbe1cf0da64ce995f,
0xc08627131a321318,0xbe1cef04ac0fb802,
0xc08627158e763268,0xbe1cee9d4e2ad9bd,
0xc086271801f9d0f8,0xbe1cefa9b55407b5,
0xc086271a74bd64a0,0xbe1cefe6bd329570,
0xc086271ce6c162c8,0xbe1cef0b1205dc85,
0xc086271f58064068,0xbe1cef092a785e3f,
0xc0862721c88c7210,0xbe1cf050dcdaac30,
0xc086272438546be8,0xbe1cf210907ded8b,
0xc0862726a75ea1b8,0xbe1cee760be44f99,
0xc086272915ab86c0,0xbe1ceeeee07c2bcc,
0xc086272b833b8df0,0xbe1cf06874992df5,
0xc086272df00f29d0,0xbe1cef8fac5d4899,
0xc08627305c26cc70,0xbe1cf1103241cc99,
0xc0862732c782e788,0xbe1cf1d35fef83fe,
0xc08627353223ec68,0xbe1cef3ec8133e1d,
0xc08627379c0a4be8,0xbe1cef7261daccd8,
0xc086273a05367688,0xbe1cf18656c50806,
0xc086273c6da8dc68,0xbe1cf1c8736e049a,
0xc086273ed561ed38,0xbe1cf1f93bff4911,
0xc08627413c621848,0xbe1cf188a4ea680c,
0xc0862743a2a9cc80,0xbe1cf1d270930c80,
0xc086274608397868,0xbe1cf25a328c28e2,
0xc08627486d118a28,0xbe1cf106f90aa3b8,
0xc086274ad1326f80,0xbe1cee5e9d2e885a,
0xc086274d349c95c0,0xbe1cf1c0bac27228,
0xc086274f975069f8,0xbe1cf1a1500f9b1c,
0xc0862751f94e58c0,0xbe1cefc30663ac44,
0xc08627545a96ce48,0xbe1cf17123e427a2,
0xc0862756bb2a3678,0xbe1cefb92749fea4,
0xc08627591b08fcc0,0xbe1cefa40e1ea74a,
0xc086275b7a338c40,0xbe1cee6f4612c3e9,
0xc086275dd8aa4fa8,0xbe1cf1c54a053627,
0xc0862760366db168,0xbe1ceff5eb503d9e,
0xc0862762937e1b70,0xbe1cf02e47f10cee,
0xc0862764efdbf768,0xbe1ceeb06e1d0dad,
0xc08627674b87ae88,0xbe1cf10aadd6dba5,
0xc0862769a681a9c0,0xbe1cf24e9913d30f,
0xc086276c00ca51a0,0xbe1cef47b301e312,
0xc086276e5a620e48,0xbe1ceeb1cefc2e85,
0xc0862770b3494788,0xbe1cf16f1fbbe011,
0xc08627730b8064e8,0xbe1ceebdf75174c7,
0xc08627756307cd70,0xbe1cf06e3871a0da,
0xc0862777b9dfe7f0,0xbe1cef16799fd554,
0xc086277a10091ac0,0xbe1cf248dabf5377,
0xc086277c6583cc00,0xbe1cf0c78d92a2cd,
0xc086277eba506158,0xbe1cf0b911b029f0,
0xc08627810e6f4028,0xbe1cefdc24719766,
0xc086278361e0cd70,0xbe1cefbb6562b7e7,
0xc0862785b4a56dd8,0xbe1cf1e0afb349ec,
0xc086278806bd85c0,0xbe1cf008292e52fc,
0xc086278a58297918,0xbe1cf053073872bf,
0xc086278ca8e9ab88,0xbe1cf17a0a55a947,
0xc086278ef8fe8068,0xbe1ceeffb0b60234,
0xc086279148685aa0,0xbe1cf162204794a8,
0xc086279397279ce0,0xbe1cf24cc8cb48ac,
0xc0862795e53ca978,0xbe1cf0c9be68d5c3,
0xc086279832a7e258,0xbe1cf172cd3d7388,
0xc086279a7f69a930,0xbe1ceea2465fbce5,
0xc086279ccb825f40,0xbe1cf0a386d2500f,
0xc086279f16f26590,0xbe1cf1e338ddc18a,
0xc08627a161ba1cd0,0xbe1cef1f5049867f,
0xc08627a3abd9e548,0xbe1cef96c1ea8b1f,
0xc08627a5f5521f00,0xbe1cf138f6fd3c26,
0xc08627a83e2329b0,0xbe1cf0d4fcbfdf3a,
0xc08627aa864d64b0,0xbe1cf24870c12c81,
0xc08627accdd12f18,0xbe1cf0ae2a56348d,
0xc08627af14aee7a0,0xbe1cee8ca1a9b893,
0xc08627b15ae6eca8,0xbe1cf20414d637b0,
0xc08627b3a0799c60,0xbe1cf0fc6b7b12d8,
0xc08627b5e5675488,0xbe1cf152d93c4a00,
0xc08627b829b072a0,0xbe1cf1073f9b77c2,
0xc08627ba6d5553d8,0xbe1cee694f97d5a4,
0xc08627bcb0565500,0xbe1cf0456b8239d7,
0xc08627bef2b3d2b0,0xbe1cf211497127e3,
0xc08627c1346e2930,0xbe1cf01856c0384d,
0xc08627c37585b468,0xbe1cefa7dd05479e,
0xc08627c5b5fad000,0xbe1cef3ae8e50b93,
0xc08627c7f5cdd750,0xbe1ceea5f32fdd3a,
0xc08627ca34ff2560,0xbe1cef424caeb8d9,
0xc08627cc738f14f0,0xbe1cf0194d07a81f,
0xc08627ceb17e0070,0xbe1cf20f452000c1,
0xc08627d0eecc4210,0xbe1cf00e356218e4,
0xc08627d32b7a33a0,0xbe1cef30484b4bcb,
0xc08627d567882eb0,0xbe1ceeea11a6641b,
0xc08627d7a2f68c80,0xbe1cf13492d5bd7b,
0xc08627d9ddc5a618,0xbe1ceeb7048fad96,
0xc08627dc17f5d418,0xbe1ceef0666f0477,
0xc08627de51876ee8,0xbe1cf060d4b8b5c2,
0xc08627e08a7acea8,0xbe1cf0b2a4b6ff8c,
0xc08627e2c2d04b28,0xbe1cf0e34809a875,
0xc08627e4fa883bf0,0xbe1cf16bf74a3522,
0xc08627e731a2f848,0xbe1cee6a24623d57,
0xc08627e96820d718,0xbe1cefc7b4f1528e,
0xc08627eb9e022f18,0xbe1cf163051f3548,
0xc08627edd34756b8,0xbe1cef36b3366305,
0xc08627f007f0a408,0xbe1cf18134625550,
0xc08627f23bfe6cf0,0xbe1cf0ec32ec1a11,
0xc08627f46f710700,0xbe1ceeb3b64f3edc,
0xc08627f6a248c778,0xbe1cf0cd15805bc8,
0xc08627f8d4860368,0xbe1cf20db3bddebe,
0xc08627fb06290f90,0xbe1cf25188430e25,
0xc08627fd37324070,0xbe1ceea1713490f9,
0xc08627ff67a1ea28,0xbe1cf159521d234c,
0xc0862801977860b8,0xbe1cf24dfe50783b,
0xc0862803c6b5f7d0,0xbe1ceef2ef89a60b,
0xc0862805f55b02c8,0xbe1cee7fc919d62c,
0xc08628082367d4c0,0xbe1cf215a7fb513a,
0xc086280a50dcc0a8,0xbe1cf0e4401c5ed4,
0xc086280c7dba1910,0xbe1cf04ec734d256,
0xc086280eaa003050,0xbe1cf010ad787fea,
0xc0862810d5af5880,0xbe1cee622478393d,
0xc086281300c7e368,0xbe1cf01c7482564f,
0xc08628152b4a22a0,0xbe1cf0de20d33536,
0xc086281755366778,0xbe1cef2edae5837d,
0xc08628197e8d02f0,0xbe1cf0a345318cc9,
0xc086281ba74e45d8,0xbe1cf20085aa34b8,
0xc086281dcf7a80c0,0xbe1cef5fa845ad83,
0xc086281ff71203e0,0xbe1cf050d1df69c4,
0xc08628221e151f48,0xbe1ceffe43c035b9,
0xc0862824448422b8,0xbe1cf14f3018d3c2,
0xc08628266a5f5dc0,0xbe1cef0a5fbae83d,
0xc08628288fa71f98,0xbe1ceff8a95b72a1,
0xc086282ab45bb750,0xbe1cef073aa9849b,
0xc086282cd87d73a8,0xbe1cef69b3835c02,
0xc086282efc0ca328,0xbe1cf0bc139379a9,
0xc08628311f099420,0xbe1cef247a9ec596,
0xc086283341749490,0xbe1cef74bbcc488a,
0xc0862835634df248,0xbe1cef4bc42e7b8e,
0xc08628378495fad0,0xbe1cf136d4d5a810,
0xc0862839a54cfb80,0xbe1cf0d290b24dd8,
0xc086283bc5734168,0xbe1ceeebde8e0065,
0xc086283de5091950,0xbe1cf1a09f60aa1e,
0xc0862840040ecfe0,0xbe1cf0803947a234,
0xc08628422284b168,0xbe1cf0abf7638127,
0xc0862844406b0a08,0xbe1cf0f73ee12058,
0xc08628465dc225a0,0xbe1cf2079971b26c,
0xc08628487a8a4fe0,0xbe1cee74957564b1,
0xc086284a96c3d420,0xbe1ceee77c1b7d43,
0xc086284cb26efd90,0xbe1cf23addba6e09,
0xc086284ecd8c1730,0xbe1cf199f4a1da60,
0xc0862850e81b6bb0,0xbe1cf09fdea81393,
0xc0862853021d4588,0xbe1cf176adb417f7,
0xc08628551b91ef00,0xbe1cf0f64f84a8da,
0xc08628573479b220,0xbe1ceec34cf49523,
0xc08628594cd4d8a8,0xbe1cf16d60fbe0bb,
0xc086285b64a3ac40,0xbe1cee8de7acfc7b,
0xc086285d7be67630,0xbe1ceee6256cce8d,
0xc086285f929d7fa0,0xbe1cee7d66a3d8a5,
0xc0862861a8c91170,0xbe1cf0bef8265792,
0xc0862863be697458,0xbe1cf097f890c6f8,
0xc0862865d37ef0c8,0xbe1cf09502d5c3fc,
0xc0862867e809cf00,0xbe1ceeffb239dac7,
0xc0862869fc0a56f8,0xbe1cf1fbfff95c98,
0xc086286c0f80d090,0xbe1cefa57ad3eef7,
0xc086286e226d8348,0xbe1cf22c58b9183d,
0xc086287034d0b690,0xbe1ceff262d0a248,
0xc086287246aab180,0xbe1cefa7bc194186,
0xc086287457fbbb08,0xbe1cf06782d784d9,
0xc086287668c419e0,0xbe1cf1d44d0eaa07,
0xc086287879041490,0xbe1cf034803c8a48,
0xc086287a88bbf158,0xbe1cf08e84916b6f,
0xc086287c97ebf650,0xbe1cf0c4d3dc1bc7,
0xc086287ea6946958,0xbe1cefb1e4625943,
0xc0862880b4b59010,0xbe1cf143efdd1fd0,
0xc0862882c24faff8,0xbe1cee9896d016da,
0xc0862884cf630e38,0xbe1cf2186072f2cc,
0xc0862886dbefeff0,0xbe1cef9217633d34,
0xc0862888e7f699e0,0xbe1cf05603549486,
0xc086288af37750b0,0xbe1cef50fff513d3,
0xc086288cfe7258c0,0xbe1cf127713b32d0,
0xc086288f08e7f650,0xbe1cf05015520f3d,
0xc086289112d86d58,0xbe1cf12eb458b26f,
0xc08628931c4401a8,0xbe1cf22eae2887ed,
0xc0862895252af6e0,0xbe1cefdd6656dd2d,
0xc08628972d8d9058,0xbe1cf1048ea4e646,
0xc0862899356c1150,0xbe1ceec4501167e9,
0xc086289b3cc6bcb8,0xbe1cf0ad52becc3f,
0xc086289d439dd568,0xbe1cf0daa4e00e35,
0xc086289f49f19df8,0xbe1cf00b80de8d6a,
0xc08628a14fc258c8,0xbe1cf1bcf2ea8464,
0xc08628a355104818,0xbe1cf0435e2782b0,
0xc08628a559dbade0,0xbe1cf0e3e1a5f56c,
0xc08628a75e24cbf8,0xbe1cefed9d5a721d,
0xc08628a961ebe3f8,0xbe1cf0d2d74321e2,
0xc08628ab65313750,0xbe1cf24200eb55e9,
0xc08628ad67f50740,0xbe1cf23e9d7cf979,
0xc08628af6a3794d0,0xbe1cf23a088f421c,
0xc08628b16bf920e0,0xbe1cef2c1de1ab32,
0xc08628b36d39ec08,0xbe1cf1abc231f7b2,
0xc08628b56dfa36d0,0xbe1cf2074d5ba303,
0xc08628b76e3a4180,0xbe1cf05cd5eed880,
0x0000000000000000,0x0000000000000000,
0x0000000000000000,0x0000000000000000,
0x0000000000000000,0x0000000000000000,
0x8000000000000000,0xbf5ff802a9ab10e6,
0xbf6ff00aa2b10bc0,0xbf77ee11ebd82e94,
0xbf7fe02a6b106789,0xbf83e7295d25a7d9,
0xbf87dc475f810a77,0xbf8bcf712c74384c,
0xbf8fc0a8b0fc03e4,0xbf91d7f7eb9eebe7,
0xbf93cea44346a575,0xbf95c45a51b8d389,
0xbf97b91b07d5b11b,0xbf99ace7551cc514,
0xbf9b9fc027af9198,0xbf9d91a66c543cc4,
0xbf9f829b0e783300,0xbfa0b94f7c196176,
0xbfa1b0d98923d980,0xbfa2a7ec2214e873,
0xbfa39e87b9febd60,0xbfa494acc34d911c,
0xbfa58a5bafc8e4d5,0xbfa67f94f094bd98,
0xbfa77458f632dcfc,0xbfa868a83083f6cf,
0xbfa95c830ec8e3eb,0xbfaa4fe9ffa3d235,
0xbfab42dd711971bf,0xbfac355dd0921f2d,
0xbfad276b8adb0b52,0xbfae19070c276016,
0xbfaf0a30c01162a6,0xbfaffae9119b9303,
0xbfb075983598e471,0xbfb0ed839b5526fe,
0xbfb16536eea37ae1,0xbfb1dcb263db1944,
0xbfb253f62f0a1417,0xbfb2cb0283f5de1f,
0xbfb341d7961bd1d1,0xbfb3b87598b1b6ee,
0xbfb42edcbea646f0,0xbfb4a50d3aa1b040,
0xbfb51b073f06183f,0xbfb590cafdf01c28,
0xbfb60658a93750c4,0xbfb67bb0726ec0fc,
0xbfb6f0d28ae56b4c,0xbfb765bf23a6be13,
0xbfb7da766d7b12cd,0xbfb84ef898e8282a,
0xbfb8c345d6319b21,0xbfb9375e55595ede,
0xbfb9ab42462033ad,0xbfba1ef1d8061cd4,
0xbfba926d3a4ad563,0xbfbb05b49bee43fe,
0xbfbb78c82bb0eda1,0xbfbbeba818146765,
0xbfbc5e548f5bc743,0xbfbcd0cdbf8c13e1,
0xbfbd4313d66cb35d,0xbfbdb5270187d927,
0xbfbe27076e2af2e6,0xbfbe98b549671467,
0xbfbf0a30c01162a6,0xbfbf7b79fec37ddf,
0xbfbfec9131dbeabb,0xbfc02ebb42bf3d4b,
0xbfc0671512ca596e,0xbfc09f561ee719c3,
0xbfc0d77e7cd08e59,0xbfc10f8e422539b1,
0xbfc14785846742ac,0xbfc17f6458fca611,
0xbfc1b72ad52f67a0,0xbfc1eed90e2dc2c3,
0xbfc2266f190a5acb,0xbfc25ded0abc6ad2,
0xbfc29552f81ff523,0xbfc2cca0f5f5f251,
0xbfc303d718e47fd3,0xbfc33af575770e4f,
0xbfc371fc201e8f74,0xbfc3a8eb2d31a376,
0xbfc3dfc2b0ecc62a,0xbfc41682bf727bc0,
0xbfc44d2b6ccb7d1e,0xbfc483bccce6e3dd,
0xbfc4ba36f39a55e5,0xbfc4f099f4a230b2,
0xbfc526e5e3a1b438,0xbfc55d1ad4232d6f,
0xbfc59338d9982086,0xbfc5c940075972b9,
0xbfc5ff3070a793d4,0xbfc6350a28aaa758,
0xbfc66acd4272ad51,0xbfc6a079d0f7aad2,
0xbfc6d60fe719d21d,0xbfc70b8f97a1aa75,
0xbfc740f8f54037a5,0xbfc7764c128f2127,
0xbfc7ab890210d909,0xbfc7e0afd630c274,
0xbfc815c0a14357eb,0xbfc84abb75865139,
0xbfc87fa06520c911,0xbfc8b46f8223625b,
0xbfc8e928de886d41,0xbfc91dcc8c340bde,
0xbfc9525a9cf456b4,0xbfc986d3228180ca,
0xbfc9bb362e7dfb83,0xbfc9ef83d2769a34,
0xbfca23bc1fe2b563,0xbfca57df28244dcd,
0xbfca8becfc882f19,0xbfcabfe5ae46124c,
0xbfcaf3c94e80bff3,0xbfcb2797ee46320c,
0xbfcb5b519e8fb5a4,0xbfcb8ef670420c3b,
0xbfcbc286742d8cd6,0xbfcbf601bb0e44e2,
0xbfcc2968558c18c1,0xbfcc5cba543ae425,
0xbfcc8ff7c79a9a22,0xbfccc320c0176502,
0xbfccf6354e09c5dc,0xbfcd293581b6b3e7,
0xbfcd5c216b4fbb91,0xbfcd8ef91af31d5e,
0xbfcdc1bca0abec7d,0xbfcdf46c0c722d2f,
0xbfce27076e2af2e6,0xbfce598ed5a87e2f,
0xbfce8c0252aa5a60,0xbfcebe61f4dd7b0b,
0xbfcef0adcbdc5936,0xbfcf22e5e72f105d,
0xbfcf550a564b7b37,0xbfcf871b28955045,
0xbfcfb9186d5e3e2b,0xbfcfeb0233e607cc,
0xbfd00e6c45ad501d,0xbfd0274dc16c232f,
0xbfd0402594b4d041,0xbfd058f3c703ebc6,
0xbfd071b85fcd590d,0xbfd08a73667c57af,
0xbfd0a324e27390e3,0xbfd0bbccdb0d24bd,
0xbfd0d46b579ab74b,0xbfd0ed005f657da4,
0xbfd1058bf9ae4ad5,0xbfd11e0e2dad9cb7,
0xbfd136870293a8b0,0xbfd14ef67f88685a,
0xbfd1675cababa60e,0xbfd17fb98e15095d,
0xbfd1980d2dd4236f,0xbfd1b05791f07b49,
0xbfd1c898c16999fb,0xbfd1e0d0c33716be,
0xbfd1f8ff9e48a2f3,0xbfd211255986160c,
0xbfd22941fbcf7966,0xbfd241558bfd1404,
0xbfd2596010df763a,0xbfd27161913f853d,
0xbfd2895a13de86a3,0xbfd2a1499f762bc9,
0xbfd2b9303ab89d25,0xbfd2d10dec508583,
0xbfd2e8e2bae11d31,0xbfd300aead06350c,
0xbfd31871c9544185,0xbfd3302c16586588,
0xbfd347dd9a987d55,0xbfd35f865c93293e,
0xbfd3772662bfd85b,0xbfd38ebdb38ed321,
0xbfd3a64c556945ea,0xbfd3bdd24eb14b6a,
0xbfd3d54fa5c1f710,0xbfd3ecc460ef5f50,
0xbfd404308686a7e4,0xbfd41b941cce0bee,
0xbfd432ef2a04e814,0xbfd44a41b463c47c,
0xbfd4618bc21c5ec2,0xbfd478cd5959b3d9,
0xbfd49006804009d1,0xbfd4a7373cecf997,
0xbfd4be5f957778a1,0xbfd4d57f8fefe27f,
0xbfd4ec973260026a,0xbfd503a682cb1cb3,
0xbfd51aad872df82d,0xbfd531ac457ee77e,
0xbfd548a2c3add263,0xbfd55f9107a43ee2,
0xbfd5767717455a6c,0xbfd58d54f86e02f2,
0xbfd5a42ab0f4cfe2,0xbfd5baf846aa1b19,
0xbfd5d1bdbf5809ca,0xbfd5e87b20c2954a,
0xbfd5ff3070a793d4,0xbfd615ddb4bec13c,
0xbfd62c82f2b9c795,0x3fd61965cdb02c1f,
0x3fd602d08af091ec,0x3fd5ec433d5c35ae,
0x3fd5d5bddf595f30,0x3fd5bf406b543db2,
0x3fd5a8cadbbedfa1,0x3fd5925d2b112a59,
0x3fd57bf753c8d1fb,0x3fd565995069514c,
0x3fd54f431b7be1a9,0x3fd538f4af8f72fe,
0x3fd522ae0738a3d8,0x3fd50c6f1d11b97c,
0x3fd4f637ebba9810,0x3fd4e0086dd8baca,
0x3fd4c9e09e172c3c,0x3fd4b3c077267e9a,
0x3fd49da7f3bcc41f,0x3fd487970e958770,
0x3fd4718dc271c41b,0x3fd45b8c0a17df13,
0x3fd44591e0539f49,0x3fd42f9f3ff62642,
0x3fd419b423d5e8c7,0x3fd403d086cea79c,
0x3fd3edf463c1683e,0x3fd3d81fb5946dba,
0x3fd3c25277333184,0x3fd3ac8ca38e5c5f,
0x3fd396ce359bbf54,0x3fd3811728564cb2,
0x3fd36b6776be1117,0x3fd355bf1bd82c8b,
0x3fd3401e12aecba1,0x3fd32a84565120a8,
0x3fd314f1e1d35ce4,0x3fd2ff66b04ea9d4,
0x3fd2e9e2bce12286,0x3fd2d46602adccee,
0x3fd2bef07cdc9354,0x3fd2a982269a3dbf,
0x3fd2941afb186b7c,0x3fd27ebaf58d8c9d,
0x3fd269621134db92,0x3fd25410494e56c7,
0x3fd23ec5991eba49,0x3fd22981fbef797b,
0x3fd214456d0eb8d4,0x3fd1ff0fe7cf47a7,
0x3fd1e9e1678899f4,0x3fd1d4b9e796c245,
0x3fd1bf99635a6b95,0x3fd1aa7fd638d33f,
0x3fd1956d3b9bc2fa,0x3fd180618ef18adf,
0x3fd16b5ccbacfb73,0x3fd1565eed455fc3,
0x3fd14167ef367783,0x3fd12c77cd00713b,
0x3fd1178e8227e47c,0x3fd102ac0a35cc1c,
0x3fd0edd060b78081,0x3fd0d8fb813eb1ef,
0x3fd0c42d676162e3,0x3fd0af660eb9e279,
0x3fd09aa572e6c6d4,0x3fd085eb8f8ae797,
0x3fd07138604d5862,0x3fd05c8be0d9635a,
0x3fd047e60cde83b8,0x3fd03346e0106062,
0x3fd01eae5626c691,0x3fd00a1c6adda473,
0x3fcfeb2233ea07cd,0x3fcfc218be620a5e,
0x3fcf991c6cb3b379,0x3fcf702d36777df0,
0x3fcf474b134df229,0x3fcf1e75fadf9bde,
0x3fcef5ade4dcffe6,0x3fceccf2c8fe920a,
0x3fcea4449f04aaf5,0x3fce7ba35eb77e2a,
0x3fce530effe71012,0x3fce2a877a6b2c12,
0x3fce020cc6235ab5,0x3fcdd99edaf6d7e9,
0x3fcdb13db0d48940,0x3fcd88e93fb2f450,
0x3fcd60a17f903515,0x3fcd38666871f465,
0x3fcd1037f2655e7b,0x3fcce816157f1988,
0x3fccc000c9db3c52,0x3fcc97f8079d44ec,
0x3fcc6ffbc6f00f71,0x3fcc480c0005ccd1,
0x3fcc2028ab17f9b4,0x3fcbf851c067555f,
0x3fcbd087383bd8ad,0x3fcba8c90ae4ad19,
0x3fcb811730b823d2,0x3fcb5971a213acdb,
0x3fcb31d8575bce3d,0x3fcb0a4b48fc1b46,
0x3fcae2ca6f672bd4,0x3fcabb55c31693ad,
0x3fca93ed3c8ad9e3,0x3fca6c90d44b704e,
0x3fca454082e6ab05,0x3fca1dfc40f1b7f1,
0x3fc9f6c407089664,0x3fc9cf97cdce0ec3,
0x3fc9a8778debaa38,0x3fc981634011aa75,
0x3fc95a5adcf7017f,0x3fc9335e5d594989,
0x3fc90c6db9fcbcd9,0x3fc8e588ebac2dbf,
0x3fc8beafeb38fe8c,0x3fc897e2b17b19a5,
0x3fc871213750e994,0x3fc84a6b759f512f,
0x3fc823c16551a3c2,0x3fc7fd22ff599d4f,
0x3fc7d6903caf5ad0,0x3fc7b0091651528c,
0x3fc7898d85444c73,0x3fc7631d82935a86,
0x3fc73cb9074fd14d,0x3fc716600c914054,
0x3fc6f0128b756abc,0x3fc6c9d07d203fc7,
0x3fc6a399dabbd383,0x3fc67d6e9d785771,
0x3fc6574ebe8c133a,0x3fc6313a37335d76,
0x3fc60b3100b09476,0x3fc5e533144c1719,
0x3fc5bf406b543db2,0x3fc59958ff1d52f1,
0x3fc5737cc9018cdd,0x3fc54dabc26105d2,
0x3fc527e5e4a1b58d,0x3fc5022b292f6a45,
0x3fc4dc7b897bc1c8,0x3fc4b6d6fefe22a4,
0x3fc4913d8333b561,0x3fc46baf0f9f5db7,
0x3fc4462b9dc9b3dc,0x3fc420b32740fdd4,
0x3fc3fb45a59928cc,0x3fc3d5e3126bc27f,
0x3fc3b08b6757f2a9,0x3fc38b3e9e027479,
0x3fc365fcb0159016,0x3fc340c59741142e,
0x3fc31b994d3a4f85,0x3fc2f677cbbc0a96,
0x3fc2d1610c86813a,0x3fc2ac55095f5c59,
0x3fc28753bc11aba5,0x3fc2625d1e6ddf57,
0x3fc23d712a49c202,0x3fc2188fd9807263,
0x3fc1f3b925f25d41,0x3fc1ceed09853752,
0x3fc1aa2b7e23f72a,0x3fc185747dbecf34,
0x3fc160c8024b27b1,0x3fc13c2605c398c3,
0x3fc1178e8227e47c,0x3fc0f301717cf0fb,
0x3fc0ce7ecdccc28d,0x3fc0aa06912675d5,
0x3fc08598b59e3a07,0x3fc06135354d4b18,
0x3fc03cdc0a51ec0d,0x3fc0188d2ecf6140,
0x3fbfe89139dbd566,0x3fbfa01c9db57ce2,
0x3fbf57bc7d9005db,0x3fbf0f70cdd992e3,
0x3fbec739830a1120,0x3fbe7f1691a32d3e,
0x3fbe3707ee30487b,0x3fbdef0d8d466db9,
0x3fbda727638446a2,0x3fbd5f55659210e2,
0x3fbd179788219364,0x3fbccfedbfee13a8,
0x3fbc885801bc4b23,0x3fbc40d6425a5cb1,
0x3fbbf968769fca11,0x3fbbb20e936d6974,
0x3fbb6ac88dad5b1c,0x3fbb23965a52ff00,
0x3fbadc77ee5aea8c,0x3fba956d3ecade63,
0x3fba4e7640b1bc38,0x3fba0792e9277cac,
0x3fb9c0c32d4d2548,0x3fb97a07024cbe74,
0x3fb9335e5d594989,0x3fb8ecc933aeb6e8,
0x3fb8a6477a91dc29,0x3fb85fd927506a48,
0x3fb8197e2f40e3f0,0x3fb7d33687c293c9,
0x3fb78d02263d82d3,0x3fb746e100226ed9,
0x3fb700d30aeac0e1,0x3fb6bad83c1883b6,
0x3fb674f089365a7a,0x3fb62f1be7d77743,
0x3fb5e95a4d9791cb,0x3fb5a3abb01ade25,
0x3fb55e10050e0384,0x3fb518874226130a,
0x3fb4d3115d207eac,0x3fb48dae4bc31018,
0x3fb4485e03dbdfad,0x3fb403207b414b7f,
0x3fb3bdf5a7d1ee64,0x3fb378dd7f749714,
0x3fb333d7f8183f4b,0x3fb2eee507b40301,
0x3fb2aa04a44717a5,0x3fb26536c3d8c369,
0x3fb2207b5c78549e,0x3fb1dbd2643d190b,
0x3fb1973bd1465567,0x3fb152b799bb3cc9,
0x3fb10e45b3cae831,0x3fb0c9e615ac4e17,
0x3fb08598b59e3a07,0x3fb0415d89e74444,
0x3faffa6911ab9301,0x3faf723b517fc523,
0x3faeea31c006b87c,0x3fae624c4a0b5e1b,
0x3fadda8adc67ee4e,0x3fad52ed6405d86f,
0x3faccb73cdddb2cc,0x3fac441e06f72a9e,
0x3fabbcebfc68f420,0x3fab35dd9b58baad,
0x3faaaef2d0fb10fc,0x3faa282b8a936171,
0x3fa9a187b573de7c,0x3fa91b073efd7314,
0x3fa894aa149fb343,0x3fa80e7023d8ccc4,
0x3fa788595a3577ba,0x3fa70265a550e777,
0x3fa67c94f2d4bb58,0x3fa5f6e73078efb8,
0x3fa5715c4c03ceef,0x3fa4ebf43349e26f,
0x3fa466aed42de3ea,0x3fa3e18c1ca0ae92,
0x3fa35c8bfaa1306b,0x3fa2d7ae5c3c5bae,
0x3fa252f32f8d183f,0x3fa1ce5a62bc353a,
0x3fa149e3e4005a8d,0x3fa0c58fa19dfaaa,
0x3fa0415d89e74444,0x3f9f7a9b16782856,
0x3f9e72bf2813ce51,0x3f9d6b2725979802,
0x3f9c63d2ec14aaf2,0x3f9b5cc258b718e6,
0x3f9a55f548c5c43f,0x3f994f6b99a24475,
0x3f98492528c8cabf,0x3f974321d3d006d3,
0x3f963d6178690bd6,0x3f9537e3f45f3565,
0x3f9432a925980cc1,0x3f932db0ea132e22,
0x3f9228fb1fea2e28,0x3f912487a5507f70,
0x3f90205658935847,0x3f8e38ce3033310c,
0x3f8c317384c75f06,0x3f8a2a9c6c170462,
0x3f882448a388a2aa,0x3f861e77e8b53fc6,
0x3f841929f96832f0,0x3f82145e939ef1e9,
0x3f8010157588de71,0x3f7c189cbb0e27fb,
0x3f78121214586b54,0x3f740c8a747878e2,
0x3f70080559588b35,0x3f680904828985c0,
0x3f60040155d5889e,0x3f50020055655889,
0x0000000000000000,0x0000000000000000,
0x0000000000000000,0x0000000000000000,
0x0000000000000000,0x0000000000000000,
0x0000000000000000,0x0000000000000000
};

static const double __log_Tab[128][2] = {
{0x1.6a133d0dec120p+0, -0x1.62fe995eb963ap-2},
{0x1.6815f2f3e42edp+0, -0x1.5d5a48dad6b67p-2},
{0x1.661e39be1ac9ep+0, -0x1.57bde257d2769p-2},
{0x1.642bfa30ac371p+0, -0x1.52294fbf2af55p-2},
{0x1.623f1d916f323p+0, -0x1.4c9c7b598aa38p-2},
{0x1.60578da220f65p+0, -0x1.47174fc5ff560p-2},
{0x1.5e75349dea571p+0, -0x1.4199b7fa7b5cap-2},
{0x1.5c97fd387a75ap+0, -0x1.3c239f48cfb99p-2},
{0x1.5abfd2981f200p+0, -0x1.36b4f154d2aebp-2},
{0x1.58eca051dc99cp+0, -0x1.314d9a0ff32fbp-2},
{0x1.571e526d9df12p+0, -0x1.2bed85cca3cffp-2},
{0x1.5554d555b3fcbp+0, -0x1.2694a11421af9p-2},
{0x1.539015e2a20cdp+0, -0x1.2142d8d014fb2p-2},
{0x1.51d0014ee0164p+0, -0x1.1bf81a2c77776p-2},
{0x1.50148538cd9eep+0, -0x1.16b452a39c6a4p-2},
{0x1.4e5d8f9f698a1p+0, -0x1.11776ffa6c67ep-2},
{0x1.4cab0edca66bep+0, -0x1.0c416035020e0p-2},
{0x1.4afcf1a9db874p+0, -0x1.071211aa10fdap-2},
{0x1.495327136e16fp+0, -0x1.01e972e293b1bp-2},
{0x1.47ad9e84af28fp+0, -0x1.f98ee587fd434p-3},
{0x1.460c47b39ae15p+0, -0x1.ef5800ad716fbp-3},
{0x1.446f12b278001p+0, -0x1.e52e160484698p-3},
{0x1.42d5efdd720ecp+0, -0x1.db1104b19352ep-3},
{0x1.4140cfe001a0fp+0, -0x1.d100ac59e0bd6p-3},
{0x1.3fafa3b421f69p+0, -0x1.c6fced287c3bdp-3},
{0x1.3e225c9c8ece5p+0, -0x1.bd05a7b317c29p-3},
{0x1.3c98ec29a211ap+0, -0x1.b31abd229164fp-3},
{0x1.3b13442a413fep+0, -0x1.a93c0edadb0a3p-3},
{0x1.399156baa3c54p+0, -0x1.9f697ee30d7ddp-3},
{0x1.38131639b4cdbp+0, -0x1.95a2efa9aa40ap-3},
{0x1.36987540fbf53p+0, -0x1.8be843d796044p-3},
{0x1.352166b648f61p+0, -0x1.82395ecc477edp-3},
{0x1.33adddb3eb575p+0, -0x1.7896240966422p-3},
{0x1.323dcd99fc1d3p+0, -0x1.6efe77aca8c55p-3},
{0x1.30d129fefc7d2p+0, -0x1.65723e117ec5cp-3},
{0x1.2f67e6b72fe7dp+0, -0x1.5bf15c0955706p-3},
{0x1.2e01f7cf8b187p+0, -0x1.527bb6c111da1p-3},
{0x1.2c9f518ddc86ep+0, -0x1.491133c939f8fp-3},
{0x1.2b3fe86e5f413p+0, -0x1.3fb1b90c7fc58p-3},
{0x1.29e3b1211b25cp+0, -0x1.365d2cc485f8dp-3},
{0x1.288aa08b373cfp+0, -0x1.2d13758970de7p-3},
{0x1.2734abcaa8467p+0, -0x1.23d47a721fd47p-3},
{0x1.25e1c82459b81p+0, -0x1.1aa0229f25ec2p-3},
{0x1.2491eb1ad59c5p+0, -0x1.117655ddebc3bp-3},
{0x1.23450a54048b5p+0, -0x1.0856fbf83ab6bp-3},
{0x1.21fb1bb09e578p+0, -0x1.fe83fabbaa106p-4},
{0x1.20b415346d8f7p+0, -0x1.ec6e8507a56cdp-4},
{0x1.1f6fed179a1acp+0, -0x1.da6d68c7cc2eap-4},
{0x1.1e2e99b93c7b3p+0, -0x1.c88078462be0cp-4},
{0x1.1cf011a7a882ap+0, -0x1.b6a786a423565p-4},
{0x1.1bb44b97dba5ap+0, -0x1.a4e2676ac7f85p-4},
{0x1.1a7b3e66cdd4fp+0, -0x1.9330eea777e76p-4},
{0x1.1944e11dc56cdp+0, -0x1.8192f134d5ad9p-4},
{0x1.18112aebb1a6ep+0, -0x1.70084464f0538p-4},
{0x1.16e013231b7e9p+0, -0x1.5e90bdec5cb1fp-4},
{0x1.15b1913f156cfp+0, -0x1.4d2c3433c5536p-4},
{0x1.14859cdedde13p+0, -0x1.3bda7e219879ap-4},
{0x1.135c2dc68cfa4p+0, -0x1.2a9b732d27194p-4},
{0x1.12353bdb01684p+0, -0x1.196eeb2b10807p-4},
{0x1.1110bf25b85b4p+0, -0x1.0854be8ef8a7ep-4},
{0x1.0feeafd2f8577p+0, -0x1.ee998cb277432p-5},
{0x1.0ecf062c51c3bp+0, -0x1.ccadb79919fb9p-5},
{0x1.0db1baa076c8bp+0, -0x1.aae5b1d8618b0p-5},
{0x1.0c96c5bb3048ep+0, -0x1.89413015d7442p-5},
{0x1.0b7e20263e070p+0, -0x1.67bfe7bf158dep-5},
{0x1.0a67c2acd0ce3p+0, -0x1.46618f83941bep-5},
{0x1.0953a6391e982p+0, -0x1.2525df1b0618ap-5},
{0x1.0841c3caea380p+0, -0x1.040c8e2f77c6ap-5},
{0x1.07321489b13eap+0, -0x1.c62aad39f738ap-6},
{0x1.062491aee9904p+0, -0x1.847fe3bdead9cp-6},
{0x1.05193497a7cc5p+0, -0x1.43183683400acp-6},
{0x1.040ff6b5f5e9fp+0, -0x1.01f31c4e1d544p-6},
{0x1.0308d19aa6127p+0, -0x1.82201d1e6b69ap-7},
{0x1.0203beedb0c67p+0, -0x1.00dd0f3e1bfd6p-7},
{0x1.010037d38bcc2p+0, -0x1.ff6fe1feb4e53p-9},
{1.0, 0.0},
{0x1.fc06d493cca10p-1, 0x1.fe91885ec8e20p-8},
{0x1.f81e6ac3b918fp-1, 0x1.fc516f716296dp-7},
{0x1.f44546ef18996p-1, 0x1.7bb4dd70a015bp-6},
{0x1.f07b10382c84bp-1, 0x1.f84c99b34b674p-6},
{0x1.ecbf7070e59d4p-1, 0x1.39f9ce4fb2d71p-5},
{0x1.e91213f715939p-1, 0x1.7756c0fd22e78p-5},
{0x1.e572a9a75f7b7p-1, 0x1.b43ee82db8f3ap-5},
{0x1.e1e0e2c530207p-1, 0x1.f0b3fced60034p-5},
{0x1.de5c72d8a8be3p-1, 0x1.165bd78d4878ep-4},
{0x1.dae50fa5658ccp-1, 0x1.3425d2715ebe6p-4},
{0x1.d77a71145a2dap-1, 0x1.51b8bd91b7915p-4},
{0x1.d41c51166623ep-1, 0x1.6f15632c76a47p-4},
{0x1.d0ca6ba0bb29fp-1, 0x1.8c3c88ecbe503p-4},
{0x1.cd847e8e59681p-1, 0x1.a92ef077625dap-4},
{0x1.ca4a499693e00p-1, 0x1.c5ed5745fa006p-4},
{0x1.c71b8e399e821p-1, 0x1.e27876de1c993p-4},
{0x1.c3f80faf19077p-1, 0x1.fed104fce4cdcp-4},
{0x1.c0df92dc2b0ecp-1, 0x1.0d7bd9c17d78bp-3},
{0x1.bdd1de3cbb542p-1, 0x1.1b76986cef97bp-3},
{0x1.baceb9e1007a3p-1, 0x1.295913d24f750p-3},
{0x1.b7d5ef543e55ep-1, 0x1.37239fa295d17p-3},
{0x1.b4e749977d953p-1, 0x1.44d68dd78714bp-3},
{0x1.b20295155478ep-1, 0x1.52722ebe5d780p-3},
{0x1.af279f8e82be2p-1, 0x1.5ff6d12671f98p-3},
{0x1.ac5638197fdf3p-1, 0x1.6d64c2389484bp-3},
{0x1.a98e2f102e087p-1, 0x1.7abc4da40fddap-3},
{0x1.a6cf5606d05c1p-1, 0x1.87fdbda1e8452p-3},
{0x1.a4197fc04d746p-1, 0x1.95295b06a5f37p-3},
{0x1.a16c80293dc01p-1, 0x1.a23f6d34abbc5p-3},
{0x1.9ec82c4dc5bc9p-1, 0x1.af403a28e04f2p-3},
{0x1.9c2c5a491f534p-1, 0x1.bc2c06a85721ap-3},
{0x1.9998e1480b618p-1, 0x1.c903161240163p-3},
{0x1.970d9977c6c2dp-1, 0x1.d5c5aa93287ebp-3},
{0x1.948a5c023d212p-1, 0x1.e274051823fa9p-3},
{0x1.920f0303d6809p-1, 0x1.ef0e656300c16p-3},
{0x1.8f9b698a98b45p-1, 0x1.fb9509f05aa2ap-3},
{0x1.8d2f6b81726f6p-1, 0x1.04041821f37afp-2},
{0x1.8acae5bb55badp-1, 0x1.0a340a49b3029p-2},
{0x1.886db5d9275b8p-1, 0x1.105a7918a126dp-2},
{0x1.8617ba567c13cp-1, 0x1.1677819812b84p-2},
{0x1.83c8d27487800p-1, 0x1.1c8b405b40c0ep-2},
{0x1.8180de3c5dbe7p-1, 0x1.2295d16cfa6b1p-2},
{0x1.7f3fbe71cdb71p-1, 0x1.28975066318a2p-2},
{0x1.7d055498071c1p-1, 0x1.2e8fd855d86fcp-2},
{0x1.7ad182e54f65ap-1, 0x1.347f83d605e59p-2},
{0x1.78a42c3c90125p-1, 0x1.3a666d1244588p-2},
{0x1.767d342f76944p-1, 0x1.4044adb6f8ec4p-2},
{0x1.745c7ef26b00ap-1, 0x1.461a5f077558cp-2},
{0x1.7241f15769d0fp-1, 0x1.4be799e20b9c8p-2},
{0x1.702d70d396e41p-1, 0x1.51ac76a6b79dfp-2},
{0x1.6e1ee3700cd11p-1, 0x1.57690d5744a45p-2},
{0x1.6c162fc9cbe02p-1, 0x1.5d1d758e45217p-2},
};

#define ExpShift45 0x1.8p45
#define ExpShift44 0x1.8p44

#define FrexpExponetMaskf 0x807fffff

static const float a1_f32=1.442695021629333,a2_h_f32=0.693115234375000,a2_l_f32=0.000031946183299;
static const float b1_f32=0.5,b2_f32=0.008366675116122,b3_f32=0.001393575570546,b4_f32=0.166665419936180,b5_f32=0.041666455566883;

static const unsigned long table_f64_la_sin[] = {
    0x0000000000000000,
    0x3fe0000000000000,
    0x3f762e4a19bd1e74,
    0x3fdfd3c22b8f71f1,
    0x3f862e5f6a0dfd36,
    0x3fdfa7c1819e90d8,
    0x3f90a2e234040f5f,
    0x3fdf7bfdad9cbe14,
    0x3f962eb4abcc5a81,
    0x3fdf50765b6e4540,
    0x3f9bbab1c5033244,
    0x3fdf252b376bba97,
    0x3fa0a372144eeb45,
    0x3fdefa1bee615a27,
    0x3fa369ab3ffbf8b0,
    0x3fdecf482d8e67f1,
    0x3fa63009ba740a2a,
    0x3fdea4afa2a490da,
    0x3fa8f692d8ea1b5a,
    0x3fde7a51fbc74c83,
    0x3fabbd4bf0e31a6f,
    0x3fde502ee78b3ff6,
    0x3fae843a5840286a,
    0x3fde264614f5a129,
    0x3fb0a5b1b2a46d0a,
    0x3fddfc97337b9b5f,
    0x3fb20966375abcdf,
    0x3fddd321f301b460,
    0x3fb36d3d65dca4e8,
    0x3fdda9e603db3285,
    0x3fb4d139ea06642a,
    0x3fdd80e316c98398,
    0x3fb6355e6ffbf9ba,
    0x3fdd5818dcfba487,
    0x3fb799ada42e4788,
    0x3fdd2f87080d89f2,
    0x3fb8fe2a336035bc,
    0x3fdd072d4a07897c,
    0x3fba62d6caabd6b6,
    0x3fdcdf0b555dc3fa,
    0x3fbbc7b617878baf,
    0x3fdcb720dcef9069,
    0x3fbd2ccac7cb2a11,
    0x3fdc8f6d9406e7b5,
    0x3fbe921789b52185,
    0x3fdc67f12e57d14b,
    0x3fbff79f0befa2c7,
    0x3fdc40ab5fffd07a,
    0x3fc0aeb1fecae3a9,
    0x3fdc199bdd85529c,
    0x3fc161b4871c5cec,
    0x3fdbf2c25bd71e09,
    0x3fc214d876f26fd0,
    0x3fdbcc1e904bc1d2,
    0x3fc2c81f2693816f,
    0x3fdba5b030a1064a,
    0x3fc37b89ee88bef7,
    0x3fdb7f76f2fb5e47,
    0x3fc42f1a27a0b3cd,
    0x3fdb59728de5593a,
    0x3fc4e2d12af1e037,
    0x3fdb33a2b84f15fb,
    0x3fc596b051dd508d,
    0x3fdb0e07298db666,
    0x3fc64ab8f61134fa,
    0x3fdae89f995ad3ad,
    0x3fc6feec718b79d1,
    0x3fdac36bbfd3f37a,
    0x3fc7b34c1e9c607f,
    0x3fda9e6b5579fdbf,
    0x3fc867d957e91912,
    0x3fda799e1330b358,
    0x3fc91c95786e5c72,
    0x3fda5503b23e255d,
    0x3fc9d181db83072f,
    0x3fda309bec4a2d33,
    0x3fca869fdcdab512,
    0x3fda0c667b5de565,
    0x3fcb3bf0d8885d4c,
    0x3fd9e86319e32323,
    0x3fcbf1762b00ef69,
    0x3fd9c49182a3f090,
    0x3fcca731311df0fb,
    0x3fd9a0f170ca07ba,
    0x3fcd5d2348201c09,
    0x3fd97d829fde4e50,
    0x3fce134dcdb1fe3e,
    0x3fd95a44cbc8520f,
    0x3fcec9b21fea98ea,
    0x3fd93737b0cdc5e5,
    0x3fcf80519d5001d3,
    0x3fd9145b0b91ffc6,
    0x3fd01b96d26d026a,
    0x3fd8f1ae99157736,
    0x3fd07723cafa6331,
    0x3fd8cf3216b5448c,
    0x3fd0d2d06841b373,
    0x3fd8ace5422aa0db,
    0x3fd12e9d5a715381,
    0x3fd88ac7d98a6699,
    0x3fd18a8b51f5c661,
    0x3fd868d99b4492ed,
    0x3fd1e69aff7b04d7,
    0x3fd8471a4623c7ad,
    0x3fd242cd13edd0f1,
    0x3fd82589994cce13,
    0x3fd29f22407d0a0c,
    0x3fd80427543e1a12,
    0x3fd2fb9b369b0153,
    0x3fd7e2f336cf4e62,
    0x3fd35838a7fecec8,
    0x3fd7c1ed0130c132,
    0x3fd3b4fb46a5a6cc,
    0x3fd7a11473eb0187,
    0x3fd411e3c4d4302f,
    0x3fd780694fde5d3f,
    0x3fd46ef2d517dac8,
    0x3fd75feb564267c9,
    0x3fd4cc292a48369e,
    0x3fd73f9a48a58174,
    0x3fd5298777884b96,
    0x3fd71f75e8ec5f74,
    0x3fd5870e7047f1bc,
    0x3fd6ff7df9519484,
    0x3fd5e4bec8452a1a,
    0x3fd6dfb23c651a2f,
    0x3fd64299338d7827,
    0x3fd6c012750bdabf,
    0x3fd6a09e667f3bcd,
    0x3fd6a09e667f3bcd,
    0x3fd6fecf15cb0c0b,
    0x3fd68155d44ca973,
    0x3fd75d2bf6751239,
    0x3fd6623882552225,
    0x3fd7bbb5bdd665e8,
    0x3fd6434634ccc320,
    0x3fd81a6d219e6963,
    0x3fd6247eb03a5585,
    0x3fd87952d7d426df,
    0x3fd605e1b976dc09,
    0x3fd8d86796d7ae49,
    0x3fd5e76f15ad2148,
    0x3fd937ac156373c8,
    0x3fd5c9268a5946b7,
    0x3fd997210a8daee4,
    0x3fd5ab07dd485429,
    0x3fd9f6c72dc9ba68,
    0x3fd58d12d497c7fd,
    0x3fda569f36e974ea,
    0x3fd56f4736b527da,
    0x3fdab6a9de1ea215,
    0x3fd551a4ca5d920f,
    0x3fdb16e7dbfc4ca3,
    0x3fd5342b569d4f82,
    0x3fdb7759e9782918,
    0x3fd516daa2cf6642,
    0x3fdbd800bfebf932,
    0x3fd4f9b2769d2ca7,
    0x3fdc38dd1916f025,
    0x3fd4dcb299fddd0d,
    0x3fdc99efaf1f1790,
    0x3fd4bfdad5362a27,
    0x3fdcfb393c92b539,
    0x3fd4a32af0d7d3de,
    0x3fdd5cba7c69b19c,
    0x3fd486a2b5c13cd0,
    0x3fddbe742a06ff34,
    0x3fd46a41ed1d0057,
    0x3fde2067013a029d,
    0x3fd44e086061892d,
    0x3fde8293be3ffb87,
    0x3fd431f5d950a897,
    0x3fdee4fb1dc56e75,
    0x3fd4160a21f72e2a,
    0x3fdf479ddce78f58,
    0x3fd3fa4504ac801c,
    0x3fdfaa7cb935acfe,
    0x3fd3dea64c123422,
    0x3fe006cc38594eb1,
    0x3fd3c32dc313a8e5,
    0x3fe03878e0eb1569,
    0x3fd3a7db34e59ff7,
    0x3fe06a44b5c74101,
    0x3fd38cae6d05d866,
    0x3fe09c3016a0d077,
    0x3fd371a7373aa9cb,
    0x3fe0ce3b63676360,
    0x3fd356c55f929ff1,
    0x3fe10066fc47f240,
    0x3fd33c08b26416ff,
    0x3fe132b341ad8761,
    0x3fd32170fc4cd831,
    0x3fe165209441f823,
    0x3fd306fe0a31b715,
    0x3fe197af54ee9ebb,
    0x3fd2ecafa93e2f56,
    0x3fe1ca5fe4dd1475,
    0x3fd2d285a6e4030b,
    0x3fe1fd32a577ec72,
    0x3fd2b87fd0dad990,
    0x3fe23027f86b6ed6,
    0x3fd29e9df51fdee1,
    0x3fe263403fa65489,
    0x3fd284dfe1f56381,
    0x3fe2967bdd5a8364,
    0x3fd26b4565e27cdd,
    0x3fe2c9db33fdcae9,
    0x3fd251ce4fb2a63f,
    0x3fe2fd5ea64aa180,
    0x3fd2387a6e756238,
    0x3fe331069740e22f,
    0x3fd21f49917ddc96,
    0x3fe364d36a268ae0,
    0x3fd2063b88628cd6,
    0x3fe398c582887b27,
    0x3fd1ed5022fcd91d,
    0x3fe3ccdd443b3394,
    0x3fd1d4873168b9aa,
    0x3fe4011b135b9590,
    0x3fd1bbe084045cd4,
    0x3fe4357f544fa3c1,
    0x3fd1a35beb6fcb75,
    0x3fe46a0a6bc742fd,
    0x3fd18af9388c8dea,
    0x3fe49ebcbebcfbca,
    0x3fd172b83c7d517b,
    0x3fe4d396b276bc6f,
    0x3fd15a98c8a58e51,
    0x3fe50898ac869b96,
    0x3fd1429aaea92de0,
    0x3fe53dc312cb9b7a,
    0x3fd12abdc06c31cc,
    0x3fe573164b726db6,
    0x3fd11301d0125b51,
    0x3fe5a892bcf6379b,
    0x3fd0fb66affed31b,
    0x3fe5de38ce215725,
    0x3fd0e3ec32d3d1a2,
    0x3fe61408e60e2888,
    0x3fd0cc922b7247f7,
    0x3fe64a036c27cc52,
    0x3fd0b5586cf9890f,
    0x3fe68028c82aee2f,
    0x3fd09e3ecac6f383,
    0x3fe6b67962268c43,
    0x3fd0874518759bc8,
    0x3fe6ecf5a27cbf28,
    0x3fd0706b29ddf6de,
    0x3fe7239df1e38286,
    0x3fd059b0d3158574,
    0x3fe75a72b9657e51,
    0x3fd04315e86e7f85,
    0x3fe791746262d0a8,
    0x3fd02c9a3e778061,
    0x3fe7c8a35691d856,
    0x3fd0163da9fb3335,
};

static const unsigned long table_f64_la_cos[] = {
  0x3fe0000000000000,
	0x3fe00b1afa5abcbf,
	0x3fe0163da9fb3335,
	0x3fe02168143b0281,
	0x3fe02c9a3e778061,
	0x3fe037d42e11bbcc,
	0x3fe04315e86e7f85,
	0x3fe04e5f72f654b1,
	0x3fe059b0d3158574,
	0x3fe0650a0e3c1f89,
	0x3fe0706b29ddf6de,
	0x3fe07bd42b72a836,
	0x3fe0874518759bc8,
	0x3fe092bdf66607e0,
	0x3fe09e3ecac6f383,
	0x3fe0a9c79b1f3919,
	0x3fe0b5586cf9890f,
	0x3fe0c0f145e46c85,
	0x3fe0cc922b7247f7,
	0x3fe0d83b23395dec,
	0x3fe0e3ec32d3d1a2,
	0x3fe0efa55fdfa9c5,
	0x3fe0fb66affed31b,
	0x3fe1073028d7233e,
	0x3fe11301d0125b51,
	0x3fe11edbab5e2ab6,
	0x3fe12abdc06c31cc,
	0x3fe136a814f204ab,
	0x3fe1429aaea92de0,
	0x3fe14e95934f312e,
	0x3fe15a98c8a58e51,
	0x3fe166a45471c3c2,
	0x3fe172b83c7d517b,
	0x3fe17ed48695bbc0,
	0x3fe18af9388c8dea,
	0x3fe1972658375d2f,
	0x3fe1a35beb6fcb75,
	0x3fe1af99f8138a1c,
	0x3fe1bbe084045cd4,
	0x3fe1c82f95281c6b,
	0x3fe1d4873168b9aa,
	0x3fe1e0e75eb44027,
	0x3fe1ed5022fcd91d,
	0x3fe1f9c18438ce4d,
	0x3fe2063b88628cd6,
	0x3fe212be3578a819,
	0x3fe21f49917ddc96,
	0x3fe22bdda27912d1,
	0x3fe2387a6e756238,
	0x3fe2451ffb82140a,
	0x3fe251ce4fb2a63f,
	0x3fe25e85711ece75,
	0x3fe26b4565e27cdd,
	0x3fe2780e341ddf29,
	0x3fe284dfe1f56381,
	0x3fe291ba7591bb70,
	0x3fe29e9df51fdee1,
	0x3fe2ab8a66d10f13,
	0x3fe2b87fd0dad990,
	0x3fe2c57e39771b2f,
	0x3fe2d285a6e4030b,
	0x3fe2df961f641589,
	0x3fe2ecafa93e2f56,
	0x3fe2f9d24abd886b,
	0x3fe306fe0a31b715,
	0x3fe31432edeeb2fd,
	0x3fe32170fc4cd831,
	0x3fe32eb83ba8ea32,
	0x3fe33c08b26416ff,
	0x3fe3496266e3fa2d,
	0x3fe356c55f929ff1,
	0x3fe36431a2de883b,
	0x3fe371a7373aa9cb,
	0x3fe37f26231e754a,
	0x3fe38cae6d05d866,
	0x3fe39a401b7140ef,
	0x3fe3a7db34e59ff7,
	0x3fe3b57fbfec6cf4,
	0x3fe3c32dc313a8e5,
	0x3fe3d0e544ede173,
	0x3fe3dea64c123422,
	0x3fe3ec70df1c5175,
	0x3fe3fa4504ac801c,
	0x3fe40822c367a024,
	0x3fe4160a21f72e2a,
	0x3fe423fb2709468a,
	0x3fe431f5d950a897,
	0x3fe43ffa3f84b9d4,
	0x3fe44e086061892d,
	0x3fe45c2042a7d232,
	0x3fe46a41ed1d0057,
	0x3fe4786d668b3237,
	0x3fe486a2b5c13cd0,
	0x3fe494e1e192aed2,
	0x3fe4a32af0d7d3de,
	0x3fe4b17dea6db7d7,
	0x3fe4bfdad5362a27,
	0x3fe4ce41b817c114,
	0x3fe4dcb299fddd0d,
	0x3fe4eb2d81d8abff,
	0x3fe4f9b2769d2ca7,
	0x3fe508417f4531ee,
	0x3fe516daa2cf6642,
	0x3fe5257de83f4eef,
	0x3fe5342b569d4f82,
	0x3fe542e2f4f6ad27,
	0x3fe551a4ca5d920f,
	0x3fe56070dde910d2,
	0x3fe56f4736b527da,
	0x3fe57e27dbe2c4cf,
	0x3fe58d12d497c7fd,
	0x3fe59c0827ff07cc,
	0x3fe5ab07dd485429,
	0x3fe5ba11fba87a03,
	0x3fe5c9268a5946b7,
	0x3fe5d84590998b93,
	0x3fe5e76f15ad2148,
	0x3fe5f6a320dceb71,
	0x3fe605e1b976dc09,
	0x3fe6152ae6cdf6f4,
	0x3fe6247eb03a5585,
	0x3fe633dd1d1929fd,
	0x3fe6434634ccc320,
	0x3fe652b9febc8fb7,
	0x3fe6623882552225,
	0x3fe671c1c70833f6,
	0x3fe68155d44ca973,
	0x3fe690f4b19e9538,
	0x3fe6a09e667f3bcd,
	0x3fe6b052fa75173e,
	0x3fe6c012750bdabf,
	0x3fe6cfdcddd47645,
	0x3fe6dfb23c651a2f,
	0x3fe6ef9298593ae5,
	0x3fe6ff7df9519484,
	0x3fe70f7466f42e87,
	0x3fe71f75e8ec5f74,
	0x3fe72f8286ead08a,
	0x3fe73f9a48a58174,
	0x3fe74fbd35d7cbfd,
	0x3fe75feb564267c9,
	0x3fe77024b1ab6e09,
	0x3fe780694fde5d3f,
	0x3fe790b938ac1cf6,
	0x3fe7a11473eb0187,
	0x3fe7b17b0976cfdb,
	0x3fe7c1ed0130c132,
	0x3fe7d26a62ff86f0,
	0x3fe7e2f336cf4e62,
	0x3fe7f3878491c491,
	0x3fe80427543e1a12,
	0x3fe814d2add106d9,
	0x3fe82589994cce13,
	0x3fe8364c1eb941f7,
	0x3fe8471a4623c7ad,
	0x3fe857f4179f5b21,
	0x3fe868d99b4492ed,
	0x3fe879cad931a436,
	0x3fe88ac7d98a6699,
	0x3fe89bd0a478580f,
	0x3fe8ace5422aa0db,
	0x3fe8be05bad61778,
	0x3fe8cf3216b5448c,
	0x3fe8e06a5e0866d9,
	0x3fe8f1ae99157736,
	0x3fe902fed0282c8a,
	0x3fe9145b0b91ffc6,
	0x3fe925c353aa2fe2,
	0x3fe93737b0cdc5e5,
	0x3fe948b82b5f98e5,
	0x3fe95a44cbc8520f,
	0x3fe96bdd9a7670b3,
	0x3fe97d829fde4e50,
	0x3fe98f33e47a22a2,
	0x3fe9a0f170ca07ba,
	0x3fe9b2bb4d53fe0d,
	0x3fe9c49182a3f090,
	0x3fe9d674194bb8d5,
	0x3fe9e86319e32323,
	0x3fe9fa5e8d07f29e,
	0x3fea0c667b5de565,
	0x3fea1e7aed8eb8bb,
	0x3fea309bec4a2d33,
	0x3fea42c980460ad8,
	0x3fea5503b23e255d,
	0x3fea674a8af46052,
	0x3fea799e1330b358,
	0x3fea8bfe53c12e59,
	0x3fea9e6b5579fdbf,
	0x3feab0e521356eba,
	0x3feac36bbfd3f37a,
	0x3fead5ff3a3c2774,
	0x3feae89f995ad3ad,
	0x3feafb4ce622f2ff,
	0x3feb0e07298db666,
	0x3feb20ce6c9a8952,
	0x3feb33a2b84f15fb,
	0x3feb468415b749b1,
	0x3feb59728de5593a,
	0x3feb6c6e29f1c52a,
	0x3feb7f76f2fb5e47,
	0x3feb928cf22749e4,
	0x3feba5b030a1064a,
	0x3febb8e0b79a6f1f,
	0x3febcc1e904bc1d2,
	0x3febdf69c3f3a207,
	0x3febf2c25bd71e09,
	0x3fec06286141b33d,
	0x3fec199bdd85529c,
	0x3fec2d1cd9fa652c,
	0x3fec40ab5fffd07a,
	0x3fec544778fafb22,
	0x3fec67f12e57d14b,
	0x3fec7ba88988c933,
	0x3fec8f6d9406e7b5,
	0x3feca3405751c4db,
	0x3fecb720dcef9069,
	0x3feccb0f2e6d1675,
	0x3fecdf0b555dc3fa,
	0x3fecf3155b5bab74,
	0x3fed072d4a07897c,
	0x3fed1b532b08c968,
	0x3fed2f87080d89f2,
	0x3fed43c8eacaa1d6,
	0x3fed5818dcfba487,
	0x3fed6c76e862e6d3,
	0x3fed80e316c98398,
	0x3fed955d71ff6075,
	0x3feda9e603db3285,
	0x3fedbe7cd63a8315,
	0x3fedd321f301b460,
	0x3fede7d5641c0658,
	0x3fedfc97337b9b5f,
	0x3fee11676b197d17,
	0x3fee264614f5a129,
	0x3fee3b333b16ee12,
	0x3fee502ee78b3ff6,
	0x3fee653924676d76,
	0x3fee7a51fbc74c83,
	0x3fee8f7977cdb740,
	0x3feea4afa2a490da,
	0x3feeb9f4867cca6e,
	0x3feecf482d8e67f1,
	0x3feee4aaa2188510,
	0x3feefa1bee615a27,
	0x3fef0f9c1cb6412a,
	0x3fef252b376bba97,
	0x3fef3ac948dd7274,
	0x3fef50765b6e4540,
	0x3fef6632798844f8,
	0x3fef7bfdad9cbe14,
	0x3fef91d802243c89,
	0x3fefa7c1819e90d8,
	0x3fefbdba3692d514,
	0x3fefd3c22b8f71f1,
	0x3fefe9d96b2a23d9,
  0x3ff0000000000000,
};

static const double __log2_tab[][2] = {
    {0x1.6e1f766d2cca1p+0, -0x1.08494bd76d000p-1},
    {0x1.6a13d0e30d48ap+0, -0x1.00143aee8f800p-1},
    {0x1.661ec32d06c85p+0, -0x1.efec5360b4000p-2},
    {0x1.623fa951198f8p+0, -0x1.dfdd91ab7e000p-2},
    {0x1.5e75ba4cf026cp+0, -0x1.cffae0cc79000p-2},
    {0x1.5ac055a214fb8p+0, -0x1.c043811fda000p-2},
    {0x1.571ed0f166e1ep+0, -0x1.b0b67323ae000p-2},
    {0x1.53909590bf835p+0, -0x1.a152f5a2db000p-2},
    {0x1.5014fed61adddp+0, -0x1.9217f5af86000p-2},
    {0x1.4cab88e487bd0p+0, -0x1.8304db0719000p-2},
    {0x1.49539b4334feep+0, -0x1.74189f9a9e000p-2},
    {0x1.460cbdfafd569p+0, -0x1.6552bb5199000p-2},
    {0x1.42d664ee4b953p+0, -0x1.56b23a29b1000p-2},
    {0x1.3fb01111dd8a6p+0, -0x1.483650f5fa000p-2},
    {0x1.3c995b70c5836p+0, -0x1.39de937f6a000p-2},
    {0x1.3991c4ab6fd4ap+0, -0x1.2baa1538d6000p-2},
    {0x1.3698e0ce099b5p+0, -0x1.1d98340ca4000p-2},
    {0x1.33ae48213e7b2p+0, -0x1.0fa853a40e000p-2},
    {0x1.30d191985bdb1p+0, -0x1.01d9c32e73000p-2},
    {0x1.2e025cab271d7p+0, -0x1.e857da2fa6000p-3},
    {0x1.2b404cf13cd82p+0, -0x1.cd3c8633d8000p-3},
    {0x1.288b02c7ccb50p+0, -0x1.b26034c14a000p-3},
    {0x1.25e2263944de5p+0, -0x1.97c1c2f4fe000p-3},
    {0x1.234563d8615b1p+0, -0x1.7d6023f800000p-3},
    {0x1.20b46e33eaf38p+0, -0x1.633a71a05e000p-3},
    {0x1.1e2eefdcda3ddp+0, -0x1.494f5e9570000p-3},
    {0x1.1bb4a580b3930p+0, -0x1.2f9e424e0a000p-3},
    {0x1.19453847f2200p+0, -0x1.162595afdc000p-3},
    {0x1.16e06c0d5d73cp+0, -0x1.f9c9a75bd8000p-4},
    {0x1.1485f47b7e4c2p+0, -0x1.c7b575bf9c000p-4},
    {0x1.12358ad0085d1p+0, -0x1.960c60ff48000p-4},
    {0x1.0fef00f532227p+0, -0x1.64ce247b60000p-4},
    {0x1.0db2077d03a8fp+0, -0x1.33f78b2014000p-4},
    {0x1.0b7e6d65980d9p+0, -0x1.0387d1a42c000p-4},
    {0x1.0953efe7b408dp+0, -0x1.a6f9208b50000p-5},
    {0x1.07325cac53b83p+0, -0x1.47a954f770000p-5},
    {0x1.05197e40d1b5cp+0, -0x1.d23a8c50c0000p-6},
    {0x1.03091c1208ea2p+0, -0x1.16a2629780000p-6},
    {0x1.0101025b37e21p+0, -0x1.720f8d8e80000p-8},
    {0x1.fc07ef9caa76bp-1, 0x1.6fe53b1500000p-7},
    {0x1.f4465d3f6f184p-1, 0x1.11ccce10f8000p-5},
    {0x1.ecc079f84107fp-1, 0x1.c4dfc8c8b8000p-5},
    {0x1.e573a99975ae8p-1, 0x1.3aa321e574000p-4},
    {0x1.de5d6f0bd3de6p-1, 0x1.918a0d08b8000p-4},
    {0x1.d77b681ff38b3p-1, 0x1.e72e9da044000p-4},
    {0x1.d0cb5724de943p-1, 0x1.1dcd2507f6000p-3},
    {0x1.ca4b2dc0e7563p-1, 0x1.476ab03dea000p-3},
    {0x1.c3f8ee8d6cb51p-1, 0x1.7074377e22000p-3},
    {0x1.bdd2b4f020c4cp-1, 0x1.98ede8ba94000p-3},
    {0x1.b7d6c006015cap-1, 0x1.c0db86ad2e000p-3},
    {0x1.b20366e2e338fp-1, 0x1.e840aafcee000p-3},
    {0x1.ac57026295039p-1, 0x1.0790ab4678000p-2},
    {0x1.a6d01bc2731ddp-1, 0x1.1ac056801c000p-2},
    {0x1.a16d3bc3ff18bp-1, 0x1.2db11d4fee000p-2},
    {0x1.9c2d14967feadp-1, 0x1.406464ec58000p-2},
    {0x1.970e4f47c9902p-1, 0x1.52dbe093af000p-2},
    {0x1.920fb3982bcf2p-1, 0x1.651902050d000p-2},
    {0x1.8d30187f759f1p-1, 0x1.771d2cdeaf000p-2},
    {0x1.886e5ebb9f66dp-1, 0x1.88e9c857d9000p-2},
    {0x1.83c97b658b994p-1, 0x1.9a80155e16000p-2},
    {0x1.7f405ffc61022p-1, 0x1.abe186ed3d000p-2},
    {0x1.7ad22181415cap-1, 0x1.bd0f2aea0e000p-2},
    {0x1.767dcf99eff8cp-1, 0x1.ce0a43dbf4000p-2},
};

static const double __log2_poly[] = {
    -0x1.71547652b8339p-1, 0x1.ec709dc3a04bep-2, -0x1.7154764702ffbp-2,
    0x1.2776c50034c48p-2, -0x1.ec7b328ea92bcp-3, 0x1.a6225e117f92ep-3,
};

// log1p
#define LogScaleData 0x3f400000
#define Top9Maskf 0xff800000
#define LogScaleComps 0x40800000

#define OneMHfRt2Top 0x00095f6200000000
#define HfRt2Top 0x3fe6a09e00000000

#define Ln2Hi 0x1.62e42fefa3800p-1
#define Ln2Lo 0x1.ef35793c76730p-45

static const float __log1pf_data[9]
  = {-0x1p-1f, 0x1.5555aap-2f, -0x1.000038p-2f, 0x1.99675cp-3f,
		-0x1.54ef78p-3f, 0x1.28a1f4p-3f, -0x1.0da91p-3f, 0x1.abcb6p-4f,
		-0x1.6f0d5ep-5f};

static const double __log1p_data[19] = 
    {-0x1.ffffffffffffbp-2, 0x1.55555555551a9p-2, -0x1.00000000008e3p-2,
	     0x1.9999999a32797p-3, -0x1.555555552fecfp-3, 0x1.249248e071e5ap-3,
	     -0x1.ffffff8bf8482p-4, 0x1.c71c8f07da57ap-4, -0x1.9999ca4ccb617p-4,
	     0x1.7459ad2e1dfa3p-4, -0x1.554d2680a3ff2p-4, 0x1.3b4c54d487455p-4,
	     -0x1.2548a9ffe80e6p-4, 0x1.0f389a24b2e07p-4, -0x1.eee4db15db335p-5,
	     0x1.e95b494d4a5ddp-5, -0x1.15fdf07cb7c73p-4, 0x1.0310b70800fcfp-4,
	     -0x1.cfa7385bdb37ep-6};

#define __log1p_c(i) __log1p_data[i]

// log10
#define InvLn10 0.43429448190325182765

// Asinh
static const unsigned long asinh_table_f64_la[1552]=
{0xc086232bdd7a8300,0xbe1ce91eef3fb100,
0xc086232fdc7ad828,0xbe1cefcffda73b6a,
0xc0862333d97d2ba0,0xbe1cef406748f1ff,
0xc0862337d48378e0,0xbe1cef2a9429925a,
0xc086233bcd8fb878,0xbe1cf138d17ebecb,
0xc086233fc4a3e018,0xbe1ceff2dbbbb29e,
0xc0862343b9c1e270,0xbe1cf1a42aae437b,
0xc0862347acebaf68,0xbe1cef3b152048af,
0xc086234b9e2333f0,0xbe1cef20e127805e,
0xc086234f8d6a5a30,0xbe1cf00ad6052cf4,
0xc08623537ac30980,0xbe1cefc4642ee597,
0xc0862357662f2660,0xbe1cf1f277d36e16,
0xc086235b4fb092a0,0xbe1ceed009e8d8e6,
0xc086235f37492d28,0xbe1cf1e4038cb362,
0xc08623631cfad250,0xbe1cf0b0873b8557,
0xc086236700c75b98,0xbe1cf15bb3227c0b,
0xc086236ae2b09fe0,0xbe1cf151ef8ca9ed,
0xc086236ec2b87358,0xbe1cefe1dc2cd2ed,
0xc0862372a0e0a780,0xbe1cf0d1eec5454f,
0xc08623767d2b0b48,0xbe1ceeefd570bbce,
0xc086237a57996af0,0xbe1cee99ae91b3a7,
0xc086237e302d9028,0xbe1cf0412830fbd1,
0xc086238206e94218,0xbe1ceee898588610,
0xc0862385dbce4548,0xbe1cee9a1fbcaaea,
0xc0862389aede5bc0,0xbe1ceed8e7cc1ad6,
0xc086238d801b4500,0xbe1cf10c8d059da6,
0xc08623914f86be18,0xbe1ceee6c63a8165,
0xc08623951d228180,0xbe1cf0c3592d2ff1,
0xc0862398e8f04758,0xbe1cf0026cc4cb1b,
0xc086239cb2f1c538,0xbe1cf15d48d8e670,
0xc08623a07b28ae60,0xbe1cef359363787c,
0xc08623a44196b390,0xbe1cefdf1ab2e82c,
0xc08623a8063d8338,0xbe1cefe43c02aa84,
0xc08623abc91ec960,0xbe1cf044f5ae35b7,
0xc08623af8a3c2fb8,0xbe1cf0b0b4001e1b,
0xc08623b349975d98,0xbe1cf1bae76dfbcf,
0xc08623b70731f810,0xbe1cef0a72e13a62,
0xc08623bac30da1c8,0xbe1cf184007d2b6b,
0xc08623be7d2bfb40,0xbe1cf16f4b239e98,
0xc08623c2358ea2a0,0xbe1cf0976acada87,
0xc08623c5ec3733d0,0xbe1cf066318a16ff,
0xc08623c9a1274880,0xbe1ceffaa7148798,
0xc08623cd54607820,0xbe1cf23ab02e9b6e,
0xc08623d105e45800,0xbe1cefdfef7d4fde,
0xc08623d4b5b47b20,0xbe1cf17fece44f2b,
0xc08623d863d27270,0xbe1cf18f907d0d7c,
0xc08623dc103fccb0,0xbe1cee61fe072c98,
0xc08623dfbafe1668,0xbe1cf022dd891e2f,
0xc08623e3640eda20,0xbe1ceecc1daf4358,
0xc08623e70b73a028,0xbe1cf0173c4fa380,
0xc08623eab12deec8,0xbe1cf16a2150c2f4,
0xc08623ee553f4a30,0xbe1cf1bf980b1f4b,
0xc08623f1f7a93480,0xbe1cef8b731663c2,
0xc08623f5986d2dc0,0xbe1cee9a664d7ef4,
0xc08623f9378cb3f0,0xbe1cf1eda2af6400,
0xc08623fcd5094320,0xbe1cf1923f9d68d7,
0xc086240070e45548,0xbe1cf0747cd3e03a,
0xc08624040b1f6260,0xbe1cf22ee855bd6d,
0xc0862407a3bbe078,0xbe1cf0d57360c00b,
0xc086240b3abb4398,0xbe1ceebc815cd575,
0xc086240ed01efdd0,0xbe1cf03bfb970951,
0xc086241263e87f50,0xbe1cf16e74768529,
0xc0862415f6193658,0xbe1cefec64b8becb,
0xc086241986b28f30,0xbe1cf0838d210baa,
0xc086241d15b5f448,0xbe1cf0ea86e75b11,
0xc0862420a324ce28,0xbe1cf1708d11d805,
0xc08624242f008380,0xbe1ceea988c5a417,
0xc0862427b94a7910,0xbe1cef166a7bbca5,
0xc086242b420411d0,0xbe1cf0c9d9e86a38,
0xc086242ec92eaee8,0xbe1cef0946455411,
0xc08624324ecbaf98,0xbe1cefea60907739,
0xc0862435d2dc7160,0xbe1cf1ed0934ce42,
0xc086243955624ff8,0xbe1cf191ba746c7d,
0xc086243cd65ea548,0xbe1ceeec78cf2a7e,
0xc086244055d2c968,0xbe1cef345284c119,
0xc0862443d3c012b8,0xbe1cf24f77355219,
0xc08624475027d5e8,0xbe1cf05bf087e114,
0xc086244acb0b65d0,0xbe1cef3504a32189,
0xc086244e446c1398,0xbe1ceff54b2a406f,
0xc0862451bc4b2eb8,0xbe1cf0757d54ed4f,
0xc086245532aa04f0,0xbe1cf0c8099fdfd5,
0xc0862458a789e250,0xbe1cf0b173796a31,
0xc086245c1aec1138,0xbe1cf11d8734540d,
0xc086245f8cd1da60,0xbe1cf1916a723ceb,
0xc0862462fd3c84d8,0xbe1cf19a911e1da7,
0xc08624666c2d5608,0xbe1cf23a9ef72e4f,
0xc0862469d9a591c0,0xbe1cef503d947663,
0xc086246d45a67a18,0xbe1cf0fceeb1a0b2,
0xc0862470b0314fa8,0xbe1cf107e27e4fbc,
0xc086247419475160,0xbe1cf03dd9922331,
0xc086247780e9bc98,0xbe1cefce1a10e129,
0xc086247ae719cd18,0xbe1ceea47f73c4f6,
0xc086247e4bd8bd10,0xbe1ceec0ac56d100,
0xc0862481af27c528,0xbe1cee8a6593278a,
0xc086248511081c70,0xbe1cf2231dd9dec7,
0xc0862488717af888,0xbe1cf0b4b8ed7da8,
0xc086248bd0818d68,0xbe1cf1bd8d835002,
0xc086248f2e1d0d98,0xbe1cf259acc107f4,
0xc08624928a4eaa20,0xbe1cee897636b00c,
0xc0862495e5179270,0xbe1cee757f20c326,
0xc08624993e78f490,0xbe1cefafd3aa54a4,
0xc086249c9673fd10,0xbe1cee7298d38b97,
0xc086249fed09d6f8,0xbe1ceedc158d4ceb,
0xc08624a3423babe0,0xbe1cf2282987cb2e,
0xc08624a6960aa400,0xbe1cefe7381ecc4b,
0xc08624a9e877e600,0xbe1cef328dbbce80,
0xc08624ad39849728,0xbe1cefde45f3cc71,
0xc08624b08931db58,0xbe1cefa8b89433b9,
0xc08624b3d780d500,0xbe1cef6773c0b139,
0xc08624b72472a528,0xbe1cf031c931c11f,
0xc08624ba70086b78,0xbe1cf088f49275e7,
0xc08624bdba434630,0xbe1cf17de0eaa86d,
0xc08624c103245238,0xbe1cefd492f1ba75,
0xc08624c44aacab08,0xbe1cf1253e154466,
0xc08624c790dd6ad0,0xbe1cf0fb09ee6d55,
0xc08624cad5b7aa58,0xbe1cf1f08dd048fe,
0xc08624ce193c8120,0xbe1ceeca0809697f,
0xc08624d15b6d0538,0xbe1cef8d5662d968,
0xc08624d49c4a4b78,0xbe1cee97b556ed78,
0xc08624d7dbd56750,0xbe1cf1b14b6acb75,
0xc08624db1a0f6b00,0xbe1cef1e860623f2,
0xc08624de56f96758,0xbe1ceeaf4d156f3d,
0xc08624e192946bf0,0xbe1ceecc12b400ed,
0xc08624e4cce18710,0xbe1cf180c40c794f,
0xc08624e805e1c5c8,0xbe1cf185a08f7f65,
0xc08624eb3d9633d8,0xbe1cef45fc924078,
0xc08624ee73ffdbb0,0xbe1cf1e4f457f32a,
0xc08624f1a91fc6a0,0xbe1cf040147b8a5a,
0xc08624f4dcf6fc98,0xbe1cf1effca0dfb2,
0xc08624f80f868468,0xbe1cf0470146e5bc,
0xc08624fb40cf6390,0xbe1cef4dd186e501,
0xc08624fe70d29e60,0xbe1ceebe257f66c7,
0xc08625019f9137f0,0xbe1ceefb7a1c395c,
0xc0862504cd0c3220,0xbe1cf209dedfed8c,
0xc0862507f9448db0,0xbe1cf082da464994,
0xc086250b243b4a18,0xbe1cee88694a73cf,
0xc086250e4df165a0,0xbe1cf0b61e8f0531,
0xc08625117667dd78,0xbe1cf1106599c962,
0xc08625149d9fad98,0xbe1ceff1ee88af1f,
0xc0862517c399d0c8,0xbe1cf0f746994ef6,
0xc086251ae85740b8,0xbe1cefe8a1d077e4,
0xc086251e0bd8f5e0,0xbe1cf1a1da036092,
0xc08625212e1fe7a8,0xbe1cf0f8a7786fcd,
0xc08625244f2d0c48,0xbe1cefa1174a07a7,
0xc08625276f0158d8,0xbe1cef1043aa5b25,
0xc086252a8d9dc150,0xbe1cf15d521c169d,
0xc086252dab033898,0xbe1cf220bba8861f,
0xc0862530c732b078,0xbe1cef51e310eae2,
0xc0862533e22d1988,0xbe1cf222fcedd8ae,
0xc0862536fbf36370,0xbe1cefdb4da4bda8,
0xc086253a14867ca0,0xbe1ceeafc1112171,
0xc086253d2be75280,0xbe1cee99dfb4b408,
0xc08625404216d160,0xbe1cf22d2536f06b,
0xc08625435715e498,0xbe1cef6abbf2e268,
0xc08625466ae57648,0xbe1cf093a14789f5,
0xc08625497d866fa0,0xbe1cf0f93655603c,
0xc086254c8ef9b8b8,0xbe1cf1cc40c9aafc,
0xc086254f9f4038a8,0xbe1ceeea5f4e9157,
0xc0862552ae5ad568,0xbe1cefa9f52d4997,
0xc0862555bc4a7400,0xbe1cefa490a638ff,
0xc0862558c90ff868,0xbe1cef7fcf797d6f,
0xc086255bd4ac4590,0xbe1cf1b4c51113c9,
0xc086255edf203d78,0xbe1cef55e5b4a55d,
0xc0862561e86cc100,0xbe1cf0d37a25f9dc,
0xc0862564f092b028,0xbe1ceebe9efc19d9,
0xc0862567f792e9d8,0xbe1cee8ad30a57b5,
0xc086256afd6e4c08,0xbe1cef4e1817b90b,
0xc086256e0225b3b8,0xbe1cee7fa9229996,
0xc086257105b9fce0,0xbe1cf0b54963d945,
0xc0862574082c0298,0xbe1cee5f2f3c7995,
0xc0862577097c9ee0,0xbe1cf0828e303a2c,
0xc086257a09acaae0,0xbe1cf172c3078947,
0xc086257d08bcfec0,0xbe1cf189252afa22,
0xc086258006ae71b8,0xbe1cefdb80426923,
0xc08625830381da08,0xbe1ceef1391a0372,
0xc0862585ff380d00,0xbe1cf17720c78d13,
0xc0862588f9d1df18,0xbe1ceef1f9027d83,
0xc086258bf35023b8,0xbe1cf06fac99dec9,
0xc086258eebb3ad78,0xbe1cf1373eeb45c0,
0xc0862591e2fd4e00,0xbe1cef777536bb81,
0xc0862594d92dd600,0xbe1cf0f43ca40766,
0xc0862597ce461558,0xbe1cefb2cfc6766b,
0xc086259ac246daf0,0xbe1ceea49e64ffa2,
0xc086259db530f4c8,0xbe1cf250fa457dec,
0xc08625a0a7053018,0xbe1cf17d8bb2a44e,
0xc08625a397c45918,0xbe1cf1d5906d54b7,
0xc08625a6876f3b30,0xbe1cf08fe7b31780,
0xc08625a97606a0e0,0xbe1cef13edfc9d11,
0xc08625ac638b53c8,0xbe1cef9d2b107219,
0xc08625af4ffe1cb0,0xbe1cf1ddd4ff6160,
0xc08625b23b5fc390,0xbe1cefa02a996495,
0xc08625b525b10f68,0xbe1cf166a7e37ee5,
0xc08625b80ef2c680,0xbe1cef0b171068a5,
0xc08625baf725ae28,0xbe1cf05c80779283,
0xc08625bdde4a8af0,0xbe1cf1bbfbffb889,
0xc08625c0c4622090,0xbe1cf0b8666c0124,
0xc08625c3a96d31e0,0xbe1cf0a8fcf47a86,
0xc08625c68d6c80f0,0xbe1cef46e18cb092,
0xc08625c97060cef0,0xbe1cf1458a350efb,
0xc08625cc524adc58,0xbe1ceeea1dadce12,
0xc08625cf332b68b0,0xbe1cf0a1bfdc44c7,
0xc08625d2130332d0,0xbe1cef96d02da73e,
0xc08625d4f1d2f8a8,0xbe1cf2451c3c7701,
0xc08625d7cf9b7778,0xbe1cf10d08f83812,
0xc08625daac5d6ba0,0xbe1ceec5b4895c5e,
0xc08625dd881990b0,0xbe1cf14e1325c5e4,
0xc08625e062d0a188,0xbe1cf21d0904be12,
0xc08625e33c835838,0xbe1ceed0839bcf21,
0xc08625e615326df0,0xbe1cf1bb944889d2,
0xc08625e8ecde9b48,0xbe1cee738e85eece,
0xc08625ebc38897e0,0xbe1cf25c2bc6ef12,
0xc08625ee99311ac8,0xbe1cf132b70a41ad,
0xc08625f16dd8da28,0xbe1cf1984236a6e3,
0xc08625f441808b78,0xbe1cf19ae74998f9,
0xc08625f71428e370,0xbe1cef3e175d61a1,
0xc08625f9e5d295f8,0xbe1cf101f9868fd9,
0xc08625fcb67e5658,0xbe1cee69db83dcd2,
0xc08625ff862cd6f8,0xbe1cf081b636af51,
0xc086260254dec9a8,0xbe1cee62c7d59b3e,
0xc08626052294df58,0xbe1cf1b745c57716,
0xc0862607ef4fc868,0xbe1cef3d2800ea23,
0xc086260abb103458,0xbe1cef480ff1acd2,
0xc086260d85d6d200,0xbe1cf2424c9a17ef,
0xc08626104fa44f90,0xbe1cf12cfde90fd5,
0xc086261318795a68,0xbe1cf21f590dd5b6,
0xc0862615e0569f48,0xbe1cf0c50f9cd28a,
0xc0862618a73cca30,0xbe1ceedbdb520545,
0xc086261b6d2c8668,0xbe1cf0b030396011,
0xc086261e32267e98,0xbe1cf19917010e96,
0xc0862620f62b5cb0,0xbe1cf07331355985,
0xc0862623b93bc9e8,0xbe1cf01ae921a1c3,
0xc08626267b586ed0,0xbe1cefe5cf0dbf0c,
0xc08626293c81f348,0xbe1cf01b258aeb50,
0xc086262bfcb8fe88,0xbe1cee6b9e7f4c68,
0xc086262ebbfe3710,0xbe1cee684a9b21c9,
0xc08626317a5242b8,0xbe1cf1f8bcde9a8b,
0xc086263437b5c6c0,0xbe1cf1d063d36238,
0xc0862636f42967a8,0xbe1cf1e31a19075e,
0xc0862639afadc950,0xbe1cf1d8efdf7e7d,
0xc086263c6a438ef0,0xbe1cf1812ee72dba,
0xc086263f23eb5b18,0xbe1cf1449a9a2279,
0xc0862641dca5cfb8,0xbe1cee96edce5085,
0xc086264494738e08,0xbe1cf06797bd03b2,
0xc08626474b5536b8,0xbe1cef91b9b7ffc1,
0xc086264a014b69c0,0xbe1cef4b6721278f,
0xc086264cb656c678,0xbe1cf1942925eb4a,
0xc086264f6a77eba8,0xbe1cefa2c7bc2e39,
0xc08626521daf7758,0xbe1cf252595aceb3,
0xc0862654cffe0718,0xbe1cee8e9ae47ec2,
0xc0862657816437a8,0xbe1cf1bf913828fa,
0xc086265a31e2a558,0xbe1cf23475d6b366,
0xc086265ce179ebc8,0xbe1cef8df00a922b,
0xc086265f902aa5f0,0xbe1cef279bfa43e0,
0xc08626623df56e38,0xbe1cf080e10b8365,
0xc0862664eadade70,0xbe1cf1a518f9b544,
0xc086266796db8fd0,0xbe1cef9308fed9e9,
0xc086266a41f81ae8,0xbe1ceea3ae6b19c9,
0xc086266cec3117b8,0xbe1ceef06003d4c2,
0xc086266f95871da8,0xbe1cf0b8457ffb0c,
0xc08626723dfac390,0xbe1cf0c526745ad6,
0xc0862674e58c9fa8,0xbe1cf0cf91ff7b5d,
0xc08626778c3d4798,0xbe1cefe260819380,
0xc086267a320d5070,0xbe1ceebd90aa27a3,
0xc086267cd6fd4ea8,0xbe1cf0388121dffa,
0xc086267f7b0dd630,0xbe1cf1a3881435f1,
0xc08626821e3f7a68,0xbe1cef28e9d9ac52,
0xc0862684c092ce08,0xbe1cf02d300062dd,
0xc086268762086350,0xbe1cefaee1edfa35,
0xc086268a02a0cbe0,0xbe1cf0a5a052e936,
0xc086268ca25c98d8,0xbe1cee60a4a497ed,
0xc086268f413c5ab0,0xbe1cf0e4a5d0cf49,
0xc0862691df40a170,0xbe1cf149235a4e6e,
0xc08626947c69fc80,0xbe1cf215180b9fcc,
0xc086269718b8fac8,0xbe1cef9b156a9840,
0xc0862699b42e2a90,0xbe1cf054c91441be,
0xc086269c4eca19a8,0xbe1cf13ded26512c,
0xc086269ee88d5550,0xbe1cf22ea4d8ac06,
0xc08626a181786a40,0xbe1cf2354666ee2e,
0xc08626a4198be4a8,0xbe1cefef936752b3,
0xc08626a6b0c85020,0xbe1cf1e360a9db68,
0xc08626a9472e37d8,0xbe1ceed6aeb812c5,
0xc08626abdcbe2650,0xbe1cf227340b4986,
0xc08626ae7178a5b0,0xbe1cf0215a0cbe0d,
0xc08626b1055e3f70,0xbe1cf256adf0ae26,
0xc08626b3986f7ca8,0xbe1ceff3c67aed06,
0xc08626b62aace5c8,0xbe1cf2159fb93652,
0xc08626b8bc1702e0,0xbe1cf01e6dbd1c7f,
0xc08626bb4cae5b60,0xbe1cf009e75d1c0c,
0xc08626bddc737648,0xbe1ceec10a020e73,
0xc08626c06b66da08,0xbe1cf06d5783eee7,
0xc08626c2f9890ca0,0xbe1cf0cb8f169ffe,
0xc08626c586da9388,0xbe1cef7de2452430,
0xc08626c8135bf3b0,0xbe1cf05da6f783ae,
0xc08626ca9f0db198,0xbe1cefcc877d681d,
0xc08626cd29f05138,0xbe1cef0531954ab3,
0xc08626cfb4045608,0xbe1cf06b8565ea3d,
0xc08626d23d4a4310,0xbe1cefdc455d9d7e,
0xc08626d4c5c29ad0,0xbe1ceefc47e8fa64,
0xc08626d74d6ddf48,0xbe1cf1872bf033f2,
0xc08626d9d44c9210,0xbe1cf19d91087f9d,
0xc08626dc5a5f3438,0xbe1cf012d444c6ab,
0xc08626dedfa64650,0xbe1cf0ba528ee153,
0xc08626e164224880,0xbe1ceeb431709788,
0xc08626e3e7d3ba60,0xbe1cf0b9af31a6a5,
0xc08626e66abb1b28,0xbe1cf168fb2e135b,
0xc08626e8ecd8e990,0xbe1cef9097461c93,
0xc08626eb6e2da3d0,0xbe1cee7a434735d8,
0xc08626edeeb9c7a8,0xbe1cf235732b86f2,
0xc08626f06e7dd280,0xbe1cefe1510b89e6,
0xc08626f2ed7a4120,0xbe1cf1f64b9b80ef,
0xc08626f56baf9000,0xbe1cf08f320ca339,
0xc08626f7e91e3b08,0xbe1cf1b1de2808a1,
0xc08626fa65c6bdc0,0xbe1cf1976d778b28,
0xc08626fce1a99338,0xbe1ceef40a4f076f,
0xc08626ff5cc73600,0xbe1cef3e45869ce3,
0xc0862701d7202048,0xbe1ceef601b4c9d6,
0xc086270450b4cbc0,0xbe1cf1eaf0b57fd6,
0xc0862706c985b1c0,0xbe1cef82a44990f3,
0xc086270941934b10,0xbe1ceefe32981f2c,
0xc086270bb8de1018,0xbe1cefbf6f5a0445,
0xc086270e2f6678d0,0xbe1cf18dba75792c,
0xc0862710a52cfcc8,0xbe1cf0da64ce995f,
0xc08627131a321318,0xbe1cef04ac0fb802,
0xc08627158e763268,0xbe1cee9d4e2ad9bd,
0xc086271801f9d0f8,0xbe1cefa9b55407b5,
0xc086271a74bd64a0,0xbe1cefe6bd329570,
0xc086271ce6c162c8,0xbe1cef0b1205dc85,
0xc086271f58064068,0xbe1cef092a785e3f,
0xc0862721c88c7210,0xbe1cf050dcdaac30,
0xc086272438546be8,0xbe1cf210907ded8b,
0xc0862726a75ea1b8,0xbe1cee760be44f99,
0xc086272915ab86c0,0xbe1ceeeee07c2bcc,
0xc086272b833b8df0,0xbe1cf06874992df5,
0xc086272df00f29d0,0xbe1cef8fac5d4899,
0xc08627305c26cc70,0xbe1cf1103241cc99,
0xc0862732c782e788,0xbe1cf1d35fef83fe,
0xc08627353223ec68,0xbe1cef3ec8133e1d,
0xc08627379c0a4be8,0xbe1cef7261daccd8,
0xc086273a05367688,0xbe1cf18656c50806,
0xc086273c6da8dc68,0xbe1cf1c8736e049a,
0xc086273ed561ed38,0xbe1cf1f93bff4911,
0xc08627413c621848,0xbe1cf188a4ea680c,
0xc0862743a2a9cc80,0xbe1cf1d270930c80,
0xc086274608397868,0xbe1cf25a328c28e2,
0xc08627486d118a28,0xbe1cf106f90aa3b8,
0xc086274ad1326f80,0xbe1cee5e9d2e885a,
0xc086274d349c95c0,0xbe1cf1c0bac27228,
0xc086274f975069f8,0xbe1cf1a1500f9b1c,
0xc0862751f94e58c0,0xbe1cefc30663ac44,
0xc08627545a96ce48,0xbe1cf17123e427a2,
0xc0862756bb2a3678,0xbe1cefb92749fea4,
0xc08627591b08fcc0,0xbe1cefa40e1ea74a,
0xc086275b7a338c40,0xbe1cee6f4612c3e9,
0xc086275dd8aa4fa8,0xbe1cf1c54a053627,
0xc0862760366db168,0xbe1ceff5eb503d9e,
0xc0862762937e1b70,0xbe1cf02e47f10cee,
0xc0862764efdbf768,0xbe1ceeb06e1d0dad,
0xc08627674b87ae88,0xbe1cf10aadd6dba5,
0xc0862769a681a9c0,0xbe1cf24e9913d30f,
0xc086276c00ca51a0,0xbe1cef47b301e312,
0xc086276e5a620e48,0xbe1ceeb1cefc2e85,
0xc0862770b3494788,0xbe1cf16f1fbbe011,
0xc08627730b8064e8,0xbe1ceebdf75174c7,
0xc08627756307cd70,0xbe1cf06e3871a0da,
0xc0862777b9dfe7f0,0xbe1cef16799fd554,
0xc086277a10091ac0,0xbe1cf248dabf5377,
0xc086277c6583cc00,0xbe1cf0c78d92a2cd,
0xc086277eba506158,0xbe1cf0b911b029f0,
0xc08627810e6f4028,0xbe1cefdc24719766,
0xc086278361e0cd70,0xbe1cefbb6562b7e7,
0xc0862785b4a56dd8,0xbe1cf1e0afb349ec,
0xc086278806bd85c0,0xbe1cf008292e52fc,
0xc086278a58297918,0xbe1cf053073872bf,
0xc086278ca8e9ab88,0xbe1cf17a0a55a947,
0xc086278ef8fe8068,0xbe1ceeffb0b60234,
0xc086279148685aa0,0xbe1cf162204794a8,
0xc086279397279ce0,0xbe1cf24cc8cb48ac,
0xc0862795e53ca978,0xbe1cf0c9be68d5c3,
0xc086279832a7e258,0xbe1cf172cd3d7388,
0xc086279a7f69a930,0xbe1ceea2465fbce5,
0xc086279ccb825f40,0xbe1cf0a386d2500f,
0xc086279f16f26590,0xbe1cf1e338ddc18a,
0xc08627a161ba1cd0,0xbe1cef1f5049867f,
0xc08627a3abd9e548,0xbe1cef96c1ea8b1f,
0xc08627a5f5521f00,0xbe1cf138f6fd3c26,
0xc08627a83e2329b0,0xbe1cf0d4fcbfdf3a,
0xc08627aa864d64b0,0xbe1cf24870c12c81,
0xc08627accdd12f18,0xbe1cf0ae2a56348d,
0xc08627af14aee7a0,0xbe1cee8ca1a9b893,
0xc08627b15ae6eca8,0xbe1cf20414d637b0,
0xc08627b3a0799c60,0xbe1cf0fc6b7b12d8,
0xc08627b5e5675488,0xbe1cf152d93c4a00,
0xc08627b829b072a0,0xbe1cf1073f9b77c2,
0xc08627ba6d5553d8,0xbe1cee694f97d5a4,
0xc08627bcb0565500,0xbe1cf0456b8239d7,
0xc08627bef2b3d2b0,0xbe1cf211497127e3,
0xc08627c1346e2930,0xbe1cf01856c0384d,
0xc08627c37585b468,0xbe1cefa7dd05479e,
0xc08627c5b5fad000,0xbe1cef3ae8e50b93,
0xc08627c7f5cdd750,0xbe1ceea5f32fdd3a,
0xc08627ca34ff2560,0xbe1cef424caeb8d9,
0xc08627cc738f14f0,0xbe1cf0194d07a81f,
0xc08627ceb17e0070,0xbe1cf20f452000c1,
0xc08627d0eecc4210,0xbe1cf00e356218e4,
0xc08627d32b7a33a0,0xbe1cef30484b4bcb,
0xc08627d567882eb0,0xbe1ceeea11a6641b,
0xc08627d7a2f68c80,0xbe1cf13492d5bd7b,
0xc08627d9ddc5a618,0xbe1ceeb7048fad96,
0xc08627dc17f5d418,0xbe1ceef0666f0477,
0xc08627de51876ee8,0xbe1cf060d4b8b5c2,
0xc08627e08a7acea8,0xbe1cf0b2a4b6ff8c,
0xc08627e2c2d04b28,0xbe1cf0e34809a875,
0xc08627e4fa883bf0,0xbe1cf16bf74a3522,
0xc08627e731a2f848,0xbe1cee6a24623d57,
0xc08627e96820d718,0xbe1cefc7b4f1528e,
0xc08627eb9e022f18,0xbe1cf163051f3548,
0xc08627edd34756b8,0xbe1cef36b3366305,
0xc08627f007f0a408,0xbe1cf18134625550,
0xc08627f23bfe6cf0,0xbe1cf0ec32ec1a11,
0xc08627f46f710700,0xbe1ceeb3b64f3edc,
0xc08627f6a248c778,0xbe1cf0cd15805bc8,
0xc08627f8d4860368,0xbe1cf20db3bddebe,
0xc08627fb06290f90,0xbe1cf25188430e25,
0xc08627fd37324070,0xbe1ceea1713490f9,
0xc08627ff67a1ea28,0xbe1cf159521d234c,
0xc0862801977860b8,0xbe1cf24dfe50783b,
0xc0862803c6b5f7d0,0xbe1ceef2ef89a60b,
0xc0862805f55b02c8,0xbe1cee7fc919d62c,
0xc08628082367d4c0,0xbe1cf215a7fb513a,
0xc086280a50dcc0a8,0xbe1cf0e4401c5ed4,
0xc086280c7dba1910,0xbe1cf04ec734d256,
0xc086280eaa003050,0xbe1cf010ad787fea,
0xc0862810d5af5880,0xbe1cee622478393d,
0xc086281300c7e368,0xbe1cf01c7482564f,
0xc08628152b4a22a0,0xbe1cf0de20d33536,
0xc086281755366778,0xbe1cef2edae5837d,
0xc08628197e8d02f0,0xbe1cf0a345318cc9,
0xc086281ba74e45d8,0xbe1cf20085aa34b8,
0xc086281dcf7a80c0,0xbe1cef5fa845ad83,
0xc086281ff71203e0,0xbe1cf050d1df69c4,
0xc08628221e151f48,0xbe1ceffe43c035b9,
0xc0862824448422b8,0xbe1cf14f3018d3c2,
0xc08628266a5f5dc0,0xbe1cef0a5fbae83d,
0xc08628288fa71f98,0xbe1ceff8a95b72a1,
0xc086282ab45bb750,0xbe1cef073aa9849b,
0xc086282cd87d73a8,0xbe1cef69b3835c02,
0xc086282efc0ca328,0xbe1cf0bc139379a9,
0xc08628311f099420,0xbe1cef247a9ec596,
0xc086283341749490,0xbe1cef74bbcc488a,
0xc0862835634df248,0xbe1cef4bc42e7b8e,
0xc08628378495fad0,0xbe1cf136d4d5a810,
0xc0862839a54cfb80,0xbe1cf0d290b24dd8,
0xc086283bc5734168,0xbe1ceeebde8e0065,
0xc086283de5091950,0xbe1cf1a09f60aa1e,
0xc0862840040ecfe0,0xbe1cf0803947a234,
0xc08628422284b168,0xbe1cf0abf7638127,
0xc0862844406b0a08,0xbe1cf0f73ee12058,
0xc08628465dc225a0,0xbe1cf2079971b26c,
0xc08628487a8a4fe0,0xbe1cee74957564b1,
0xc086284a96c3d420,0xbe1ceee77c1b7d43,
0xc086284cb26efd90,0xbe1cf23addba6e09,
0xc086284ecd8c1730,0xbe1cf199f4a1da60,
0xc0862850e81b6bb0,0xbe1cf09fdea81393,
0xc0862853021d4588,0xbe1cf176adb417f7,
0xc08628551b91ef00,0xbe1cf0f64f84a8da,
0xc08628573479b220,0xbe1ceec34cf49523,
0xc08628594cd4d8a8,0xbe1cf16d60fbe0bb,
0xc086285b64a3ac40,0xbe1cee8de7acfc7b,
0xc086285d7be67630,0xbe1ceee6256cce8d,
0xc086285f929d7fa0,0xbe1cee7d66a3d8a5,
0xc0862861a8c91170,0xbe1cf0bef8265792,
0xc0862863be697458,0xbe1cf097f890c6f8,
0xc0862865d37ef0c8,0xbe1cf09502d5c3fc,
0xc0862867e809cf00,0xbe1ceeffb239dac7,
0xc0862869fc0a56f8,0xbe1cf1fbfff95c98,
0xc086286c0f80d090,0xbe1cefa57ad3eef7,
0xc086286e226d8348,0xbe1cf22c58b9183d,
0xc086287034d0b690,0xbe1ceff262d0a248,
0xc086287246aab180,0xbe1cefa7bc194186,
0xc086287457fbbb08,0xbe1cf06782d784d9,
0xc086287668c419e0,0xbe1cf1d44d0eaa07,
0xc086287879041490,0xbe1cf034803c8a48,
0xc086287a88bbf158,0xbe1cf08e84916b6f,
0xc086287c97ebf650,0xbe1cf0c4d3dc1bc7,
0xc086287ea6946958,0xbe1cefb1e4625943,
0xc0862880b4b59010,0xbe1cf143efdd1fd0,
0xc0862882c24faff8,0xbe1cee9896d016da,
0xc0862884cf630e38,0xbe1cf2186072f2cc,
0xc0862886dbefeff0,0xbe1cef9217633d34,
0xc0862888e7f699e0,0xbe1cf05603549486,
0xc086288af37750b0,0xbe1cef50fff513d3,
0xc086288cfe7258c0,0xbe1cf127713b32d0,
0xc086288f08e7f650,0xbe1cf05015520f3d,
0xc086289112d86d58,0xbe1cf12eb458b26f,
0xc08628931c4401a8,0xbe1cf22eae2887ed,
0xc0862895252af6e0,0xbe1cefdd6656dd2d,
0xc08628972d8d9058,0xbe1cf1048ea4e646,
0xc0862899356c1150,0xbe1ceec4501167e9,
0xc086289b3cc6bcb8,0xbe1cf0ad52becc3f,
0xc086289d439dd568,0xbe1cf0daa4e00e35,
0xc086289f49f19df8,0xbe1cf00b80de8d6a,
0xc08628a14fc258c8,0xbe1cf1bcf2ea8464,
0xc08628a355104818,0xbe1cf0435e2782b0,
0xc08628a559dbade0,0xbe1cf0e3e1a5f56c,
0xc08628a75e24cbf8,0xbe1cefed9d5a721d,
0xc08628a961ebe3f8,0xbe1cf0d2d74321e2,
0xc08628ab65313750,0xbe1cf24200eb55e9,
0xc08628ad67f50740,0xbe1cf23e9d7cf979,
0xc08628af6a3794d0,0xbe1cf23a088f421c,
0xc08628b16bf920e0,0xbe1cef2c1de1ab32,
0xc08628b36d39ec08,0xbe1cf1abc231f7b2,
0xc08628b56dfa36d0,0xbe1cf2074d5ba303,
0xc08628b76e3a4180,0xbe1cf05cd5eed880,
0x0000000000000000,0x0000000000000000,
0x0000000000000000,0x0000000000000000,
0x0000000000000000,0x0000000000000000,
0x8000000000000000,0xbf5ff802a9ab10e6,
0xbf6ff00aa2b10bc0,0xbf77ee11ebd82e94,
0xbf7fe02a6b106789,0xbf83e7295d25a7d9,
0xbf87dc475f810a77,0xbf8bcf712c74384c,
0xbf8fc0a8b0fc03e4,0xbf91d7f7eb9eebe7,
0xbf93cea44346a575,0xbf95c45a51b8d389,
0xbf97b91b07d5b11b,0xbf99ace7551cc514,
0xbf9b9fc027af9198,0xbf9d91a66c543cc4,
0xbf9f829b0e783300,0xbfa0b94f7c196176,
0xbfa1b0d98923d980,0xbfa2a7ec2214e873,
0xbfa39e87b9febd60,0xbfa494acc34d911c,
0xbfa58a5bafc8e4d5,0xbfa67f94f094bd98,
0xbfa77458f632dcfc,0xbfa868a83083f6cf,
0xbfa95c830ec8e3eb,0xbfaa4fe9ffa3d235,
0xbfab42dd711971bf,0xbfac355dd0921f2d,
0xbfad276b8adb0b52,0xbfae19070c276016,
0xbfaf0a30c01162a6,0xbfaffae9119b9303,
0xbfb075983598e471,0xbfb0ed839b5526fe,
0xbfb16536eea37ae1,0xbfb1dcb263db1944,
0xbfb253f62f0a1417,0xbfb2cb0283f5de1f,
0xbfb341d7961bd1d1,0xbfb3b87598b1b6ee,
0xbfb42edcbea646f0,0xbfb4a50d3aa1b040,
0xbfb51b073f06183f,0xbfb590cafdf01c28,
0xbfb60658a93750c4,0xbfb67bb0726ec0fc,
0xbfb6f0d28ae56b4c,0xbfb765bf23a6be13,
0xbfb7da766d7b12cd,0xbfb84ef898e8282a,
0xbfb8c345d6319b21,0xbfb9375e55595ede,
0xbfb9ab42462033ad,0xbfba1ef1d8061cd4,
0xbfba926d3a4ad563,0xbfbb05b49bee43fe,
0xbfbb78c82bb0eda1,0xbfbbeba818146765,
0xbfbc5e548f5bc743,0xbfbcd0cdbf8c13e1,
0xbfbd4313d66cb35d,0xbfbdb5270187d927,
0xbfbe27076e2af2e6,0xbfbe98b549671467,
0xbfbf0a30c01162a6,0xbfbf7b79fec37ddf,
0xbfbfec9131dbeabb,0xbfc02ebb42bf3d4b,
0xbfc0671512ca596e,0xbfc09f561ee719c3,
0xbfc0d77e7cd08e59,0xbfc10f8e422539b1,
0xbfc14785846742ac,0xbfc17f6458fca611,
0xbfc1b72ad52f67a0,0xbfc1eed90e2dc2c3,
0xbfc2266f190a5acb,0xbfc25ded0abc6ad2,
0xbfc29552f81ff523,0xbfc2cca0f5f5f251,
0xbfc303d718e47fd3,0xbfc33af575770e4f,
0xbfc371fc201e8f74,0xbfc3a8eb2d31a376,
0xbfc3dfc2b0ecc62a,0xbfc41682bf727bc0,
0xbfc44d2b6ccb7d1e,0xbfc483bccce6e3dd,
0xbfc4ba36f39a55e5,0xbfc4f099f4a230b2,
0xbfc526e5e3a1b438,0xbfc55d1ad4232d6f,
0xbfc59338d9982086,0xbfc5c940075972b9,
0xbfc5ff3070a793d4,0xbfc6350a28aaa758,
0xbfc66acd4272ad51,0xbfc6a079d0f7aad2,
0xbfc6d60fe719d21d,0xbfc70b8f97a1aa75,
0xbfc740f8f54037a5,0xbfc7764c128f2127,
0xbfc7ab890210d909,0xbfc7e0afd630c274,
0xbfc815c0a14357eb,0xbfc84abb75865139,
0xbfc87fa06520c911,0xbfc8b46f8223625b,
0xbfc8e928de886d41,0xbfc91dcc8c340bde,
0xbfc9525a9cf456b4,0xbfc986d3228180ca,
0xbfc9bb362e7dfb83,0xbfc9ef83d2769a34,
0xbfca23bc1fe2b563,0xbfca57df28244dcd,
0xbfca8becfc882f19,0xbfcabfe5ae46124c,
0xbfcaf3c94e80bff3,0xbfcb2797ee46320c,
0xbfcb5b519e8fb5a4,0xbfcb8ef670420c3b,
0xbfcbc286742d8cd6,0xbfcbf601bb0e44e2,
0xbfcc2968558c18c1,0xbfcc5cba543ae425,
0xbfcc8ff7c79a9a22,0xbfccc320c0176502,
0xbfccf6354e09c5dc,0xbfcd293581b6b3e7,
0xbfcd5c216b4fbb91,0xbfcd8ef91af31d5e,
0xbfcdc1bca0abec7d,0xbfcdf46c0c722d2f,
0xbfce27076e2af2e6,0xbfce598ed5a87e2f,
0xbfce8c0252aa5a60,0xbfcebe61f4dd7b0b,
0xbfcef0adcbdc5936,0xbfcf22e5e72f105d,
0xbfcf550a564b7b37,0xbfcf871b28955045,
0xbfcfb9186d5e3e2b,0xbfcfeb0233e607cc,
0xbfd00e6c45ad501d,0xbfd0274dc16c232f,
0xbfd0402594b4d041,0xbfd058f3c703ebc6,
0xbfd071b85fcd590d,0xbfd08a73667c57af,
0xbfd0a324e27390e3,0xbfd0bbccdb0d24bd,
0xbfd0d46b579ab74b,0xbfd0ed005f657da4,
0xbfd1058bf9ae4ad5,0xbfd11e0e2dad9cb7,
0xbfd136870293a8b0,0xbfd14ef67f88685a,
0xbfd1675cababa60e,0xbfd17fb98e15095d,
0xbfd1980d2dd4236f,0xbfd1b05791f07b49,
0xbfd1c898c16999fb,0xbfd1e0d0c33716be,
0xbfd1f8ff9e48a2f3,0xbfd211255986160c,
0xbfd22941fbcf7966,0xbfd241558bfd1404,
0xbfd2596010df763a,0xbfd27161913f853d,
0xbfd2895a13de86a3,0xbfd2a1499f762bc9,
0xbfd2b9303ab89d25,0xbfd2d10dec508583,
0xbfd2e8e2bae11d31,0xbfd300aead06350c,
0xbfd31871c9544185,0xbfd3302c16586588,
0xbfd347dd9a987d55,0xbfd35f865c93293e,
0xbfd3772662bfd85b,0xbfd38ebdb38ed321,
0xbfd3a64c556945ea,0xbfd3bdd24eb14b6a,
0xbfd3d54fa5c1f710,0xbfd3ecc460ef5f50,
0xbfd404308686a7e4,0xbfd41b941cce0bee,
0xbfd432ef2a04e814,0xbfd44a41b463c47c,
0xbfd4618bc21c5ec2,0xbfd478cd5959b3d9,
0xbfd49006804009d1,0xbfd4a7373cecf997,
0xbfd4be5f957778a1,0xbfd4d57f8fefe27f,
0xbfd4ec973260026a,0xbfd503a682cb1cb3,
0xbfd51aad872df82d,0xbfd531ac457ee77e,
0xbfd548a2c3add263,0xbfd55f9107a43ee2,
0xbfd5767717455a6c,0xbfd58d54f86e02f2,
0xbfd5a42ab0f4cfe2,0xbfd5baf846aa1b19,
0xbfd5d1bdbf5809ca,0xbfd5e87b20c2954a,
0xbfd5ff3070a793d4,0xbfd615ddb4bec13c,
0xbfd62c82f2b9c795,0x3fd61965cdb02c1f,
0x3fd602d08af091ec,0x3fd5ec433d5c35ae,
0x3fd5d5bddf595f30,0x3fd5bf406b543db2,
0x3fd5a8cadbbedfa1,0x3fd5925d2b112a59,
0x3fd57bf753c8d1fb,0x3fd565995069514c,
0x3fd54f431b7be1a9,0x3fd538f4af8f72fe,
0x3fd522ae0738a3d8,0x3fd50c6f1d11b97c,
0x3fd4f637ebba9810,0x3fd4e0086dd8baca,
0x3fd4c9e09e172c3c,0x3fd4b3c077267e9a,
0x3fd49da7f3bcc41f,0x3fd487970e958770,
0x3fd4718dc271c41b,0x3fd45b8c0a17df13,
0x3fd44591e0539f49,0x3fd42f9f3ff62642,
0x3fd419b423d5e8c7,0x3fd403d086cea79c,
0x3fd3edf463c1683e,0x3fd3d81fb5946dba,
0x3fd3c25277333184,0x3fd3ac8ca38e5c5f,
0x3fd396ce359bbf54,0x3fd3811728564cb2,
0x3fd36b6776be1117,0x3fd355bf1bd82c8b,
0x3fd3401e12aecba1,0x3fd32a84565120a8,
0x3fd314f1e1d35ce4,0x3fd2ff66b04ea9d4,
0x3fd2e9e2bce12286,0x3fd2d46602adccee,
0x3fd2bef07cdc9354,0x3fd2a982269a3dbf,
0x3fd2941afb186b7c,0x3fd27ebaf58d8c9d,
0x3fd269621134db92,0x3fd25410494e56c7,
0x3fd23ec5991eba49,0x3fd22981fbef797b,
0x3fd214456d0eb8d4,0x3fd1ff0fe7cf47a7,
0x3fd1e9e1678899f4,0x3fd1d4b9e796c245,
0x3fd1bf99635a6b95,0x3fd1aa7fd638d33f,
0x3fd1956d3b9bc2fa,0x3fd180618ef18adf,
0x3fd16b5ccbacfb73,0x3fd1565eed455fc3,
0x3fd14167ef367783,0x3fd12c77cd00713b,
0x3fd1178e8227e47c,0x3fd102ac0a35cc1c,
0x3fd0edd060b78081,0x3fd0d8fb813eb1ef,
0x3fd0c42d676162e3,0x3fd0af660eb9e279,
0x3fd09aa572e6c6d4,0x3fd085eb8f8ae797,
0x3fd07138604d5862,0x3fd05c8be0d9635a,
0x3fd047e60cde83b8,0x3fd03346e0106062,
0x3fd01eae5626c691,0x3fd00a1c6adda473,
0x3fcfeb2233ea07cd,0x3fcfc218be620a5e,
0x3fcf991c6cb3b379,0x3fcf702d36777df0,
0x3fcf474b134df229,0x3fcf1e75fadf9bde,
0x3fcef5ade4dcffe6,0x3fceccf2c8fe920a,
0x3fcea4449f04aaf5,0x3fce7ba35eb77e2a,
0x3fce530effe71012,0x3fce2a877a6b2c12,
0x3fce020cc6235ab5,0x3fcdd99edaf6d7e9,
0x3fcdb13db0d48940,0x3fcd88e93fb2f450,
0x3fcd60a17f903515,0x3fcd38666871f465,
0x3fcd1037f2655e7b,0x3fcce816157f1988,
0x3fccc000c9db3c52,0x3fcc97f8079d44ec,
0x3fcc6ffbc6f00f71,0x3fcc480c0005ccd1,
0x3fcc2028ab17f9b4,0x3fcbf851c067555f,
0x3fcbd087383bd8ad,0x3fcba8c90ae4ad19,
0x3fcb811730b823d2,0x3fcb5971a213acdb,
0x3fcb31d8575bce3d,0x3fcb0a4b48fc1b46,
0x3fcae2ca6f672bd4,0x3fcabb55c31693ad,
0x3fca93ed3c8ad9e3,0x3fca6c90d44b704e,
0x3fca454082e6ab05,0x3fca1dfc40f1b7f1,
0x3fc9f6c407089664,0x3fc9cf97cdce0ec3,
0x3fc9a8778debaa38,0x3fc981634011aa75,
0x3fc95a5adcf7017f,0x3fc9335e5d594989,
0x3fc90c6db9fcbcd9,0x3fc8e588ebac2dbf,
0x3fc8beafeb38fe8c,0x3fc897e2b17b19a5,
0x3fc871213750e994,0x3fc84a6b759f512f,
0x3fc823c16551a3c2,0x3fc7fd22ff599d4f,
0x3fc7d6903caf5ad0,0x3fc7b0091651528c,
0x3fc7898d85444c73,0x3fc7631d82935a86,
0x3fc73cb9074fd14d,0x3fc716600c914054,
0x3fc6f0128b756abc,0x3fc6c9d07d203fc7,
0x3fc6a399dabbd383,0x3fc67d6e9d785771,
0x3fc6574ebe8c133a,0x3fc6313a37335d76,
0x3fc60b3100b09476,0x3fc5e533144c1719,
0x3fc5bf406b543db2,0x3fc59958ff1d52f1,
0x3fc5737cc9018cdd,0x3fc54dabc26105d2,
0x3fc527e5e4a1b58d,0x3fc5022b292f6a45,
0x3fc4dc7b897bc1c8,0x3fc4b6d6fefe22a4,
0x3fc4913d8333b561,0x3fc46baf0f9f5db7,
0x3fc4462b9dc9b3dc,0x3fc420b32740fdd4,
0x3fc3fb45a59928cc,0x3fc3d5e3126bc27f,
0x3fc3b08b6757f2a9,0x3fc38b3e9e027479,
0x3fc365fcb0159016,0x3fc340c59741142e,
0x3fc31b994d3a4f85,0x3fc2f677cbbc0a96,
0x3fc2d1610c86813a,0x3fc2ac55095f5c59,
0x3fc28753bc11aba5,0x3fc2625d1e6ddf57,
0x3fc23d712a49c202,0x3fc2188fd9807263,
0x3fc1f3b925f25d41,0x3fc1ceed09853752,
0x3fc1aa2b7e23f72a,0x3fc185747dbecf34,
0x3fc160c8024b27b1,0x3fc13c2605c398c3,
0x3fc1178e8227e47c,0x3fc0f301717cf0fb,
0x3fc0ce7ecdccc28d,0x3fc0aa06912675d5,
0x3fc08598b59e3a07,0x3fc06135354d4b18,
0x3fc03cdc0a51ec0d,0x3fc0188d2ecf6140,
0x3fbfe89139dbd566,0x3fbfa01c9db57ce2,
0x3fbf57bc7d9005db,0x3fbf0f70cdd992e3,
0x3fbec739830a1120,0x3fbe7f1691a32d3e,
0x3fbe3707ee30487b,0x3fbdef0d8d466db9,
0x3fbda727638446a2,0x3fbd5f55659210e2,
0x3fbd179788219364,0x3fbccfedbfee13a8,
0x3fbc885801bc4b23,0x3fbc40d6425a5cb1,
0x3fbbf968769fca11,0x3fbbb20e936d6974,
0x3fbb6ac88dad5b1c,0x3fbb23965a52ff00,
0x3fbadc77ee5aea8c,0x3fba956d3ecade63,
0x3fba4e7640b1bc38,0x3fba0792e9277cac,
0x3fb9c0c32d4d2548,0x3fb97a07024cbe74,
0x3fb9335e5d594989,0x3fb8ecc933aeb6e8,
0x3fb8a6477a91dc29,0x3fb85fd927506a48,
0x3fb8197e2f40e3f0,0x3fb7d33687c293c9,
0x3fb78d02263d82d3,0x3fb746e100226ed9,
0x3fb700d30aeac0e1,0x3fb6bad83c1883b6,
0x3fb674f089365a7a,0x3fb62f1be7d77743,
0x3fb5e95a4d9791cb,0x3fb5a3abb01ade25,
0x3fb55e10050e0384,0x3fb518874226130a,
0x3fb4d3115d207eac,0x3fb48dae4bc31018,
0x3fb4485e03dbdfad,0x3fb403207b414b7f,
0x3fb3bdf5a7d1ee64,0x3fb378dd7f749714,
0x3fb333d7f8183f4b,0x3fb2eee507b40301,
0x3fb2aa04a44717a5,0x3fb26536c3d8c369,
0x3fb2207b5c78549e,0x3fb1dbd2643d190b,
0x3fb1973bd1465567,0x3fb152b799bb3cc9,
0x3fb10e45b3cae831,0x3fb0c9e615ac4e17,
0x3fb08598b59e3a07,0x3fb0415d89e74444,
0x3faffa6911ab9301,0x3faf723b517fc523,
0x3faeea31c006b87c,0x3fae624c4a0b5e1b,
0x3fadda8adc67ee4e,0x3fad52ed6405d86f,
0x3faccb73cdddb2cc,0x3fac441e06f72a9e,
0x3fabbcebfc68f420,0x3fab35dd9b58baad,
0x3faaaef2d0fb10fc,0x3faa282b8a936171,
0x3fa9a187b573de7c,0x3fa91b073efd7314,
0x3fa894aa149fb343,0x3fa80e7023d8ccc4,
0x3fa788595a3577ba,0x3fa70265a550e777,
0x3fa67c94f2d4bb58,0x3fa5f6e73078efb8,
0x3fa5715c4c03ceef,0x3fa4ebf43349e26f,
0x3fa466aed42de3ea,0x3fa3e18c1ca0ae92,
0x3fa35c8bfaa1306b,0x3fa2d7ae5c3c5bae,
0x3fa252f32f8d183f,0x3fa1ce5a62bc353a,
0x3fa149e3e4005a8d,0x3fa0c58fa19dfaaa,
0x3fa0415d89e74444,0x3f9f7a9b16782856,
0x3f9e72bf2813ce51,0x3f9d6b2725979802,
0x3f9c63d2ec14aaf2,0x3f9b5cc258b718e6,
0x3f9a55f548c5c43f,0x3f994f6b99a24475,
0x3f98492528c8cabf,0x3f974321d3d006d3,
0x3f963d6178690bd6,0x3f9537e3f45f3565,
0x3f9432a925980cc1,0x3f932db0ea132e22,
0x3f9228fb1fea2e28,0x3f912487a5507f70,
0x3f90205658935847,0x3f8e38ce3033310c,
0x3f8c317384c75f06,0x3f8a2a9c6c170462,
0x3f882448a388a2aa,0x3f861e77e8b53fc6,
0x3f841929f96832f0,0x3f82145e939ef1e9,
0x3f8010157588de71,0x3f7c189cbb0e27fb,
0x3f78121214586b54,0x3f740c8a747878e2,
0x3f70080559588b35,0x3f680904828985c0,
0x3f60040155d5889e,0x3f50020055655889,
0x0000000000000000,0x0000000000000000,
0x0000000000000000,0x0000000000000000,
0x0000000000000000,0x0000000000000000,
0x0000000000000000,0x0000000000000000};


static const unsigned long __tanh_table_f32[536]=
{0x0000000000000000,0x3ff00000022c70eb,
0xbed00e878cffa194,0xbfd551766d0607a9,
0xbe53d60ce3e4c297,0x3ff000024177cf5c,
0xbf1758bc94a51a25,0xbfd53eae67e0d4f0,
0xbe5a9e47ef32d6fe,0x3ff00002da983057,
0xbf1bd953509e94aa,0xbfd53bdb562eedd5,
0xbe6191bbe496d294,0x3ff0000390492017,
0xbf20727e814a57ce,0xbfd538de060a6f22,
0xbe66dafa2a893a25,0x3ff0000465e08cd1,
0xbf2341c765ef91b6,0xbfd535b6841faf9e,
0xbe6d5794e361e964,0x3ff000055ee2a0cb,
0xbf265e6c77e66c8b,0xbfd53264ddcceda6,
0xbe729c844d374a6e,0x3ff000067f019093,
0xbf29cc5348d6dce5,0xbfd52ee92121ed35,
0xbe775aea17eaa872,0x3ff00007ca1d66b8,
0xbf2d8f5eb98a2637,0xbfd52b435cdf9128,
0xbe7d04da28c343f0,0x3ff000094443ccf5,
0xbf30d5b76c947ae5,0xbfd52773a0776fad,
0xbe81dd77a12c51c7,0x3ff0000af1afd2da,
0xbf331230624c1680,0xbfd52379fc0b61df,
0xbe85d04eeeb3c435,0x3ff0000cd6c9b1f2,
0xbf357f0742faddd4,0xbfd51f56806d0e81,
0xbe8a6e289b59681b,0x3ff0000ef8268f72,
0xbf381e277a1b747a,0xbfd51b093f1d6fd4,
0xbe8fcbc40ee9abd5,0x3ff000115a883b6c,
0xbf3af17ac974b3d9,0xbfd516924a4c549c,
0xbe92ffbc60a3f956,0x3ff0001402dced8a,
0xbf3dfae9390c4801,0xbfd511f1b4d7dc3a,
0xbe9690a22f96d5ad,0x3ff00016f63eff5d,
0xbf409e2c839605bb,0xbfd50d27924bee00,
0xbe9aa56c65e72a73,0x3ff0001a39f4a43e,
0xbf425bd74c3d6667,0xbfd50833f6e1aba2,
0xbe9f4bd4ff1a83b0,0x3ff0001dd36f9ec2,
0xbf44376634149405,0xbfd50316f77edee5,
0xbea3b625387bb079,0x3ff00023e14cfba9,
0xbf47392f923218d2,0xbfd4fb1facdeb938,
0xbeaa6e24f543500a,0x3ff0002d5c6e8412,
0xbf4baf02bd7fdd70,0xbfd4efee6527a7de,
0xbeb16e3ebe2157d0,0x3ff00038990fee2f,
0xbf50569481c574cb,0xbfd4e419278da2b4,
0xbeb6a7b6723165d4,0x3ff00045cab4158e,
0xbf531d7c9c849108,0xbfd4d7a0bb33b152,
0xbebd0ee2a8654afd,0x3ff00055276f18d6,
0xbf562fdba3fb6c6c,0xbfd4ca85f1b93db2,
0xbec269d4036a207e,0x3ff00066e7da6e4e,
0xbf5991499fc36b3a,0xbfd4bcc9a72283d6,
0xbec7154b6c09cfe1,0x3ff0007b47086b80,
0xbf5d455433b4f8f4,0xbfd4ae6cc1bfe145,
0xbecca68cc64a0f8a,0x3ff00092827742f7,
0xbf60a7bf15a527af,0xbfd49f703214084c,
0xbed19e68676b241b,0x3ff000acda037b26,
0xbf62d99f836a02f8,0xbfd48fd4f2b91b28,
0xbed57cf4b0c7aa54,0x3ff000ca8fd9e1a1,
0xbf653a014548e686,0xbfd47f9c0844b38f,
0xbeda012b1b1a41e2,0x3ff000ebe868fdf4,
0xbf67ca9427e0a544,0xbfd46ec6812adb37,
0xbedf3eac5bf12194,0x3ff001112a520784,
0xbf6a8d01abda4dc4,0xbfd45d55759ffa4a,
0xbee2a541bc274267,0x3ff0013a9e5961f2,
0xbf6d82ecd080c540,0xbfd44b4a0779c0ad,
0xbee61d97609a27f4,0x3ff001688f56a3af,
0xbf7056f8efb683ec,0xbfd438a5620f0f74,
0xbeea145429edd370,0x3ff0019b4a242a67,
0xbf7207d31ca78d9b,0xbfd42568ba16e7cd,
0xbeee96370d52680f,0x3ff001d31d8e4115,
0xbf73d4cc11edc094,0xbfd411954d8664e7,
0xbef338c046215ef8,0x3ff00230c32c2ec1,
0xbf76bd019bcc5daf,0xbfd3f2c7156dc21e,
0xbef9b15eae411eae,0x3ff002c2df057a4d,
0xbf7b08ccd9ac1e30,0xbfd3c7a7a114fed8,
0xbf00e36483c373b3,0x3ff0036f419480d7,
0xbf7fd255d1777007,0xbfd39a453911d6ce,
0xbf05dfa04dd12059,0x3ff00438b2a03d8d,
0xbf828f8dbb4a9d10,0xbfd36aab704697d9,
0xbf0bf3e0c647defb,0x3ff005221063d36d,
0xbf857a2cb3c96102,0xbfd338e65bbb4fec,
0xbf11a506ed7c9d31,0x3ff0062e4d0ea92a,
0xbf88ab82c2761af3,0xbfd305028d6bd206,
0xbf1607c0922d9bf1,0x3ff007606c341961,
0xbf8c25e6da487bcf,0xbfd2cf0d0ee8f7b5,
0xbf1b3a8480a0a16d,0x3ff008bb802d02d6,
0xbf8feb8ae99fd100,0xbfd297135bd0911b,
0xbf20abb9bdb75c65,0x3ff00a42a76d8cd1,
0xbf91ff3d752bb9e6,0xbfd25d235c1f88b4,
0xbf243d3254425461,0x3ff00bf909d1795e,
0xbf94304e04d44942,0xbfd2214b5e61cfa6,
0xbf286070011b61ce,0x3ff00de1d5e1627e,
0xbf9689d5f4163f59,0xbfd1e39a11c3b42c,
0xbf2d250b366a79e8,0x3ff010003e134001,
0xbf990c9ff91f6f81,0xbfd1a41e80084cdc,
0xbf314db5ddc2a30e,0x3ff012577608921b,
0xbf9bb9626875b0c9,0xbfd162e80768a9d0,
0xbf346a6133808864,0x3ff014eaafcc88a3,
0xbf9e90bef9bf7419,0xbfd12006545f7fad,
0xbf37f180dc3848ea,0x3ff017bd19147861,
0xbfa0c9a14c702e07,0xbfd0db895b650092,
0xbf3bec6aac6d7635,0x3ff01ad1d884e719,
0xbfa260b2a1b1434a,0xbfd09581529e93d6,
0xbf4164e26167882b,0x3ff01fef14b62b81,
0xbfa4eb014538aa42,0xbfd029d36feaf41f,
0xbf46f6fff4e53dc8,0x3ff027cbb51cbba0,
0xbfa89dec9fec112e,0xbfcf2a99464d0db4,
0xbf4dcc9c4f66a4d9,0x3ff030e7cfccd583,
0xbfacaa3b95814081,0xbfcdf78f156be7cf,
0xbf5308ed74e5c7a6,0x3ff03b5986412ecb,
0xbfb087eba88dcc3f,0xbfccbb9bd134862f,
0xbf57fa23c00df4b5,0x3ff0473558a1bcc0,
0xbfb2e702bc6360ef,0xbfcb77d546379288,
0xbf5dd12971557f71,0x3ff0548ddf5000a8,
0xbfb571b63da186e1,0xbfca2d5202605148,
0xbf6252b1ad5d4f17,0x3ff063738a910bf7,
0xbfb8270c8e6b601b,0xbfc8dd27d950a07e,
0xbf66470c91730cfc,0x3ff073f468fcf331,
0xbfbb05c2952191e4,0xbfc7886a770de2bd,
0xbf6ad114ac8e98ec,0x3ff0861bf53e5226,
0xbfbe0c4f9b461507,0xbfc6302a037cde3a,
0xbf6ffbde2a6c2af8,0x3ff099f2eb8e7da3,
0xbfc09c74d192ddf0,0xbfc4d571d8e3079f,
0xbf72e8fdc0b952aa,0x3ff0af7f273c9533,
0xbfc244c512736f10,0xbfc379474f58b902,
0xbf762eabaf17395b,0x3ff0c6c3886f63fb,
0xbfc3fdf9918ea12a,0xbfc21ca89ecab895,
0xbf79d387ce5b2bae,0x3ff0dfbfe2346376,
0xbfc5c6da43602620,0xbfc0c08bd8db6631,
0xbf7ddba8e8da9060,0x3ff0fa70f0d1b464,
0xbfc79e18d92baa7c,0xbfbecbbbf74c2669,
0xbf81254e76ea25da,0x3ff116d05835ebd0,
0xbfc982539e2ed224,0xbfbc1b043c350159,
0xbf8391acba863403,0x3ff134d4aa477fe2,
0xbfcb7218609feafb,0xbfb970a16cb88329,
0xbf87935088e48e8b,0x3ff1649892ad7dd3,
0xbfce6971dde75409,0xbfb58291e88cb251,
0xbf8db3a62c325325,0x3ff1a9c900c6deea,
0xbfd13dbc65b0e08e,0xbfb06696f62696d1,
0xbf92583699f2e27a,0x3ff1f451b85aa9f0,
0xbfd34fd5f8288180,0xbfa6fb692825b683,
0xbf9641c26e673d6f,0x3ff24364da5e2b07,
0xbfd564a5a5ef5890,0xbf9b43712011a982,
0xbf9a901038ec2f39,0x3ff2961356dffeba,
0xbfd775ebb17198c7,0xbf833b1a926cd462,
0xbf9f396a6a461b91,0x3ff2eb53baef534b,
0xbfd97dabf8ad8bbd,0x3f7b8f6a3e0f8837,
0xbfa21878590f8baa,0x3ff34209790236e1,
0xbfdb764c0e71becb,0x3f962fe0c03f84c0,
0xbfa4b36b9ad27ecc,0x3ff3990c5b12fc16,
0xbfdd5aabb0d01390,0x3fa21daf5ca162db,
0xbfa7645e4d7bf28b,0x3ff3ef2fd51c0d9f,
0xbfdf26377e1b686e,0x3fa8803e756ee812,
0xbfaa210925c64413,0x3ff44349f897d8e7,
0xbfe06a7b02c6d8e2,0x3fae3f194734f5d0,
0xbfacde48f8a19bbb,0x3ff49439d5466582,
0xbfe131c7c1063ddc,0x3fb1adeec36ad805,
0xbfaf905d8f585680,0x3ff4e0ed1fd27f99,
0xbfe1e7a859dc1d3d,0x3fb3ed018e4642a1,
0xbfb11595104160ba,0x3ff528650340490b,
0xbfe28b14b40bc974,0x3fb5df49f5baf6d7,
0xbfb2513a97344ba4,0x3ff569ba0db5ee14,
0xbfe31b53a8b67b20,0x3fb787f297bb0544,
0xbfb37512e848fafa,0x3ff5a41f33b403c8,
0xbfe397f6ea9a58a5,0x3fb8eaa9ff25ca06,
0xbfb47b3e603afc5d,0x3ff5d6e3ede40487,
0xbfe400d5bca6d631,0x3fba0b830ed567fe,
0xbfb5bbfe8ac90496,0x3ff612ba70107e95,
0xbfe477eaf1fa7693,0x3fbb4784b7c08a95,
0xbfb6d5d940743939,0x3ff644a8748f70ce,
0xbfe4d646ab07ea37,0x3fbc354f4e1d5292,
0xbfb7223d19e4f3d1,0x3ff6518feb42b7fa,
0xbfe4ed86cb87498c,0x3fbc6d29f28cca9b,
0xbfb6878652ff6312,0x3ff63948c302d040,
0xbfe4c4e2e7904e17,0x3fbc127356ca1abe,
0xbfb4f5d18b0c91d6,0x3ff5fd27eb7dd0b8,
0xbfe464e01a2b2fc6,0x3fbb460547674a30,
0xbfb26642fa16a685,0x3ff59f9bede1c95a,
0xbfe3d67920c8fbea,0x3fba24f6a8d3cbc1,
0xbfadb5294794f097,0x3ff523ea7b9cf453,
0xbfe322a8b55e35db,0x3fb8c8673b1b3e37,
0xbfa4b7d661965c6a,0x3ff48de3e2ce3122,
0xbfe251fed1a7f445,0x3fb745699fcabdb9,
0xbf93e60456e4ee1d,0x3ff3e1a14e628a59,
0xbfe16c5ab660e876,0x3fb5ad33aa8c188f,
0x3f738c17c47c7961,0x3ff3234dde3bd146,
0xbfe078c0d77a9d3b,0x3fb40d74b3e276b8,
0x3fa0474becc689c7,0x3ff256fb4fa7d18a,
0xbfdefa8e3fb285e2,0x3fb270c007493d59,
0x3faf5bd51e479bdc,0x3ff18081d0b53bc5,
0xbfdcfe2439bd0c03,0x3fb0defe5a45afdd,
0x3fb7bd5d2806ea26,0x3ff0a369e35b4440,
0xbfdb04bc5c9951e7,0x3faebbbaa9d6deef,
0x3fc01be411098dbc,0x3fef85bdabc031c1,
0xbfd91521375097c2,0x3fabe26f0086d982,
0x3fc481d7ff5776b9,0x3fedc3506c1e7218,
0xbfd7349a88da7d4f,0x3fa936e2dff8e2ae,
0x3fc90471f96fa27a,0x3fec0451601987a2,
0xbfd5671cd4b898dc,0x3fa6bb9594603b67,
0x3fcfd8adb9ed944c,0x3fe978c073f6809a,
0xbfd2df7e00bcd5a9,0x3fa3614033d490b2,
0x3fd4846a12afe5a0,0x3fe63a1147d40472,
0xbfcfa2268ad34450,0x3f9f150201d9ffe0,
0x3fd9018641f82beb,0x3fe33b7c220ffbdc,
0xbfca4e4187e29c86,0x3f98c30ced19f8f4,
0x3fdd4b8255beb078,0x3fe0858b19d3a49b,
0xbfc5bc929eace564,0x3f93a083ce57de2b,
0x3fe0a8e5e039295c,0x3fdc35e1234583fe,
0xbfc1de034e31aeb9,0x3f8efdebb3471bdc,
0x3fe2851b603cb2a5,0x3fd7f4a44abbb286,
0xbfbd3eeb67087de7,0x3f8864f38329e8bd,
0x3fe437dbe3c34ac1,0x3fd43f6f789441b5,
0xbfb7d92e7901b9a4,0x3f8327ed342308e1,
0x3fe5c0977766d55c,0x3fd10b42a764d8f9,
0xbfb3633351d3d70f,0x3f7e079e30ff899c,
0x3fe7202ce08a88c4,0x3fcc973eb5662b01,
0xbfaf70a455f9920b,0x3f77812411ce99b6,
0x3fe85879424095b1,0x3fc7e73bd1674d84,
0xbfa96f84e4bf333b,0x3f72606ddca6e117,
0x3fe96bfe4957f4dd,0x3fc3ed4780d25478,
0xbfa489c5f9a56b58,0x3f6cb5dc17e9ad2a,
0x3fea5d9cb2f41234,0x3fc091a758374dcf,
0xbfa08e436d4b5ce0,0x3f666997ad53e6b7,
0x3feb3060342cb850,0x3fbb7d30bbc7dc1b,
0xbf9aa6ba3443d9e3,0x3f617ca764b7850b,
0x3febe759a6a0c7b8,0x3fb6c10de6a703ff,
0xbf956c566d8be1f6,0x3f5b46d1a4a59cf8,
0x3fec858494887a04,0x3fb2cc31f543394d,
0xbf9133477ff69137,0x3f5544482fbb4da5,
0x3fed0db59d0e32e9,0x3faf006baffc6ef4,
0xbf8b97146fa2b97a,0x3f5093b01f4cdc69,
0x3fedb487c3ec457c,0x3fa7390c09d0bd1d,
0xbf83d9f7c3181106,0x3f46e34a0a3c0e64,
0x3fee5ffcb4e6eb00,0x3f9f4913ed00aadf,
0xbf79670bd0e59b5c,0x3f3bc998ebcaf96d,
0x3feedba41e9542fe,0x3f94f5dd18d9c24d,
0xbf7034896aa122b9,0x3f30dccb47810b39,
0x3fef33f2882520ed,0x3f8bf37f2cf553ff,
0xbf649f6f05a69619,0x3f247623c950aac9,
0x3fef727757751741,0x3f828e67912c4400,
0xbf5a2f51a806cc2c,0x3f18d35d7687e613,
0x3fef9e6325c5942a,0x3f788ab117618f76,
0xbf5096eab0b1ea89,0x3f0e1e50ec4435ab,
0x3fefbd0784049369,0x3f702bbd8294035f,
0xbf44fb55e0f00593,0x3f0244dcd723230a,
0x3fefd245e2366a43,0x3f653d82ec088433,
0xbf3a7df75e013cb8,0x3ef6298e69f991cd,
0x3fefe0eaa508bc69,0x3f5bd0771af3fdda,
0xbf30b2e1254de571,0x3eeae28b70ec0256,
0x3fefeaf5303d7f96,0x3f5229111365657e,
0xbf250572d04dfe66,0x3ee04e89bb57c981,
0x3feff1cf52f1cf44,0x3f47a71316147ceb,
0xbf1a6d7604055719,0x3ed3c8047586a85c,
0x3feff6770369ef69,0x3f3ebb261180fbf0,
0xbf1097754fe19d7f,0x3ec7feff83bca0a7,
0x3feff99d42371ac4,0x3f33eb2aec271f59,
0xbf04cf18e0fc0d79,0x3ebd1bdbd6019be9,
0x3feffbbca32b0d91,0x3f29c41e1615110a,
0xbefa11f93d9dcb5a,0x3eb1a7ca4546f7a7,
0x3feffd298b8e8de2,0x3f20a1c42d523c5b,
0xbef0507a364afae4,0x3ea56aca17e7cdf4,
0x3feffe1dc82ba5a3,0x3f156e73b90f1769,
0xbee4663579d0a09f,0x3e99faf6fec5d4c1,
0x3feffef8d0bb5e81,0x3f06686da18d39c3,
0xbed46bc298073e90,0x3e88e42286b9d0fd,
0x3fefff8dbc68ddc7,0x3ef26b2953a80af0,
0xbebfc4472d580f83,0x3e72505b4553d19f,
0x3fefffced1276609,0x3ede1a94c7cc58f5,
0xbea8a2c988744e57,0x3e5af30036bbbaf4,
0x3fefffeafe70fcfc,0x3ec879175e3549f5,
0xbe930e36677d1813,0x3e43d4005b42d48f,
0x3ff0000000000000,0x0000000000000000,
0x0000000000000000,0x0000000000000000};


static const unsigned long tanh_table_f64[960]={
0x0000000000000000,0x0000000000000000,
0x3ff0000000000000,0xbd197dead79668d3,
0xbfd555555553af3c,0xbe052f7cca134846,
0x3fc11111563849d6,0xbeb038623673ffb2,
0xbfab9f685e64022e,0xbf2a54e2b28f2207,
0x3f97cfb9328a230e,0xbf75ca6d61723e02,
0x0000000000000000,0x3ff0000000000000,
0x0000000000000000,0x0000000000000000,
0x3c3708a564fad29a,0x3fc0e6973998da48,
0x3fef712eb25c0888,0xbfc09b296f7c1ea9,
0xbfd3dd77541edda7,0x3fb58ffcf4309615,
0x3fbd3abe845dcf49,0xbfa791df538c37fa,
0xbfa4f872f69cd6e8,0x3f9772e49ef6412b,
0x3f8cbc0807393909,0xbf85f06a30f93319,
0xbfc1000000000000,0x3ff0000000000000,
0x0000000000000000,0x0000000000000000,
0x3c6004ee5739deac,0x3fc2dc968e6e0d62,
0x3fef4e1e606d96df,0xbfc273bd70994ab9,
0xbfd382b548270d2c,0x3fb7cd2d582a6b29,
0x3fbc1278cccbf0db,0xbfa9c7f5115b86a1,
0xbfa371c21baf618e,0x3f9958943f68417e,
0x3f8930d5cffd4152,0xbf875cf7add31b76,
0xbfc3000000000000,0x3ff0000000000000,
0x0000000000000000,0x0000000000000000,
0x3c7eabe24e052a1f,0x3fc4d04783618c71,
0x3fef2765af97a4b3,0xbfc443654205fea5,
0xbfd31f2e208a5b97,0x3fb9f235bd339878,
0x3fbad0b0dfcca141,0xbfabd1b9600e608e,
0xbfa1cebeaf07db58,0x3f9afc9fb1d8efd2,
0x3f8573444f1ab502,0xbf8874fbc8f24406,
0xbfc5000000000000,0x3ff0000000000000,
0x0000000000000000,0x0000000000000000,
0x3c7fb199d361a790,0x3fc6c170259e21f7,
0x3feefd17479f7c65,0xbfc609530fe4df8d,
0xbfd2b3465d71b4de,0x3fbbfd2d34ac509b,
0x3fb9778c3c16a0fe,0xbfadac4d9e63c665,
0xbfa0139ccad02d60,0x3f9c5bf43ba6f19d,
0x3f8190b703350341,0xbf8936606782858a,
0xbfc7000000000000,0x3ff0000000000000,
0x0000000000000000,0x0000000000000000,
0x3c6a917ca3624d50,0x3fc8afd7b974fabb,
0x3feecf47624a5d03,0xbfc7c4c2cb4fde4d,
0xbfd23f69cb2c1f9d,0x3fbdec5703a03814,
0x3fb8095003d0cf15,0xbfaf554b47b10cbb,
0xbf9c89743fe7bc1b,0x3f9d74725b746e7c,
0x3f7b2d8afb70b88c,0xbf89a0a2883ef6cb,
0xbfc9000000000000,0x3ff0000000000000,
0x0000000000000000,0x0000000000000000,
0x3c7608279e8609cb,0x3fca9b46d2ddc5e3,
0x3fee9e0bb72a01a1,0xbfc974fad10c5330,
0xbfd1c40accba4044,0x3fbfbe24e2987853,
0x3fb6885b4345e47f,0xbfb06563d5670584,
0xbf98cd1d620df6e2,0x3f9e44ef3e844d21,
0x3f7325fa0148caae,0xbf89b4c8556c2d92,
0xbfcb000000000000,0x3ff0000000000000,
0x0000000000000000,0x0000000000000000,
0x3c6f19daa20f51d5,0x3fcc83876ca98e15,
0x3fee697b662d07cd,0xbfcb194c7ed76acf,
0xbfd141a19e419762,0x3fc0b89c64bc7b98,
0x3fb4f721150bbfc5,0xbfb105aafab87898,
0xbf94fb3b31248c01,0x3f9ecd31e588709c,
0x3f664a91a335c105,0xbf89754e32e1e26e,
0xbfcd000000000000,0x3ff0000000000000,
0x0000000000000000,0x0000000000000000,
0x3c6ac6c889d8111d,0x3fce6864fe55a3d0,
0x3fee31aee116b82b,0xbfccb114b69e808b,
0xbfd0b8ab913ba99d,0x3fc1823322bed48a,
0x3fb35822b7929893,0xbfb18b03cc78d2da,
0xbf911ccc3c8d5e5d,0x3f9f0dec2d99b12f,
0x3f4a28398b4ebd98,0xbf88e60cb2fab9a4,
0xbfcf000000000000,0x3ff0000000000000,
0x0000000000000000,0x0000000000000000,
0x3c89d2b6774fb61d,0x3fd09c744f539be4,
0x3fedd823b0400d42,0xbfcefbf7ff305fcc,
0xbfcfc01dc4f24a41,0x3fc291a2c26d5548,
0x3fb0d562e672d188,0xbfb2201ecc119e06,
0xbf8695d50f778d31,0x3f9eec8cfbc031a0,
0xbf6030f0a4d3660a,0xbf87845288a4aef5,
0xbfd1000000000000,0x3ff0000000000000,
0x0000000000000000,0x0000000000000000,
0x3c8b6aab614d1c8d,0x3fd275f7e1cf7f63,
0x3fed56658f74c9cc,0xbfd0ecc045ebd596,
0xbfcd5a4bde179180,0x3fc3c00047d34767,
0x3faac7ce84fd609f,0xbfb288948d2e8b43,
0xbf6d6605aad5a1c0,0x3f9ddb0790848e97,
0xbf75fde291bad5b4,0xbf84cea5c52e0a78,
0xbfd3000000000000,0x3ff0000000000000,
0x0000000000000000,0x0000000000000000,
0x3c7139a81c8a6ecf,0x3fd4470650036407,
0x3fecc9a69dfddd48,0xbfd23ded3a37a09f,
0xbfcad302395d51c1,0x3fc4a8fe3f309c22,
0x3fa3d161188aa436,0xbfb288cfe5494e98,
0x3f6c7903eed8d334,0x3f9be023cdfb02f6,
0xbf80f8296f2c3a95,0xbf8152df4790049b,
0xbfd5000000000000,0x3ff0000000000000,
0x0000000000000000,0x0000000000000000,
0x3c7751fe0fee8335,0x3fd60ef7120502a9,
0x3fec32d951e56e6f,0xbfd370255fc004f8,
0xbfc832f0ebc6bb41,0x3fc54c99a0ff432f,
0x3f99dac0cc283c18,0xbfb227b3896a026d,
0x3f84663364e1fb19,0x3f9922d70de07c57,
0xbf85c4a4eb6f86bc,0xbf7aab61214ffe17,
0xbfd7000000000000,0x3ff0000000000000,
0x0000000000000000,0x0000000000000000,
0x3bfe67f266843b2c,0x3fd7cd3115fc0f16,
0x3feb92f96ccc2c5b,0xbfd4827320135092,
0xbfc582b15550168a,0x3fc5ac3b9a2e4c31,
0x3f88fa599fcadafb,0xbfb16ec8f5ca169e,
0x3f90140efc748bbe,0x3f95cfc49c1a28dc,
0xbf8946ed8b1bf454,0xbf7239e55c1dd50f,
0xbfd9000000000000,0x3ff0000000000000,
0x0000000000000000,0x0000000000000000,
0x3c6412330191189c,0x3fd9812b3b03f0a5,
0x3feaeb08c3c0e84d,0xbfd57446b1bc46cf,
0xbfc2ca9abc0444ad,0x3fc5ca95f9460d18,
0xbf2c2daa35dd05c3,0xbfb069a516eeb75d,
0x3f9512716416fdc7,0x3f921630cb1319a3,
0xbf8b76da2ec99526,0xbf63a97474a161e4,
0xbfdb000000000000,0x3ff0000000000000,
0x0000000000000000,0x0000000000000000,
0x3c89b79f5783381c,0x3fdb2a6c993b829d,
0x3fea3c0c1fba328c,0xbfd6457212f78de0,
0xbfc0129bda380a66,0x3fc5ab77f388fbde,
0xbf8822f3a6cadb7c,0xbfae4a876370a4bd,
0x3f991a89bc3b7710,0x3f8c4a4328204d4b,
0xbf8c5f921d01ec0b,0xbf3ee844c5b79fb8,
0xbfdd000000000000,0x3ff0000000000000,
0x0000000000000000,0x0000000000000000,
0x3c73fa437ad7ad87,0x3fdcc88c9902cf45,
0x3fe9870845162d1d,0xbfd6f62358f73da8,
0xbfbac4345d675fe1,0x3fc5539da8287019,
0xbf96e3e0dc04a09f,0xbfab5ec7147c207d,
0x3f9c24166ffa7a58,0x3f8451b907819844,
0xbf8c1c6d19191fcb,0x3f547372df72e35a,
0xbfdf000000000000,0x3ff0000000000000,
0x0000000000000000,0x0000000000000000,
0x3c848fe06ee49950,0x3fdf20211a36475d,
0x3fe86e67e6b80ac2,0xbfd7c37c55474d9b,
0xbfb2ebf15f3cb036,0x3fc4718c8ef6e3aa,
0xbfa277f8394e9b07,0xbfa680312ab207e3,
0x3f9edc9a8b57e286,0x3f71b8c5e648eaf6,
0xbf89db218356730c,0x3f6b05728e6ebc8e,
0xbfe1000000000000,0x3ff0000000000000,
0x0000000000000000,0x0000000000000000,
0x3c8429831edd94de,0x3fe10af47e0bf610,
0x3fe6ec5879f87eee,0xbfd86ad001bfe200,
0xbfa239045b661385,0x3fc2b4572d9cc147,
0xbfa99f4f01740705,0xbf9f449c484f4879,
0x3f9f5f42169d7dde,0xbf6111b1ba632a97,
0xbf84725fbe5b6e61,0x3f7438a2986cfa9c,
0xbfe3000000000000,0x3ff0000000000000,
0x0000000000000000,0x0000000000000000,
0x3c6be9160bfb3505,0x3fe26d76f73233c7,
0x3fe56363b5b93937,0xbfd8a2244b27297e,
0xbf52ca2f101eef63,0x3fc081bc342243ad,
0xbfae38db4a932344,0xbf91f814d4ae90c6,
0x3f9d056ae193c4f3,0xbf7bd0b502d8f3a0,
0xbf7b763f7bb8ae2f,0x3f76036f42d9ab69,
0xbfe5000000000000,0x3ff0000000000000,
0x0000000000000000,0x0000000000000000,
0x3c8b64af0450486e,0x3fe3b75f8bcb742d,
0x3fe3da23bc12369f,0xbfd8768ff4b46416,
0x3f9d67cb8ad9cb1a,0x3fbc168cb7827df4,
0xbfb03a2b83c9272e,0xbf789feb595297dc,
0x3f98bd01b4c335e7,0xbf83badc303d6535,
0xbf6c54e7a1c1e3f3,0x3f7408394b7ef3e7,
0xbfe7000000000000,0x3ff0000000000000,
0x0000000000000000,0x0000000000000000,
0x3c6a48557f6e0d3e,0x3fe4e8d895b010dc,
0x3fe25652faaf8a73,0xbfd7f6c3a57c444b,
0x3fab7866e3f99ebe,0x3fb6fa1df47ccd40,
0xbfb05508d3741b8e,0x3f6c3efdf7bb279c,
0x3f9372badd6d3e27,0xbf860fd5ae65f3da,
0xbf47266ffb07e628,0x3f6f9763992c2a05,
0xbfe9000000000000,0x3ff0000000000000,
0x0000000000000000,0x0000000000000000,
0x3c6bb6a2b194e3ab,0x3fe602609aae7c22,
0x3fe0dcbafe191c7f,0xbfd732028428a9fb,
0x3fb2d92389be065b,0x3fb1f6a9c8c49993,
0xbfaf47c0b50b56ee,0x3f85a8edd1356223,
0x3f8be05c5cd1b4fa,0xbf85a0efe4552f76,
0x3f559f2a6a356194,0x3f6576f5e989208d,
0xbfeb000000000000,0x3ff0000000000000,
0x0000000000000000,0x0000000000000000,
0x3c80328bd86c8b74,0x3fe704bb1b7fcb81,
0x3fdee264aad6c40c,0xbfd637493ce659f1,
0x3fb6be3a3dee6f4a,0x3faa85eb6470ac0f,
0xbfacc0146ea4858d,0x3f8f8fb683cddac5,
0x3f819515dee2cb91,0xbf834e45e6af9ea1,
0x3f65250f197ca56d,0x3f57a766026d036c,
0xbfed000000000000,0x3ff0000000000000,
0x0000000000000000,0x0000000000000000,
0x3c716f7eef7b61ad,0x3fe7f0e1a4cd846e,
0x3fdc2d4cc872dc09,0xbfd514a99f92ed53,
0x3fb9846a6cf2f337,0x3fa20896939ab161,
0xbfa97e801f31ee0d,0x3f92a11f47b82085,
0x3f717d70fe289c34,0xbf7fdcf1d3f6ce2d,
0x3f69f607e81af6b6,0x3f3f925c80d0f889,
0xbfef000000000000,0x3ff0000000000000,
0x0000000000000000,0x0000000000000000,
0x3c931a11d7e8606e,0x3fe92bfb370d9b71,
0x3fd866160e454111,0xbfd33149f3801dba,
0x3fbbdb6d4c949899,0x3f8d6ab2a74b9343,
0xbfa404d1047c5d72,0x3f93c47d9accd919,
0xbf41b755642cff1b,0xbf74b5301aa1e788,
0x3f69a84c5b2a3e68,0xbf3cf47830328c11,
0xbff1000000000000,0x3ff0000000000000,
0x0000000000000000,0x0000000000000000,
0x3c884d471b8fd396,0x3fea8dbcbc31897a,
0x3fd3ee730537c8ea,0xbfd08a05ad27ce32,
0x3fbc5255406f84b6,0xbf772fa2f633aa5e,
0xbf99dd8e4c473fc4,0x3f9183c935b6495d,
0xbf70471a3a591480,0xbf603ddd4debb9a4,
0x3f62591e44d3c17f,0xbf4c195d3a9b1ab4,
0xbff3000000000000,0x3ff0000000000000,
0x0000000000000000,0x0000000000000000,
0x3c90dd1c9bff7f64,0x3febad50a4a68bc1,
0x3fd01fba72cee1a5,0xbfcbe432f647c4d6,
0x3fbabf92b6e5ac73,0xbf922983aa24e217,
0xbf8c72214c14e23a,0x3f8acb4d1f388e8b,
0xbf740ef8b4a2ee3b,0xbf0ea9f30c8dc900,
0x3f53cc40d18713ae,0xbf4848b86029cba1,
0xbff5000000000000,0x3ff0000000000000,
0x0000000000000000,0x0000000000000000,
0x3c8fb61781d22681,0x3fec950a3340c8bf,
0x3fc9e1dffd385423,0xbfc71e2ff88eba23,
0x3fb80aebd07ab5ba,0xbf98404e27eae6ed,
0xbf772da520b5006e,0x3f824c9268af9423,
0xbf722ae76d206ae3,0x3f4b807f56298d5e,
0x3f3d71027df95d2a,0xbf3ebd17676755fb,
0xbff7000000000000,0x3ff0000000000000,
0x0000000000000000,0x0000000000000000,
0x3c95393c63ce8224,0x3fed4e6f464286b0,
0x3fc4a45842b7de1e,0xbfc2e7885afdd3d0,
0x3fb4dd6dd51d3feb,0xbf9a05d3adab489c,
0xbf3459b643b4995c,0x3f766b30745f2e3a,
0xbf6c2c891e555bdf,0x3f5194f30d6c576d,
0x3ef4dbb43c3132a2,0xbf2e45ebab3c15a0,
0xbff9000000000000,0x3ff0000000000000,
0x0000000000000000,0x0000000000000000,
0x3c75111669651daa,0x3fede1eb5937518f,
0x3fc06129c7c8ebb1,0xbfbe9763041064e1,
0x3fb1a5b9f9113928,0xbf992145039f9afe,
0x3f66cb116ea49c89,0x3f67f972fdf30001,
0xbf63a7b5975f02f3,0x3f4fde7b8777f4c8,
0xbf25918876626ba4,0xbf1495123c991f00,
0xbffb000000000000,0x3ff0000000000000,
0x0000000000000000,0x0000000000000000,
0x3c9f29a5b7426d27,0x3fee56b6f3efabfc,
0x3fb9e3efd94bb9fc,0xbfb88bd9760feca7,
0x3fad48a0350b3acf,0xbf96cc6a5110f129,
0x3f71934687170384,0x3f5407baf73b3df9,
0xbf591b626c0646dd,0x3f48b0e1dd283558,
0xbf2b322292840d2b,0xbe99e4061120c741,
0xbffd000000000000,0x3ff0000000000000,
0x0000000000000000,0x0000000000000000,
0x3c6af8c2041c67cd,0x3feeb2dfedd5ec93,
0x3fb465a205cfb638,0xbfb3914bf68d39ff,
0x3fa7f21a08c5c734,0xbf93da9560ea9960,
0x3f73953fec62820e,0x3f2749d5e1273e3c,
0xbf4d46b0b498ce5a,0x3f4153d680e1f4c4,
0xbf28477014eca6a2,0x3effac54e07ceb4b,
0xbfff000000000000,0x3ff0000000000000,
0x0000000000000000,0x0000000000000000,
0x3c7a8af2bb2231f2,0x3fef1994df724fc8,
0x3fac65b1bc0c9d58,0xbfab9937bda747c8,
0x3fa15b42d9ef931c,0xbf8eacd8e8507a3c,
0x3f7263a15721c682,0xbf42a032acdc3b32,
0xbf3431e79b5ad185,0x3f31b51667c7df5e,
0xbf1f8709579250ad,0x3f01ed8ed1bf9595,
0xc001000000000000,0x3ff0000000000000,
0x0000000000000000,0x0000000000000000,
0x3c86f3f7c3dafc55,0x3fef73776b2aa2db,
0x3fa16a7fc4d7b900,0xbfa11e03803ad621,
0x3f9609591597297f,0xbf847e74ed9bbb0c,
0x3f6bff771725cd65,0xbf491d1ff73c18fa,
0x3ef53ee467b51dc5,0x3f160135be0d94a0,
0xbf0b32cb1d276a40,0x3ef4daf70c12d555,
0xc003000000000000,0x3ff0000000000000,
0x0000000000000000,0x0000000000000000,
0x3c19dbf4e2e5b7dc,0x3fefaa7934b75ebd,
0x3f9545200830a42c,0xbf950c46d285f6bc,
0x3f8b79f5bfc6513f,0xbf7a50adad777898,
0x3f633a19be8255e3,0xbf44e609bc2557b7,
0x3f1afcbad60eaacd,0x3ee80476ac34a8ef,
0xbef278e23de463e9,0x3ee209faf377264d,
0xc005000000000000,0x3ff0000000000000,
0x0000000000000000,0x0000000000000000,
0x3c979d62702c631c,0x3fefcc04cdbcdc4b,
0x3f89e87d088d269a,0xbf89be6721012b80,
0x3f80f1c13e8d39d3,0xbf7082dbc9602757,
0x3f590be9bd4e0a11,0xbf3dcc2bef6d0283,
0x3f1a08065c4a8e85,0xbee528117d0410f3,
0xbed0be73a44ff565,0x3ec9b0c11e342e38,
0xc007000000000000,0x3ff0000000000000,
0x0000000000000000,0x0000000000000000,
0x3c804b931ad7a3cc,0x3fefe06eb0688212,
0x3f7f81bd8876224d,0xbf7f62a8c699a963,
0x3f74c31e2b2a6a28,0xbf6470d537f16227,
0x3f4faeef61c89673,0xbf33c5e80b349783,
0x3f138f3d31037a6b,0xbeeb3c780996ffe3,
0x3e9d0c75bc8bfefc,0x3eac3865227764d4,
0xc009000000000000,0x3ff0000000000000,
0x0000000000000000,0x0000000000000000,
0x3c5b978b202749f9,0x3fefecd6b7ea3128,
0x3f73238b786137fe,0xbf731815acea072e,
0x3f6956f0816d5aee,0xbf591a16286c4885,
0x3f43b3e3a00c6096,0xbf29441b2a56dec7,
0x3f0a99c3a2e857b6,0xbee61cb034ddc151,
0x3eb792bbc76d6107,0x3e761472362a16f0,
0xc00b000000000000,0x3ff0000000000000,
0x0000000000000000,0x0000000000000000,
0x3c9c290afcbde00d,0x3feff45f6d36133a,
0x3f673cec093032de,0xbf67347a7cd844d5,
0x3f5eda25530355db,0xbf4ead3bbabc1ba9,
0x3f3842e61cd35432,0xbf1f9ab7fd1a3ddd,
0x3f0136c154ea3ded,0xbedf12807f721e66,
0x3eb5b53687ad5112,0xbe801e90fbfed147,
0xc00d000000000000,0x3ff0000000000000,
0x0000000000000000,0x0000000000000000,
0x3c9e323294294877,0x3feff8f21cdaaa62,
0x3f5c3470628813f2,0xbf5c2e38ac6ff8d2,
0x3f52c13234626f43,0xbf42b0a47df47bb4,
0x3f2db2889e32fbfd,0xbf1385fbd54c5a55,
0x3ef5afa812c6984e,0xbed47097c188a03c,
0x3eaff2b982f7ee8c,0xbe828ec5b57d424d,
0xc00f000000000000,0x3ff0000000000000,
0x0000000000000000,0x0000000000000000,
0x3c9ba40da6983bec,0x3feffcaac3f20e65,
0x3f4aa87cf664754c,0xbf4aa5b62919e224,
0x3f41c01b53b0b312,0xbf31b8b54d091751,
0x3f1c431305954ecc,0xbf02b7dead0d44e6,
0x3ee51c6eff109ea9,0xbec48cfb08072d17,
0x3ea1585ec59cae34,0xbe78832baf950ba9,
0xc011000000000000,0x3ff0000000000000,
0x0000000000000000,0x0000000000000000,
0x3c8fbf237f4afe10,0x3feffec61279a3a4,
0x3f339e78281a00ea,0xbf339db7b072ad62,
0x3f2a259e658ef4e4,0xbf1a219c312b10ba,
0x3f04e146b4f5f4b7,0xbeebc5f137088210,
0x3ecf96736e300b00,0xbeaf4874840b91eb,
0x3e8b6ab2b5c8fd3f,0xbe650bcce62fd2b7,
0xc013000000000000,0x3ff0000000000000,
0x0000000000000000,0x0000000000000000,
0x3c9c869c85471703,0x3fefff8c81c6dc33,
0x3f1cdf5a2e4d7c69,0xbf1cdef1f9be63be,
0x3f133ec10c83aaa0,0xbf033dab325faacb,
0x3eeec598fa98bad8,0xbed47f1a15ba368e,
0x3eb761fbe7d201c1,0xbe974cd75a43bf6b,
0x3e74b02965bbf8dc,0xbe504ef4e3892a66,
0xc015000000000000,0x3ff0000000000000,
0x0000000000000000,0x0000000000000000,
0x3c643810400471b0,0x3fefffd583014825,
0x3f053e71416c43ca,0xbf053e550c7c8cc9,
0x3efc52d0d90d4843,0xbeec523a6adbe142,
0x3ed6a73e22d844b3,0xbebe31d10f23acd0,
0x3ea13e14264deab2,0xbe81385abb98edcc,
0x3e5eb9164593e0b6,0xbe387218cfe7772e,
0xc017000000000000,0x3ff0000000000000,
0x0000000000000000,0x0000000000000000,
0x3c92530433f4c703,0x3feffff05e8d3191,
0x3eef42ddfa52b575,0xbeef42ceb54212aa,
0x3ee4d7201cbcb853,0xbed4d6f764b66c37,
0x3ec0abb806ebde71,0xbea6399cf854f876,
0x3e8964b91728d7c9,0xbe6961a0528444d6,
0x3e46ae3b0814ee00,0xbe221b8194dacd16,
0xc019000000000000,0x3ff0000000000000,
0x0000000000000000,0x0000000000000000,
0x3c7bb5622ce1a79e,0x3feffffa3ff22708,
0x3ed7003552d53503,0xbed7003130c1ab92,
0x3eceaae13b699c45,0xbebeaacb305f3d07,
0x3ea8887f5f9c87ef,0xbe905ad08df8454f,
0x3e72b068300b703f,0xbe52af921a71c058,
0x3e30b53eaa35300d,0xbe0ab60cdad7e22e,
0xc01b000000000000,0x3ff0000000000000,
0x0000000000000000,0x0000000000000000,
0x3c8bd1acf80d7256,0x3feffffde2760a41,
0x3ec0ec4f1ec27e55,0xbec0ec4e005e6eac,
0x3eb6906504bc4610,0xbea6905f0d52c8b5,
0x3e920d0f5cce152b,0xbe7811505b10e753,
0x3e5b811ee4f9b8ee,0xbe3b80abc067e840,
0x3e1898e394e09335,0xbdf3abb5ba711db7,
0xc01d000000000000,0x3ff0000000000000,
0x0000000000000000,0x0000000000000000,
0x3c8ae01db39a3791,0x3fefffff38c76668,
0x3ea8e712e56e1188,0xbea8e7124a650791,
0x3ea09a0b62d8ef94,0xbe909a09c56c2107,
0x3e7a900a90a54a6e,0xbe61b5557bb449b6,
0x3e443cc74732cdca,0xbe243ca8aa8d6e54,
0x3e0219c341e0d1b4,0xbddcf49a10950f13,
0xc01f000000000000,0x3ff0000000000000,
0x0000000000000000,0x0000000000000000,
0x3c75cb18f3775414,0x3fefffffd38c39f0,
0x3e8639e2f89493bb,0xbe8639e2d9b29562,
0x3e7da2836a1f706e,0xbe6da282c6733dae,
0x3e57b53a278851fd,0xbe3f9c4a72536e22,
0x3e220e81fbe19cdd,0xbe020e8875ada8d8,
0x3de07634328384fc,0xbdba54078e3c351f,
0xc021000000000000,0x3ff0000000000000,
0x0000000000000000,0x0000000000000000,
0x3c98b78738b0edef,0x3feffffff9fbea40,
0x3e581056fac28c46,0xbe581056f63a4351,
0x3e500ae49533790a,0xbe400ae489acba90,
0x3e29ab0d59a1967b,0xbe111cb32d6eef2b,
0x3df38cbadf396908,0xbdd38cc7b92cecd3,
0x3db1d2bbe2705032,0xbd8c8199294e6380,
0xc023000000000000,0x3ff0000000000000,
0x0000000000000000,0x0000000000000000,
0x3c8eeec16618b984,0x3fefffffff2f9279,
0x3e2a0db0d052b148,0xbe2a0db0cfa6ab71,
0x3e215e75d53a3105,0xbe115e75d40aa47f,
0x3dfbca5cdc12ed1c,0xbde286e85704fc22,
0x3dc52a8925354517,0xbda52a97ea3f5f4a,
0x3d834c011a2ac0f7,0xbd5edd05bdcb3a62,
0xc025000000000000,0x3ff0000000000000,
0x0000000000000000,0x0000000000000000,
0x3c6bd8b474bbf792,0x3fefffffffe3cad8,
0x3dfc3527e43c565f,0xbdfc3527e420f415,
0x3df2ce1a8d806dad,0xbde2ce1a8ddf690a,
0x3dce169832d8bd68,0xbdb40f0fe853da5b,
0x3d96ea8d930d31a1,0xbd76ea9db0d09839,
0x3d54e474fd4303a1,0xbd30b526ca2b228a,
0xc027000000000000,0x3ff0000000000000,
0x0000000000000000,0x0000000000000000,
0x3c56e8953d525fd5,0x3feffffffffc2eb9,
0x3dce8a37a48016c2,0xbdce8a37a479b7d4,
0x3dc45c250cfa9c16,0xbdb45c250d9f8467,
0x3da049bb33cbd4e9,0xbd85b7a407c422c1,
0x3d68cf9ced2b3fd5,0xbd48cfae64c352b3,
0x3d269eae08690d52,0xbd0216cbeafff5aa,
0xc029000000000000,0x3ff0000000000000,
0x0000000000000000,0x0000000000000000,
0x3c8acf1392b106d3,0x3fefffffffff7bbd,
0x3da088529889b316,0xbda088529887f4c4,
0x3d960b18bf1df711,0xbd860b18bfd99a48,
0x3d71a27e7ca64143,0xbd5783530ea76d91,
0x3d3adcc75cbd2a03,0xbd1adcda46be5f17,
0x3cf87d77650be5b8,0xbcd395ae6e74c6d2,
0xc02b000000000000,0x3ff0000000000000,
0x0000000000000000,0x0000000000000000,
0x3c97a8a295292858,0x3fefffffffffee19,
0x3d71e642bb008f95,0xbd71e642bafeec54,
0x3d67ddae41647741,0xbd57ddae4230f34b,
0x3d4317c33fae2536,0xbd2975040d3e26b9,
0x3d0d155dcd0f0afb,0xbced157247832b20,
0x3cca83d70f607c28,0xbca5343952c1e19e,
0xc02d000000000000,0x3ff0000000000000,
0x0000000000000000,0x0000000000000000,
0x3c9b7876cbc5306e,0x3feffffffffffd93,
0x3d436121e2640d76,0xbd436121e26250ea,
0x3d39d6d7ca259186,0xbd29d6d7cb0327ce,
0x3d14abe4dc31244a,0xbcfb8fdb82ab6bb7,
0x3cdf7cf757491b60,0xbcbf7d0d833640fb,
0x3c9cb512f6bdc754,0xbc76f50ab1b0e9ba,
0xc02f000000000000,0x3ff0000000000000,
0x0000000000000000,0x0000000000000000,
0x3c6ffe15d5f78543,0x3fefffffffffffe1,
0x3cfee00288b99c26,0xbcfee0027d060ee2,
0x3cf4954aa23148a2,0xbce4954b5dad3010,
0x3cd07883dd8793bd,0xbcb5f5f4bb87adcf,
0x3c98f1a905097685,0xbc78f2d585007222,
0x3c58a37cc5082b5f,0xbc33ae7917f94d17,
0xc031000000000000,0x3ff0000000000000,
0x0000000000000000,0x0000000000000000,
0x3c91bf1d80474f0f,0x3feffffffffffffe,
0x3cb72071400e6275,0xbcb72071400a9f37,
0x3caed5ec39a77629,0xbc9ed5ec3b530600,
0x3c88ab2bfed159de,0xbc70721d1220b3fc,
0x3c52c96049721fb8,0xbc32c971215735dc,
0x3c112ef658ab41a9,0xbbeb7b598c6ad3de,
0xc03287e0c98f84e5,0x3ff0000000000000,
0x0000000000000000,0x0000000000000000,
0x0000000000000000,0x3ff0000000000000,
0x0000000000000000,0x0000000000000000,
0x0000000000000000,0x0000000000000000,
0x0000000000000000,0x0000000000000000,
0x0000000000000000,0x0000000000000000,
0x0000000000000000,0x0000000000000000,
0x0000000000000000,0x0000000000000000,
0x0000000000000000,0x0000000000000000};


static const unsigned long atanh_table_f64_la[1552]=
{
    0xc086232bdd7a8300,0xbe1ce91eef3fb100,
    0xc086232fdc7ad828,0xbe1cefcffda73b6a,
    0xc0862333d97d2ba0,0xbe1cef406748f1ff,
    0xc0862337d48378e0,0xbe1cef2a9429925a,
    0xc086233bcd8fb878,0xbe1cf138d17ebecb,
    0xc086233fc4a3e018,0xbe1ceff2dbbbb29e,
    0xc0862343b9c1e270,0xbe1cf1a42aae437b,
    0xc0862347acebaf68,0xbe1cef3b152048af,
    0xc086234b9e2333f0,0xbe1cef20e127805e,
    0xc086234f8d6a5a30,0xbe1cf00ad6052cf4,
    0xc08623537ac30980,0xbe1cefc4642ee597,
    0xc0862357662f2660,0xbe1cf1f277d36e16,
    0xc086235b4fb092a0,0xbe1ceed009e8d8e6,
    0xc086235f37492d28,0xbe1cf1e4038cb362,
    0xc08623631cfad250,0xbe1cf0b0873b8557,
    0xc086236700c75b98,0xbe1cf15bb3227c0b,
    0xc086236ae2b09fe0,0xbe1cf151ef8ca9ed,
    0xc086236ec2b87358,0xbe1cefe1dc2cd2ed,
    0xc0862372a0e0a780,0xbe1cf0d1eec5454f,
    0xc08623767d2b0b48,0xbe1ceeefd570bbce,
    0xc086237a57996af0,0xbe1cee99ae91b3a7,
    0xc086237e302d9028,0xbe1cf0412830fbd1,
    0xc086238206e94218,0xbe1ceee898588610,
    0xc0862385dbce4548,0xbe1cee9a1fbcaaea,
    0xc0862389aede5bc0,0xbe1ceed8e7cc1ad6,
    0xc086238d801b4500,0xbe1cf10c8d059da6,
    0xc08623914f86be18,0xbe1ceee6c63a8165,
    0xc08623951d228180,0xbe1cf0c3592d2ff1,
    0xc0862398e8f04758,0xbe1cf0026cc4cb1b,
    0xc086239cb2f1c538,0xbe1cf15d48d8e670,
    0xc08623a07b28ae60,0xbe1cef359363787c,
    0xc08623a44196b390,0xbe1cefdf1ab2e82c,
    0xc08623a8063d8338,0xbe1cefe43c02aa84,
    0xc08623abc91ec960,0xbe1cf044f5ae35b7,
    0xc08623af8a3c2fb8,0xbe1cf0b0b4001e1b,
    0xc08623b349975d98,0xbe1cf1bae76dfbcf,
    0xc08623b70731f810,0xbe1cef0a72e13a62,
    0xc08623bac30da1c8,0xbe1cf184007d2b6b,
    0xc08623be7d2bfb40,0xbe1cf16f4b239e98,
    0xc08623c2358ea2a0,0xbe1cf0976acada87,
    0xc08623c5ec3733d0,0xbe1cf066318a16ff,
    0xc08623c9a1274880,0xbe1ceffaa7148798,
    0xc08623cd54607820,0xbe1cf23ab02e9b6e,
    0xc08623d105e45800,0xbe1cefdfef7d4fde,
    0xc08623d4b5b47b20,0xbe1cf17fece44f2b,
    0xc08623d863d27270,0xbe1cf18f907d0d7c,
    0xc08623dc103fccb0,0xbe1cee61fe072c98,
    0xc08623dfbafe1668,0xbe1cf022dd891e2f,
    0xc08623e3640eda20,0xbe1ceecc1daf4358,
    0xc08623e70b73a028,0xbe1cf0173c4fa380,
    0xc08623eab12deec8,0xbe1cf16a2150c2f4,
    0xc08623ee553f4a30,0xbe1cf1bf980b1f4b,
    0xc08623f1f7a93480,0xbe1cef8b731663c2,
    0xc08623f5986d2dc0,0xbe1cee9a664d7ef4,
    0xc08623f9378cb3f0,0xbe1cf1eda2af6400,
    0xc08623fcd5094320,0xbe1cf1923f9d68d7,
    0xc086240070e45548,0xbe1cf0747cd3e03a,
    0xc08624040b1f6260,0xbe1cf22ee855bd6d,
    0xc0862407a3bbe078,0xbe1cf0d57360c00b,
    0xc086240b3abb4398,0xbe1ceebc815cd575,
    0xc086240ed01efdd0,0xbe1cf03bfb970951,
    0xc086241263e87f50,0xbe1cf16e74768529,
    0xc0862415f6193658,0xbe1cefec64b8becb,
    0xc086241986b28f30,0xbe1cf0838d210baa,
    0xc086241d15b5f448,0xbe1cf0ea86e75b11,
    0xc0862420a324ce28,0xbe1cf1708d11d805,
    0xc08624242f008380,0xbe1ceea988c5a417,
    0xc0862427b94a7910,0xbe1cef166a7bbca5,
    0xc086242b420411d0,0xbe1cf0c9d9e86a38,
    0xc086242ec92eaee8,0xbe1cef0946455411,
    0xc08624324ecbaf98,0xbe1cefea60907739,
    0xc0862435d2dc7160,0xbe1cf1ed0934ce42,
    0xc086243955624ff8,0xbe1cf191ba746c7d,
    0xc086243cd65ea548,0xbe1ceeec78cf2a7e,
    0xc086244055d2c968,0xbe1cef345284c119,
    0xc0862443d3c012b8,0xbe1cf24f77355219,
    0xc08624475027d5e8,0xbe1cf05bf087e114,
    0xc086244acb0b65d0,0xbe1cef3504a32189,
    0xc086244e446c1398,0xbe1ceff54b2a406f,
    0xc0862451bc4b2eb8,0xbe1cf0757d54ed4f,
    0xc086245532aa04f0,0xbe1cf0c8099fdfd5,
    0xc0862458a789e250,0xbe1cf0b173796a31,
    0xc086245c1aec1138,0xbe1cf11d8734540d,
    0xc086245f8cd1da60,0xbe1cf1916a723ceb,
    0xc0862462fd3c84d8,0xbe1cf19a911e1da7,
    0xc08624666c2d5608,0xbe1cf23a9ef72e4f,
    0xc0862469d9a591c0,0xbe1cef503d947663,
    0xc086246d45a67a18,0xbe1cf0fceeb1a0b2,
    0xc0862470b0314fa8,0xbe1cf107e27e4fbc,
    0xc086247419475160,0xbe1cf03dd9922331,
    0xc086247780e9bc98,0xbe1cefce1a10e129,
    0xc086247ae719cd18,0xbe1ceea47f73c4f6,
    0xc086247e4bd8bd10,0xbe1ceec0ac56d100,
    0xc0862481af27c528,0xbe1cee8a6593278a,
    0xc086248511081c70,0xbe1cf2231dd9dec7,
    0xc0862488717af888,0xbe1cf0b4b8ed7da8,
    0xc086248bd0818d68,0xbe1cf1bd8d835002,
    0xc086248f2e1d0d98,0xbe1cf259acc107f4,
    0xc08624928a4eaa20,0xbe1cee897636b00c,
    0xc0862495e5179270,0xbe1cee757f20c326,
    0xc08624993e78f490,0xbe1cefafd3aa54a4,
    0xc086249c9673fd10,0xbe1cee7298d38b97,
    0xc086249fed09d6f8,0xbe1ceedc158d4ceb,
    0xc08624a3423babe0,0xbe1cf2282987cb2e,
    0xc08624a6960aa400,0xbe1cefe7381ecc4b,
    0xc08624a9e877e600,0xbe1cef328dbbce80,
    0xc08624ad39849728,0xbe1cefde45f3cc71,
    0xc08624b08931db58,0xbe1cefa8b89433b9,
    0xc08624b3d780d500,0xbe1cef6773c0b139,
    0xc08624b72472a528,0xbe1cf031c931c11f,
    0xc08624ba70086b78,0xbe1cf088f49275e7,
    0xc08624bdba434630,0xbe1cf17de0eaa86d,
    0xc08624c103245238,0xbe1cefd492f1ba75,
    0xc08624c44aacab08,0xbe1cf1253e154466,
    0xc08624c790dd6ad0,0xbe1cf0fb09ee6d55,
    0xc08624cad5b7aa58,0xbe1cf1f08dd048fe,
    0xc08624ce193c8120,0xbe1ceeca0809697f,
    0xc08624d15b6d0538,0xbe1cef8d5662d968,
    0xc08624d49c4a4b78,0xbe1cee97b556ed78,
    0xc08624d7dbd56750,0xbe1cf1b14b6acb75,
    0xc08624db1a0f6b00,0xbe1cef1e860623f2,
    0xc08624de56f96758,0xbe1ceeaf4d156f3d,
    0xc08624e192946bf0,0xbe1ceecc12b400ed,
    0xc08624e4cce18710,0xbe1cf180c40c794f,
    0xc08624e805e1c5c8,0xbe1cf185a08f7f65,
    0xc08624eb3d9633d8,0xbe1cef45fc924078,
    0xc08624ee73ffdbb0,0xbe1cf1e4f457f32a,
    0xc08624f1a91fc6a0,0xbe1cf040147b8a5a,
    0xc08624f4dcf6fc98,0xbe1cf1effca0dfb2,
    0xc08624f80f868468,0xbe1cf0470146e5bc,
    0xc08624fb40cf6390,0xbe1cef4dd186e501,
    0xc08624fe70d29e60,0xbe1ceebe257f66c7,
    0xc08625019f9137f0,0xbe1ceefb7a1c395c,
    0xc0862504cd0c3220,0xbe1cf209dedfed8c,
    0xc0862507f9448db0,0xbe1cf082da464994,
    0xc086250b243b4a18,0xbe1cee88694a73cf,
    0xc086250e4df165a0,0xbe1cf0b61e8f0531,
    0xc08625117667dd78,0xbe1cf1106599c962,
    0xc08625149d9fad98,0xbe1ceff1ee88af1f,
    0xc0862517c399d0c8,0xbe1cf0f746994ef6,
    0xc086251ae85740b8,0xbe1cefe8a1d077e4,
    0xc086251e0bd8f5e0,0xbe1cf1a1da036092,
    0xc08625212e1fe7a8,0xbe1cf0f8a7786fcd,
    0xc08625244f2d0c48,0xbe1cefa1174a07a7,
    0xc08625276f0158d8,0xbe1cef1043aa5b25,
    0xc086252a8d9dc150,0xbe1cf15d521c169d,
    0xc086252dab033898,0xbe1cf220bba8861f,
    0xc0862530c732b078,0xbe1cef51e310eae2,
    0xc0862533e22d1988,0xbe1cf222fcedd8ae,
    0xc0862536fbf36370,0xbe1cefdb4da4bda8,
    0xc086253a14867ca0,0xbe1ceeafc1112171,
    0xc086253d2be75280,0xbe1cee99dfb4b408,
    0xc08625404216d160,0xbe1cf22d2536f06b,
    0xc08625435715e498,0xbe1cef6abbf2e268,
    0xc08625466ae57648,0xbe1cf093a14789f5,
    0xc08625497d866fa0,0xbe1cf0f93655603c,
    0xc086254c8ef9b8b8,0xbe1cf1cc40c9aafc,
    0xc086254f9f4038a8,0xbe1ceeea5f4e9157,
    0xc0862552ae5ad568,0xbe1cefa9f52d4997,
    0xc0862555bc4a7400,0xbe1cefa490a638ff,
    0xc0862558c90ff868,0xbe1cef7fcf797d6f,
    0xc086255bd4ac4590,0xbe1cf1b4c51113c9,
    0xc086255edf203d78,0xbe1cef55e5b4a55d,
    0xc0862561e86cc100,0xbe1cf0d37a25f9dc,
    0xc0862564f092b028,0xbe1ceebe9efc19d9,
    0xc0862567f792e9d8,0xbe1cee8ad30a57b5,
    0xc086256afd6e4c08,0xbe1cef4e1817b90b,
    0xc086256e0225b3b8,0xbe1cee7fa9229996,
    0xc086257105b9fce0,0xbe1cf0b54963d945,
    0xc0862574082c0298,0xbe1cee5f2f3c7995,
    0xc0862577097c9ee0,0xbe1cf0828e303a2c,
    0xc086257a09acaae0,0xbe1cf172c3078947,
    0xc086257d08bcfec0,0xbe1cf189252afa22,
    0xc086258006ae71b8,0xbe1cefdb80426923,
    0xc08625830381da08,0xbe1ceef1391a0372,
    0xc0862585ff380d00,0xbe1cf17720c78d13,
    0xc0862588f9d1df18,0xbe1ceef1f9027d83,
    0xc086258bf35023b8,0xbe1cf06fac99dec9,
    0xc086258eebb3ad78,0xbe1cf1373eeb45c0,
    0xc0862591e2fd4e00,0xbe1cef777536bb81,
    0xc0862594d92dd600,0xbe1cf0f43ca40766,
    0xc0862597ce461558,0xbe1cefb2cfc6766b,
    0xc086259ac246daf0,0xbe1ceea49e64ffa2,
    0xc086259db530f4c8,0xbe1cf250fa457dec,
    0xc08625a0a7053018,0xbe1cf17d8bb2a44e,
    0xc08625a397c45918,0xbe1cf1d5906d54b7,
    0xc08625a6876f3b30,0xbe1cf08fe7b31780,
    0xc08625a97606a0e0,0xbe1cef13edfc9d11,
    0xc08625ac638b53c8,0xbe1cef9d2b107219,
    0xc08625af4ffe1cb0,0xbe1cf1ddd4ff6160,
    0xc08625b23b5fc390,0xbe1cefa02a996495,
    0xc08625b525b10f68,0xbe1cf166a7e37ee5,
    0xc08625b80ef2c680,0xbe1cef0b171068a5,
    0xc08625baf725ae28,0xbe1cf05c80779283,
    0xc08625bdde4a8af0,0xbe1cf1bbfbffb889,
    0xc08625c0c4622090,0xbe1cf0b8666c0124,
    0xc08625c3a96d31e0,0xbe1cf0a8fcf47a86,
    0xc08625c68d6c80f0,0xbe1cef46e18cb092,
    0xc08625c97060cef0,0xbe1cf1458a350efb,
    0xc08625cc524adc58,0xbe1ceeea1dadce12,
    0xc08625cf332b68b0,0xbe1cf0a1bfdc44c7,
    0xc08625d2130332d0,0xbe1cef96d02da73e,
    0xc08625d4f1d2f8a8,0xbe1cf2451c3c7701,
    0xc08625d7cf9b7778,0xbe1cf10d08f83812,
    0xc08625daac5d6ba0,0xbe1ceec5b4895c5e,
    0xc08625dd881990b0,0xbe1cf14e1325c5e4,
    0xc08625e062d0a188,0xbe1cf21d0904be12,
    0xc08625e33c835838,0xbe1ceed0839bcf21,
    0xc08625e615326df0,0xbe1cf1bb944889d2,
    0xc08625e8ecde9b48,0xbe1cee738e85eece,
    0xc08625ebc38897e0,0xbe1cf25c2bc6ef12,
    0xc08625ee99311ac8,0xbe1cf132b70a41ad,
    0xc08625f16dd8da28,0xbe1cf1984236a6e3,
    0xc08625f441808b78,0xbe1cf19ae74998f9,
    0xc08625f71428e370,0xbe1cef3e175d61a1,
    0xc08625f9e5d295f8,0xbe1cf101f9868fd9,
    0xc08625fcb67e5658,0xbe1cee69db83dcd2,
    0xc08625ff862cd6f8,0xbe1cf081b636af51,
    0xc086260254dec9a8,0xbe1cee62c7d59b3e,
    0xc08626052294df58,0xbe1cf1b745c57716,
    0xc0862607ef4fc868,0xbe1cef3d2800ea23,
    0xc086260abb103458,0xbe1cef480ff1acd2,
    0xc086260d85d6d200,0xbe1cf2424c9a17ef,
    0xc08626104fa44f90,0xbe1cf12cfde90fd5,
    0xc086261318795a68,0xbe1cf21f590dd5b6,
    0xc0862615e0569f48,0xbe1cf0c50f9cd28a,
    0xc0862618a73cca30,0xbe1ceedbdb520545,
    0xc086261b6d2c8668,0xbe1cf0b030396011,
    0xc086261e32267e98,0xbe1cf19917010e96,
    0xc0862620f62b5cb0,0xbe1cf07331355985,
    0xc0862623b93bc9e8,0xbe1cf01ae921a1c3,
    0xc08626267b586ed0,0xbe1cefe5cf0dbf0c,
    0xc08626293c81f348,0xbe1cf01b258aeb50,
    0xc086262bfcb8fe88,0xbe1cee6b9e7f4c68,
    0xc086262ebbfe3710,0xbe1cee684a9b21c9,
    0xc08626317a5242b8,0xbe1cf1f8bcde9a8b,
    0xc086263437b5c6c0,0xbe1cf1d063d36238,
    0xc0862636f42967a8,0xbe1cf1e31a19075e,
    0xc0862639afadc950,0xbe1cf1d8efdf7e7d,
    0xc086263c6a438ef0,0xbe1cf1812ee72dba,
    0xc086263f23eb5b18,0xbe1cf1449a9a2279,
    0xc0862641dca5cfb8,0xbe1cee96edce5085,
    0xc086264494738e08,0xbe1cf06797bd03b2,
    0xc08626474b5536b8,0xbe1cef91b9b7ffc1,
    0xc086264a014b69c0,0xbe1cef4b6721278f,
    0xc086264cb656c678,0xbe1cf1942925eb4a,
    0xc086264f6a77eba8,0xbe1cefa2c7bc2e39,
    0xc08626521daf7758,0xbe1cf252595aceb3,
    0xc0862654cffe0718,0xbe1cee8e9ae47ec2,
    0xc0862657816437a8,0xbe1cf1bf913828fa,
    0xc086265a31e2a558,0xbe1cf23475d6b366,
    0xc086265ce179ebc8,0xbe1cef8df00a922b,
    0xc086265f902aa5f0,0xbe1cef279bfa43e0,
    0xc08626623df56e38,0xbe1cf080e10b8365,
    0xc0862664eadade70,0xbe1cf1a518f9b544,
    0xc086266796db8fd0,0xbe1cef9308fed9e9,
    0xc086266a41f81ae8,0xbe1ceea3ae6b19c9,
    0xc086266cec3117b8,0xbe1ceef06003d4c2,
    0xc086266f95871da8,0xbe1cf0b8457ffb0c,
    0xc08626723dfac390,0xbe1cf0c526745ad6,
    0xc0862674e58c9fa8,0xbe1cf0cf91ff7b5d,
    0xc08626778c3d4798,0xbe1cefe260819380,
    0xc086267a320d5070,0xbe1ceebd90aa27a3,
    0xc086267cd6fd4ea8,0xbe1cf0388121dffa,
    0xc086267f7b0dd630,0xbe1cf1a3881435f1,
    0xc08626821e3f7a68,0xbe1cef28e9d9ac52,
    0xc0862684c092ce08,0xbe1cf02d300062dd,
    0xc086268762086350,0xbe1cefaee1edfa35,
    0xc086268a02a0cbe0,0xbe1cf0a5a052e936,
    0xc086268ca25c98d8,0xbe1cee60a4a497ed,
    0xc086268f413c5ab0,0xbe1cf0e4a5d0cf49,
    0xc0862691df40a170,0xbe1cf149235a4e6e,
    0xc08626947c69fc80,0xbe1cf215180b9fcc,
    0xc086269718b8fac8,0xbe1cef9b156a9840,
    0xc0862699b42e2a90,0xbe1cf054c91441be,
    0xc086269c4eca19a8,0xbe1cf13ded26512c,
    0xc086269ee88d5550,0xbe1cf22ea4d8ac06,
    0xc08626a181786a40,0xbe1cf2354666ee2e,
    0xc08626a4198be4a8,0xbe1cefef936752b3,
    0xc08626a6b0c85020,0xbe1cf1e360a9db68,
    0xc08626a9472e37d8,0xbe1ceed6aeb812c5,
    0xc08626abdcbe2650,0xbe1cf227340b4986,
    0xc08626ae7178a5b0,0xbe1cf0215a0cbe0d,
    0xc08626b1055e3f70,0xbe1cf256adf0ae26,
    0xc08626b3986f7ca8,0xbe1ceff3c67aed06,
    0xc08626b62aace5c8,0xbe1cf2159fb93652,
    0xc08626b8bc1702e0,0xbe1cf01e6dbd1c7f,
    0xc08626bb4cae5b60,0xbe1cf009e75d1c0c,
    0xc08626bddc737648,0xbe1ceec10a020e73,
    0xc08626c06b66da08,0xbe1cf06d5783eee7,
    0xc08626c2f9890ca0,0xbe1cf0cb8f169ffe,
    0xc08626c586da9388,0xbe1cef7de2452430,
    0xc08626c8135bf3b0,0xbe1cf05da6f783ae,
    0xc08626ca9f0db198,0xbe1cefcc877d681d,
    0xc08626cd29f05138,0xbe1cef0531954ab3,
    0xc08626cfb4045608,0xbe1cf06b8565ea3d,
    0xc08626d23d4a4310,0xbe1cefdc455d9d7e,
    0xc08626d4c5c29ad0,0xbe1ceefc47e8fa64,
    0xc08626d74d6ddf48,0xbe1cf1872bf033f2,
    0xc08626d9d44c9210,0xbe1cf19d91087f9d,
    0xc08626dc5a5f3438,0xbe1cf012d444c6ab,
    0xc08626dedfa64650,0xbe1cf0ba528ee153,
    0xc08626e164224880,0xbe1ceeb431709788,
    0xc08626e3e7d3ba60,0xbe1cf0b9af31a6a5,
    0xc08626e66abb1b28,0xbe1cf168fb2e135b,
    0xc08626e8ecd8e990,0xbe1cef9097461c93,
    0xc08626eb6e2da3d0,0xbe1cee7a434735d8,
    0xc08626edeeb9c7a8,0xbe1cf235732b86f2,
    0xc08626f06e7dd280,0xbe1cefe1510b89e6,
    0xc08626f2ed7a4120,0xbe1cf1f64b9b80ef,
    0xc08626f56baf9000,0xbe1cf08f320ca339,
    0xc08626f7e91e3b08,0xbe1cf1b1de2808a1,
    0xc08626fa65c6bdc0,0xbe1cf1976d778b28,
    0xc08626fce1a99338,0xbe1ceef40a4f076f,
    0xc08626ff5cc73600,0xbe1cef3e45869ce3,
    0xc0862701d7202048,0xbe1ceef601b4c9d6,
    0xc086270450b4cbc0,0xbe1cf1eaf0b57fd6,
    0xc0862706c985b1c0,0xbe1cef82a44990f3,
    0xc086270941934b10,0xbe1ceefe32981f2c,
    0xc086270bb8de1018,0xbe1cefbf6f5a0445,
    0xc086270e2f6678d0,0xbe1cf18dba75792c,
    0xc0862710a52cfcc8,0xbe1cf0da64ce995f,
    0xc08627131a321318,0xbe1cef04ac0fb802,
    0xc08627158e763268,0xbe1cee9d4e2ad9bd,
    0xc086271801f9d0f8,0xbe1cefa9b55407b5,
    0xc086271a74bd64a0,0xbe1cefe6bd329570,
    0xc086271ce6c162c8,0xbe1cef0b1205dc85,
    0xc086271f58064068,0xbe1cef092a785e3f,
    0xc0862721c88c7210,0xbe1cf050dcdaac30,
    0xc086272438546be8,0xbe1cf210907ded8b,
    0xc0862726a75ea1b8,0xbe1cee760be44f99,
    0xc086272915ab86c0,0xbe1ceeeee07c2bcc,
    0xc086272b833b8df0,0xbe1cf06874992df5,
    0xc086272df00f29d0,0xbe1cef8fac5d4899,
    0xc08627305c26cc70,0xbe1cf1103241cc99,
    0xc0862732c782e788,0xbe1cf1d35fef83fe,
    0xc08627353223ec68,0xbe1cef3ec8133e1d,
    0xc08627379c0a4be8,0xbe1cef7261daccd8,
    0xc086273a05367688,0xbe1cf18656c50806,
    0xc086273c6da8dc68,0xbe1cf1c8736e049a,
    0xc086273ed561ed38,0xbe1cf1f93bff4911,
    0xc08627413c621848,0xbe1cf188a4ea680c,
    0xc0862743a2a9cc80,0xbe1cf1d270930c80,
    0xc086274608397868,0xbe1cf25a328c28e2,
    0xc08627486d118a28,0xbe1cf106f90aa3b8,
    0xc086274ad1326f80,0xbe1cee5e9d2e885a,
    0xc086274d349c95c0,0xbe1cf1c0bac27228,
    0xc086274f975069f8,0xbe1cf1a1500f9b1c,
    0xc0862751f94e58c0,0xbe1cefc30663ac44,
    0xc08627545a96ce48,0xbe1cf17123e427a2,
    0xc0862756bb2a3678,0xbe1cefb92749fea4,
    0xc08627591b08fcc0,0xbe1cefa40e1ea74a,
    0xc086275b7a338c40,0xbe1cee6f4612c3e9,
    0xc086275dd8aa4fa8,0xbe1cf1c54a053627,
    0xc0862760366db168,0xbe1ceff5eb503d9e,
    0xc0862762937e1b70,0xbe1cf02e47f10cee,
    0xc0862764efdbf768,0xbe1ceeb06e1d0dad,
    0xc08627674b87ae88,0xbe1cf10aadd6dba5,
    0xc0862769a681a9c0,0xbe1cf24e9913d30f,
    0xc086276c00ca51a0,0xbe1cef47b301e312,
    0xc086276e5a620e48,0xbe1ceeb1cefc2e85,
    0xc0862770b3494788,0xbe1cf16f1fbbe011,
    0xc08627730b8064e8,0xbe1ceebdf75174c7,
    0xc08627756307cd70,0xbe1cf06e3871a0da,
    0xc0862777b9dfe7f0,0xbe1cef16799fd554,
    0xc086277a10091ac0,0xbe1cf248dabf5377,
    0xc086277c6583cc00,0xbe1cf0c78d92a2cd,
    0xc086277eba506158,0xbe1cf0b911b029f0,
    0xc08627810e6f4028,0xbe1cefdc24719766,
    0xc086278361e0cd70,0xbe1cefbb6562b7e7,
    0xc0862785b4a56dd8,0xbe1cf1e0afb349ec,
    0xc086278806bd85c0,0xbe1cf008292e52fc,
    0xc086278a58297918,0xbe1cf053073872bf,
    0xc086278ca8e9ab88,0xbe1cf17a0a55a947,
    0xc086278ef8fe8068,0xbe1ceeffb0b60234,
    0xc086279148685aa0,0xbe1cf162204794a8,
    0xc086279397279ce0,0xbe1cf24cc8cb48ac,
    0xc0862795e53ca978,0xbe1cf0c9be68d5c3,
    0xc086279832a7e258,0xbe1cf172cd3d7388,
    0xc086279a7f69a930,0xbe1ceea2465fbce5,
    0xc086279ccb825f40,0xbe1cf0a386d2500f,
    0xc086279f16f26590,0xbe1cf1e338ddc18a,
    0xc08627a161ba1cd0,0xbe1cef1f5049867f,
    0xc08627a3abd9e548,0xbe1cef96c1ea8b1f,
    0xc08627a5f5521f00,0xbe1cf138f6fd3c26,
    0xc08627a83e2329b0,0xbe1cf0d4fcbfdf3a,
    0xc08627aa864d64b0,0xbe1cf24870c12c81,
    0xc08627accdd12f18,0xbe1cf0ae2a56348d,
    0xc08627af14aee7a0,0xbe1cee8ca1a9b893,
    0xc08627b15ae6eca8,0xbe1cf20414d637b0,
    0xc08627b3a0799c60,0xbe1cf0fc6b7b12d8,
    0xc08627b5e5675488,0xbe1cf152d93c4a00,
    0xc08627b829b072a0,0xbe1cf1073f9b77c2,
    0xc08627ba6d5553d8,0xbe1cee694f97d5a4,
    0xc08627bcb0565500,0xbe1cf0456b8239d7,
    0xc08627bef2b3d2b0,0xbe1cf211497127e3,
    0xc08627c1346e2930,0xbe1cf01856c0384d,
    0xc08627c37585b468,0xbe1cefa7dd05479e,
    0xc08627c5b5fad000,0xbe1cef3ae8e50b93,
    0xc08627c7f5cdd750,0xbe1ceea5f32fdd3a,
    0xc08627ca34ff2560,0xbe1cef424caeb8d9,
    0xc08627cc738f14f0,0xbe1cf0194d07a81f,
    0xc08627ceb17e0070,0xbe1cf20f452000c1,
    0xc08627d0eecc4210,0xbe1cf00e356218e4,
    0xc08627d32b7a33a0,0xbe1cef30484b4bcb,
    0xc08627d567882eb0,0xbe1ceeea11a6641b,
    0xc08627d7a2f68c80,0xbe1cf13492d5bd7b,
    0xc08627d9ddc5a618,0xbe1ceeb7048fad96,
    0xc08627dc17f5d418,0xbe1ceef0666f0477,
    0xc08627de51876ee8,0xbe1cf060d4b8b5c2,
    0xc08627e08a7acea8,0xbe1cf0b2a4b6ff8c,
    0xc08627e2c2d04b28,0xbe1cf0e34809a875,
    0xc08627e4fa883bf0,0xbe1cf16bf74a3522,
    0xc08627e731a2f848,0xbe1cee6a24623d57,
    0xc08627e96820d718,0xbe1cefc7b4f1528e,
    0xc08627eb9e022f18,0xbe1cf163051f3548,
    0xc08627edd34756b8,0xbe1cef36b3366305,
    0xc08627f007f0a408,0xbe1cf18134625550,
    0xc08627f23bfe6cf0,0xbe1cf0ec32ec1a11,
    0xc08627f46f710700,0xbe1ceeb3b64f3edc,
    0xc08627f6a248c778,0xbe1cf0cd15805bc8,
    0xc08627f8d4860368,0xbe1cf20db3bddebe,
    0xc08627fb06290f90,0xbe1cf25188430e25,
    0xc08627fd37324070,0xbe1ceea1713490f9,
    0xc08627ff67a1ea28,0xbe1cf159521d234c,
    0xc0862801977860b8,0xbe1cf24dfe50783b,
    0xc0862803c6b5f7d0,0xbe1ceef2ef89a60b,
    0xc0862805f55b02c8,0xbe1cee7fc919d62c,
    0xc08628082367d4c0,0xbe1cf215a7fb513a,
    0xc086280a50dcc0a8,0xbe1cf0e4401c5ed4,
    0xc086280c7dba1910,0xbe1cf04ec734d256,
    0xc086280eaa003050,0xbe1cf010ad787fea,
    0xc0862810d5af5880,0xbe1cee622478393d,
    0xc086281300c7e368,0xbe1cf01c7482564f,
    0xc08628152b4a22a0,0xbe1cf0de20d33536,
    0xc086281755366778,0xbe1cef2edae5837d,
    0xc08628197e8d02f0,0xbe1cf0a345318cc9,
    0xc086281ba74e45d8,0xbe1cf20085aa34b8,
    0xc086281dcf7a80c0,0xbe1cef5fa845ad83,
    0xc086281ff71203e0,0xbe1cf050d1df69c4,
    0xc08628221e151f48,0xbe1ceffe43c035b9,
    0xc0862824448422b8,0xbe1cf14f3018d3c2,
    0xc08628266a5f5dc0,0xbe1cef0a5fbae83d,
    0xc08628288fa71f98,0xbe1ceff8a95b72a1,
    0xc086282ab45bb750,0xbe1cef073aa9849b,
    0xc086282cd87d73a8,0xbe1cef69b3835c02,
    0xc086282efc0ca328,0xbe1cf0bc139379a9,
    0xc08628311f099420,0xbe1cef247a9ec596,
    0xc086283341749490,0xbe1cef74bbcc488a,
    0xc0862835634df248,0xbe1cef4bc42e7b8e,
    0xc08628378495fad0,0xbe1cf136d4d5a810,
    0xc0862839a54cfb80,0xbe1cf0d290b24dd8,
    0xc086283bc5734168,0xbe1ceeebde8e0065,
    0xc086283de5091950,0xbe1cf1a09f60aa1e,
    0xc0862840040ecfe0,0xbe1cf0803947a234,
    0xc08628422284b168,0xbe1cf0abf7638127,
    0xc0862844406b0a08,0xbe1cf0f73ee12058,
    0xc08628465dc225a0,0xbe1cf2079971b26c,
    0xc08628487a8a4fe0,0xbe1cee74957564b1,
    0xc086284a96c3d420,0xbe1ceee77c1b7d43,
    0xc086284cb26efd90,0xbe1cf23addba6e09,
    0xc086284ecd8c1730,0xbe1cf199f4a1da60,
    0xc0862850e81b6bb0,0xbe1cf09fdea81393,
    0xc0862853021d4588,0xbe1cf176adb417f7,
    0xc08628551b91ef00,0xbe1cf0f64f84a8da,
    0xc08628573479b220,0xbe1ceec34cf49523,
    0xc08628594cd4d8a8,0xbe1cf16d60fbe0bb,
    0xc086285b64a3ac40,0xbe1cee8de7acfc7b,
    0xc086285d7be67630,0xbe1ceee6256cce8d,
    0xc086285f929d7fa0,0xbe1cee7d66a3d8a5,
    0xc0862861a8c91170,0xbe1cf0bef8265792,
    0xc0862863be697458,0xbe1cf097f890c6f8,
    0xc0862865d37ef0c8,0xbe1cf09502d5c3fc,
    0xc0862867e809cf00,0xbe1ceeffb239dac7,
    0xc0862869fc0a56f8,0xbe1cf1fbfff95c98,
    0xc086286c0f80d090,0xbe1cefa57ad3eef7,
    0xc086286e226d8348,0xbe1cf22c58b9183d,
    0xc086287034d0b690,0xbe1ceff262d0a248,
    0xc086287246aab180,0xbe1cefa7bc194186,
    0xc086287457fbbb08,0xbe1cf06782d784d9,
    0xc086287668c419e0,0xbe1cf1d44d0eaa07,
    0xc086287879041490,0xbe1cf034803c8a48,
    0xc086287a88bbf158,0xbe1cf08e84916b6f,
    0xc086287c97ebf650,0xbe1cf0c4d3dc1bc7,
    0xc086287ea6946958,0xbe1cefb1e4625943,
    0xc0862880b4b59010,0xbe1cf143efdd1fd0,
    0xc0862882c24faff8,0xbe1cee9896d016da,
    0xc0862884cf630e38,0xbe1cf2186072f2cc,
    0xc0862886dbefeff0,0xbe1cef9217633d34,
    0xc0862888e7f699e0,0xbe1cf05603549486,
    0xc086288af37750b0,0xbe1cef50fff513d3,
    0xc086288cfe7258c0,0xbe1cf127713b32d0,
    0xc086288f08e7f650,0xbe1cf05015520f3d,
    0xc086289112d86d58,0xbe1cf12eb458b26f,
    0xc08628931c4401a8,0xbe1cf22eae2887ed,
    0xc0862895252af6e0,0xbe1cefdd6656dd2d,
    0xc08628972d8d9058,0xbe1cf1048ea4e646,
    0xc0862899356c1150,0xbe1ceec4501167e9,
    0xc086289b3cc6bcb8,0xbe1cf0ad52becc3f,
    0xc086289d439dd568,0xbe1cf0daa4e00e35,
    0xc086289f49f19df8,0xbe1cf00b80de8d6a,
    0xc08628a14fc258c8,0xbe1cf1bcf2ea8464,
    0xc08628a355104818,0xbe1cf0435e2782b0,
    0xc08628a559dbade0,0xbe1cf0e3e1a5f56c,
    0xc08628a75e24cbf8,0xbe1cefed9d5a721d,
    0xc08628a961ebe3f8,0xbe1cf0d2d74321e2,
    0xc08628ab65313750,0xbe1cf24200eb55e9,
    0xc08628ad67f50740,0xbe1cf23e9d7cf979,
    0xc08628af6a3794d0,0xbe1cf23a088f421c,
    0xc08628b16bf920e0,0xbe1cef2c1de1ab32,
    0xc08628b36d39ec08,0xbe1cf1abc231f7b2,
    0xc08628b56dfa36d0,0xbe1cf2074d5ba303,
    0xc08628b76e3a4180,0xbe1cf05cd5eed880,
    0x0000000000000000,0x0000000000000000,
    0x0000000000000000,0x0000000000000000,
    0x0000000000000000,0x0000000000000000,
    0x8000000000000000,0xbf5ff802a9ab10e6,
    0xbf6ff00aa2b10bc0,0xbf77ee11ebd82e94,
    0xbf7fe02a6b106789,0xbf83e7295d25a7d9,
    0xbf87dc475f810a77,0xbf8bcf712c74384c,
    0xbf8fc0a8b0fc03e4,0xbf91d7f7eb9eebe7,
    0xbf93cea44346a575,0xbf95c45a51b8d389,
    0xbf97b91b07d5b11b,0xbf99ace7551cc514,
    0xbf9b9fc027af9198,0xbf9d91a66c543cc4,
    0xbf9f829b0e783300,0xbfa0b94f7c196176,
    0xbfa1b0d98923d980,0xbfa2a7ec2214e873,
    0xbfa39e87b9febd60,0xbfa494acc34d911c,
    0xbfa58a5bafc8e4d5,0xbfa67f94f094bd98,
    0xbfa77458f632dcfc,0xbfa868a83083f6cf,
    0xbfa95c830ec8e3eb,0xbfaa4fe9ffa3d235,
    0xbfab42dd711971bf,0xbfac355dd0921f2d,
    0xbfad276b8adb0b52,0xbfae19070c276016,
    0xbfaf0a30c01162a6,0xbfaffae9119b9303,
    0xbfb075983598e471,0xbfb0ed839b5526fe,
    0xbfb16536eea37ae1,0xbfb1dcb263db1944,
    0xbfb253f62f0a1417,0xbfb2cb0283f5de1f,
    0xbfb341d7961bd1d1,0xbfb3b87598b1b6ee,
    0xbfb42edcbea646f0,0xbfb4a50d3aa1b040,
    0xbfb51b073f06183f,0xbfb590cafdf01c28,
    0xbfb60658a93750c4,0xbfb67bb0726ec0fc,
    0xbfb6f0d28ae56b4c,0xbfb765bf23a6be13,
    0xbfb7da766d7b12cd,0xbfb84ef898e8282a,
    0xbfb8c345d6319b21,0xbfb9375e55595ede,
    0xbfb9ab42462033ad,0xbfba1ef1d8061cd4,
    0xbfba926d3a4ad563,0xbfbb05b49bee43fe,
    0xbfbb78c82bb0eda1,0xbfbbeba818146765,
    0xbfbc5e548f5bc743,0xbfbcd0cdbf8c13e1,
    0xbfbd4313d66cb35d,0xbfbdb5270187d927,
    0xbfbe27076e2af2e6,0xbfbe98b549671467,
    0xbfbf0a30c01162a6,0xbfbf7b79fec37ddf,
    0xbfbfec9131dbeabb,0xbfc02ebb42bf3d4b,
    0xbfc0671512ca596e,0xbfc09f561ee719c3,
    0xbfc0d77e7cd08e59,0xbfc10f8e422539b1,
    0xbfc14785846742ac,0xbfc17f6458fca611,
    0xbfc1b72ad52f67a0,0xbfc1eed90e2dc2c3,
    0xbfc2266f190a5acb,0xbfc25ded0abc6ad2,
    0xbfc29552f81ff523,0xbfc2cca0f5f5f251,
    0xbfc303d718e47fd3,0xbfc33af575770e4f,
    0xbfc371fc201e8f74,0xbfc3a8eb2d31a376,
    0xbfc3dfc2b0ecc62a,0xbfc41682bf727bc0,
    0xbfc44d2b6ccb7d1e,0xbfc483bccce6e3dd,
    0xbfc4ba36f39a55e5,0xbfc4f099f4a230b2,
    0xbfc526e5e3a1b438,0xbfc55d1ad4232d6f,
    0xbfc59338d9982086,0xbfc5c940075972b9,
    0xbfc5ff3070a793d4,0xbfc6350a28aaa758,
    0xbfc66acd4272ad51,0xbfc6a079d0f7aad2,
    0xbfc6d60fe719d21d,0xbfc70b8f97a1aa75,
    0xbfc740f8f54037a5,0xbfc7764c128f2127,
    0xbfc7ab890210d909,0xbfc7e0afd630c274,
    0xbfc815c0a14357eb,0xbfc84abb75865139,
    0xbfc87fa06520c911,0xbfc8b46f8223625b,
    0xbfc8e928de886d41,0xbfc91dcc8c340bde,
    0xbfc9525a9cf456b4,0xbfc986d3228180ca,
    0xbfc9bb362e7dfb83,0xbfc9ef83d2769a34,
    0xbfca23bc1fe2b563,0xbfca57df28244dcd,
    0xbfca8becfc882f19,0xbfcabfe5ae46124c,
    0xbfcaf3c94e80bff3,0xbfcb2797ee46320c,
    0xbfcb5b519e8fb5a4,0xbfcb8ef670420c3b,
    0xbfcbc286742d8cd6,0xbfcbf601bb0e44e2,
    0xbfcc2968558c18c1,0xbfcc5cba543ae425,
    0xbfcc8ff7c79a9a22,0xbfccc320c0176502,
    0xbfccf6354e09c5dc,0xbfcd293581b6b3e7,
    0xbfcd5c216b4fbb91,0xbfcd8ef91af31d5e,
    0xbfcdc1bca0abec7d,0xbfcdf46c0c722d2f,
    0xbfce27076e2af2e6,0xbfce598ed5a87e2f,
    0xbfce8c0252aa5a60,0xbfcebe61f4dd7b0b,
    0xbfcef0adcbdc5936,0xbfcf22e5e72f105d,
    0xbfcf550a564b7b37,0xbfcf871b28955045,
    0xbfcfb9186d5e3e2b,0xbfcfeb0233e607cc,
    0xbfd00e6c45ad501d,0xbfd0274dc16c232f,
    0xbfd0402594b4d041,0xbfd058f3c703ebc6,
    0xbfd071b85fcd590d,0xbfd08a73667c57af,
    0xbfd0a324e27390e3,0xbfd0bbccdb0d24bd,
    0xbfd0d46b579ab74b,0xbfd0ed005f657da4,
    0xbfd1058bf9ae4ad5,0xbfd11e0e2dad9cb7,
    0xbfd136870293a8b0,0xbfd14ef67f88685a,
    0xbfd1675cababa60e,0xbfd17fb98e15095d,
    0xbfd1980d2dd4236f,0xbfd1b05791f07b49,
    0xbfd1c898c16999fb,0xbfd1e0d0c33716be,
    0xbfd1f8ff9e48a2f3,0xbfd211255986160c,
    0xbfd22941fbcf7966,0xbfd241558bfd1404,
    0xbfd2596010df763a,0xbfd27161913f853d,
    0xbfd2895a13de86a3,0xbfd2a1499f762bc9,
    0xbfd2b9303ab89d25,0xbfd2d10dec508583,
    0xbfd2e8e2bae11d31,0xbfd300aead06350c,
    0xbfd31871c9544185,0xbfd3302c16586588,
    0xbfd347dd9a987d55,0xbfd35f865c93293e,
    0xbfd3772662bfd85b,0xbfd38ebdb38ed321,
    0xbfd3a64c556945ea,0xbfd3bdd24eb14b6a,
    0xbfd3d54fa5c1f710,0xbfd3ecc460ef5f50,
    0xbfd404308686a7e4,0xbfd41b941cce0bee,
    0xbfd432ef2a04e814,0xbfd44a41b463c47c,
    0xbfd4618bc21c5ec2,0xbfd478cd5959b3d9,
    0xbfd49006804009d1,0xbfd4a7373cecf997,
    0xbfd4be5f957778a1,0xbfd4d57f8fefe27f,
    0xbfd4ec973260026a,0xbfd503a682cb1cb3,
    0xbfd51aad872df82d,0xbfd531ac457ee77e,
    0xbfd548a2c3add263,0xbfd55f9107a43ee2,
    0xbfd5767717455a6c,0xbfd58d54f86e02f2,
    0xbfd5a42ab0f4cfe2,0xbfd5baf846aa1b19,
    0xbfd5d1bdbf5809ca,0xbfd5e87b20c2954a,
    0xbfd5ff3070a793d4,0xbfd615ddb4bec13c,
    0xbfd62c82f2b9c795,0x3fd61965cdb02c1f,
    0x3fd602d08af091ec,0x3fd5ec433d5c35ae,
    0x3fd5d5bddf595f30,0x3fd5bf406b543db2,
    0x3fd5a8cadbbedfa1,0x3fd5925d2b112a59,
    0x3fd57bf753c8d1fb,0x3fd565995069514c,
    0x3fd54f431b7be1a9,0x3fd538f4af8f72fe,
    0x3fd522ae0738a3d8,0x3fd50c6f1d11b97c,
    0x3fd4f637ebba9810,0x3fd4e0086dd8baca,
    0x3fd4c9e09e172c3c,0x3fd4b3c077267e9a,
    0x3fd49da7f3bcc41f,0x3fd487970e958770,
    0x3fd4718dc271c41b,0x3fd45b8c0a17df13,
    0x3fd44591e0539f49,0x3fd42f9f3ff62642,
    0x3fd419b423d5e8c7,0x3fd403d086cea79c,
    0x3fd3edf463c1683e,0x3fd3d81fb5946dba,
    0x3fd3c25277333184,0x3fd3ac8ca38e5c5f,
    0x3fd396ce359bbf54,0x3fd3811728564cb2,
    0x3fd36b6776be1117,0x3fd355bf1bd82c8b,
    0x3fd3401e12aecba1,0x3fd32a84565120a8,
    0x3fd314f1e1d35ce4,0x3fd2ff66b04ea9d4,
    0x3fd2e9e2bce12286,0x3fd2d46602adccee,
    0x3fd2bef07cdc9354,0x3fd2a982269a3dbf,
    0x3fd2941afb186b7c,0x3fd27ebaf58d8c9d,
    0x3fd269621134db92,0x3fd25410494e56c7,
    0x3fd23ec5991eba49,0x3fd22981fbef797b,
    0x3fd214456d0eb8d4,0x3fd1ff0fe7cf47a7,
    0x3fd1e9e1678899f4,0x3fd1d4b9e796c245,
    0x3fd1bf99635a6b95,0x3fd1aa7fd638d33f,
    0x3fd1956d3b9bc2fa,0x3fd180618ef18adf,
    0x3fd16b5ccbacfb73,0x3fd1565eed455fc3,
    0x3fd14167ef367783,0x3fd12c77cd00713b,
    0x3fd1178e8227e47c,0x3fd102ac0a35cc1c,
    0x3fd0edd060b78081,0x3fd0d8fb813eb1ef,
    0x3fd0c42d676162e3,0x3fd0af660eb9e279,
    0x3fd09aa572e6c6d4,0x3fd085eb8f8ae797,
    0x3fd07138604d5862,0x3fd05c8be0d9635a,
    0x3fd047e60cde83b8,0x3fd03346e0106062,
    0x3fd01eae5626c691,0x3fd00a1c6adda473,
    0x3fcfeb2233ea07cd,0x3fcfc218be620a5e,
    0x3fcf991c6cb3b379,0x3fcf702d36777df0,
    0x3fcf474b134df229,0x3fcf1e75fadf9bde,
    0x3fcef5ade4dcffe6,0x3fceccf2c8fe920a,
    0x3fcea4449f04aaf5,0x3fce7ba35eb77e2a,
    0x3fce530effe71012,0x3fce2a877a6b2c12,
    0x3fce020cc6235ab5,0x3fcdd99edaf6d7e9,
    0x3fcdb13db0d48940,0x3fcd88e93fb2f450,
    0x3fcd60a17f903515,0x3fcd38666871f465,
    0x3fcd1037f2655e7b,0x3fcce816157f1988,
    0x3fccc000c9db3c52,0x3fcc97f8079d44ec,
    0x3fcc6ffbc6f00f71,0x3fcc480c0005ccd1,
    0x3fcc2028ab17f9b4,0x3fcbf851c067555f,
    0x3fcbd087383bd8ad,0x3fcba8c90ae4ad19,
    0x3fcb811730b823d2,0x3fcb5971a213acdb,
    0x3fcb31d8575bce3d,0x3fcb0a4b48fc1b46,
    0x3fcae2ca6f672bd4,0x3fcabb55c31693ad,
    0x3fca93ed3c8ad9e3,0x3fca6c90d44b704e,
    0x3fca454082e6ab05,0x3fca1dfc40f1b7f1,
    0x3fc9f6c407089664,0x3fc9cf97cdce0ec3,
    0x3fc9a8778debaa38,0x3fc981634011aa75,
    0x3fc95a5adcf7017f,0x3fc9335e5d594989,
    0x3fc90c6db9fcbcd9,0x3fc8e588ebac2dbf,
    0x3fc8beafeb38fe8c,0x3fc897e2b17b19a5,
    0x3fc871213750e994,0x3fc84a6b759f512f,
    0x3fc823c16551a3c2,0x3fc7fd22ff599d4f,
    0x3fc7d6903caf5ad0,0x3fc7b0091651528c,
    0x3fc7898d85444c73,0x3fc7631d82935a86,
    0x3fc73cb9074fd14d,0x3fc716600c914054,
    0x3fc6f0128b756abc,0x3fc6c9d07d203fc7,
    0x3fc6a399dabbd383,0x3fc67d6e9d785771,
    0x3fc6574ebe8c133a,0x3fc6313a37335d76,
    0x3fc60b3100b09476,0x3fc5e533144c1719,
    0x3fc5bf406b543db2,0x3fc59958ff1d52f1,
    0x3fc5737cc9018cdd,0x3fc54dabc26105d2,
    0x3fc527e5e4a1b58d,0x3fc5022b292f6a45,
    0x3fc4dc7b897bc1c8,0x3fc4b6d6fefe22a4,
    0x3fc4913d8333b561,0x3fc46baf0f9f5db7,
    0x3fc4462b9dc9b3dc,0x3fc420b32740fdd4,
    0x3fc3fb45a59928cc,0x3fc3d5e3126bc27f,
    0x3fc3b08b6757f2a9,0x3fc38b3e9e027479,
    0x3fc365fcb0159016,0x3fc340c59741142e,
    0x3fc31b994d3a4f85,0x3fc2f677cbbc0a96,
    0x3fc2d1610c86813a,0x3fc2ac55095f5c59,
    0x3fc28753bc11aba5,0x3fc2625d1e6ddf57,
    0x3fc23d712a49c202,0x3fc2188fd9807263,
    0x3fc1f3b925f25d41,0x3fc1ceed09853752,
    0x3fc1aa2b7e23f72a,0x3fc185747dbecf34,
    0x3fc160c8024b27b1,0x3fc13c2605c398c3,
    0x3fc1178e8227e47c,0x3fc0f301717cf0fb,
    0x3fc0ce7ecdccc28d,0x3fc0aa06912675d5,
    0x3fc08598b59e3a07,0x3fc06135354d4b18,
    0x3fc03cdc0a51ec0d,0x3fc0188d2ecf6140,
    0x3fbfe89139dbd566,0x3fbfa01c9db57ce2,
    0x3fbf57bc7d9005db,0x3fbf0f70cdd992e3,
    0x3fbec739830a1120,0x3fbe7f1691a32d3e,
    0x3fbe3707ee30487b,0x3fbdef0d8d466db9,
    0x3fbda727638446a2,0x3fbd5f55659210e2,
    0x3fbd179788219364,0x3fbccfedbfee13a8,
    0x3fbc885801bc4b23,0x3fbc40d6425a5cb1,
    0x3fbbf968769fca11,0x3fbbb20e936d6974,
    0x3fbb6ac88dad5b1c,0x3fbb23965a52ff00,
    0x3fbadc77ee5aea8c,0x3fba956d3ecade63,
    0x3fba4e7640b1bc38,0x3fba0792e9277cac,
    0x3fb9c0c32d4d2548,0x3fb97a07024cbe74,
    0x3fb9335e5d594989,0x3fb8ecc933aeb6e8,
    0x3fb8a6477a91dc29,0x3fb85fd927506a48,
    0x3fb8197e2f40e3f0,0x3fb7d33687c293c9,
    0x3fb78d02263d82d3,0x3fb746e100226ed9,
    0x3fb700d30aeac0e1,0x3fb6bad83c1883b6,
    0x3fb674f089365a7a,0x3fb62f1be7d77743,
    0x3fb5e95a4d9791cb,0x3fb5a3abb01ade25,
    0x3fb55e10050e0384,0x3fb518874226130a,
    0x3fb4d3115d207eac,0x3fb48dae4bc31018,
    0x3fb4485e03dbdfad,0x3fb403207b414b7f,
    0x3fb3bdf5a7d1ee64,0x3fb378dd7f749714,
    0x3fb333d7f8183f4b,0x3fb2eee507b40301,
    0x3fb2aa04a44717a5,0x3fb26536c3d8c369,
    0x3fb2207b5c78549e,0x3fb1dbd2643d190b,
    0x3fb1973bd1465567,0x3fb152b799bb3cc9,
    0x3fb10e45b3cae831,0x3fb0c9e615ac4e17,
    0x3fb08598b59e3a07,0x3fb0415d89e74444,
    0x3faffa6911ab9301,0x3faf723b517fc523,
    0x3faeea31c006b87c,0x3fae624c4a0b5e1b,
    0x3fadda8adc67ee4e,0x3fad52ed6405d86f,
    0x3faccb73cdddb2cc,0x3fac441e06f72a9e,
    0x3fabbcebfc68f420,0x3fab35dd9b58baad,
    0x3faaaef2d0fb10fc,0x3faa282b8a936171,
    0x3fa9a187b573de7c,0x3fa91b073efd7314,
    0x3fa894aa149fb343,0x3fa80e7023d8ccc4,
    0x3fa788595a3577ba,0x3fa70265a550e777,
    0x3fa67c94f2d4bb58,0x3fa5f6e73078efb8,
    0x3fa5715c4c03ceef,0x3fa4ebf43349e26f,
    0x3fa466aed42de3ea,0x3fa3e18c1ca0ae92,
    0x3fa35c8bfaa1306b,0x3fa2d7ae5c3c5bae,
    0x3fa252f32f8d183f,0x3fa1ce5a62bc353a,
    0x3fa149e3e4005a8d,0x3fa0c58fa19dfaaa,
    0x3fa0415d89e74444,0x3f9f7a9b16782856,
    0x3f9e72bf2813ce51,0x3f9d6b2725979802,
    0x3f9c63d2ec14aaf2,0x3f9b5cc258b718e6,
    0x3f9a55f548c5c43f,0x3f994f6b99a24475,
    0x3f98492528c8cabf,0x3f974321d3d006d3,
    0x3f963d6178690bd6,0x3f9537e3f45f3565,
    0x3f9432a925980cc1,0x3f932db0ea132e22,
    0x3f9228fb1fea2e28,0x3f912487a5507f70,
    0x3f90205658935847,0x3f8e38ce3033310c,
    0x3f8c317384c75f06,0x3f8a2a9c6c170462,
    0x3f882448a388a2aa,0x3f861e77e8b53fc6,
    0x3f841929f96832f0,0x3f82145e939ef1e9,
    0x3f8010157588de71,0x3f7c189cbb0e27fb,
    0x3f78121214586b54,0x3f740c8a747878e2,
    0x3f70080559588b35,0x3f680904828985c0,
    0x3f60040155d5889e,0x3f50020055655889,
    0x0000000000000000,0x0000000000000000,
    0x0000000000000000,0x0000000000000000,
    0x0000000000000000,0x0000000000000000,
    0x0000000000000000,0x0000000000000000
};


//log2
static const double __log2f_tab[][2] = {
        { 0x1.661ec79f8f3bep+0, -0x1.efec65b963019p-2 },
        { 0x1.571ed4aaf883dp+0, -0x1.b0b6832d4fca4p-2 },
        { 0x1.49539f0f010bp+0, -0x1.7418b0a1fb77bp-2 },
        { 0x1.3c995b0b80385p+0, -0x1.39de91a6dcf7bp-2 },
        { 0x1.30d190c8864a5p+0, -0x1.01d9bf3f2b631p-2 },
        { 0x1.25e227b0b8eap+0, -0x1.97c1d1b3b7afp-3 },
        { 0x1.1bb4a4a1a343fp+0, -0x1.2f9e393af3c9fp-3 },
        { 0x1.12358f08ae5bap+0, -0x1.960cbbf788d5cp-4 },
        { 0x1.0953f419900a7p+0, -0x1.a6f9db6475fcep-5 },
        { 0x1p+0, 0x0p+0 },
        { 0x1.e608cfd9a47acp-1, 0x1.338ca9f24f53dp-4 },
        { 0x1.ca4b31f026aap-1, 0x1.476a9543891bap-3 },
        { 0x1.b2036576afce6p-1, 0x1.e840b4ac4e4d2p-3 },
        { 0x1.9c2d163a1aa2dp-1, 0x1.40645f0c6651cp-2 },
        { 0x1.886e6037841edp-1, 0x1.88e9c2c1b9ff8p-2 },
        { 0x1.767dcf5534862p-1, 0x1.ce0a44eb17bccp-2 },
    };

static const double __log2f_poly[4] = 
    {-0x1.712b6f70a7e4dp-2, 0x1.ecabf496832ep-2, -0x1.715479ffae3dep-1, 0x1.715475f35c8b8p0};

static const double __acos_data[12] = {
    0.032143616007816851, -0.016582846167623556, 0.019772600367158048, 0.006431771759956202,
    0.012193412839768863, 0.013881175183171264, 0.017360165087820061, 0.022371723076271322,
    0.030381960865917483, 0.044642856775805428, 0.075000000004254969, 0.16666666666664731
};

template <class Abi> floatv<Abi> modf(floatv<Abi> value, floatv<Abi>* iptr){
  *iptr = vld1q_f<floatv<Abi>, intv<Abi>>(value);
  return value - (*iptr);
}
template <class Abi> doublev<Abi> modf(doublev<Abi> value, doublev<Abi>* iptr){
  *iptr = vld1q_f<doublev<Abi>, longv<Abi>>(value);
  return value - (*iptr);
}
template <class Abi> ldoublev<Abi> modf(ldoublev<Abi> value, ldoublev<Abi>* iptr){
  *iptr = vld1q_f<ldoublev<Abi>, int128v<Abi>>(value);
  return value - (*iptr);
}

template <class Abi>
floatv<Abi> ldexp(floatv<Abi> x, samesize<int, floatv<Abi>> exp) {
  Abi_32suf<Abi> ux;
  ux.f = x;
  ux.u = ux.u + static_simd_cast<uintv<Abi>>(exp << 23);
  return ux.f;
}
template <class Abi>
doublev<Abi> ldexp(doublev<Abi> x, samesize<int, doublev<Abi>> exp) {
  Abi_64suf<Abi> ux;
  ux.f = x;
  ux.u = ux.u + (static_simd_cast<ulongv<Abi>>(exp) << 52);
  return ux.f;
}

template <class Abi>
floatv<Abi> floor(floatv<Abi> x) {
  intv<Abi> xi = static_simd_cast<intv<Abi>>(x);
  floatv<Abi> fx = static_simd_cast<floatv<Abi>>(xi);
  where(x<0&&fx<=0, fx) = fx-1;
  return fx;
}
template <class Abi>
doublev<Abi> floor(doublev<Abi> x) {
  longv<Abi> xi = static_simd_cast<longv<Abi>>(x);
  doublev<Abi> dx = static_simd_cast<doublev<Abi>>(xi);
  where(x<0 && dx<=0, dx) = dx-1;
  return dx;
}

template <class Abi> 
ldoublev<Abi> floor(ldoublev<Abi> x){
  longv<Abi> xi = static_simd_cast<longv<Abi>>(x);
  ldoublev<Abi> ldx = static_simd_cast<ldoublev<Abi>>(xi);
  where(x<0&&ldx<=0, ldx) = ldx-1;
  return ldx;
}

template <class Abi>
floatv<Abi> ceil(floatv<Abi> x) {
  intv<Abi> xi = static_simd_cast<intv<Abi>>(x);
  floatv<Abi> fx = static_simd_cast<floatv<Abi>>(xi);
  where(x>0&&fx>=0, fx) = fx+1;
  return fx;
}
template <class Abi>
doublev<Abi> ceil(doublev<Abi> x) {
  longv<Abi> xi = static_simd_cast<longv<Abi>>(x);
  floatv<Abi> dx = static_simd_cast<floatv<Abi>>(xi);
  where(x>0&&dx>=0, dx) = dx+1;
  return dx;
  return static_simd_cast<doublev<Abi>>(xi);
}

template <class Abi> 
ldoublev<Abi> ceil(ldoublev<Abi> x){
  longv<Abi> xi = static_simd_cast<longv<Abi>>(x);
  ldoublev<Abi> ldx = static_simd_cast<ldoublev<Abi>>(xi);
  where(x>0&&ldx>=0, ldx) = ldx+1;
  return ldx;
}

template <class Abi>
floatv<Abi> sqrt(floatv<Abi> x) {
  doublev<Abi> xd = static_simd_cast<doublev<Abi>>(x);
  Abi_64suf<Abi> ux;
  ux.f = xd;
  ulongv<Abi> sign = (ux.u >> 52) & SqrtAbsMask;
  sign -= SqrtSignMask;
  ux.i = ux.i & s2v<long, longv<Abi>>(ExpMask);
  ux.i = ux.i | s2v<long, longv<Abi>>(HalfOne_N);
  auto c1=0.4173075996388649989089, c2=0.59016206709064458299663;
  ux.f = c1 + c2 * ux.f;
  where(static_simd_cast<doublev<Abi>>(sign & 1) != 0, ux.f) = ux.f * SQRT2;
  ux.f = ldexp<Abi>(ux.f, static_simd_cast<samesize<int, doublev<Abi>>>(sign >> 1) );
  ux.f = 0.5*(ux.f + xd/ux.f);
  ux.f = 0.5*(ux.f + xd/ux.f);
  ux.f = 0.5*(ux.f + xd/ux.f);
  where(x<0, ux.f) = LLVM_NAN_64F;
  return static_simd_cast<floatv<Abi>>(ux.f);
}

template <class Abi>
doublev<Abi> sqrt(doublev<Abi> x) {
  Abi_64suf<Abi> ux;
  ux.f = x;
  ulongv<Abi> sign = (ux.u >> 52) & SqrtAbsMask;
  sign -= SqrtSignMask;
  ux.i = ux.i & s2v<long, longv<Abi>>(ExpMask);
  ux.i = ux.i | s2v<long, longv<Abi>>(HalfOne_N);

  auto c1=0.4173075996388649989089, c2=0.59016206709064458299663;
  ux.f = c1 + c2 * ux.f;
  where(static_simd_cast<doublev<Abi>>(sign & 1) != 0, ux.f) = ux.f * SQRT2;
  ux.f = ldexp<Abi>(ux.f, static_simd_cast<samesize<int, doublev<Abi>>>(sign >> 1) );

  ux.f = 0.5*(ux.f + x/ux.f);
  ux.f = 0.5*(ux.f + x/ux.f);
  ux.f = 0.5*(ux.f + x/ux.f);

  where(x<0, ux.f) = LLVM_NAN_64F;
  return ux.f;
}

template <class Abi>
floatv<Abi> asin(floatv<Abi> x) {
  Abi_32suf<Abi> ux, uax, uy;
  floatv<Abi> z, z2, p;
  ux.f = x;
  uax.u = ux.u & AbsMaskf;
  where(ux.f < -1.f, ux.u) = 0; 

  auto ax_halfone = (uax.u < HalfOnef_N);

  where(ax_halfone, z2) = uax.f*uax.f;

  where(!ax_halfone, z2) = fma(s2v<float,floatv<Abi>>(-0.5f), uax.f, s2v<float,floatv<Abi>>(0.5f));
  where(ax_halfone, z) = uax.f;
  where(!ax_halfone, z) = sqrt<Abi>(z2);
  p = HORNER_NEON_4(z2, __asinf_c);
  p = fma(z * z2, p, z);
  where(ax_halfone, uy.f) = p;
  where(!ax_halfone, uy.f) = fma(s2v<float, floatv<Abi>>(-2.0f), p, s2v<float, floatv<Abi>>(PiD2f));

  uy.u = (AbsMaskf & uy.u) | (~AbsMaskf & ux.u);

  where(x>=1, uy.f) = s2v<float, floatv<Abi>>(LLVM_NAN_32F);
  where(x<=-1, uy.f) = s2v<float, floatv<Abi>>(LLVM_NAN_32F);

  return uy.f;
}

template <class Abi>
doublev<Abi> asin(doublev<Abi> x) {
  Abi_64suf<Abi> ux, uax, uy;
  doublev<Abi> z, z2, z4, z8, z16, p;
  ux.f = x;
  uax.u = ux.u & (unsigned long)(AbsMask);
  where(ux.f < -1.f, ux.u) = 0; 

  auto ax_halfone = (uax.u < (unsigned long)HalfOne_N);
  where(ax_halfone, z2) = uax.f*uax.f;
  where(!ax_halfone, z2) = fma(s2v<double,doublev<Abi>>(-0.5f), uax.f, s2v<double,doublev<Abi>>(0.5f));
  where(ax_halfone, z) = uax.f;
  where(!ax_halfone, z) = sqrt<Abi>(z2);
  z4 = z2 * z2;
  z8 = z4 * z4;
  z16 = z8 * z8;
  p = ESTRIN_NEON_11(z2, z4, z8, z16, __asin_c);
  p = fma(z * z2, p, z);
  where(ax_halfone, uy.f) = p;
  where(!ax_halfone, uy.f) = fma(s2v<double, doublev<Abi>>(-2.0f), p, s2v<double, doublev<Abi>>(PiD2f));

  uy.u = ((unsigned long)AbsMask & uy.u) | (~(unsigned long)AbsMask & ux.u);
  where(x>=1, uy.f) = s2v<double, doublev<Abi>>(LLVM_NAN_64F);
  where(x<=-1, uy.f) = s2v<double, doublev<Abi>>(LLVM_NAN_64F);
  return uy.f;
}

template <class Abi>
ldoublev<Abi> asin(ldoublev<Abi> x){
  long double one = 1,
    pio2_hi = (1.5707963267948966192313216916397514420986),
    pio2_lo = (4.3359050650618905123985220130216759843812E-35),
    pio4_hi = (7.8539816339744830961566084581987569936977E-1),
    pS0 = (-8.358099012470680544198472400254596543711E2),
    pS1 =  (3.674973957689619490312782828051860366493E3),
    pS2 = (-6.730729094812979665807581609853656623219E3),
    pS3 =  (6.643843795209060298375552684423454077633E3),
    pS4 = (-3.817341990928606692235481812252049415993E3),
    pS5 =  (1.284635388402653715636722822195716476156E3),
    pS6 = (-2.410736125231549204856567737329112037867E2),
    pS7 =  (2.219191969382402856557594215833622156220E1),
    pS8 = (-7.249056260830627156600112195061001036533E-1),
    pS9 =  (1.055923570937755300061509030361395604448E-3),

    qS0 = (-5.014859407482408326519083440151745519205E3),
    qS1 =  (2.430653047950480068881028451580393430537E4),
    qS2 = (-4.997904737193653607449250593976069726962E4),
    qS3 =  (5.675712336110456923807959930107347511086E4),
    qS4 = (-3.881523118339661268482937768522572588022E4),
    qS5 =  (1.634202194895541569749717032234510811216E4),
    qS6 = (-4.151452662440709301601820849901296953752E3),
    qS7 =  (5.956050864057192019085175976175695342168E2),
    qS8 = (-4.175375777334867025769346564600396877176E1),

    rS0 = (-5.619049346208901520945464704848780243887E0),
    rS1 =  (4.460504162777731472539175700169871920352E1),
    rS2 = (-1.317669505315409261479577040530751477488E2),
    rS3 =  (1.626532582423661989632442410808596009227E2),
    rS4 = (-3.144806644195158614904369445440583873264E1),
    rS5 = (-9.806674443470740708765165604769099559553E1),
    rS6 =  (5.708468492052010816555762842394927806920E1),
    rS7 =  (1.396540499232262112248553357962639431922E1),
    rS8 = (-1.126243289311910363001762058295832610344E1),
    rS9 = (-4.956179821329901954211277873774472383512E-1),
    rS10 =  (3.313227657082367169241333738391762525780E-1),

    sS0 = (-4.645814742084009935700221277307007679325E0),
    sS1 =  (3.879074822457694323970438316317961918430E1),
    sS2 = (-1.221986588013474694623973554726201001066E2),
    sS3 =  (1.658821150347718105012079876756201905822E2),
    sS4 = (-4.804379630977558197953176474426239748977E1),
    sS5 = (-1.004296417397316948114344573811562952793E2),
    sS6 =  (7.530281592861320234941101403870010111138E1),
    sS7 =  (1.270735595411673647119592092304357226607E1),
    sS8 = (-1.815144839646376500705105967064792930282E1),
    sS9 = (-7.821597334910963922204235247786840828217E-2),
    asinr5625 =  (5.9740641664535021430381036628424864397707E-1);

  ldoublev<Abi> t, w, p, q, c, r, s, y;
  intv<Abi> ix, sign, flag=0;
  Abi_128suf<Abi> ux;
  __int128_t tmpi;

  ux.f = x;
  sign = static_simd_cast<intv<Abi>>(ux.i >> 96);
  ix = sign & AbsMaskf;
  tmpi= 0x1;
  ux.i = ux.i & ~(tmpi<<127);
  auto jd1=(ix>=0x3fff0000);

  intv<Abi> 
  p1 = static_simd_cast<intv<Abi>>((ux.i >> 36) & (Bottom32Mask)),
  p2 = static_simd_cast<intv<Abi>>((ux.i >> 64) & (Bottom32Mask)),
  p3 = static_simd_cast<intv<Abi>>((ux.i >> 96));

  auto jd2=(ix==0x3fff0000) && (p1|p2|p3)==0;

  where(jd1 && jd2, y) = x * pio2_hi + x * pio2_lo;
  where(jd1 && (!jd2), y) = (x - x) / (x - x);

  jd2=ix<0x3ffe0000;
  auto jd3=ix<0x3fc60000;

  where((!jd1) && jd2 && jd3, y) = x;
  where((!jd1) && jd2 && !jd3, t) = x * x;
  where((!jd1) && jd2 && !jd3, flag) = 1;

  jd3=ix<0x3ffe4000;
  where((!jd1) && !jd2 && jd3, t) = ux.f - 0.5625;
  where((!jd1) && !jd2 && jd3, p) = ((((((((((rS10 * t
            + rS9) * t
            + rS8) * t
            + rS7) * t
            + rS6) * t
            + rS5) * t
            + rS4) * t
            + rS3) * t
            + rS2) * t
            + rS1) * t
            + rS0) * t;
  where((!jd1) && !jd2 && jd3, q) = (((((((((t
            + sS9) * t
            + sS8) * t
            + sS7) * t
            + sS6) * t
            + sS5) * t
            + sS4) * t
            + sS3) * t
            + sS2) * t
            + sS1) * t
            + sS0;
  where((!jd1) && !jd2 && jd3, t) = asinr5625 + p / q;
  auto jd4 = (sign & (int)MASKf_sign) == 0;
  where((!jd1) && !jd2 && jd3 && jd4, y) = t;
  where((!jd1) && !jd2 && jd3 && !jd4, y) = -t;
  

  where((!jd1) && !jd2 && !jd3, w) = one - ux.f;
  where((!jd1) && !jd2 && !jd3, t) = w * 0.5;

  p = (((((((((pS9 * t
        + pS8) * t
        + pS7) * t
        + pS6) * t
        + pS5) * t
        + pS4) * t
        + pS3) * t
        + pS2) * t
        + pS1) * t
        + pS0) * t;

  q = (((((((( t
      + qS8) * t
      + qS7) * t
      + qS6) * t
      + qS5) * t
      + qS4) * t
      + qS3) * t
      + qS2) * t
      + qS1) * t
      + qS0;
  
  where(flag==1, w) = p / q;
  where(flag==1, y) = x + x * w;
  s = static_simd_cast<ldoublev<Abi>>(sqrt(static_simd_cast<doublev<Abi>>(t)));
  auto jd5 = ix >= 0x3ffef333;
  where(jd5, w) = p / q;
  where(jd5, t) = pio2_hi - (2.0 * (s + s * w) - pio2_lo);

  where((!jd5), ux.f) = s;
  tmpi = Bottom32Mask;

  where((!jd5), ux.i) = ux.i & (~(tmpi<<36 | tmpi));
  where((!jd5), w) = ux.f;
  where((!jd5), c) = (t - w * w) / (s + w);
  where((!jd5), r) = p / q;
  where((!jd5), p) = 2.0 * s * r - (pio2_lo - 2.0 * c);
  where((!jd5), q) = pio4_hi - 2.0 * w;
  where((!jd5), t) = pio4_hi - (p - q);

  where(!jd1 && !jd2 && !jd3 && (flag!=1) && (sign & (int)MASKf_sign) == 0, y) = t;
  where(!jd1 && !jd2 && !jd3 && (flag!=1) && (sign & (int)MASKf_sign) != 0, y) = -t;

  return y;
}

float __expf_idx_tab1[4] = {0, 3.19341815e-08, 1.71142709e-08, -1.47196051e-08};
float __expf_idx_tab2[4] = {1, 1.18920708, 1.41421354, 1.68179286};

template <class Abi>
floatv<Abi> exp(floatv<Abi> x) {
  floatv<Abi> shift_mkl(12583420), invln2_mkl(5.77078009f), ln2_mkl(0.173278809f), 
  comp_mkl(7.98654582e-06f), a_mkl(0.0416823104f), b_mkl(0.166729242f), c_mkl(0.49999997f);
  uintv<Abi> mask_mkl(MASKf_exp), mask2_mkl(3);

  Abi_32suf<Abi> uz;
  floatv<Abi> n, r, r2, q, y1, y2, y3, yf;
  uintv<Abi> idx;

  uz.f = fma(invln2_mkl, x, shift_mkl);
  n = uz.f - shift_mkl;
  y2 = fma(n, -ln2_mkl, x);
  r = fma(-comp_mkl, n, y2);
  r2 = r * r;
  q = fma(r, a_mkl, b_mkl);
  q = fma(r, q, c_mkl);
  idx = uz.u & mask2_mkl;

  for (unsigned i = 0; i < idx.size(); ++i){
    y1[i] = __expf_idx_tab1[idx[i]];
    y2[i] = __expf_idx_tab2[idx[i]];
  }

  uz.u <<= 21;
  q = fma(r2, q, y1);
  uz.u = uz.u & mask_mkl;

  y3 = y2 * uz.f;
  y1 = q + r;
  yf = fma(y3, y1, y3);

  return yf;
}


template <class Abi>
doublev<Abi> exp(doublev<Abi> x) {
  Abi_64suf<Abi> uz, ux0, ucomp;
  doublev<Abi> n, r, r2, q, p, y;
  ulongv<Abi> idx, e, u;

  uz.f = InvLn2_ha * x + Shift_ha;
  n = uz.f - Shift_ha;
  r = x - Ln2hi_ha * n;
  r = r - Ln2lo_ha * n;
  r2 = r * r;
  idx = (uz.u & 0x3f) << 1;
  e = (uz.u & 0xffffffc0) << 46;

  for (unsigned i = 0; i < idx.size(); ++i){
    u[i] = *(_etab + idx[i]);
    ucomp.u[i] = *(_etab + idx[i] + 1);
  }

  ux0.u = u ^ e;
  double w1=0.008333343515397208,w2=0.04166671757732759,w3=0.16666666666652805,w4=0.49999999999962674;
  q = r * w1 + w2;
  p = r * w3 + w4;
  p = fma(r2, q, p);
  q = r + ucomp.f;
  q = fma(p, r2, q);
  y = fma(ux0.f, q, ux0.f);
  return y;
}


template <class Abi>
ldoublev<Abi> exp(ldoublev<Abi> x){
  long double
    himark = (11356.523406294143949491931077970765),
    lomark = (-11433.4627433362978788372438434526231),
    THREEp96 = (59421121885698253195157962752.0),
    THREEp103 = (30423614405477505635920876929024.0),
    THREEp111 = (7788445287802241442795744493830144.0),
    M_1_LN2 = (1.44269504088896340735992468100189204),
    M_LN2_0 = (0.693147180559945309417232121457981864),
    M_LN2_1 = (-1.94704509238074995158795957333327386E-31),
    TWO8 = 256,
    TWO15 = 32768,
    TINY = (1.0E-4900L),
    TWO16383 = (5.94865747678615882542879663314003565E+4931L),
    a1 = (0.5),
    a2 = (1.66666666666666666666666666666666683E-01),
    a3 = (4.16666666666666666666654902320001674E-02),
    a4 = (8.33333333333333333333314659767198461E-03),
    a5 = (1.38888888889899438565058018857254025E-03),
    a6 = (1.98412698413981650382436541785404286E-04);

    intv<Abi> tval1, tval2, unsafe, n_i;
    ldoublev<Abi> x22, n, t, result, xl, xc;
    Abi_128suf<Abi> ex2_u, scale_u;

    ldoublev<Abi> y = x;

    n = x * M_1_LN2 + THREEp111;
    n -= THREEp111;
    x = x - n * M_LN2_0;
    xl = n * M_LN2_1;
    t = x + THREEp103;
    t -= THREEp103;

    tval1 = static_simd_cast<intv<Abi>>(t * TWO8);
    for (unsigned i = 0; i < x.size(); ++i){
      xc[i] = x[i] - __expl_table[T_EXPL_ARG1+2*tval1[i]];
      xl[i] -= __expl_table[T_EXPL_ARG1+2*tval1[i]+1];
    }

    t = xc + THREEp96;
    t -= THREEp96;
    tval2 = static_simd_cast<intv<Abi>>(t * TWO15);

    for (unsigned i = 0; i < x.size(); ++i){
      x[i] = xc[i] - __expl_table[T_EXPL_ARG2+2*tval2[i]];
      xl[i] -= __expl_table[T_EXPL_ARG2+2*tval2[i]+1];
      ex2_u.f[i] = __expl_table[T_EXPL_RES1 + tval1[i]] * __expl_table[T_EXPL_RES2 + tval2[i]];
    }

    x = x + xl;
    n_i = static_simd_cast<intv<Abi>>(n);
    where(abs(n_i) >= 15000, unsafe) = 1;
    where(abs(n_i) < 15000, unsafe) = 0;

    ex2_u.u = ex2_u.u + (static_simd_cast<uint128v<Abi>>(n_i >> unsafe) << 112);

    scale_u.f = 1;
    scale_u.u = scale_u.u + static_simd_cast<uint128v<Abi>>(n_i - (n_i >> unsafe)) << 112;

    x22 = x + x*x*(a1+x*(a2+x*(a3+x*(a4+x*(a5+x*a6)))));
    result = x22 * ex2_u.f + ex2_u.f;
    ldoublev<Abi> himark_v(himark), lomark_v(lomark);

    auto jd1 = isless (x, himark_v) && isgreater (x, lomark_v);
    auto jd2 = static_simd_cast<ldoublev<Abi>>(unsafe)!=1;
    where(jd1 && jd2, y) = result;
    where(jd1 && !jd2, y) = result * scale_u.f;

    auto jd3 = isless (x, himark_v);
    auto jd4 = isinf (x);

    where(!jd1 && jd3 && jd4, y) = 0;
    where(!jd1 && jd3 && !jd4, y) = TINY * TINY;
    where(!jd1 && !jd3, y) = TWO16383*x;
    return y;
}

template <class Abi>
floatv<Abi> log(floatv<Abi> x) {
  Abi_32suf<Abi> ux;
  floatv<Abi> n, y, p, q, r, r2;

  ux.f = x;
  ux.u = ux.u - TwoThirdf;
  n = static_simd_cast<floatv<Abi>>(ux.i >> 23);

  ux.u = ux.u & MASKf_mant;
  ux.u = ux.u + TwoThirdf;
  r = ux.f - 1.f;
  r2 = r * r;

  p = _ln_pf[5] * r + _ln_pf[4];
  q = _ln_pf[3] * r + _ln_pf[2];
  y = _ln_pf[1] * r + _ln_pf[0];
  p = _ln_pf[6] * r2 + p;
  q = p * r2 + q;
  y = q * r2 + y;
  p = (float)LN_2 * n + r;
  y = y * r2 + p;

  where(x<=0, y) = s2v<float, floatv<Abi>>(LLVM_NAN_32F);
  return y;
}

template <class Abi>
doublev<Abi> log(doublev<Abi> x) {
  Abi_64suf<Abi> ux, uz;
  doublev<Abi> n, invc, logc, hi, y, p, r, r2;
  ulongv<Abi> utmp, idx;

  ux.f = x;
  utmp = ux.u - (unsigned long)OFF_d;
  n = static_simd_cast<doublev<Abi>>(static_simd_cast<longv<Abi>>(utmp) >> 52);
  uz.u = ux.u - (utmp & (0xfffULL << 52));

  idx = (utmp >> 45) & ExponetBasef;
  for (unsigned i = 0; i < utmp.size(); ++i){
    invc[i] = __log_Tab[idx[i]][0];
    logc[i] = __log_Tab[idx[i]][1];
  }

  r = uz.f * invc + (-1.0);
  hi = n * LN_2 + (logc + r);

  r2 = r * r;
  y = LogA3 * r + LogA2;
  p = LogA1 * r + LogA0;
  y = LogA4 * r2 + y;
  y = y * r2 +p;
  y = y * r2 + hi;

  where(x<=0, y) = s2v<double, doublev<Abi>>(LLVM_NAN_64F);
  return y;
}

template <class Abi>
floatv<Abi> pow(floatv<Abi> x, floatv<Abi> n) {
  floatv<Abi> y = log(x);
  y = exp(y*n);
  return y;
}

template <class Abi>
doublev<Abi> pow(doublev<Abi> x, doublev<Abi> n) {
  doublev<Abi> y = log(x);
  y = exp(y*n);
  return y;
}

template <class Abi>
floatv<Abi> acos(floatv<Abi> x) {
  Abi_32suf<Abi> ux, ax_m, uk, sqrt_z, sqrt_k, upi, upi_div2;
  floatv<Abi> w, z, skp;
  uintv<Abi> judge_ax_halfone, judge_x_minus;

  ux.f = x;
  ax_m.u = MASKf_sign | ux.u;
  z = (1.f + ax_m.f) * 0.5f;
  w = x * x;

  where(z<w, uk.f) = z;
  where(z>=w, uk.f) = w;

  where(uk.f>=z, judge_ax_halfone) = 0xffffffff;
  where(uk.f<z, judge_ax_halfone) = 0x00000000;

  sqrt_z.f = 2 * sqrt(z);

  where(judge_ax_halfone == 0x00000000, sqrt_k.u) = ax_m.u;
  where(judge_ax_halfone != 0x00000000, sqrt_k.u) = sqrt_z.u;

  floatv<Abi> k2, p1, p2, p, kp;
  float c1 = 0.0455576926f, c2 = 0.0749436766f, c3 = 0.0426903032f, c4 = 0.0238239374f, c5 = 0.166667923f;
  p1 = c1 * uk.f + c2;
  k2 = uk.f * uk.f;
  p2 = c3 * uk.f + c4;
  p = k2 * p2 + p1;
  p = uk.f * p + c5;
  kp = uk.f * p;

  where(ux.f < uk.f, judge_x_minus) = 0xffffffff;
  where(ux.f >= uk.f, judge_x_minus) = 0x00000000;

  sqrt_k.u = sqrt_k.u ^ (MASKf_sign & ux.u);
  skp = sqrt_k.f * kp + sqrt_k.f;

  upi.u = (Pif & judge_ax_halfone) & judge_x_minus;
  upi_div2.u = Pid2f & ~(judge_ax_halfone);

  return (upi.f + upi_div2.f) + skp;
}

template <class Abi>
doublev<Abi> acos(doublev<Abi> x) {
  Abi_64suf<Abi> ux, ax_m, uk, u2z, u2sz, uy, pi2pi, sk, skp;
  doublev<Abi> z, w, d1_d_sz, d1_d_z, e, k2, k4, p, kp, f, szef, dtmp1, dtmp2;
  ulongv<Abi> judge_ax_halfone, judge_x_minus, judge_x_mho, x_sign;

  ux.f = x;
  ax_m.u = MASK_sign | ux.u;
  z = 0.5 * ax_m.f + 0.5;
  w = ax_m.f * ax_m.f;
  where(w < z, uk.f) = w;
  where(w >= z, uk.f) = z;

  where(uk.f>=z, judge_ax_halfone) = 0xffffffffffffffff;
  where(uk.f<z, judge_ax_halfone) = 0x0;
  where(uk.f>=ux.f, judge_x_minus) = 0xffffffffffffffff;
  where(uk.f<ux.f, judge_x_minus) = 0x0;
  judge_x_mho = judge_x_minus & judge_ax_halfone;

  d1_d_sz = 1 / sqrt(z);
  u2z.f = 2 * z;
  d1_d_z = d1_d_sz * d1_d_sz;
  u2z.u = u2z.u & judge_ax_halfone;
  ax_m.u = ax_m.u & ~(judge_ax_halfone);

  double a1=-0.017089852669219818, a2=0.039062512973409326, a3=-0.09374999999999499, a4=0.24999999999999725;
  e = u2z.f * d1_d_z - 2.;
  f = e * a1 + a2;
  f = e * f + a3;
  f = e * f + a4;

  doublev<Abi> p1, p2, p3, p4, p5, p6, p7;
  p1 = uk.f * __acos_data[0] + __acos_data[1];
  p2 = uk.f * __acos_data[2] + __acos_data[3];
  p3 = uk.f * __acos_data[4] + __acos_data[5];
  p4 = uk.f * __acos_data[6] + __acos_data[7];
  p5 = uk.f * __acos_data[8] + __acos_data[9];
  k2 = uk.f * uk.f;
  p6 = k2 * p1 + p2;
  p7 = k2 * p3 + p4;
  k4 = k2 * k2;
  p = k4 * p6 + p7;
  p = k2 * p + p5;
  p = uk.f * p + __acos_data[10];
  p = uk.f * p + __acos_data[11];
  kp = uk.f * p;

  pi2pi.u = ((unsigned long)Pi & judge_x_mho) | ((unsigned long)Pid2 & ~(judge_ax_halfone));
  uy.u = ((unsigned long)Yd2 & ~(judge_ax_halfone)) | ((unsigned long)Y & judge_x_mho);

  x_sign = MASK_sign & ux.u;
  uy.u = uy.u ^ x_sign;
  u2sz.f = d1_d_sz * u2z.f;
  szef = e * u2sz.f * f;
  sk.u = u2sz.u | ax_m.u;
  dtmp1 = sk.f - szef;
  dtmp2 = uy.f - szef;
  skp.f = dtmp1 * kp + dtmp2;
  skp.f = sk.f + skp.f;
  skp.u = skp.u ^ x_sign;
  return pi2pi.f + skp.f;
}

template <class Abi>
floatv<Abi> round(floatv<Abi> x) {
  x = x + ExpShift23;
  return x - ExpShift23;
}

template <class Abi>
doublev<Abi> round(doublev<Abi> x) {
  x = x + ExpShift52;
  return x - ExpShift52;
}

template <class Abi>
ldoublev<Abi> round(ldoublev<Abi> x) {
  x = x + ExpShift112;
  return x - ExpShift112;
}

template <class Abi>
floatv<Abi> asinh(floatv<Abi> x) {
  Abi_32suf<Abi> m_x, r, u1, res, sign;
  Abi_32suf<Abi> x2, x2p1, x2p1_mk, recip, recip_mk;
  Abi_32suf<Abi> cond1, cond2, c1, c2, c3, c4, c5, c6, c7, c8, c9, num, num2, y1, y2, y3;

  floatv<Abi> err1, err2, err3, err4, err5, err6, err7;
  floatv<Abi> x2_er1,x2_er2, x2_er3, x2_er4, x2_er5, x2_er6, x2_er7, x2_er8;
  floatv<Abi> coef1, coef2, coef3, coef4, coef5, coef6, coef7, coef8, coef9, coef10, coef11;
  floatv<Abi> r_2, a1, a2, a3, a4, a5, a6, a7, a8, b1, t, temp;

  m_x.f = x;
  x2.f = m_x.f * m_x.f;
  x2p1.f = x2.f + 1;
  x2p1_mk.u = x2p1.u & Top16Maskf;
  recip.f = 1 / sqrt(x2p1_mk.f);
  recip_mk.u = recip.u & Top16Maskf;

  err1 = 1 - x2p1.f;
  err2 = x2p1.f - x2p1_mk.f;
  err3 = x2.f + err1;
  temp = m_x.f;
  err4 = -x2.f + m_x.f * temp;
  err5 = err4 + err3;
  err6 = err5 + err2;
  err7 = err6 * recip_mk.f;

  float p1=0.375,p2=0.3125,p3=0.5,p5=0.000000000931323;
  x2_er1 = x2.f + err4;
  x2_er2 = p3 * x2_er1;
  x2_er3 = x2_er2 * x2_er2;
  x2_er4 = -x2_er3 + x2_er3 * x2_er2;
  x2_er5 = p3 * x2_er4;
  x2_er6 = x2_er2 + x2_er5;
  x2_er7 = x2_er2 - x2_er6;
  x2_er8 = x2_er5 + x2_er7;

  coef1 = x2p1_mk.f * recip_mk.f;
  coef2 = 1 - coef1 * recip_mk.f;
  coef3 = err7 + coef1;
  coef4 = coef2 - recip_mk.f * err7;
  coef5 = p1 + coef4 * p2;
  coef5 = p3 + coef4 * coef5;
  coef6 = coef4 * coef5;
  coef7 = coef1 - 1;
  coef8 = err7 + coef3 * coef6;
  coef9 = coef7 + coef8;
  coef10 = coef7 - coef9;
  coef11 = coef8 + coef10;

  r.u = m_x.u & AbsMaskf;
  r_2 = r.f * p5;

  where(r.f >= ASCTH_NAN, cond1.u) = 0x0;
  where(r.f > 0.0625f, cond2.u) = 0x0;
  where(r.f < ASCTH_NAN, cond1.u) = 0xffffffff;
  where(r.f <= 0.0625f, cond2.u) = 0xffffffff;

  where(cond2.u==0xffffffff, a1) = x2_er6;
  where(cond2.u!=0xffffffff, a1) = coef9;

  a2 = r.f + a1;
  where(a2 > 1, a3) = a2;
  where(a2 <= 1, a3) = 1;

  where(a2 < 1, a4) = a2;
  where(a2 >= 1, a4) = 1;
  a5 = r.f - a2;
  a6 = a3 + a4;
  a7 = a5 + a1;
  a8 = a3 - a6;

  where(cond2.u!=0x0, b1) = x2_er8;
  where(cond2.u==0x0, b1) = coef11;

  unsigned int p4=TwoThirdf;
  where(cond1.u!=0x0, c1.f) = a6;
  where(cond1.u==0x0, c1.f) = r_2;
  c2.f = b1 + a7;
  c3.f = a4 + a8;
  c4.f = c2.f + c3.f; 
  c5.u = c1.u - p4;
  c6.u = c5.u >> 0x17;
  c7.u = c5.u & MASKf_mant;
  c8.u = c6.u << 0x17;
  c9.u = c7.u + p4;

  num.f = static_simd_cast<floatv<Abi>>(c6.u) ;

  u1.f = 1;
  y1.u = u1.u - c8.u;
  y2.f = c9.f - u1.f;
  y3.u = c4.u & cond1.u;

  y1.f = y2.f + y1.f * y3.f;

  float q=0.138202384114265,q1=-0.151221796870232,q2=0.140423089265823,q3=-0.164723262190819,
      q4=0.200079202651978,q5=-0.250042378902435,q6=0.333332657814026,q7=-0.5,q8=0.693147182464600;

  t = q1 + y1.f * q;
  t = q2 + y1.f * t;
  t = q3 + y1.f * t;
  t = q4 + y1.f * t;
  t = q5 + y1.f * t;
  t = q6 + y1.f * t;
  t = q7 + y1.f * t;
  t = y1.f * t;
  t = y1.f + y1.f * t;

  num2.f = num.f + 31;
  where(cond1.u==0x0, num.f) = num2.f;

  res.f = t + num.f * q8;
  sign.u = m_x.u & MASKf_sign;
  res.u = sign.u ^ res.u;
  return res.f;
}

template <class Abi>
doublev<Abi> asinh(doublev<Abi> x) {
  Abi_64suf<Abi> t3, src, xt3, t4, t5, t2, src3, src2, t1, x2_1, t, rsqrt_t, n, x1, sum, abssrc;
  doublev<Abi> x2, x2__2, m, temp1, sqrt_t, sqrt_t1, sqrt_t2;
  ulongv<Abi> sign;
  floatv<Abi> temp;
  doublev<Abi> ec1, ec2, ecm;
  Abi_32suf<Abi> xt1, xt2;

  src.f = x;
  x2 = x*x;
  x2_1.f = 1.0 + x2;
  ec1 = 1.0 - x2_1.f;
  ec2 = x*x - x2;
  ec1 = x2 + ec1;
  ec1 = ec1 + ec2;

  x2 = ec2 + x2;
  x2__2 = 0.5*x2;
  t.u = x2_1.u&MaskBottom24;
  m = x2_1.f - t.f;
  m = ec1 + m;
  temp = static_simd_cast<floatv<Abi>>(t.f);
  temp = 1/sqrt(temp);
  rsqrt_t.f = temp;
  n.u = rsqrt_t.u&MaskBottom24;
  sqrt_t1 = t.f*n.f;
  ecm = n.f*m;

  double p1=0.24609375,p2=0.2734375,p3=0.3125,p4=0.375,p5=0.5;
  x1.f = 1.0 - sqrt_t1*n.f;
  x1.f = x1.f - ecm*n.f;
  sqrt_t2 = ((((p1*x1.f + p2)*x1.f
    + p3)*x1.f + p4)*x1.f + p5)*x1.f;

  sqrt_t = ecm + sqrt_t2*(sqrt_t1 + ecm) + sqrt_t1 - 1.0;
  abssrc.u = (unsigned long)AbsMask&src.u;
  where(abssrc.f <= 0.001953125, temp1) = x2__2 + 0.5*x2__2*x2__2*(x2__2 - 1);
  where(abssrc.f > 0.001953125, temp1) = sqrt_t;
  x1.f = temp1 + abssrc.f;

  where(1.0>x1.f, t1.f) = 1.0;
  where(1.0<=x1.f, t1.f) = x1.f;
  where(1.0<x1.f, t2.f) = 1.0;
  where(1.0>=x1.f, t2.f) = x1.f;
  t4.u = (unsigned long)AbsMask&x1.u;
  x1.f = 1.0 + x1.f;
  where(abssrc.f<ASCTH_NAN, t3.u) = 0xffffffffffffffff;
  where(abssrc.f>=ASCTH_NAN, t3.u) = 0x0000000000000000;
  src2.f = abssrc.f*9.3132257461547852e-10;
  where(t4.f < 4.6566128730773926e-10, t5.u) = 0xffffffffffffffff;
  where(t4.f >= 4.6566128730773926e-10, t5.u) = Top54Maskf;

  t4.u = x1.u&t5.u;
  t1.f = t1.f - t4.f;
  where(t3.u==0xffffffffffffffff, src3.f) = t4.f;
  where(t3.u!=0xffffffffffffffff, src3.f) = src2.f;
  t2.f = t2.f+t1.f;
  t1.u = src3.u&(unsigned long)0x000fffffffffffff;
  src2.u = t1.u|(unsigned long)0x3f50000000000000;

  xt1.f = static_simd_cast<floatv<Abi>>(src2.f);
  t1.u = src3.u >>0x14;
  xt2.f = 1/xt1.f;
  t5.f = xt2.f;
  t2.u = t2.u&t3.u;
  xt1.u = static_simd_cast<uintv<Abi>>(t1.u>>32);
  src2.u = src3.u&MASK_exp;
  t1.f = round(t5.f);
  t5.u = (unsigned long)0x7f40000000000000 - src2.u;
  t4.f = static_simd_cast<floatv<Abi>>(xt1.u);
  src2.f = t1.f*t5.f;

  xt3.f = t4.f + 31;
  src3.f = src3.f*src2.f - 1.0;
  where(t3.u==0xffffffffffffffff, xt3.f) = t4.f;

  t4.u = t1.u>>0x28;
  t2.f = t2.f*src2.f + src3.f;
  src3.f = t2.f*ASCTH_P3 - ASCTH_P4;
  where(t1.f<=724, t1.u) =(unsigned long) 0x0000000000000000;
  where(t1.f>724, t1.u) =(unsigned long)0x408ff80000000000;

  for (unsigned i = 0; i < t4.u.size(); ++i){
    t3.u[i] = asinh_table_f64_la[(t4.u[i]-0x405fc0)>>3];
  }

  t4.u = t1.u | (unsigned long)0x408ff00000000000;
  t1.f = xt3.f - t4.f;
  xt3.f = t2.f*t2.f;
  t4.f = xt3.f*(xt3.f*(t2.f*ASCTH_P1 - ASCTH_P2) + src3.f) + t2.f;
  t3.f = t3.f + t4.f;
  t3.f = t1.f*ASCTH_P5 + t3.f;
  sign = src.u&(unsigned long)MASK_sign;
  sum.u = t3.u^sign;
  return sum.f;
}

template <class Abi>
floatv<Abi> acosh(floatv<Abi> x) {
  Abi_32suf<Abi> ux, um, uw_a_1, u1dk2, ux2m1, ux2m1_t, u1dsx2m1_t, u1dsx2m1_t_t, err2, uone;
  floatv<Abi> ux2m1_b, usx2m1_t_t, usx2m1_b_t, usx2m1_tb_t, z, w, k, e, p, ep, y, tmp, err1, w1_max, w1_min;
  uintv<Abi> ku;

  ux.f = x;
  uone.f = 1;
  ux2m1.f = ux.f * ux.f - 1;
  auto jd_nonan = ux.f < ASCTH_NAN && ux.f >= 1;
  ux2m1_t.u = Top16Maskf & ux2m1.u;
  u1dsx2m1_t.f = 1 / sqrt(ux2m1_t.f);
  u1dsx2m1_t_t.u = u1dsx2m1_t.u & Top16Maskf;
  usx2m1_t_t = ux2m1_t.f * u1dsx2m1_t_t.f;
  ux2m1_b = ux2m1.f - ux2m1_t.f;
  usx2m1_b_t = ux2m1_b * u1dsx2m1_t_t.f;
  usx2m1_tb_t = usx2m1_t_t + usx2m1_b_t;

  float a1=0.375, a2=0.3125, a3=0.5;
  e = 1 - usx2m1_tb_t * u1dsx2m1_t_t.f;
  tmp = a1 + e * a2;
  p = a3 + e * tmp;
  ep = e * p;
  err1 = usx2m1_tb_t + ep * usx2m1_tb_t;

  w = ux.f - 1 + err1;
  where(1>w, w1_max) = 1;
  where(1<=w, w1_max) = w;
  where(1<w, w1_min) = 1;
  where(1>=w, w1_min) = w;
  uw_a_1.f = w1_max + w1_min;
  err2.f = w1_max - uw_a_1.f + w1_min;

  where(!jd_nonan, err2.f) = s2v<float, floatv<Abi>>(LLVM_NAN_32F);

  where(!jd_nonan, uw_a_1.f) = ux.f * 9.31322575e-10f;
  ku = uw_a_1.u - TwoThirdf;
  um.u = (ku & MASKf_mant) + TwoThirdf;  // the range specified
  ku >>= 0x17;
  k = static_simd_cast<floatv<Abi>>(ku);
  u1dk2.u = uone.u - (ku << 0x17);

  float c1=-0.151221797, c2=0.138202384114265, c3=0.140423089, c4=-0.164723262,
      c5=0.200079203, c6=-0.250042379, c7=0.333332658, c8=-0.5;

  z = um.f - uone.f;
  z += u1dk2.f * err2.f;
  y = c1 + z * c2;
  y = c3 + z * y;
  y = c4 + z * y;
  y = c5 + z * y;
  y = c6 + z * y;
  y = c7 + z * y;
  y = c8 + z * y;
  y = z * y;
  y = z + z * y;

  where(!jd_nonan, k) = k+31;

  return y + k * (float)LN2f;
}


template <class Abi>
doublev<Abi> acosh(doublev<Abi> x) {
  Abi_64suf<Abi> t2, t1, x1, temp1_f64, temp2_f64, a, ra, b, n2, t, n3, n1, src, x2_1, x3, rx2_1;
  Abi_32suf<Abi> temp1_f32, temp2_f32, x_32;

  src.f = x;
  x2_1.f = x * x - 1.0;
  rx2_1.u = x2_1.u & MaskBottom24;

  temp1_f32.f = static_simd_cast<floatv<Abi>>(rx2_1.f);
  temp2_f32.f = 1/sqrt(temp1_f32.f);

  where(temp1_f32.f < 0, temp2_f32.u) = temp2_f32.u^MASKf_sign;
  a.f = temp2_f32.f;

  ra.u = a.u & MaskBottom24;
  b.f = rx2_1.f*ra.f;
  temp1_f64.f = ra.f*(x2_1.f - rx2_1.f);
  t.f = b.f + temp1_f64.f;
  rx2_1.f = 1.0 - b.f*ra.f;
  rx2_1.f = rx2_1.f - temp1_f64.f*ra.f;
  rx2_1.f = ((((ACOSH_P1*rx2_1.f + ACOSH_P2)*rx2_1.f + ACOSH_P3)*rx2_1.f + ACOSH_P4)*rx2_1.f + ACOSH_P5)*rx2_1.f;
  t.f = t.f*rx2_1.f + t.f;

  x1.f = src.f + t.f - 1.0;

  where(1.0>x1.f, temp1_f64.f) = 1.0;
  where(1.0<=x1.f, temp1_f64.f) = x1.f;

  where(1.0<x1.f, temp2_f64.f) = 1.0;
  where(1.0>=x1.f, temp2_f64.f) = x1.f;

  t1.f = x1.f + 1.0;
  x1.u = x1.u & (unsigned long)AbsMask;

  where(x1.f>4.6566128730773926e-10, t1.u) = Top54Maskf&t1.u;
  rx2_1.f= src.f*9.3132257461547852e-10;
  x2_1.f = temp2_f64.f + temp1_f64.f - t1.f;

  where(src.f<ASCTH_NAN, t2.u) = 0xffffffffffffffff;
  where(src.f>=ASCTH_NAN, t2.u) = 0x0000000000000000;

  where(t2.u==0xffffffffffffffff, n1.u) = t1.u;
  where(t2.u!=0xffffffffffffffff, n1.u) = rx2_1.u;

  n2.u = n1.u & (unsigned long)0x000fffffffffffff;
  t1.u = n2.u | (unsigned long)0x3f50000000000000;
  
  x_32.f = static_simd_cast<floatv<Abi>>(t1.f);
  x_32.f = 1/x_32.f;
  n3.u = x2_1.u & t2.u;

  x2_1.u = n1.u>>0x14;
  t1.f = x_32.f;
  t1.f = round(t1.f);
  x_32.u = static_simd_cast<uintv<Abi>>(x2_1.u >> 32);
  x2_1.u = n1.u & MASK_exp;
  n2.i = 9169328841326329856 - x2_1.i;
  x3.f = static_simd_cast<doublev<Abi>>(x_32.u);

  n2.f = t1.f*n2.f;
  rx2_1.f = x3.f + 31;
  n1.f = n2.f*n1.f - 1.0;
  n2.f = n2.f*n3.f;

  where(t2.u==0xffffffffffffffff, x2_1.f) = x3.f;
  where(t2.u!=0xffffffffffffffff, x2_1.f) = rx2_1.f;
  
  x3.u = t1.u>>0x28;
  where(t1.f > 724.0, t2.u) = (unsigned long)0x408ff80000000000;
  where(t1.f <= 724.0, t2.u) = (unsigned long)0x408ff00000000000;
  
  for(unsigned i=0; i<x3.u.size(); ++i)
    rx2_1.u[i] = acosh_table_f64_la[(x3.u[i] - 0x405fc0)>>3];

  x3.f = x2_1.f - t2.f;
  x2_1.f = n1.f + n2.f;
  n3.f = x2_1.f - n1.f;
  t2.f = x2_1.f*x2_1.f;
  t1.f = n2.f - n3.f;

  n2.f = t2.f*(t2.f*(ASCTH_P1*x2_1.f
  - ASCTH_P2) + x2_1.f*ASCTH_P3
  - ASCTH_P4) + t1.f;

  t1.f = n2.f + x2_1.f + rx2_1.f;
  t1.f = ASCTH_P5*x3.f + t1.f;

  where(x==1.0, t1.f) = 0.0;

  return t1.f;
}


template <class Abi>
floatv<Abi> sin(floatv<Abi> x) {
  Abi_32suf<Abi> n, r, r2, y, m_x;
  uintv<Abi> sign, odd;

  m_x.f = x;  
  r.u = m_x.u & AbsMaskf;
  sign = m_x.u & ~AbsMaskf;

  n.f = (float)InvPi_f32 * r.f + ExpShift23;
  odd = n.u << 31;
  n.f -= ExpShift23;

  r.f = -SC_Pi1_f32 * n.f + r.f;
  r.f = -SC_Pi2_f32 * n.f + r.f;
  r.f = -SC_Pi3_f32 * n.f + r.f;

  r2.f = r.f * r.f;
  y.f = SC_A9_f32 * r2.f + SC_A7_f32;
  y.f = y.f * r2.f + SC_A5_f32;
  y.f = y.f * r2.f + SC_A3_f32;
  y.f = y.f * r2.f * r.f + r.f;
  y.u =  (y.u ^ sign ^ odd);
  return y.f;
}

template <class Abi>
doublev<Abi> sin(doublev<Abi> x) {
  Abi_64suf<Abi> n, r, r2, y, m_x;
  ulongv<Abi> sign, odd;

  m_x.f = x;
  r.u = m_x.u & (unsigned long)AbsMask;
  sign = m_x.u & ~(unsigned long)AbsMask;
  n.f = InvPi_f64 * r.f + ExpShift52;
  odd = n.u << 63;
  n.f -= ExpShift52;

  r.f = -SC_Pi1_f64 * n.f + r.f;
  r.f = -SC_Pi2_f64 * n.f + r.f;
  r.f = -SC_Pi3_f64 * n.f + r.f;
  r2.f = r.f * r.f;
  y.f = SC_C7_f64 * r2.f + SC_C6_f64;
  y.f = y.f * r2.f + SC_C5_f64;
  y.f = y.f * r2.f + SC_C4_f64;
  y.f = y.f * r2.f + SC_C3_f64;
  y.f = y.f * r2.f + SC_C2_f64;
  y.f = y.f * r2.f + SC_C1_f64;
  y.f = y.f * r2.f * r.f + r.f;

  y.u =  (y.u ^ sign ^ odd);
  return y.f;
}

template <class Abi>
floatv<Abi> sinh(floatv<Abi> x) {
  Abi_32suf<Abi> x1, x2, m_x, r, r2, n, y, Half;
  uintv<Abi> sign;
  floatv<Abi> temp, y1, y2, p1, p2;

  m_x.f = x;
  sign = m_x.u & MASKf_sign;
  r.u = m_x.u ^ sign;
  n.f = ExpShift23 + r.f * a1_f32;
  temp = n.f - ExpShift23;
  n.u = n.u << 0x17;  

  r.f = r.f - a2_h_f32 * temp;
  r.f = r.f - a2_l_f32 * temp;
  Half.f = 0.5f;
  x1.u = Half.u + n.u;
  x2.u = Half.u - n.u;   
  y1 = x1.f + x2.f;
  y2 = x1.f - x2.f;      
  r2.f = r.f * r.f; 

  p1 = b4_f32 + b2_f32 * r2.f; 
  p1 = r2.f * p1;    
  p1 = r.f + r.f * p1;    
  p2 = b5_f32 + b3_f32 * r2.f;     
  p2 = b1_f32 + r2.f * p2;
  p2 = r2.f * p2;  
  p2 = p2 * y2;

  p1 = p2 + p1 * y1;
  p1 = y2 + p1;     
  y.f = p1;
  y.u = y.u | sign;
  return y.f;
}

template <class Abi>
doublev<Abi> sinh(doublev<Abi> x) {
  Abi_64suf<Abi> x1, x2, y1, y2, t, m_x, r, r2, n, y, table_1, table_2;
  ulongv<Abi> sign, idx;
  doublev<Abi> temp, z1, z2, p1, p2;

  m_x.f = x;
  sign = m_x.u & MASK_sign;
  r.u = m_x.u ^ sign;

  double a1=1.442695040888963387004650940071,a2_h=0.693147180558298714458942413330,a2_l=0.000000000001646594958289708229;
  n.f = ExpShift45 + r.f * a1;
  idx = n.u & ExponetBasef;
  temp = n.f - ExpShift45;
  n.u = idx ^ n.u;  
  idx = idx << 1;
  n.u = n.u << 0x2d;

  r.f = r.f - a2_h * temp;
  r.f = r.f - a2_l * temp;
  for (unsigned i = 0; i < idx.size(); ++i){
    table_2.u[i] = table_f64_la_sin[idx[i]];
    table_1.u[i] = table_f64_la_sin[idx[i]+1];
  }
  
  x1.u = table_1.u + n.u;
  x2.u = table_1.u - n.u;
  y1.f = x1.f + x2.f;
  y2.f = x1.f - x2.f;
  t.u = table_2.u + n.u;
  z1 = t.f + y1.f;
  z2 = t.f + y2.f;
  r2.f = r.f * r.f;

  double b1=0.499999999999967859043437101718,b2=0.008333335370815994971871454311,
        b3=0.041666680840909360583612652817,b4=0.166666666666661994478104702466;
  p1 = b4 + b2 * r2.f;
  p1 = r2.f * p1;
  p1 = r.f + r.f * p1;
  p2 = b1 + b3 * r2.f;
  p2 = p2 * r2.f;
  p2 = p2 * z2;
  p1 = p2 + p1 * z1;
  p1 = p1 + z2;
  y.f = p1;
  y.u = y.u | sign;
  return y.f;
}

template <class Abi>
floatv<Abi> cos(floatv<Abi> x) {
  Abi_32suf<Abi> n, r, r2, y, m_x;
  uintv<Abi> odd;

  m_x.f = x;
  r.u = m_x.u & AbsMaskf;
  n.f = (float)InvPi_f32 * (r.f + (float)HalfPi_f32) + ExpShift23;
  odd = n.u << 31;
  n.f -= ExpShift23;
  n.f -= 0.5f;
  r.f = -SC_Pi1_f32 * n.f + r.f;
  r.f = -SC_Pi2_f32 * n.f + r.f;
  r.f = -SC_Pi3_f32 * n.f + r.f;

  r2.f = r.f * r.f;
  y.f = SC_A9_f32 * r2.f + SC_A7_f32;
  y.f = y.f * r2.f + SC_A5_f32;
  y.f = y.f * r2.f + SC_A3_f32;
  y.f = y.f * r2.f * r.f + r.f;
  y.u =  (y.u ^ odd);
  return y.f;
}

template <class Abi>
doublev<Abi> cos(doublev<Abi> x) {
  Abi_64suf<Abi> n, r, r2, y, m_x;
  ulongv<Abi> odd;

  m_x.f = x;
  r.u = m_x.u & (unsigned long)AbsMask;
  n.f = InvPi_f64 * (r.f + HalfPi_f64) + ExpShift52;
  odd = n.u << 63;
  n.f -= ExpShift52;
  n.f -= 0.5;

  r.f = -SC_Pi1_f64 * n.f + r.f;
  r.f = -SC_Pi2_f64 * n.f + r.f;
  r.f = -SC_Pi3_f64 * n.f + r.f;

  r2.f = r.f * r.f;
  y.f = SC_C7_f64 * r2.f + SC_C6_f64;
  y.f = y.f * r2.f + SC_C5_f64;
  y.f = y.f * r2.f + SC_C4_f64;
  y.f = y.f * r2.f + SC_C3_f64;
  y.f = y.f * r2.f + SC_C2_f64;
  y.f = y.f * r2.f + SC_C1_f64;
  y.f = y.f * r2.f * r.f + r.f;
  y.u =  (y.u ^ odd);
  return y.f;
}

template <class Abi>
floatv<Abi> cosh(floatv<Abi> x) {
  Abi_32suf<Abi> x1, x2, m_x, r, r2, n, y, Half;
  floatv<Abi> temp, y1, y2, p1, p2;

  m_x.f = x;
  r.u = m_x.u & (~MASKf_sign);
  n.f = ExpShift23 + r.f * a1_f32;
  temp = n.f - ExpShift23;
  n.u = n.u << 0x17;  

  r.f = r.f - a2_h_f32 * temp;
  r.f = r.f - a2_l_f32 * temp;
  Half.f = 0.5f;
  x1.u = Half.u + n.u;
  x2.u = Half.u - n.u;   
  y1 = x1.f + x2.f;
  y2 = x1.f - x2.f;      

  r2.f = r.f * r.f; 
  p1 = b4_f32 + b2_f32 * r2.f; 
  p1 = r2.f * p1;    
  p1 = r.f + r.f * p1;    
  p2 = b5_f32 + b3_f32 * r2.f;     
  p2 = b1_f32 + r2.f * p2;
  p2 = r2.f * p2;  
  p2 = p2 * y1;
  p1 = p2 + p1 * y2;
  p1 = y1 + p1;     
  y.f = p1;
  return y.f;
}

template <class Abi>
doublev<Abi> cosh(doublev<Abi> x) {
  Abi_64suf<Abi> m_x, r, r2, n, y, x1, x2, y1, y2, table_1, table_2;
  doublev<Abi> temp, p1, p2;
  ulongv<Abi> idx1, idx2;

  m_x.f = x;
  r.u = m_x.u & (unsigned long)AbsMask;
  double a1=1.442695040888963387004650940071,a2_h=0.693147180572850629687309265137,a2_l=-0.000000000012905320270077143982;
  n.f = ExpShift44 + r.f * a1;
  idx1 = n.u & ExponetBitsf;
  idx2 = 0x100 - idx1;
  temp = n.f - ExpShift44;
  n.u = n.u << 0x2c;
  n.u = n.u & MASK_exp;

  r.f = r.f - temp * a2_h;
  r.f = r.f - temp * a2_l;
  for (unsigned i = 0; i < idx1.size(); ++i){
    table_1.u[i] = table_f64_la_cos[idx1[i]];
    table_2.u[i] = table_f64_la_cos[idx2[i]];
  }

  x1.u = table_1.u + n.u;
  x2.u = table_2.u - n.u;
  x2.u = x2.u - (unsigned long)0x0010000000000000;
  y1.f = x1.f - x2.f;
  y2.f = x1.f + x2.f;
  double b1=0.166666679319391719538145935076,b2=0.041666680840909360583612652817,b3=0.499999999999967859043437101718;
  r2.f = r.f * r.f;
  p1 = b1 * r2.f;
  p1 = r.f + r.f * p1;
  p1 = y1.f * p1;

  p2 = b3 + b2 * r2.f;
  p2 = r2.f * p2;
  p1 = p1 + y2.f * p2;
  p1 = p1 + y2.f;
  y.f = p1;
  return y.f;
}

template <class Abi>
samesize<int, floatv<Abi>> ilogb(floatv<Abi> x){
  Abi_32suf<Abi> ux;
  samesize<int, floatv<Abi>> result;
  ux.f = x;
  result = static_simd_cast<samesize<int, floatv<Abi>>>(((ux.u >> 23) & ExponetBitsf) - ExponetBasef) ;
  return result;
}

template <class Abi>
samesize<int, doublev<Abi>> ilogb(doublev<Abi> x){
  Abi_64suf<Abi> ux;
  samesize<int, doublev<Abi>> result;
  ux.f = x;
  result = static_simd_cast<samesize<int, doublev<Abi>>>(((ux.u >> 52) & ExponetBits) - ExponetBase);
  return result;
}

template <class Abi> floatv<Abi>
frexp(floatv<Abi> value, samesize<int, floatv<Abi>>* exp){
  Abi_32suf<Abi> ux, umantissa;
  ux.f = value;
  umantissa.u = (ux.u & FrexpExponetMaskf) + HalfOnef_N;
  *exp = static_simd_cast<samesize<int, floatv<Abi>>>(((ux.u >> 23) & ExponetBitsf) - 0x7e);
  return umantissa.f;
}

template <class Abi> doublev<Abi>
frexp(doublev<Abi> value, samesize<int, doublev<Abi>>* exp){
	Abi_64suf<Abi> ux, umantissa;
	ux.f = value;
	umantissa.u = (ux.u & ExpMask) + HalfOne_N;
	*exp = static_simd_cast<samesize<int, doublev<Abi>>>(((ux.u >> 52) & ExponetBits) - 0x3fe);
	return umantissa.f;
}

template <class Abi>
floatv<Abi> fmax(floatv<Abi> x, floatv<Abi> y){
  where(y > x, x) = y;
  return x;
}

template <class Abi>
doublev<Abi> fmax(doublev<Abi> x, doublev<Abi> y){
  where(y > x, x) = y;
  return x;
}

template <class Abi>
ldoublev<Abi> fmax(ldoublev<Abi> x, ldoublev<Abi> y){
  where(y > x, x) = y;
  return x;
}

template <class Abi>
floatv<Abi> fmin(floatv<Abi> x, floatv<Abi> y){
  where(x > y, x) = y;
  return x;
}

template <class Abi>
doublev<Abi> fmin(doublev<Abi> x, doublev<Abi> y){
  where(x > y, x) = y;
  return x;
}

template <class Abi>
ldoublev<Abi> fmin(ldoublev<Abi> x, ldoublev<Abi> y){
  where(x > y, x) = y;
  return x;
}

template <class Abi>
floatv<Abi> fmod(floatv<Abi> x, floatv<Abi> y){
  floatv<Abi> n = vld1q_f<floatv<Abi>, intv<Abi>>(x / y);
  x -= n * y;
  return x;
}

template <class Abi>
doublev<Abi> fmod(doublev<Abi> x, doublev<Abi> y){
  doublev<Abi> n = vld1q_f<doublev<Abi>, intv<Abi>>(x / y);
  x -= n * y;
  return x;
}

template <class Abi>
ldoublev<Abi> fmod(ldoublev<Abi> x, ldoublev<Abi> y){
  ldoublev<Abi> n = vld1q_f<ldoublev<Abi>, intv<Abi>>(x / y);
  x -= n * y;
  return x;
}

template <class Abi>
floatv<Abi> remainder(floatv<Abi> x, floatv<Abi> y){
  floatv<Abi> n = round(x / y);
  x -= n * y;
  return x;
}

template <class Abi>
doublev<Abi> remainder(doublev<Abi> x, doublev<Abi> y){
  doublev<Abi> n = round(x / y);
  x -= n * y;
  return x;
}

template <class Abi>
ldoublev<Abi> remainder(ldoublev<Abi> x, ldoublev<Abi> y){
  ldoublev<Abi> n = round(x / y);
  x -= n * y;
  return x;
}

template <class Abi>
floatv<Abi> log1p(floatv<Abi> x){
  floatv<Abi> p, k;
  intv<Abi> k_scale;
  Abi_32suf<Abi> ux, um, us;

  ux.f = x;
  um.f = ux.f + 1.0f;
  k_scale = static_simd_cast<intv<Abi>>((um.u - LogScaleData) & Top9Maskf);
  um.u = ux.u - static_simd_cast<uintv<Abi>>(k_scale);
  us.u = static_simd_cast<uintv<Abi>>(LogScaleComps - k_scale);
  um.f += (0.25f * us.f - 1.f);

  floatv<Abi> m, m2, m4, m8, p_12, p_34, p_56, p_78, p_02, p_36, p_79, p_06;
  m = um.f;
  p_12 = m * __log1pf_data[1] + __log1pf_data[0];
  p_34 = m * __log1pf_data[3] + __log1pf_data[2];
  p_56 = m * __log1pf_data[5] + __log1pf_data[4];
  p_78 = m * __log1pf_data[7] + __log1pf_data[6];

  m2 = m * m;
  p_02 = m2 * p_12 + m;
  p_36 = m2 * p_56 + p_34;
  p_79 = m2 * __log1pf_data[8] + p_78;
  m4 = m2 * m2;
  p_06 = m4 * p_36 + p_02;
  m8 = m4 * m4;
  p = m8 * p_79 + p_06;
  k = static_simd_cast<floatv<Abi>>(k_scale >> 23);
  return k * (float)Ln2 + p;
}

template <class Abi>
doublev<Abi> log1p(doublev<Abi> x){
  doublev<Abi> cm, p, q, k, ylo, yhi;
  longv<Abi> k_bi;
  ulongv<Abi> u, utop;
  Abi_64suf<Abi> um, uf;

  um.f = x + 1;
  u = um.u + (unsigned long)OneMHfRt2Top;
  k_bi = static_simd_cast<longv<Abi>>((u >> 52) - ExponetBase);
  k = static_simd_cast<doublev<Abi>>(k_bi);
  cm = (x - (um.f - 1)) / um.f;
  utop = (u & (unsigned long)0x000fffff00000000) + (unsigned long)HfRt2Top;
  uf.u = utop | (um.u & Bottom32Mask);
  uf.f -= 1;

  doublev<Abi> f, f2, f4, f8;
  f = uf.f;
  f2 = f * f;
  f4 = f2 * f2;
  f8 = f4 * f4;
  q = ESTRIN_NEON_18 (f, f2, f4, f8, f8 * f8, __log1p_c);

  p = fma(uf.f, q * uf.f, uf.f);
  ylo = Ln2Lo * k + cm;
  yhi = Ln2Hi * k + p;
  return ylo + yhi;
}

template <class Abi> 
floatv<Abi> log10(floatv<Abi> x){
	floatv<Abi> p, q, exponent, r, r2, y;
  Abi_32suf<Abi> ux;
  ux.f = x;
  ux.u -= TwoThirdf;
  exponent = static_simd_cast<floatv<Abi>>(ux.i >> 23);
  ux.u &= MASKf_mant;
  ux.u += TwoThirdf;
  r = ux.f - 1.f;
  r2 = r * r;

  float c1=-0.4999991655349731445312500,c2=0.3333644270896911621093750,c3=-0.2500934004783630371093750,
  c4=0.1982789635658264160156250,c5=-0.1638664305210113525390625,c6=0.1692402511835098266601562,
  c7=-0.1554937064647674560546875;
  
  p = c6 * r + c5;
  q = c4 * r + c3;
  y = c2 * r + c1;
  p = c7 * r2 + p;
  q = p * r2 + q;
  y = q * r2 + y;
  p = (float)LN_2 * exponent + r;
  y = y * r2 + p;
  y = y * (float)InvLn10;
  return y;
}

template <class Abi> doublev<Abi> log10(doublev<Abi> x){
  ulongv<Abi> idx;
  doublev<Abi> z, r, r2, p, hi, invc, logc, y;
  longv<Abi> k;
  Abi_64suf<Abi> ux, tmp, iz;
  ux.f = x;
  tmp.u = ux.u - (unsigned long)OFF_d;
  idx = (tmp.u >> 45) & ExponetBasef;

  for (unsigned i = 0; i < idx.size(); ++i){
    invc[i] = __log_Tab[idx[i]][0];
    logc[i] = __log_Tab[idx[i]][1];
  }

  k = tmp.i >> 52;
  iz.u = ux.u - (tmp.u & (unsigned long)(0xfffULL << 52));
  z = iz.f;
  r = z * invc - 1;
  hi = static_simd_cast<doublev<Abi>>(k) * Ln2 + logc + r;
  r2 = r * r;
  y = LogA3 * r + LogA2;
  p = LogA1 * r + LogA0;
  y = LogA4 * r2 + y;
  y = y * r2 + p;
  y = y * r2 + hi;
  y = y * InvLn10;

  where(x<0, y) = LLVM_NAN_64F;
  return y;
}

template <class Abi>
floatv<Abi> tan(floatv<Abi> x)
{
    Abi_32suf<Abi> x1, sum;
    floatv<Abi> z, z2;
    uintv<Abi> odd;
    uint32_t AbsMask_f32_la = AbsMaskf, SignMask_f32_la = MASKf_sign;
    float 
    DP1_f32_la = 1.5703125,
    DP2_f32_la = 4.837512969970703125E-4, 
    DP3_f32_la = 7.54978995489188216E-8, 
    P1_f32_la = 9.38540185543E-3, 
    P2_f32_la = 3.11992232697E-3, 
    P3_f32_la = 2.44301354525E-2, 
    P4_f32_la = 5.34112807005E-2, 
    P5_f32_la = 1.33387994085E-1, 
    P6_f32_la = 3.33331568548E-1,
    InvPiO2_f32_la = 0.636619772367581;

    x1.f = x;
    uintv<Abi> sign = x1.u & s2v<uint32_t, uintv<Abi>>(SignMask_f32_la);
    x1.u = x1.u & AbsMask_f32_la;

    sum.f = InvPiO2_f32_la * x1.f + ExpShift23;
    odd = static_simd_cast<uintv<Abi>>(static_simd_cast<floatv<Abi>>((sum.u) << 31));
    sum.f -= ExpShift23;

    z = ((x1.f - sum.f * DP1_f32_la) - sum.f * DP2_f32_la) - sum.f * DP3_f32_la;
    z2 = z * z;

    sum.f = (((((P1_f32_la * z2 + P2_f32_la) * z2 + P3_f32_la) * z2
     + P4_f32_la) * z2 + P5_f32_la) * z2 + P6_f32_la) * z2 * z + z;

    where(odd > 0, sum.f) = (1.0f) / sum.f;
    sum.u = (sum.u ^ sign ^ (odd));  
    return sum.f;
}

template<class Abi>
doublev<Abi> tan(doublev<Abi> x)
{  
    Abi_64suf<Abi> x1, sum;
    doublev<Abi> z, z2;
    ulongv<Abi> odd;
    unsigned long AbsMask_f64_la = AbsMask, SignMask_f64_la = MASK_sign;
    double InvPiO2_f64_la = 0.636619772367581343075535053490,
    P1_f64_la = -1.30936939181383777646E4,
    P2_f64_la = 1.15351664838587416140E6,
    P3_f64_la = -1.79565251976484877988E7,
    DP1_f64_la = 1.57079631090164184570312,
    DP2_f64_la  =1.589325471229585673428E-8,
    DP3_f64_la = 6.12323399573676588614E-17,
    Q1_f64_la = 1.36812963470692954678E4,
    Q2_f64_la = -1.32089234440210967447E6,
    Q3_f64_la = 2.50083801823357915839E7,
    Q4_f64_la = -5.38695755929454629881E7;

    x1.f = x;
    ulongv<Abi> sign = x1.u & SignMask_f64_la;
    x1.u = x1.u & AbsMask_f64_la;
    sum.f = InvPiO2_f64_la * x1.f + ExpShift52;
    odd = static_simd_cast<ulongv<Abi>>(static_simd_cast<longv<Abi>>(sum.u << 63));
    sum.f -= ExpShift52;

    z = ((x1.f - sum.f * DP1_f64_la) - sum.f * DP2_f64_la) - sum.f * DP3_f64_la;
    z2 = z * z;
    doublev<Abi> p = (P1_f64_la * z2 + P2_f64_la) * z2 + P3_f64_la;
    doublev<Abi> q = (((z2 + Q1_f64_la) * z2 + Q2_f64_la) * z2 + Q3_f64_la) * z2 + Q4_f64_la;
    sum.f = z  +  z * z2 * p/q;

    where(odd > 0, sum.f) = (1.0f) / sum.f;
    sum.u = sum.u ^ sign ^ odd;
    return( sum.f );
}

template<class Abi>
floatv<Abi> tanh(floatv<Abi> x)
{
    Abi_32suf<Abi> src,x1_f32,sum;
    Abi_64suf<Abi> p1, p2, p3, p4;
    uintv<Abi> sign, odd;
    doublev<Abi> sum_f64, x1_f64;

    src.f = x;
    x1_f32.u = src.u&(unsigned int)0x7ff80000;
    x1_f32.i = x1_f32.i-(int)1022885888;
    where(x1_f32.i <= 0, odd) = s2v<unsigned int, uintv<Abi>>(0x00000000);
    where(x1_f32.i > 0, odd) = x1_f32.u;
    where(x1_f32.i > 69730304, odd) = s2v<unsigned int, uintv<Abi>>(0x04280000);
    odd = odd >> (unsigned int)0x11;

    sign = src.u&(unsigned int)MASKf_sign;
    x1_f32.u = src.u&(unsigned int)AbsMaskf;
    x1_f64 = static_simd_cast<doublev<Abi>>(x1_f32.f);

    for(unsigned int i = 0; i < odd.size(); ++i) {
      p1.u[i] = (__tanh_table_f32[odd[i]]);
      p2.u[i] = (__tanh_table_f32[odd[i]+1]);
      p3.u[i] = (__tanh_table_f32[odd[i]+2]);
      p4.u[i] = (__tanh_table_f32[odd[i]+3]);
    }

    sum_f64 = ((p4.f*x1_f64 + p3.f)*x1_f64+p2.f)*x1_f64+p1.f;
    sum.f = static_simd_cast<floatv<Abi>>(sum_f64);
    sum.u = sum.u^(sign);
    return sum.f;
}

template<class Abi>
doublev<Abi> tanh(doublev<Abi> x)
{
    Abi_64suf<Abi> src,x1,sum;
    Abi_32suf<Abi> src_h32;
    Abi_64suf<Abi> p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12;
    ulongv<Abi> sign;
    uintv<Abi> odd;

    src.f = x;
    x1.u = src.u&(unsigned long)AbsMask;
    sign = src.u&(unsigned long)MASK_sign;
    src_h32.u = static_simd_cast<uintv<Abi>>(src.u>>32);
    src_h32.u = src_h32.u&(unsigned int)0x7ffe0000;
    src_h32.u = src_h32.u-(unsigned int)0x3fbe0000;

    where(src_h32.i <= 0, odd) = s2v<unsigned int, uintv<Abi>>(0x00000000);
    where(src_h32.i > 0, odd) = src_h32.u;
    where(src_h32.i > (int)0x00760000, odd) = s2v<unsigned int, uintv<Abi>>(0x00760000);//x>69

    odd = odd>>0xd;
    odd += 1;

    for(unsigned int i = 0; i < odd.size(); ++i) {
      p1.u[i] = tanh_table_f64[odd[i]];
      p2.u[i] = tanh_table_f64[odd[i]+1];
      p3.u[i] = tanh_table_f64[odd[i]+2];
      p4.u[i] = tanh_table_f64[odd[i]+3];
      p5.u[i] = tanh_table_f64[odd[i]+4];
      p6.u[i] = tanh_table_f64[odd[i]+5];
      p7.u[i] = tanh_table_f64[odd[i]+6];
      p8.u[i] = tanh_table_f64[odd[i]+7];
      p9.u[i] = tanh_table_f64[odd[i]+8];
      p10.u[i] = tanh_table_f64[odd[i]+9];
      p11.u[i] = tanh_table_f64[odd[i]+10];
      p12.u[i] = tanh_table_f64[odd[i]+11];
    }

    x1.f = p12.f + x1.f;

    sum.f = ((((((((((p11.f*x1.f+p10.f)*x1.f+p9.f)
        *x1.f+p8.f)*x1.f+p7.f)*x1.f+p6.f)*x1.f+p5.f)
        *x1.f+p4.f)*x1.f+p3.f)*x1.f+p2.f)*x1.f+p1.f);

    sum.u = sum.u^sign;
    return sum.f;
}

template<class Abi>
floatv<Abi> atan(floatv<Abi> x) 
{    
    Abi_32suf<Abi> x1, sum; 

    unsigned int AbsMask_f32_la = AbsMaskf, SignMask_f32_la = MASKf_sign;
    float TAN3PI_8_f32_la = 2.414213562373095048801688724209,
    TANPI_8_f32_la = 0.414213562373095048801688724209,
    PI_2_f32_la = 1.5707963267948966192313216,
    PI_4_f32_la = 0.78539816339744830961566084581,
    P1_f32_la = 0.0849974826,
    P2_f32_la = -0.1399471462,
    P3_f32_la = 0.1998681277,
    P4_f32_la = -0.3333314657;

    sum.f=0.0f; 
    x1.f = x; 
    uintv<Abi> sign = x1.u & SignMask_f32_la; 
    x1.u &= AbsMask_f32_la; 

    where(x1.f > TANPI_8_f32_la, sum.f) = s2v<float, floatv<Abi>>(PI_4_f32_la); 
    where(x1.f > TANPI_8_f32_la, x1.f) = (x1.f-1)/(x1.f+1); 
    where(x1.f > TAN3PI_8_f32_la, sum.f) = s2v<float, floatv<Abi>>(PI_2_f32_la);  
    where(x1.f > TAN3PI_8_f32_la, x1.f) = -1/x1.f;

    floatv<Abi> x2 = x1.f * x1.f; 
    sum.f += x1.f + (((P1_f32_la *  x2 
         + P2_f32_la) * x2 
         + P3_f32_la) * x2 
         + P4_f32_la) * x2 * x1.f; 
    sum.u ^= sign; 
    return sum.f; 
} 

template<class Abi>
doublev<Abi> atan(doublev<Abi> x)
{   
    Abi_64suf<Abi> x1, sum;
    unsigned long AbsMask_f64_la = AbsMask, SignMask_f64_la = MASK_sign;
    double 
    TAN3PI_8_f64_la = 2.414213562373095048801688724209,
    TANPI_8_f64_la = 0.414213562373095048801688724209,
    PI_2_f64_la = 1.5707963267948966192313216,
    PI_4_f64_la = 0.78539816339744830961566084581,
    P1_f64_la = -0.8750608600031904122785,
    P2_f64_la = -16.15753718733365076637,
    P3_f64_la = -75.00855792314704667340,
    P4_f64_la = -122.8866684490136173410,
    P5_f64_la = -64.85021904942025371773,
    Q1_f64_la = 24.85846490142306297962,
    Q2_f64_la = 165.0270098316988542046,
    Q3_f64_la = 432.8810604912902668951,
    Q4_f64_la = 485.3903996359136964868,
    Q5_f64_la = 194.5506571482613964425;

    sum.f = 0.0;
    x1.f = x;
    ulongv<Abi> sign = x1.u & SignMask_f64_la;
    x1.u &= AbsMask_f64_la;

    where(x1.f > TANPI_8_f64_la, sum.f) = s2v<double, doublev<Abi>>(PI_4_f64_la); 
    where(x1.f > TANPI_8_f64_la, x1.f) = (x1.f-1)/(x1.f+1); 
    where(x1.f > TAN3PI_8_f64_la, sum.f) = s2v<double, doublev<Abi>>(PI_2_f64_la);  
    where(x1.f > TAN3PI_8_f64_la, x1.f) = -1.0/x1.f;

    doublev<Abi> x2 = x1.f*x1.f;
    sum.f += x1.f;
    doublev<Abi> P = (((P1_f64_la*x2 + P2_f64_la)*x2 + P3_f64_la)*x2 + P4_f64_la)*x2 + P5_f64_la;
    doublev<Abi> Q = ((((x2 + Q1_f64_la)*x2 + Q2_f64_la)*x2 + Q3_f64_la)*x2 + Q4_f64_la)*x2 + Q5_f64_la;
    sum.f += x1.f * x2 * P / Q;
    sum.u ^= sign;
    return sum.f;
}

template<class Abi>
floatv<Abi> atanh(floatv<Abi> x)
{
    Abi_32suf<Abi> x1, x2, x3, x0, n, x4, src, sum, sign, temp;
    floatv<Abi> ec, temp1, temp2;

    src.f = x;
    sign.u = src.u&(unsigned int)MASKf_sign;
    sign.u = sign.u^(unsigned int)HalfOnef_N;
    x1.u = src.u&(unsigned int)AbsMaskf;
    x2.f = (float)1.0 - x1.f;
    x3.f = (float)1.0 - x2.f;
    x0.f = x1.f + x1.f;
    x3.f=x3.f-x1.f;
    x1.f = 1/x2.f;

    x1.u = x1.u&(unsigned int)0xfffff000;
    x2.f = (float)1.0-x1.f*x2.f;
    x2.f = x2.f-x1.f*x3.f;
    x4.u = (unsigned int)0xfffff000&x0.u;
    x0.f = x0.f-x4.f;
    x4.f = x1.f*x4.f;
    x2.f = x2.f*x2.f+x2.f;

    x1.f = x1.f*x0.f;
    x1.f = x1.f + x1.f*x2.f;
    x1.f = x1.f + x4.f*x2.f;

    x3.f = x1.f+x4.f;
    x2.f = x4.f - x3.f;
    x4.f = x1.f + x2.f;

    where(x3.f>(float)1.0, temp1) = x3.f;
    where(x3.f<=(float)1.0, temp1) = (float)1.0;
    where(x3.f<(float)1.0, temp2) = x3.f;
    where(x3.f>=(float)1.0, temp2) = (float)1.0;                                                                         
    
    x1.f = temp1 + temp2;
    
    ec = temp1 - x1.f;
    ec = temp2 + ec;
    ec = x4.f + ec;

    x1.u = x1.u - (unsigned int)TwoThirdf;
    
    temp.u = x1.u >> (unsigned int)0x17;
    n.f = static_simd_cast<floatv<Abi>>(temp.u);
    temp.u = temp.u << (unsigned int)0x17;
    
    x1.u = x1.u&(unsigned int)MASKf_mant;
    x1.u = x1.u + (unsigned int)TwoThirdf;

    x2.u = (unsigned int)0x3f800000 - temp.u;
    temp.f = x1.f - (float)1.0;
    x1.f = x2.f*ec+temp.f;

    sum.f = (((((((x1.f*(float)0.138202384 
    - (float)0.151221797)*x1.f
    + (float)0.14042308)*x1.f 
    - (float)0.1647232622)*x1.f 
    + (float)0.200079203)*x1.f
    - (float)0.2500423789)*x1.f
    + (float)0.3333326578)*x1.f 
    - (float)0.5)*x1.f*x1.f + x1.f;

    sum.f = n.f*(float)0.693147182+sum.f;
    sum.f = sum.f*sign.f;
    return sum.f;
}


template<class Abi>
doublev<Abi> atanh(doublev<Abi> x)
{
    Abi_64suf<Abi> ec, sign, src, _2x, _1div1_x, round_2x, c,
    x1, n, _c, temp, odd, lnc, sum;
    doublev<Abi> _2r_c, r_c, _1_x, x1_1_1, x1_1_2;
    doublev<Abi> ec1, ec2, ec3;
    floatv<Abi> temp_f32;

    src.f = x;
    sign.u = (src.u&(unsigned long)MASK_sign)^(unsigned long)HalfOne_N;
    x1.u = src.u&(unsigned long)AbsMask;
    _2x.f = x1.f + x1.f;
    _1_x = 1.0 - x1.f;
    temp_f32 = static_simd_cast<floatv<Abi>>(_1_x);
    temp_f32 = (float)1.0/temp_f32;
    _1div1_x.f = static_simd_cast<doublev<Abi>>(temp_f32);

    ec1 = 1.0 - _1_x;
    ec1 = ec1 - x1.f;
    x1.u = _1div1_x.u&(unsigned long)0xfffffe0000000000;

    ec2 = 1.0 - _1_x*x1.f;
    ec2 = ec2 - x1.f*ec1;
    ec1 = ec2*ec2 + 1.0;
    ec3 = ec2*ec2 + ec2;
    ec3 = 1.0 + ec3*ec1;
    round_2x.u = _2x.u&(unsigned long)0xfffffffffffff000;

    ec1 = _2x.f - round_2x.f;
    ec.f = ec2*ec3;
    ec1 = ec1*x1.f;
    x1.f = round_2x.f*x1.f;
    ec1 = ec1 + ec1*ec.f;
    ec1 = ec1 + ec.f*x1.f;
    ec.u = (unsigned long)Top54Maskf|ec.u;
    x1.f = ec1 + x1.f;

    where(1.0>x1.f, x1_1_1) = 1.0;
    where(1.0<=x1.f, x1_1_1) = x1.f;
    where(1.0<x1.f, x1_1_2) = 1.0;
    where(1.0>=x1.f, x1_1_2) = x1.f;

    x1.f = 1.0 + x1.f;
    x1.u = x1.u&ec.u;
    c.u = (x1.u&(unsigned long)0x000fffffffffffff)|(unsigned long)0x3f50000000000000;
    
    temp_f32 = static_simd_cast<floatv<Abi>>(c.f);
    temp_f32 = (float)1.0/temp_f32;
    _c.f = static_simd_cast<doublev<Abi>>(temp_f32);
    _c.f = round(_c.f);
    odd.u = _c.u >> (unsigned long)0x28;
    for(unsigned int i = 0; i < odd.u.size(); i++)
      lnc.u[i] = atanh_table_f64_la[(odd.u[i]-(unsigned long)0x405fc0)>>3];
    n.u = x1.u >> 0x14;
    n.u = n.u>>32;
    n.f = static_simd_cast<doublev<Abi>>(n.u);

    where(_c.f > 724.0, temp.u) = (unsigned long)0x408ff80000000000;
    where(_c.f <= 724.0, temp.u) = (unsigned long)0x408ff00000000000;
    n.f = n.f - temp.f;
    temp.u = x1.u&MASK_exp;
    temp.u = (unsigned long)0x7f40000000000000 - temp.u;
    _c.f = _c.f * temp.f;
    r_c = x1.f*_c.f - 1.0;

    temp.f = x1_1_1 - x1.f;
    x1_1_2 = x1_1_2 + temp.f;
    r_c = r_c + x1_1_2*_c.f;
    _2r_c = r_c*r_c;

    sum.f = _2r_c*((r_c*ASCTH_P1 - ASCTH_P2)
    *_2r_c + ASCTH_P3*r_c - ASCTH_P4) + r_c;
    sum.f = lnc.f + sum.f;
    sum.f = n.f*ASCTH_P5 + sum.f;
    sum.f = sum.f*sign.f;
    return sum.f;
}

template<class Abi>
floatv<Abi> log2(floatv<Abi> x){
  Abi_32suf<Abi> ux, uz;
  doublev<Abi> r, r2, p, y, y0, invc, logc;
  floatv<Abi> ans;
  uintv<Abi> u2ek;
  intv<Abi> k, i;

  int table_bits = 4;
  unsigned int OFFf = 0x3f330000;

  ux.f = x;
  u2ek = ux.u - OFFf;
  i = static_simd_cast<intv<Abi>>((u2ek >> (23 - table_bits)) & (unsigned int)0xf);
  uz.u = ux.u - (u2ek & (unsigned int)Top9Maskf);
  k = static_simd_cast<intv<Abi>>(u2ek) >> 23;

  for(unsigned int j = 0; j < i.size(); ++j)
  {
    invc[j] = __log2f_tab[i[j]][0];
    logc[j] = __log2f_tab[i[j]][1];
  }
  r = static_simd_cast<doublev<Abi>>(uz.f) * invc - 1.0;
  y0 = logc + static_simd_cast<doublev<Abi>>(k);

  r2 = r * r;
  y = __log2f_poly[1] * r + __log2f_poly[2];
  y = __log2f_poly[0] * r2 + y;
  p = __log2f_poly[3] * r + y0;

  ans = static_simd_cast<floatv<Abi>>(y * r2 + p);
  where(x <= 0, ans) = s2v<float, floatv<Abi>>(LLVM_NAN_32F);
  return ans;
}

template<class Abi>
doublev<Abi> log2(doublev<Abi> x){
    Abi_64suf<Abi> ux, uz;
    doublev<Abi> invc, logc, hi, lo, t1, t2, t3, t4, ans;
    ulongv<Abi> u2ek;
    longv<Abi> k, i;

    unsigned long OFFs = 0x3fe6000000000000;
    int LOG2_TABLE_BITS = 6;
    double InvLn2hi = 0x1.7154765200000p+0, InvLn2lo = 0x1.705fc2eefa200p-33;

    ux.f = x;
    u2ek = ux.u - OFFs;
    i = (static_simd_cast<longv<Abi>>((u2ek)) >> (52 - LOG2_TABLE_BITS) )& (long)0x3f;
    k = static_simd_cast<longv<Abi>>(u2ek) >> 52;
    uz.u = ux.u - (u2ek & (unsigned long)0xfffUL << 52);

    for(unsigned int j = 0; j < i.size(); j++)
    {
      invc[j] = __log2_tab[i[j]][0];
      logc[j] = __log2_tab[i[j]][1];
    }

    doublev<Abi> r, r2, r4, p;
    r = uz.f * invc - 1.0;
    t1 = r * InvLn2hi;
    t2 = r * InvLn2hi - t1;
    t3 = r * InvLn2lo + t2;
    t4 = static_simd_cast<doublev<Abi>>(k) + logc;
    hi = t4 + t1;
    lo = t4 - hi + t1 + t3;

    r2 = r * r;
    r4 = r2 * r2;
    t1 = __log2_poly[0] + r * __log2_poly[1];
    t2 = __log2_poly[2] + r * __log2_poly[3];
    t3 = __log2_poly[4] + r * __log2_poly[5];

    p = t1 + r2 * (t2) + r4 * (t3);
    ans = lo + r2 * p + hi;
    where(x <= 0, ans) = s2v<double, doublev<Abi>>(LLVM_NAN_64F);
    return ans;
}

template <class Abi>
floatv<Abi> exp2(floatv<Abi> x){
  Abi_64suf<Abi> ux, us;
  doublev<Abi> xd, nr0, p, q, y, r, r2;
  ulongv<Abi> idx;
  xd = static_simd_cast<doublev<Abi>>(x);
  ux.f = xd + ExpShift47;
  idx = ux.u & 0x1f;
  for (unsigned i = 0; i < ux.u.size(); ++i){
    us.u[i] = __exp2f_tab[idx[i]];
  }
  us.u += (ux.u << 47);

  nr0 = ux.f - ExpShift47;
  r = xd - nr0;
  r2 = r * r;

  double c1=0x1.c6af84b912394p-5,c2=0x1.ebfce50fac4f3p-3,c3=0x1.62e42ff0c52d6p-1;
  p = c1 * r + c2;
  q = c3 * r + 1.;
  y = p * r2 + q;
  y = y * us.f;
  return static_simd_cast<floatv<Abi>>(y);
}

template <class Abi>
doublev<Abi> exp2(doublev<Abi> x){
  Abi_64suf<Abi> ux, ut, us;
  ulongv<Abi> ridx;
  doublev<Abi> nr0, r, r2, r4, p, p1, p2, p3;

  ux.f = x + ExpShift45;
  ridx = 2 * (ux.u & ExponetBasef);
  for (unsigned i = 0; i < ux.u.size(); ++i){
    ut.u[i] = __exp2_tab[ridx[i]];
    us.u[i] = __exp2_tab[ridx[i] + 1];
  }

  us.u +=  ux.u << 45;
  nr0 = ux.f - ExpShift45;
  r = x - nr0;
  r2 = r * r;
  r4 = r2 * r2;

  double c1=Ln2, c2=0x1.ebfbdff82c424p-3, c3=0x1.c6b08d70cf4b5p-5,
    c4=0x1.3b2abd24650ccp-7, c5=0x1.5d7e09b4e3a84p-10;
  p1 = ut.f + r * c1;
  p2 = c2 + r * c3;
  p3 = c4 + r * c5;
  p = p1 + r2 * p2;
  p = p + r4 * p3;

  return us.f + us.f * p;
}

template <class Abi>
scharv<Abi> abs(scharv<Abi> j){
  where(j<0, j) = ~j + 0x1;
  return j;
}
template <class Abi> shortv<Abi> abs(shortv<Abi> j){
  where(j<0, j) = ~j + 0x1;
  return j;
}
template <class Abi> intv<Abi> abs(intv<Abi> j){
  where(j<0, j) = ~j + 0x1;
  return j;
}
template <class Abi> longv<Abi> abs(longv<Abi> j){
  where(j<0, j) = ~j + 0x1;
  return j;
}
template <class Abi> llongv<Abi> abs(llongv<Abi> j){
  where(j<0, j) = ~j + 0x1;
  return j;
}
template <class Abi> floatv<Abi> abs(floatv<Abi> j){
  Abi_32suf<Abi> ux;
  ux.f = j;
  ux.u = ux.u & (unsigned int)(AbsMaskf);
  return ux.f;
}
template <class Abi> doublev<Abi> abs(doublev<Abi> j){
  Abi_64suf<Abi> ux;
  ux.f = j;
  ux.u = ux.u & (AbsMask);
  return ux.f;
}

template <class Abi> ldoublev<Abi> abs(ldoublev<Abi> j){
  Abi_128suf<Abi> ux;
  ux.f = j;
  __uint128_t sign_mask = 0x1;
  sign_mask = ~(sign_mask << 127);
  ux.u = ux.u & sign_mask;
  return ux.f;
}

template <class V> struct simd_div_t { V quot, rem; };

template <class Abi>
simd_div_t<scharv<Abi>> div(scharv<Abi> numer, scharv<Abi> denom){
  simd_div_t<scharv<Abi>> d;
  d.quot = static_simd_cast<scharv<Abi>>(numer/denom);
  d.rem = numer - d.quot * denom;
  return d;
}
template <class Abi>
simd_div_t<shortv<Abi>> div(shortv<Abi> numer, shortv<Abi> denom){
  simd_div_t<shortv<Abi>> d;
  d.quot = static_simd_cast<shortv<Abi>>(numer/denom);
  d.rem = numer - d.quot * denom;
  return d;
}

template <class Abi>
simd_div_t<intv<Abi>> div(intv<Abi> numer, intv<Abi> denom){
  simd_div_t<intv<Abi>> d;
  d.quot = static_simd_cast<intv<Abi>>(numer/denom);
  d.rem = numer - d.quot * denom;
  return d;
}

template <class Abi>
simd_div_t<longv<Abi>> div(longv<Abi> numer, longv<Abi> denom){
  simd_div_t<longv<Abi>> d;
  d.quot = static_simd_cast<longv<Abi>>(numer/denom);
  d.rem = numer - d.quot * denom;
  return d;
}

template <class Abi>
simd_div_t<llongv<Abi>> div(llongv<Abi> numer, llongv<Abi> denom){
  simd_div_t<llongv<Abi>> d;
  d.quot = static_simd_cast<llongv<Abi>>(numer/denom);
  d.rem = numer - d.quot * denom;
  return d;
}

template <class Abi>
simd_mask<float, Abi> isinf(floatv<Abi> x){
  Abi_32suf<Abi> ux;
  ux.f = x;
  uintv<Abi> k = MASKf_exp;
  return static_simd_cast<floatv<Abi>>(ux.u & AbsMaskf) == static_simd_cast<floatv<Abi>>(k);
}

template <class Abi>
simd_mask<double, Abi> isinf(doublev<Abi> x){
  Abi_64suf<Abi> ux;
  ux.f = x;
  ulongv<Abi> k = MASK_exp;
  return  static_simd_cast<doublev<Abi>>(ux.u & AbsMask) == static_simd_cast<doublev<Abi>>(k);
}

template <class Abi>
simd_mask<long double, Abi> isinf(ldoublev<Abi> x){
  Abi_128suf<Abi> ux;
  ux.f = x;
  uint128v<Abi> k = Bottom15Mask;
  k <<= 112;
  uint128v<Abi> ks = 0x1;
  ks = ~(ks<<127);
  return static_simd_cast<ldoublev<Abi>>(ux.u & ks) == static_simd_cast<ldoublev<Abi>>(k);
}

template <class Abi>
simd_mask<float, Abi> isnan(floatv<Abi> x){
  Abi_32suf<Abi> ux;
  ux.f = x;
  uintv<Abi> k = MASKf_exp;
  return (!isinf(x)) && (static_simd_cast<floatv<Abi>>(ux.u & k) == static_simd_cast<floatv<Abi>>(k));
}

template <class Abi>
simd_mask<double, Abi> isnan(doublev<Abi> x){
  Abi_64suf<Abi> ux;
  ux.f = x;
  ulongv<Abi> k = MASK_exp;
  return (!isinf(x)) && (static_simd_cast<doublev<Abi>>(ux.u & k) == static_simd_cast<doublev<Abi>>(k));
}

template <class Abi>
simd_mask<long double, Abi> isnan(ldoublev<Abi> x){
  Abi_128suf<Abi> ux;
  ux.f = x;
  uint128v<Abi> k = Bottom15Mask;
  k <<= 112;
  return (!isinf(x)) && (static_simd_cast<ldoublev<Abi>>(ux.u & k) == static_simd_cast<ldoublev<Abi>>(k));
}

template <class Abi>
simd_mask<float, Abi> isfinite(floatv<Abi> x){
  Abi_32suf<Abi> ux;
  ux.f = x;
  uintv<Abi> k = MASKf_exp;
  return static_simd_cast<floatv<Abi>>(ux.u & k) != static_simd_cast<floatv<Abi>>(k); 
}
template <class Abi>
simd_mask<double, Abi> isfinite(doublev<Abi> x){
  Abi_64suf<Abi> ux;
  ux.f = x;
  ulongv<Abi> k = MASK_exp;
  return static_simd_cast<doublev<Abi>>(ux.u & k) != static_simd_cast<doublev<Abi>>(k); 
}
template <class Abi>
simd_mask<long double, Abi> isfinite(ldoublev<Abi> x){
  Abi_128suf<Abi> ux;
  ux.f = x;
  uint128v<Abi> k = Bottom15Mask;
  k <<= 112;
  return static_simd_cast<ldoublev<Abi>>(ux.u & k) != static_simd_cast<ldoublev<Abi>>(k); 
}

template <class Abi>
simd_mask<float, Abi> isnormal(floatv<Abi> x){
  return (x!=0.f) && (isfinite(x));
}

template <class Abi>
simd_mask<double, Abi> isnormal(doublev<Abi> x){
  return (x!=0.) && (isfinite(x));
}

template <class Abi>
simd_mask<long double, Abi> isnormal(ldoublev<Abi> x){
  return (x!=0.) && (isfinite(x));
}

template <class Abi>
simd_mask<float, Abi> signbit(floatv<Abi> x){
  floatv<Abi> y = 0;
  where(x<0, y) = 1;
  return y==1;
}

template <class Abi>
simd_mask<double, Abi> signbit(doublev<Abi> x){
  doublev<Abi> y = 0;
  where(x<0, y) = 1;
  return y==1;
}

template <class Abi>
simd_mask<long double, Abi> signbit(ldoublev<Abi> x){
  ldoublev<Abi> y = 0;
  where(x<0, y) = 1;
  return y==1;
}

template <class Abi>
simd_mask<float, Abi> isgreater(floatv<Abi> x, floatv<Abi> y){
  return x > y;
}

template <class Abi>
simd_mask<double, Abi> isgreater(doublev<Abi> x, doublev<Abi> y){
  return x > y;
}

template <class Abi>
simd_mask<long double, Abi> isgreater(ldoublev<Abi> x, ldoublev<Abi> y){
  return x > y;
}

template <class Abi>
simd_mask<float, Abi> isgreaterequal(floatv<Abi> x, floatv<Abi> y){
    return x >= y;
}

template <class Abi>
simd_mask<double, Abi> isgreaterequal(doublev<Abi> x, doublev<Abi> y){
    return x >= y;
}

template <class Abi>
simd_mask<long double, Abi> isgreaterequal(ldoublev<Abi> x, ldoublev<Abi> y){
    return x >= y;
}

template <class Abi>
simd_mask<float, Abi> isless(floatv<Abi> x, floatv<Abi> y){
  floatv<Abi> jd = 0;
  where((x < y) && (!(isnan(x) || isnan(y))), jd) = 1;
  return jd==1;
}

template <class Abi> simd_mask<double, Abi> isless(doublev<Abi> x, doublev<Abi> y){
  doublev<Abi> jd = 0;
  where((x < y) && (!(isnan(x) || isnan(y))), jd) = 1;
  return jd==1;
}

template <class Abi> simd_mask<long double, Abi> isless(ldoublev<Abi> x, ldoublev<Abi> y){
  ldoublev<Abi> jd = 0;
  where((x < y) && (!(isnan(x) || isnan(y))), jd) = 1;
  return jd==1;
}

template <class Abi> simd_mask<float, Abi> islessequal(floatv<Abi> x, floatv<Abi> y){
  floatv<Abi> jd = 0;
  where((x <= y) && (!(isnan(x) || isnan(y))), jd) = 1;
  return jd==1;
}

template <class Abi>
simd_mask<double, Abi> islessequal(doublev<Abi> x, doublev<Abi> y){
  doublev<Abi> jd = 0;
  where((x <= y) && (!(isnan(x) || isnan(y))), jd) = 1;
  return jd==1;
}

template <class Abi>
simd_mask<long double, Abi> islessequal(ldoublev<Abi> x, ldoublev<Abi> y){
  ldoublev<Abi> jd = 0;
  where((x <= y) && (!(isnan(x) || isnan(y))), jd) = 1;
  return jd==1;
}

template <class Abi> simd_mask<float, Abi> islessgreater(floatv<Abi> x, floatv<Abi> y){
  floatv<Abi> jd = 0;
  where((x < y) || (x > y), jd) = 1;
  return jd==1;
}

template <class Abi> simd_mask<double, Abi> islessgreater(doublev<Abi> x, doublev<Abi> y){
  doublev<Abi> jd = 0;
  where((x < y) || (x > y), jd) = 1;
  return jd==1;
}

template <class Abi>
simd_mask<long double, Abi> islessgreater(ldoublev<Abi> x, ldoublev<Abi> y){
  ldoublev<Abi> jd = 0;
  where((x < y) || (x > y), jd) = 1;
  return jd==1;
}

#endif // _LIBCPP_STD_VER >= 17

_LIBCPP_END_NAMESPACE_EXPERIMENTAL_SIMD

_LIBCPP_POP_MACROS

#endif // _LIBCPP_EXPERIMENTAL_SIMD
