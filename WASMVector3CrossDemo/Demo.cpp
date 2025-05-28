// https://surma.dev/things/c-to-webassembly/

#define _XM_NO_INTRINSICS_

#include <DirectXMath.h>

using namespace DirectX;

__attribute__((export_name("Vector3Cross")))

void Vector3Cross(float (*Destination)[3], const float (*V1)[3], const float (*V2)[3]) {
  auto A = XMVectorSet((*V1)[0], (*V1)[1], (*V1)[2], 0.0f);
  auto B = XMVectorSet((*V2)[0], (*V2)[1], (*V2)[2], 0.0f);
  auto C = XMVector3Cross(A, B);
  (*Destination)[0] = XMVectorGetX(C);
  (*Destination)[1] = XMVectorGetY(C);
  (*Destination)[2] = XMVectorGetZ(C);
}
