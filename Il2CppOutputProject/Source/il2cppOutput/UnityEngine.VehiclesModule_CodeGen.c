#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif



#include "codegen/il2cpp-codegen-metadata.h"





IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END




// 0x00000001 UnityEngine.Vector3 UnityEngine.WheelHit::get_normal()
extern void WheelHit_get_normal_m448BF726B38FD590A5A234E03F2565502F374B84 (void);
// 0x00000002 System.Single UnityEngine.WheelHit::get_forwardSlip()
extern void WheelHit_get_forwardSlip_m0797F5933FFF330E76B5E349DED2D18A74C44C51 (void);
// 0x00000003 System.Single UnityEngine.WheelHit::get_sidewaysSlip()
extern void WheelHit_get_sidewaysSlip_mA5BA8C7E98F2E306A1409561AE954B45DCF65CB9 (void);
// 0x00000004 System.Single UnityEngine.WheelCollider::get_radius()
extern void WheelCollider_get_radius_m6740216F0D9ABC451D904863EFD1230337516D68 (void);
// 0x00000005 System.Void UnityEngine.WheelCollider::set_motorTorque(System.Single)
extern void WheelCollider_set_motorTorque_m404286BB97DBB636DC13F435B94B4E009210A82C (void);
// 0x00000006 System.Void UnityEngine.WheelCollider::set_brakeTorque(System.Single)
extern void WheelCollider_set_brakeTorque_m365AAA6635A2ACE9BEECB55AF797338AD2FC77B0 (void);
// 0x00000007 System.Void UnityEngine.WheelCollider::set_steerAngle(System.Single)
extern void WheelCollider_set_steerAngle_mB86472369D34F42CFE9A54E6A4D4D26E11DBF176 (void);
// 0x00000008 System.Void UnityEngine.WheelCollider::GetWorldPose(UnityEngine.Vector3&,UnityEngine.Quaternion&)
extern void WheelCollider_GetWorldPose_m8508E3D8CD2D56CCA9458F634F4C7A1B1B5516AA (void);
// 0x00000009 System.Boolean UnityEngine.WheelCollider::GetGroundHit(UnityEngine.WheelHit&)
extern void WheelCollider_GetGroundHit_m82ECC0C693066D7DC160257813A6CA629DA0A08C (void);
static Il2CppMethodPointer s_methodPointers[9] = 
{
	WheelHit_get_normal_m448BF726B38FD590A5A234E03F2565502F374B84,
	WheelHit_get_forwardSlip_m0797F5933FFF330E76B5E349DED2D18A74C44C51,
	WheelHit_get_sidewaysSlip_mA5BA8C7E98F2E306A1409561AE954B45DCF65CB9,
	WheelCollider_get_radius_m6740216F0D9ABC451D904863EFD1230337516D68,
	WheelCollider_set_motorTorque_m404286BB97DBB636DC13F435B94B4E009210A82C,
	WheelCollider_set_brakeTorque_m365AAA6635A2ACE9BEECB55AF797338AD2FC77B0,
	WheelCollider_set_steerAngle_mB86472369D34F42CFE9A54E6A4D4D26E11DBF176,
	WheelCollider_GetWorldPose_m8508E3D8CD2D56CCA9458F634F4C7A1B1B5516AA,
	WheelCollider_GetGroundHit_m82ECC0C693066D7DC160257813A6CA629DA0A08C,
};
extern void WheelHit_get_normal_m448BF726B38FD590A5A234E03F2565502F374B84_AdjustorThunk (void);
extern void WheelHit_get_forwardSlip_m0797F5933FFF330E76B5E349DED2D18A74C44C51_AdjustorThunk (void);
extern void WheelHit_get_sidewaysSlip_mA5BA8C7E98F2E306A1409561AE954B45DCF65CB9_AdjustorThunk (void);
static Il2CppTokenAdjustorThunkPair s_adjustorThunks[3] = 
{
	{ 0x06000001, WheelHit_get_normal_m448BF726B38FD590A5A234E03F2565502F374B84_AdjustorThunk },
	{ 0x06000002, WheelHit_get_forwardSlip_m0797F5933FFF330E76B5E349DED2D18A74C44C51_AdjustorThunk },
	{ 0x06000003, WheelHit_get_sidewaysSlip_mA5BA8C7E98F2E306A1409561AE954B45DCF65CB9_AdjustorThunk },
};
static const int32_t s_InvokerIndices[9] = 
{
	1136,
	684,
	684,
	684,
	296,
	296,
	296,
	525,
	791,
};
extern const Il2CppCodeGenModule g_UnityEngine_VehiclesModuleCodeGenModule;
const Il2CppCodeGenModule g_UnityEngine_VehiclesModuleCodeGenModule = 
{
	"UnityEngine.VehiclesModule.dll",
	9,
	s_methodPointers,
	3,
	s_adjustorThunks,
	s_InvokerIndices,
	0,
	NULL,
	0,
	NULL,
	0,
	NULL,
	NULL,
};
