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

bool all_of(_Bool __v) noexcept { return __v; }

bool any_of(_Bool __v) noexcept { return __v; }

bool none_of(_Bool __v) noexcept { return !__v; }

bool some_of(_Bool) noexcept { return false; }

int popcount(_Bool __v) noexcept { return __v; }

int find_first_set(_Bool) noexcept { return 0; }

int find_last_set(_Bool) noexcept { return 0; }

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

#endif // _LIBCPP_STD_VER >= 17

_LIBCPP_END_NAMESPACE_EXPERIMENTAL_SIMD

_LIBCPP_POP_MACROS

#endif // _LIBCPP_EXPERIMENTAL_SIMD
