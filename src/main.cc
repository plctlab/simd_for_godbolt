#include "simd.h"
#include <array>
#include <iostream>
namespace ex = std::experimental;

constexpr std::size_t M = 4;
constexpr std::size_t N = 4;
constexpr std::size_t K = 4;

using fixed_simd = ex::fixed_size_simd<float, M>;
void gemm(std::array<fixed_simd, M> A, std::array<fixed_simd, N> B,
           std::array<fixed_simd, K>& C) {
    for (int i = 0; i < M; ++i) {
        for (int k = 0; k < K; ++k) {
            for (int j = 0; j < N; ++j) {
                C[i][k] += A[i][j] * B[j][k];
            }
        }
    }
}

int main() {
    std::array<fixed_simd, M> A;
    std::array<fixed_simd, N> B;
    std::array<fixed_simd, K> C;

    for (auto& i : A) i = fixed_simd(1.0f);
    for (auto& i : B) i = fixed_simd(2.0f);
    for (auto& i : C) i = fixed_simd(0.0f);

    gemm(A, B, C);

    for (auto& ic : C) {
        for (size_t i = 0; i < K; ++i) {
            std::cout << ic[i] << ' ';
        }
        std::cout << '\n';
    }
}
