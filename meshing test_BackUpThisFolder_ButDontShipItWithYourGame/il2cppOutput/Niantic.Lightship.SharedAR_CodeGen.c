#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"


extern const RuntimeMethod* LightshipDatastore__handleDatastoreCallback_mAA4817C83C6C72545AA5F31DEA2DD88D034630DE_RuntimeMethod_var;
extern const RuntimeMethod* LightshipNetworking__dataReceivedNative_m00BC3A1BFF879E0061D7F99195E0068E2C4F38BD_RuntimeMethod_var;
extern const RuntimeMethod* LightshipNetworking__didAddPeerNative_m8067BF2FC04846D632CEBCF6A2DC33CF2E691B01_RuntimeMethod_var;
extern const RuntimeMethod* LightshipNetworking__didRemovePeerNative_m9BBF6A906DD5EF11529086865FFB883397E7976C_RuntimeMethod_var;
extern const RuntimeMethod* LightshipNetworking__networkEventReceivedNative_m634E52EACF05D2C5EE8A1404531486AEC55C27E6_RuntimeMethod_var;
extern const RuntimeMethod* RoomManagementService_StaticGetOrCreateRoomCallback_m2A100A37156064354EA9E7F320F8F31C3DDBEA6F_RuntimeMethod_var;



// 0x00000001 System.Void <Module>::.cctor()
extern void U3CModuleU3E__cctor_m37EB60C8B311A5C89A2CC8A0488756D876CF1510 (void);
// 0x00000002 System.Void Niantic.Lightship.SharedAR.Rooms._IRoomManagementServiceImpl::InitializeService(System.String,System.String,System.String)
// 0x00000003 Niantic.Lightship.SharedAR.Rooms.MarshMessages._CreateRoomResponse Niantic.Lightship.SharedAR.Rooms._IRoomManagementServiceImpl::CreateRoom(Niantic.Lightship.SharedAR.Rooms.MarshMessages._CreateRoomRequest,Niantic.Lightship.SharedAR.Rooms.RoomManagementServiceStatus&)
// 0x00000004 Niantic.Lightship.SharedAR.Rooms.MarshMessages._GetRoomResponse Niantic.Lightship.SharedAR.Rooms._IRoomManagementServiceImpl::GetRoom(Niantic.Lightship.SharedAR.Rooms.MarshMessages._GetRoomRequest,Niantic.Lightship.SharedAR.Rooms.RoomManagementServiceStatus&)
// 0x00000005 Niantic.Lightship.SharedAR.Rooms.MarshMessages._GetRoomForExperienceResponse Niantic.Lightship.SharedAR.Rooms._IRoomManagementServiceImpl::GetRoomsForExperience(Niantic.Lightship.SharedAR.Rooms.MarshMessages._GetRoomForExperienceRequest,Niantic.Lightship.SharedAR.Rooms.RoomManagementServiceStatus&)
// 0x00000006 System.Void Niantic.Lightship.SharedAR.Rooms._IRoomManagementServiceImpl::DestroyRoom(Niantic.Lightship.SharedAR.Rooms.MarshMessages._DestroyRoomRequest,Niantic.Lightship.SharedAR.Rooms.RoomManagementServiceStatus&)
// 0x00000007 System.Threading.Tasks.Task`1<Niantic.Lightship.SharedAR.Rooms._IRoomManagementServiceImpl/_AsyncCreateRoomResponse> Niantic.Lightship.SharedAR.Rooms._IRoomManagementServiceImpl::CreateRoomAsync(Niantic.Lightship.SharedAR.Rooms.MarshMessages._CreateRoomRequest)
// 0x00000008 System.Threading.Tasks.Task`1<Niantic.Lightship.SharedAR.Rooms._IRoomManagementServiceImpl/_Async_GetRoomForExperienceResponse> Niantic.Lightship.SharedAR.Rooms._IRoomManagementServiceImpl::GetRoomsForExperienceAsync(Niantic.Lightship.SharedAR.Rooms.MarshMessages._GetRoomForExperienceRequest)
// 0x00000009 System.Void Niantic.Lightship.SharedAR.Rooms._IRoomManagementServiceImpl::ReleaseService()
// 0x0000000A Niantic.Lightship.SharedAR.Rooms.RoomParams Niantic.Lightship.SharedAR.Rooms.IRoom::get_RoomParams()
// 0x0000000B System.Void Niantic.Lightship.SharedAR.Rooms.IRoom::Initialize()
// 0x0000000C System.Void Niantic.Lightship.SharedAR.Rooms.IRoom::Join()
// 0x0000000D Niantic.Lightship.SharedAR.Networking.INetworking Niantic.Lightship.SharedAR.Rooms.IRoom::get_Networking()
// 0x0000000E Niantic.Lightship.SharedAR.Datastore.IDatastore Niantic.Lightship.SharedAR.Rooms.IRoom::get_Datastore()
// 0x0000000F System.Void Niantic.Lightship.SharedAR.Rooms.IRoom::Leave()
// 0x00000010 System.Void Niantic.Lightship.SharedAR.Rooms.Room::.ctor(Niantic.Lightship.SharedAR.Rooms.RoomParams)
extern void Room__ctor_m0B6C50003B31A180D09ECF480661F548907B4CD4 (void);
// 0x00000011 Niantic.Lightship.SharedAR.Rooms.RoomParams Niantic.Lightship.SharedAR.Rooms.Room::get_RoomParams()
extern void Room_get_RoomParams_m1B5456B312ABE490A7EAEE090D40C40BACBF6FC1 (void);
// 0x00000012 System.Void Niantic.Lightship.SharedAR.Rooms.Room::set_RoomParams(Niantic.Lightship.SharedAR.Rooms.RoomParams)
extern void Room_set_RoomParams_mF48D08D4EFA3664508F9CAA32943F0ED13629432 (void);
// 0x00000013 Niantic.Lightship.SharedAR.Networking.INetworking Niantic.Lightship.SharedAR.Rooms.Room::get_Networking()
extern void Room_get_Networking_m2911F39B88583A7CE9E4EDC11B0C3AAAC44D8E95 (void);
// 0x00000014 System.Void Niantic.Lightship.SharedAR.Rooms.Room::set_Networking(Niantic.Lightship.SharedAR.Networking.INetworking)
extern void Room_set_Networking_mF630A268667E5D941B66F05A4B64CA0848B77574 (void);
// 0x00000015 Niantic.Lightship.SharedAR.Datastore.IDatastore Niantic.Lightship.SharedAR.Rooms.Room::get_Datastore()
extern void Room_get_Datastore_mD099F6DA4B86386C33B4C7186CCC89CA2CCC18E2 (void);
// 0x00000016 System.Void Niantic.Lightship.SharedAR.Rooms.Room::set_Datastore(Niantic.Lightship.SharedAR.Datastore.IDatastore)
extern void Room_set_Datastore_mD20C8D9A53E45A780CD571237050186E3B935E01 (void);
// 0x00000017 System.Void Niantic.Lightship.SharedAR.Rooms.Room::Initialize()
extern void Room_Initialize_mB21FE6BA24B86F3268D18B31A4E969258A72859B (void);
// 0x00000018 System.Void Niantic.Lightship.SharedAR.Rooms.Room::Join()
extern void Room_Join_m83B5AA6916C61A99E4DE32187DDDB3F783CE58F8 (void);
// 0x00000019 System.Void Niantic.Lightship.SharedAR.Rooms.Room::Leave()
extern void Room_Leave_m463E8CFD0D52C5D96CB51FCC60911ECF74C5B510 (void);
// 0x0000001A System.Void Niantic.Lightship.SharedAR.Rooms.Room::Dispose()
extern void Room_Dispose_m78F48EA6438A63E0F5AB5DC1E74073A246E5F9D4 (void);
// 0x0000001B System.Void Niantic.Lightship.SharedAR.Rooms.RoomID::.ctor(System.String)
extern void RoomID__ctor_m8282BA176805723E1F88CB33C672B035A9EE0B85 (void);
// 0x0000001C System.String Niantic.Lightship.SharedAR.Rooms.RoomID::op_Implicit(Niantic.Lightship.SharedAR.Rooms.RoomID)
extern void RoomID_op_Implicit_mF8E8242811052A8CF356330BE2D60403B078EC9E (void);
// 0x0000001D Niantic.Lightship.SharedAR.Rooms.RoomID Niantic.Lightship.SharedAR.Rooms.RoomID::op_Implicit(System.String)
extern void RoomID_op_Implicit_m4F1815211AC26BA6C8B7A47E354111404009020F (void);
// 0x0000001E System.String Niantic.Lightship.SharedAR.Rooms.RoomID::ToString()
extern void RoomID_ToString_mCBD228853412D0651450118CBE6B8DD4A6FB6CA7 (void);
// 0x0000001F System.Int32 Niantic.Lightship.SharedAR.Rooms.RoomID::GetHashCode()
extern void RoomID_GetHashCode_mD457DE3AF1BDB505DD8E005B87F4A445300E9DFC (void);
// 0x00000020 System.Boolean Niantic.Lightship.SharedAR.Rooms.RoomID::Equals(Niantic.Lightship.SharedAR.Rooms.RoomID)
extern void RoomID_Equals_m9B5D5222269EF2E088D3E1F9EC2E4193080E3875 (void);
// 0x00000021 System.Boolean Niantic.Lightship.SharedAR.Rooms.RoomID::Equals(System.Object)
extern void RoomID_Equals_mBF547702D20FC0740454E96F3F1BE8AECBCA1C76 (void);
// 0x00000022 System.Void Niantic.Lightship.SharedAR.Rooms.RoomID::.cctor()
extern void RoomID__cctor_m6746CC01DD90912B2B8886B4A22F6237C0173D78 (void);
// 0x00000023 System.String Niantic.Lightship.SharedAR.Rooms.RoomManagementService::get_DefaultExperienceId()
extern void RoomManagementService_get_DefaultExperienceId_m619745546CF1BB25B83EA95D794806CA1F804AD6 (void);
// 0x00000024 System.Void Niantic.Lightship.SharedAR.Rooms.RoomManagementService::set_DefaultExperienceId(System.String)
extern void RoomManagementService_set_DefaultExperienceId_mD79A88DC35369A267811476F8756CCFEB11B71A8 (void);
// 0x00000025 System.Void Niantic.Lightship.SharedAR.Rooms.RoomManagementService::.cctor()
extern void RoomManagementService__cctor_mF037EEBACA5BFDCCAA0916B6C0AEAD7E46247E67 (void);
// 0x00000026 System.Void Niantic.Lightship.SharedAR.Rooms.RoomManagementService::_InitializeServiceForIntegrationTesting(System.String,System.String)
extern void RoomManagementService__InitializeServiceForIntegrationTesting_mC6D7F2058A791203D02ABF6425E7ACC67DED2479 (void);
// 0x00000027 System.Void Niantic.Lightship.SharedAR.Rooms.RoomManagementService::_InitializeServiceForTesting()
extern void RoomManagementService__InitializeServiceForTesting_mA1DB0FAB27706B345956EF2B8D9317011B1E5D32 (void);
// 0x00000028 Niantic.Lightship.SharedAR.Rooms.RoomManagementServiceStatus Niantic.Lightship.SharedAR.Rooms.RoomManagementService::CreateRoom(Niantic.Lightship.SharedAR.Rooms.RoomParams,Niantic.Lightship.SharedAR.Rooms.IRoom&)
extern void RoomManagementService_CreateRoom_m7A667190749C8774999A7E5AA73ECC54FFA6C9C5 (void);
// 0x00000029 Niantic.Lightship.SharedAR.Rooms.RoomManagementServiceStatus Niantic.Lightship.SharedAR.Rooms.RoomManagementService::GetRoomsForExperience(System.String,System.Collections.Generic.List`1<Niantic.Lightship.SharedAR.Rooms.IRoom>&)
extern void RoomManagementService_GetRoomsForExperience_m1A03719032D0B7DD494505814F44941967ED7652 (void);
// 0x0000002A Niantic.Lightship.SharedAR.Rooms.RoomManagementServiceStatus Niantic.Lightship.SharedAR.Rooms.RoomManagementService::DeleteRoom(System.String)
extern void RoomManagementService_DeleteRoom_m80A213B7F301EFD81EAC1C8CA660D0440850B299 (void);
// 0x0000002B Niantic.Lightship.SharedAR.Rooms.RoomManagementServiceStatus Niantic.Lightship.SharedAR.Rooms.RoomManagementService::GetRoom(System.String,Niantic.Lightship.SharedAR.Rooms.IRoom&)
extern void RoomManagementService_GetRoom_mBE99D86A61DC940B119911BFFCD7C074F5798F1F (void);
// 0x0000002C Niantic.Lightship.SharedAR.Rooms.RoomManagementServiceStatus Niantic.Lightship.SharedAR.Rooms.RoomManagementService::QueryRoomsByName(System.String,System.Collections.Generic.List`1<Niantic.Lightship.SharedAR.Rooms.IRoom>&)
extern void RoomManagementService_QueryRoomsByName_m47B5865ED378D533AE92E5B54876F42A766356AC (void);
// 0x0000002D Niantic.Lightship.SharedAR.Rooms.RoomManagementServiceStatus Niantic.Lightship.SharedAR.Rooms.RoomManagementService::GetAllRooms(System.Collections.Generic.List`1<Niantic.Lightship.SharedAR.Rooms.IRoom>&)
extern void RoomManagementService_GetAllRooms_mD849DFC1E8D1335E50F39E75BAD573CE1133BD5F (void);
// 0x0000002E Niantic.Lightship.SharedAR.Rooms.RoomManagementServiceStatus Niantic.Lightship.SharedAR.Rooms.RoomManagementService::GetOrCreateRoomForName(Niantic.Lightship.SharedAR.Rooms.RoomParams,Niantic.Lightship.SharedAR.Rooms.IRoom&)
extern void RoomManagementService_GetOrCreateRoomForName_m769CD8EB0ADD017AB825F9F997030769103BA022 (void);
// 0x0000002F System.Void Niantic.Lightship.SharedAR.Rooms.RoomManagementService::StaticGetOrCreateRoomCallback(System.UInt32,System.UInt32,System.String)
extern void RoomManagementService_StaticGetOrCreateRoomCallback_m2A100A37156064354EA9E7F320F8F31C3DDBEA6F (void);
// 0x00000030 System.Void Niantic.Lightship.SharedAR.Rooms.RoomManagementService::GetOrCreateRoomAsync(System.String,System.String,System.UInt32,Niantic.Lightship.SharedAR.Rooms.RoomManagementService/GetOrCreateRoomCallback)
extern void RoomManagementService_GetOrCreateRoomAsync_m534E2E4D9412DCC42EE41260662A8E152B1E919F (void);
// 0x00000031 System.Threading.Tasks.Task`1<Niantic.Lightship.SharedAR.Rooms.RoomManagementService/GetOrCreateRoomAsyncTaskResult> Niantic.Lightship.SharedAR.Rooms.RoomManagementService::GetOrCreateRoomAsync(System.String,System.String,System.UInt32)
extern void RoomManagementService_GetOrCreateRoomAsync_m63054FECFE10C1FE0D509C4D2773B91F9E007328 (void);
// 0x00000032 System.Void Niantic.Lightship.SharedAR.Rooms.RoomManagementService::_GetOrCreateRoom(System.IntPtr,System.String,System.String,System.UInt32,System.UInt32,Niantic.Lightship.SharedAR.Rooms.RoomManagementService/InternalGetOrCreateRoomCallback)
extern void RoomManagementService__GetOrCreateRoom_m527457898D8A0F426B8CD0CBB531F98DC5935E30 (void);
// 0x00000033 System.Void Niantic.Lightship.SharedAR.Rooms.RoomManagementService/GetOrCreateRoomCallback::.ctor(System.Object,System.IntPtr)
extern void GetOrCreateRoomCallback__ctor_m984AE8779CEE0446C69F9B38EEE740DD499FD8E7 (void);
// 0x00000034 System.Void Niantic.Lightship.SharedAR.Rooms.RoomManagementService/GetOrCreateRoomCallback::Invoke(Niantic.Lightship.SharedAR.Rooms.RoomManagementServiceStatus,System.String)
extern void GetOrCreateRoomCallback_Invoke_m57B7EBC33FA8C9029DB25236AD0FE438016E3E7F (void);
// 0x00000035 System.IAsyncResult Niantic.Lightship.SharedAR.Rooms.RoomManagementService/GetOrCreateRoomCallback::BeginInvoke(Niantic.Lightship.SharedAR.Rooms.RoomManagementServiceStatus,System.String,System.AsyncCallback,System.Object)
extern void GetOrCreateRoomCallback_BeginInvoke_m02D45864977FD6C6686528DF9E7063C152D4FC03 (void);
// 0x00000036 System.Void Niantic.Lightship.SharedAR.Rooms.RoomManagementService/GetOrCreateRoomCallback::EndInvoke(System.IAsyncResult)
extern void GetOrCreateRoomCallback_EndInvoke_m03E5BDCE04F4984D008B49AB7BF82BCBE2C2E2FF (void);
// 0x00000037 System.String Niantic.Lightship.SharedAR.Rooms.RoomManagementService/GetOrCreateRoomAsyncTaskResult::get_RoomId()
extern void GetOrCreateRoomAsyncTaskResult_get_RoomId_m1FAE164BCE27FFC4206F19F95EBBF05BC9B0A5D0 (void);
// 0x00000038 System.Void Niantic.Lightship.SharedAR.Rooms.RoomManagementService/GetOrCreateRoomAsyncTaskResult::.ctor(Niantic.Lightship.SharedAR.Rooms.RoomManagementServiceStatus,Niantic.Lightship.SharedAR.Rooms.IRoom)
extern void GetOrCreateRoomAsyncTaskResult__ctor_m840058D29140F5E4A54266FA3288440314A75718 (void);
// 0x00000039 System.Void Niantic.Lightship.SharedAR.Rooms.RoomManagementService/InternalGetOrCreateRoomCallback::.ctor(System.Object,System.IntPtr)
extern void InternalGetOrCreateRoomCallback__ctor_m906A5CEBB2654142C18DDAFBC232D1F958A69DAF (void);
// 0x0000003A System.Void Niantic.Lightship.SharedAR.Rooms.RoomManagementService/InternalGetOrCreateRoomCallback::Invoke(System.UInt32,System.UInt32,System.String)
extern void InternalGetOrCreateRoomCallback_Invoke_mD8F3E504D55054685EF037B6AD5FCE5957D411B1 (void);
// 0x0000003B System.IAsyncResult Niantic.Lightship.SharedAR.Rooms.RoomManagementService/InternalGetOrCreateRoomCallback::BeginInvoke(System.UInt32,System.UInt32,System.String,System.AsyncCallback,System.Object)
extern void InternalGetOrCreateRoomCallback_BeginInvoke_mB1C54111747F36FC0FF9682BF2E2094C0EAA1381 (void);
// 0x0000003C System.Void Niantic.Lightship.SharedAR.Rooms.RoomManagementService/InternalGetOrCreateRoomCallback::EndInvoke(System.IAsyncResult)
extern void InternalGetOrCreateRoomCallback_EndInvoke_m14DF2744E2CD2A594D58AC6D1797E4339933C278 (void);
// 0x0000003D System.Void Niantic.Lightship.SharedAR.Rooms.RoomManagementService/<GetOrCreateRoomAsync>d__22::MoveNext()
extern void U3CGetOrCreateRoomAsyncU3Ed__22_MoveNext_m063F0F3F9E0CF9D6555253B6FAC81B902F4484D4 (void);
// 0x0000003E System.Void Niantic.Lightship.SharedAR.Rooms.RoomManagementService/<GetOrCreateRoomAsync>d__22::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CGetOrCreateRoomAsyncU3Ed__22_SetStateMachine_m3FF3234345478195B2E93752D193EB9D9252BA0A (void);
// 0x0000003F System.String Niantic.Lightship.SharedAR.Rooms.RoomParams::get_RoomID()
extern void RoomParams_get_RoomID_m99535DFF66305820B52BEBC17482F04757AF5F55 (void);
// 0x00000040 System.Void Niantic.Lightship.SharedAR.Rooms.RoomParams::set_RoomID(System.String)
extern void RoomParams_set_RoomID_m3E445600CFA6F875A048D3527376CBFA77D7FE11 (void);
// 0x00000041 Niantic.Lightship.SharedAR.Rooms.RoomVisibility Niantic.Lightship.SharedAR.Rooms.RoomParams::get_Visibility()
extern void RoomParams_get_Visibility_m3586D17761F982BA9A36A21FD44EBD96FC9EF6B3 (void);
// 0x00000042 System.Void Niantic.Lightship.SharedAR.Rooms.RoomParams::set_Visibility(Niantic.Lightship.SharedAR.Rooms.RoomVisibility)
extern void RoomParams_set_Visibility_m06F6EC05CABC6939F59CD71B622E4F50EDAF6EB7 (void);
// 0x00000043 System.Int32 Niantic.Lightship.SharedAR.Rooms.RoomParams::get_Capacity()
extern void RoomParams_get_Capacity_mFCE18DA57BDEE644DD741D30E7410127DE68CF84 (void);
// 0x00000044 System.Void Niantic.Lightship.SharedAR.Rooms.RoomParams::set_Capacity(System.Int32)
extern void RoomParams_set_Capacity_m79DB879724AE609678B6FAFDC99F3384C7176B85 (void);
// 0x00000045 System.String Niantic.Lightship.SharedAR.Rooms.RoomParams::get_Name()
extern void RoomParams_get_Name_m94B870ABD1CBF93A26093793F21E783059F8EFBE (void);
// 0x00000046 System.Void Niantic.Lightship.SharedAR.Rooms.RoomParams::set_Name(System.String)
extern void RoomParams_set_Name_m3BFEC9FABA63F8D1454BB94E82B5D781684BB746 (void);
// 0x00000047 System.String Niantic.Lightship.SharedAR.Rooms.RoomParams::get_ExperienceId()
extern void RoomParams_get_ExperienceId_m94C28BE43DA043DB9286B0A8134B3A20949FA13D (void);
// 0x00000048 System.Void Niantic.Lightship.SharedAR.Rooms.RoomParams::set_ExperienceId(System.String)
extern void RoomParams_set_ExperienceId_m0C6327CDBA10F3558E95A69E7252DB004AA43C37 (void);
// 0x00000049 System.String Niantic.Lightship.SharedAR.Rooms.RoomParams::get_Description()
extern void RoomParams_get_Description_m835C256631025EA2801207491DE7342F1D2A1404 (void);
// 0x0000004A System.Void Niantic.Lightship.SharedAR.Rooms.RoomParams::set_Description(System.String)
extern void RoomParams_set_Description_m7B4A2F299E10B0F5564B2B1CA67E065045135013 (void);
// 0x0000004B System.String Niantic.Lightship.SharedAR.Rooms.RoomParams::get_Passcode()
extern void RoomParams_get_Passcode_mB582DEA0B58860DEFA8E74AD3B696A7FE538C8B8 (void);
// 0x0000004C System.Void Niantic.Lightship.SharedAR.Rooms.RoomParams::set_Passcode(System.String)
extern void RoomParams_set_Passcode_mD58EE28A0B86D33D01B41E1C28667CEE02B88893 (void);
// 0x0000004D System.String Niantic.Lightship.SharedAR.Rooms.RoomParams::get_Endpoint()
extern void RoomParams_get_Endpoint_mB83B4513D0B6A7243D3417D23119CF1D93930B73 (void);
// 0x0000004E System.Void Niantic.Lightship.SharedAR.Rooms.RoomParams::set_Endpoint(System.String)
extern void RoomParams_set_Endpoint_m09BC3BE2332856792495554FFDFC3BB105D192E1 (void);
// 0x0000004F System.Void Niantic.Lightship.SharedAR.Rooms.RoomParams::.ctor(System.Int32,System.String,System.String,System.String,Niantic.Lightship.SharedAR.Rooms.RoomVisibility)
extern void RoomParams__ctor_m48B595306679851DE9F5F5B597AC1936DE759FFB (void);
// 0x00000050 System.Void Niantic.Lightship.SharedAR.Rooms.RoomParams::.ctor(System.String,Niantic.Lightship.SharedAR.Rooms.RoomVisibility)
extern void RoomParams__ctor_m5DDB8F17C6110BC1B612D19CDC289E274019D381 (void);
// 0x00000051 System.Void Niantic.Lightship.SharedAR.Rooms.RoomParams::.ctor(System.String,System.Int32,System.String,System.String,System.String,System.String,Niantic.Lightship.SharedAR.Rooms.RoomVisibility,System.String)
extern void RoomParams__ctor_mC0520AAF0D81F1C1C746EE5340B8DF187E9D475C (void);
// 0x00000052 Niantic.Lightship.SharedAR.Rooms.RoomParams Niantic.Lightship.SharedAR.Rooms.MarshMessages._RoomInternal::op_Implicit(Niantic.Lightship.SharedAR.Rooms.MarshMessages._RoomInternal)
extern void _RoomInternal_op_Implicit_mAA8089DB6E76192E8F5478D2A4A58F5FAC7E439A (void);
// 0x00000053 System.Void Niantic.Lightship.SharedAR.Rooms.Implementation._FakeRoomManagementServiceImpl::InitializeService(System.String,System.String,System.String)
extern void _FakeRoomManagementServiceImpl_InitializeService_mAF190602476FA64F18EC545C48749609BDB2C12B (void);
// 0x00000054 Niantic.Lightship.SharedAR.Rooms.MarshMessages._CreateRoomResponse Niantic.Lightship.SharedAR.Rooms.Implementation._FakeRoomManagementServiceImpl::CreateRoom(Niantic.Lightship.SharedAR.Rooms.MarshMessages._CreateRoomRequest,Niantic.Lightship.SharedAR.Rooms.RoomManagementServiceStatus&)
extern void _FakeRoomManagementServiceImpl_CreateRoom_m54EED3151AB16F71B2F18DCE5951FA0FD798D1E0 (void);
// 0x00000055 Niantic.Lightship.SharedAR.Rooms.MarshMessages._GetRoomResponse Niantic.Lightship.SharedAR.Rooms.Implementation._FakeRoomManagementServiceImpl::GetRoom(Niantic.Lightship.SharedAR.Rooms.MarshMessages._GetRoomRequest,Niantic.Lightship.SharedAR.Rooms.RoomManagementServiceStatus&)
extern void _FakeRoomManagementServiceImpl_GetRoom_m2DC939EB7054F1E7321DA48039826B0C7DFD995C (void);
// 0x00000056 Niantic.Lightship.SharedAR.Rooms.MarshMessages._GetRoomForExperienceResponse Niantic.Lightship.SharedAR.Rooms.Implementation._FakeRoomManagementServiceImpl::GetRoomsForExperience(Niantic.Lightship.SharedAR.Rooms.MarshMessages._GetRoomForExperienceRequest,Niantic.Lightship.SharedAR.Rooms.RoomManagementServiceStatus&)
extern void _FakeRoomManagementServiceImpl_GetRoomsForExperience_m384D85CE0BD44D1B6167C9D21FDE7E97F6ED3578 (void);
// 0x00000057 System.Void Niantic.Lightship.SharedAR.Rooms.Implementation._FakeRoomManagementServiceImpl::DestroyRoom(Niantic.Lightship.SharedAR.Rooms.MarshMessages._DestroyRoomRequest,Niantic.Lightship.SharedAR.Rooms.RoomManagementServiceStatus&)
extern void _FakeRoomManagementServiceImpl_DestroyRoom_m8065FAD41CC6587A4B486F4B7E2D495409AEA96F (void);
// 0x00000058 System.Void Niantic.Lightship.SharedAR.Rooms.Implementation._FakeRoomManagementServiceImpl::ReleaseService()
extern void _FakeRoomManagementServiceImpl_ReleaseService_m342529E4C415A7DC9E97499C1F961E6B41027E45 (void);
// 0x00000059 System.Threading.Tasks.Task`1<Niantic.Lightship.SharedAR.Rooms._IRoomManagementServiceImpl/_AsyncCreateRoomResponse> Niantic.Lightship.SharedAR.Rooms.Implementation._FakeRoomManagementServiceImpl::CreateRoomAsync(Niantic.Lightship.SharedAR.Rooms.MarshMessages._CreateRoomRequest)
extern void _FakeRoomManagementServiceImpl_CreateRoomAsync_m24CE2682EB466F4EFA5458C4A260146F3A89B6C6 (void);
// 0x0000005A System.Threading.Tasks.Task`1<Niantic.Lightship.SharedAR.Rooms._IRoomManagementServiceImpl/_Async_GetRoomForExperienceResponse> Niantic.Lightship.SharedAR.Rooms.Implementation._FakeRoomManagementServiceImpl::GetRoomsForExperienceAsync(Niantic.Lightship.SharedAR.Rooms.MarshMessages._GetRoomForExperienceRequest)
extern void _FakeRoomManagementServiceImpl_GetRoomsForExperienceAsync_m3B4CBC1EB7311DC75E2AEEB5DCCBF47BBC689FE1 (void);
// 0x0000005B System.Void Niantic.Lightship.SharedAR.Rooms.Implementation._FakeRoomManagementServiceImpl::.ctor()
extern void _FakeRoomManagementServiceImpl__ctor_m1B7AD5D059F9A9162ADA235021C1AB2130B84118 (void);
// 0x0000005C System.Void Niantic.Lightship.SharedAR.Rooms.Implementation._FakeRoomManagementServiceImpl::.cctor()
extern void _FakeRoomManagementServiceImpl__cctor_mB2006E19B9FE66E3264432409A0A1B75009624BA (void);
// 0x0000005D System.Void Niantic.Lightship.SharedAR.Rooms.Implementation._HttpRoomManagementServiceImpl::InitializeService(System.String,System.String,System.String)
extern void _HttpRoomManagementServiceImpl_InitializeService_mE04D61AAFF78E1336EA1B50BB1093FD043AF7464 (void);
// 0x0000005E Niantic.Lightship.SharedAR.Rooms.MarshMessages._CreateRoomResponse Niantic.Lightship.SharedAR.Rooms.Implementation._HttpRoomManagementServiceImpl::CreateRoom(Niantic.Lightship.SharedAR.Rooms.MarshMessages._CreateRoomRequest,Niantic.Lightship.SharedAR.Rooms.RoomManagementServiceStatus&)
extern void _HttpRoomManagementServiceImpl_CreateRoom_mCE3BF9CC0141AC6B0F780F378E998AF1A46A9D34 (void);
// 0x0000005F Niantic.Lightship.SharedAR.Rooms.MarshMessages._GetRoomResponse Niantic.Lightship.SharedAR.Rooms.Implementation._HttpRoomManagementServiceImpl::GetRoom(Niantic.Lightship.SharedAR.Rooms.MarshMessages._GetRoomRequest,Niantic.Lightship.SharedAR.Rooms.RoomManagementServiceStatus&)
extern void _HttpRoomManagementServiceImpl_GetRoom_m3ABD17444B14A3AF49093050C80611F014C54755 (void);
// 0x00000060 Niantic.Lightship.SharedAR.Rooms.MarshMessages._GetRoomForExperienceResponse Niantic.Lightship.SharedAR.Rooms.Implementation._HttpRoomManagementServiceImpl::GetRoomsForExperience(Niantic.Lightship.SharedAR.Rooms.MarshMessages._GetRoomForExperienceRequest,Niantic.Lightship.SharedAR.Rooms.RoomManagementServiceStatus&)
extern void _HttpRoomManagementServiceImpl_GetRoomsForExperience_mC16380246AE4E0232AED098FA271F55E3F2A6BA8 (void);
// 0x00000061 System.Void Niantic.Lightship.SharedAR.Rooms.Implementation._HttpRoomManagementServiceImpl::DestroyRoom(Niantic.Lightship.SharedAR.Rooms.MarshMessages._DestroyRoomRequest,Niantic.Lightship.SharedAR.Rooms.RoomManagementServiceStatus&)
extern void _HttpRoomManagementServiceImpl_DestroyRoom_mDE78EEE85F165670802AE16100187716770B7BE8 (void);
// 0x00000062 System.Void Niantic.Lightship.SharedAR.Rooms.Implementation._HttpRoomManagementServiceImpl::ReleaseService()
extern void _HttpRoomManagementServiceImpl_ReleaseService_mEBBC3FD49DAA38826200EB98AC8CE198E1D7CB0F (void);
// 0x00000063 System.Threading.Tasks.Task`1<Niantic.Lightship.SharedAR.Rooms._IRoomManagementServiceImpl/_AsyncCreateRoomResponse> Niantic.Lightship.SharedAR.Rooms.Implementation._HttpRoomManagementServiceImpl::CreateRoomAsync(Niantic.Lightship.SharedAR.Rooms.MarshMessages._CreateRoomRequest)
extern void _HttpRoomManagementServiceImpl_CreateRoomAsync_mCD0E5490A5E3A4B50B44B00FD113CB60D662D29B (void);
// 0x00000064 System.Threading.Tasks.Task`1<Niantic.Lightship.SharedAR.Rooms._IRoomManagementServiceImpl/_Async_GetRoomForExperienceResponse> Niantic.Lightship.SharedAR.Rooms.Implementation._HttpRoomManagementServiceImpl::GetRoomsForExperienceAsync(Niantic.Lightship.SharedAR.Rooms.MarshMessages._GetRoomForExperienceRequest)
extern void _HttpRoomManagementServiceImpl_GetRoomsForExperienceAsync_m8324D419F05C4DBE0E5B0899FC57DA8F22095ACA (void);
// 0x00000065 System.String Niantic.Lightship.SharedAR.Rooms.Implementation._HttpRoomManagementServiceImpl::SendBlockingWebRequest(System.String,System.String,System.Int32&)
extern void _HttpRoomManagementServiceImpl_SendBlockingWebRequest_m2DF420438A3DD44A2A3C2351939770C1CC06CBC6 (void);
// 0x00000066 System.Threading.Tasks.Task`1<Niantic.Lightship.SharedAR.Rooms.Implementation._HttpRoomManagementServiceImpl/AsyncRequestResponse> Niantic.Lightship.SharedAR.Rooms.Implementation._HttpRoomManagementServiceImpl::SendWebRequestAsync(System.String,System.String)
extern void _HttpRoomManagementServiceImpl_SendWebRequestAsync_m78EDB0CAD704CD9B72709ACD99B12B062F8E91C2 (void);
// 0x00000067 System.Void Niantic.Lightship.SharedAR.Rooms.Implementation._HttpRoomManagementServiceImpl::.ctor()
extern void _HttpRoomManagementServiceImpl__ctor_mDCB3948AD5FF4024DC37533B83EC5E097F4D2A21 (void);
// 0x00000068 System.Void Niantic.Lightship.SharedAR.Rooms.Implementation._HttpRoomManagementServiceImpl::.cctor()
extern void _HttpRoomManagementServiceImpl__cctor_m41AFAFB95684216D1D5A4C7F92D7166CA0FD2633 (void);
// 0x00000069 System.Void Niantic.Lightship.SharedAR.Rooms.Implementation._HttpRoomManagementServiceImpl/<CreateRoomAsync>d__16::MoveNext()
extern void U3CCreateRoomAsyncU3Ed__16_MoveNext_m5E823496CF5D88202FFD0244454FA84D4289BB90 (void);
// 0x0000006A System.Void Niantic.Lightship.SharedAR.Rooms.Implementation._HttpRoomManagementServiceImpl/<CreateRoomAsync>d__16::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CCreateRoomAsyncU3Ed__16_SetStateMachine_m74EDA2945523E3255E08AF07D94D8475504E849E (void);
// 0x0000006B System.Void Niantic.Lightship.SharedAR.Rooms.Implementation._HttpRoomManagementServiceImpl/<GetRoomsForExperienceAsync>d__17::MoveNext()
extern void U3CGetRoomsForExperienceAsyncU3Ed__17_MoveNext_m59B273C332618C00A9D9AA1B6B5FF1FB9F54B80A (void);
// 0x0000006C System.Void Niantic.Lightship.SharedAR.Rooms.Implementation._HttpRoomManagementServiceImpl/<GetRoomsForExperienceAsync>d__17::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CGetRoomsForExperienceAsyncU3Ed__17_SetStateMachine_mF4E9D76AC29CF93E2DC7CF0798C377A6FBF23E63 (void);
// 0x0000006D System.Void Niantic.Lightship.SharedAR.Rooms.Implementation._HttpRoomManagementServiceImpl/<SendWebRequestAsync>d__20::MoveNext()
extern void U3CSendWebRequestAsyncU3Ed__20_MoveNext_mF1BC634A785387A07528267967515E4137E966F3 (void);
// 0x0000006E System.Void Niantic.Lightship.SharedAR.Rooms.Implementation._HttpRoomManagementServiceImpl/<SendWebRequestAsync>d__20::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CSendWebRequestAsyncU3Ed__20_SetStateMachine_m3F57B043E63DA8FE8FBC7942C07F8605CAA848EA (void);
// 0x0000006F Niantic.Lightship.SharedAR.Networking.NetworkEvents Niantic.Lightship.SharedAR.Networking.NetworkEventArgs::get_networkEvent()
extern void NetworkEventArgs_get_networkEvent_mA1BE9B63147714FC77569A8E938859832ECED70B (void);
// 0x00000070 System.Void Niantic.Lightship.SharedAR.Networking.NetworkEventArgs::set_networkEvent(Niantic.Lightship.SharedAR.Networking.NetworkEvents)
extern void NetworkEventArgs_set_networkEvent_m34062446A4455AAC438F735E07A18CBAD5F8F0B3 (void);
// 0x00000071 System.UInt32 Niantic.Lightship.SharedAR.Networking.NetworkEventArgs::get_errorCode()
extern void NetworkEventArgs_get_errorCode_mA7937D1CFF090A4478030893254CB5342DEB051A (void);
// 0x00000072 System.Void Niantic.Lightship.SharedAR.Networking.NetworkEventArgs::set_errorCode(System.UInt32)
extern void NetworkEventArgs_set_errorCode_mF5A56EB733C263E0A55C75233A5953F2B08CE02B (void);
// 0x00000073 System.Void Niantic.Lightship.SharedAR.Networking.NetworkEventArgs::.ctor(Niantic.Lightship.SharedAR.Networking.NetworkEvents,System.UInt32)
extern void NetworkEventArgs__ctor_m3FF0E5BF0FB5F6CC19F30C8AE7A881A23418562D (void);
// 0x00000074 Niantic.Lightship.SharedAR.Networking.PeerID Niantic.Lightship.SharedAR.Networking.PeerIDArgs::get_PeerID()
extern void PeerIDArgs_get_PeerID_mA8FE27DF03CB61BCD338069860B3239B5581A148 (void);
// 0x00000075 System.Void Niantic.Lightship.SharedAR.Networking.PeerIDArgs::set_PeerID(Niantic.Lightship.SharedAR.Networking.PeerID)
extern void PeerIDArgs_set_PeerID_m54E45AC72F75706CD617EC02559CF1BDB3957A41 (void);
// 0x00000076 System.Void Niantic.Lightship.SharedAR.Networking.PeerIDArgs::.ctor(Niantic.Lightship.SharedAR.Networking.PeerID)
extern void PeerIDArgs__ctor_m8514FE4CFAC7E401D9CE4C98994E9A46574A00A2 (void);
// 0x00000077 Niantic.Lightship.SharedAR.Networking.PeerID Niantic.Lightship.SharedAR.Networking.DataReceivedArgs::get_PeerID()
extern void DataReceivedArgs_get_PeerID_mC05DBFCC023F68EB35319D025A9CA4ADFDDD354B (void);
// 0x00000078 System.Void Niantic.Lightship.SharedAR.Networking.DataReceivedArgs::set_PeerID(Niantic.Lightship.SharedAR.Networking.PeerID)
extern void DataReceivedArgs_set_PeerID_mC2524B7ECE4725E934F3745B4D34D9C3A12DD713 (void);
// 0x00000079 System.UInt32 Niantic.Lightship.SharedAR.Networking.DataReceivedArgs::get_Tag()
extern void DataReceivedArgs_get_Tag_m13DE57EB0B6DC96A10F64A7B5184C5CC74CB5442 (void);
// 0x0000007A System.Void Niantic.Lightship.SharedAR.Networking.DataReceivedArgs::set_Tag(System.UInt32)
extern void DataReceivedArgs_set_Tag_m9A2203F720D56ABCD008AA611C54A0E76670ADFD (void);
// 0x0000007B System.Int32 Niantic.Lightship.SharedAR.Networking.DataReceivedArgs::get_DataLength()
extern void DataReceivedArgs_get_DataLength_mE31583C6A2F1292F3A6C2592F6E05E816A524DD8 (void);
// 0x0000007C System.Void Niantic.Lightship.SharedAR.Networking.DataReceivedArgs::.ctor(Niantic.Lightship.SharedAR.Networking.PeerID,System.UInt32,System.Byte[])
extern void DataReceivedArgs__ctor_mF99243FAAA78F1FE534B5E47781D4D457BE40F41 (void);
// 0x0000007D System.IO.MemoryStream Niantic.Lightship.SharedAR.Networking.DataReceivedArgs::CreateDataReader()
extern void DataReceivedArgs_CreateDataReader_m442AFFC841C59DC7461E29FC36FD7DDE1602D8F3 (void);
// 0x0000007E System.Byte[] Niantic.Lightship.SharedAR.Networking.DataReceivedArgs::CopyData()
extern void DataReceivedArgs_CopyData_m154A000CD998EC3F5A4EBB09681815538796B9FE (void);
// 0x0000007F System.Void Niantic.Lightship.SharedAR.Networking.INetworking::SendData(System.Collections.Generic.List`1<Niantic.Lightship.SharedAR.Networking.PeerID>,System.UInt32,System.Byte[])
// 0x00000080 Niantic.Lightship.SharedAR.Networking.NetworkState Niantic.Lightship.SharedAR.Networking.INetworking::get_NetworkState()
// 0x00000081 Niantic.Lightship.SharedAR.Networking.PeerID Niantic.Lightship.SharedAR.Networking.INetworking::get_SelfPeerID()
// 0x00000082 System.Collections.Generic.List`1<Niantic.Lightship.SharedAR.Networking.PeerID> Niantic.Lightship.SharedAR.Networking.INetworking::get_PeerIDs()
// 0x00000083 System.Void Niantic.Lightship.SharedAR.Networking.INetworking::Join()
// 0x00000084 System.Void Niantic.Lightship.SharedAR.Networking.INetworking::Leave()
// 0x00000085 System.Void Niantic.Lightship.SharedAR.Networking.INetworking::add_NetworkEvent(System.Action`1<Niantic.Lightship.SharedAR.Networking.NetworkEventArgs>)
// 0x00000086 System.Void Niantic.Lightship.SharedAR.Networking.INetworking::remove_NetworkEvent(System.Action`1<Niantic.Lightship.SharedAR.Networking.NetworkEventArgs>)
// 0x00000087 System.Void Niantic.Lightship.SharedAR.Networking.INetworking::add_PeerAdded(System.Action`1<Niantic.Lightship.SharedAR.Networking.PeerIDArgs>)
// 0x00000088 System.Void Niantic.Lightship.SharedAR.Networking.INetworking::remove_PeerAdded(System.Action`1<Niantic.Lightship.SharedAR.Networking.PeerIDArgs>)
// 0x00000089 System.Void Niantic.Lightship.SharedAR.Networking.INetworking::add_PeerRemoved(System.Action`1<Niantic.Lightship.SharedAR.Networking.PeerIDArgs>)
// 0x0000008A System.Void Niantic.Lightship.SharedAR.Networking.INetworking::remove_PeerRemoved(System.Action`1<Niantic.Lightship.SharedAR.Networking.PeerIDArgs>)
// 0x0000008B System.Void Niantic.Lightship.SharedAR.Networking.INetworking::add_DataReceived(System.Action`1<Niantic.Lightship.SharedAR.Networking.DataReceivedArgs>)
// 0x0000008C System.Void Niantic.Lightship.SharedAR.Networking.INetworking::remove_DataReceived(System.Action`1<Niantic.Lightship.SharedAR.Networking.DataReceivedArgs>)
// 0x0000008D System.IntPtr Niantic.Lightship.SharedAR.Networking.LightshipNetworking::get__managedHandle()
extern void LightshipNetworking_get__managedHandle_m55B832EEC2CDF5822E63A0D807D89FB03F49356C (void);
// 0x0000008E System.String Niantic.Lightship.SharedAR.Networking.LightshipNetworking::get_SessionId()
extern void LightshipNetworking_get_SessionId_m08B2C8B3664E74AEA1EF198B061F11BA508411CA (void);
// 0x0000008F System.Void Niantic.Lightship.SharedAR.Networking.LightshipNetworking::set_SessionId(System.String)
extern void LightshipNetworking_set_SessionId_mFDAAFC8E916CD2C5AB51464410C7F4CC7DF7F758 (void);
// 0x00000090 System.Void Niantic.Lightship.SharedAR.Networking.LightshipNetworking::add_NetworkEvent(System.Action`1<Niantic.Lightship.SharedAR.Networking.NetworkEventArgs>)
extern void LightshipNetworking_add_NetworkEvent_m7583B4CA35F06E8626EE6437E80B78D334C8A9B4 (void);
// 0x00000091 System.Void Niantic.Lightship.SharedAR.Networking.LightshipNetworking::remove_NetworkEvent(System.Action`1<Niantic.Lightship.SharedAR.Networking.NetworkEventArgs>)
extern void LightshipNetworking_remove_NetworkEvent_mF24D6965D13C24D230258BC05550590D29A863E6 (void);
// 0x00000092 System.Void Niantic.Lightship.SharedAR.Networking.LightshipNetworking::add_PeerAdded(System.Action`1<Niantic.Lightship.SharedAR.Networking.PeerIDArgs>)
extern void LightshipNetworking_add_PeerAdded_m22394B80C91CD1D70F47018B62C04C740046EF4D (void);
// 0x00000093 System.Void Niantic.Lightship.SharedAR.Networking.LightshipNetworking::remove_PeerAdded(System.Action`1<Niantic.Lightship.SharedAR.Networking.PeerIDArgs>)
extern void LightshipNetworking_remove_PeerAdded_m9F65195E48E9E6D4F3062DE10DFEDD62AA376513 (void);
// 0x00000094 System.Void Niantic.Lightship.SharedAR.Networking.LightshipNetworking::add_PeerRemoved(System.Action`1<Niantic.Lightship.SharedAR.Networking.PeerIDArgs>)
extern void LightshipNetworking_add_PeerRemoved_mB510F83E0B82A54AD190102D340F6BE6079D2CE8 (void);
// 0x00000095 System.Void Niantic.Lightship.SharedAR.Networking.LightshipNetworking::remove_PeerRemoved(System.Action`1<Niantic.Lightship.SharedAR.Networking.PeerIDArgs>)
extern void LightshipNetworking_remove_PeerRemoved_m57A10004F16BE2F91EFD43E0878C299EE895A989 (void);
// 0x00000096 System.Void Niantic.Lightship.SharedAR.Networking.LightshipNetworking::add_DataReceived(System.Action`1<Niantic.Lightship.SharedAR.Networking.DataReceivedArgs>)
extern void LightshipNetworking_add_DataReceived_m99BEBC487BA9E0471EBAAC707469CBD7DFD99E3D (void);
// 0x00000097 System.Void Niantic.Lightship.SharedAR.Networking.LightshipNetworking::remove_DataReceived(System.Action`1<Niantic.Lightship.SharedAR.Networking.DataReceivedArgs>)
extern void LightshipNetworking_remove_DataReceived_mE791339D98704DF9A3F294366B22AE29E672B60C (void);
// 0x00000098 System.Void Niantic.Lightship.SharedAR.Networking.LightshipNetworking::.ctor(System.String,System.String,System.String)
extern void LightshipNetworking__ctor_mC9CCC76EA2BF0F876C18342E10CB7F86BE69F250 (void);
// 0x00000099 System.Void Niantic.Lightship.SharedAR.Networking.LightshipNetworking::.ctor(System.String,System.String,Niantic.Lightship.SharedAR.Networking.API.INetworkingApi,System.String)
extern void LightshipNetworking__ctor_m83EB5138FD7DF125828828BA5E8778A6494B26D2 (void);
// 0x0000009A System.Boolean Niantic.Lightship.SharedAR.Networking.LightshipNetworking::IsNativeHandleValid()
extern void LightshipNetworking_IsNativeHandleValid_m5205819AF043F650DED0AAA158E59B634C6CC91D (void);
// 0x0000009B System.Void Niantic.Lightship.SharedAR.Networking.LightshipNetworking::Join()
extern void LightshipNetworking_Join_mE50B586D1AF32E549554567571CCEE9A5E1E9809 (void);
// 0x0000009C System.Void Niantic.Lightship.SharedAR.Networking.LightshipNetworking::SendData(System.Collections.Generic.List`1<Niantic.Lightship.SharedAR.Networking.PeerID>,System.UInt32,System.Byte[])
extern void LightshipNetworking_SendData_m608439580A38D0994A8A39CECDCD5F3C62112F6F (void);
// 0x0000009D Niantic.Lightship.SharedAR.Networking.NetworkState Niantic.Lightship.SharedAR.Networking.LightshipNetworking::get_NetworkState()
extern void LightshipNetworking_get_NetworkState_mA08834D7032013978FEBEE5F56BAB53469BD87A2 (void);
// 0x0000009E Niantic.Lightship.SharedAR.Networking.PeerID Niantic.Lightship.SharedAR.Networking.LightshipNetworking::get_SelfPeerID()
extern void LightshipNetworking_get_SelfPeerID_m47DEFDA1454C802B0E8D4000C731743B583E75CE (void);
// 0x0000009F System.Collections.Generic.List`1<Niantic.Lightship.SharedAR.Networking.PeerID> Niantic.Lightship.SharedAR.Networking.LightshipNetworking::get_PeerIDs()
extern void LightshipNetworking_get_PeerIDs_m586BA8FA4AACF29E74F6B7E26AD509BABB32ED82 (void);
// 0x000000A0 System.Void Niantic.Lightship.SharedAR.Networking.LightshipNetworking::Leave()
extern void LightshipNetworking_Leave_m34EF25521C507A0D6D9A1F25FCBA6790F34CE8EE (void);
// 0x000000A1 System.Void Niantic.Lightship.SharedAR.Networking.LightshipNetworking::Dispose()
extern void LightshipNetworking_Dispose_m509E1B917CA3F1C7E1BFB2F5105E71382C6A41F2 (void);
// 0x000000A2 System.Void Niantic.Lightship.SharedAR.Networking.LightshipNetworking::SubscribeToNativeCallbacks()
extern void LightshipNetworking_SubscribeToNativeCallbacks_m27522AC3E6C9BEF4A60BBB4020FCEE488C71A779 (void);
// 0x000000A3 System.Void Niantic.Lightship.SharedAR.Networking.LightshipNetworking::HandleArdkDeinitialized()
extern void LightshipNetworking_HandleArdkDeinitialized_mE23A33C24C868FD5F82603043480B06CC4551584 (void);
// 0x000000A4 System.Void Niantic.Lightship.SharedAR.Networking.LightshipNetworking::_networkEventReceivedNative(System.IntPtr,System.Byte,System.UInt32)
extern void LightshipNetworking__networkEventReceivedNative_m634E52EACF05D2C5EE8A1404531486AEC55C27E6 (void);
// 0x000000A5 System.Void Niantic.Lightship.SharedAR.Networking.LightshipNetworking::_didAddPeerNative(System.IntPtr,System.UInt32)
extern void LightshipNetworking__didAddPeerNative_m8067BF2FC04846D632CEBCF6A2DC33CF2E691B01 (void);
// 0x000000A6 System.Void Niantic.Lightship.SharedAR.Networking.LightshipNetworking::_didRemovePeerNative(System.IntPtr,System.UInt32)
extern void LightshipNetworking__didRemovePeerNative_m9BBF6A906DD5EF11529086865FFB883397E7976C (void);
// 0x000000A7 System.Void Niantic.Lightship.SharedAR.Networking.LightshipNetworking::_dataReceivedNative(System.IntPtr,System.UInt32,System.UInt32,System.IntPtr,System.UInt64)
extern void LightshipNetworking__dataReceivedNative_m00BC3A1BFF879E0061D7F99195E0068E2C4F38BD (void);
// 0x000000A8 System.Void Niantic.Lightship.SharedAR.Networking.PeerID::.ctor(System.UInt32)
extern void PeerID__ctor_mB8B65823D23F53BB0D9EB56A92911FEC5D65C98B (void);
// 0x000000A9 System.Guid Niantic.Lightship.SharedAR.Networking.PeerID::get_Identifier()
extern void PeerID_get_Identifier_m942B378CFC91E9F133E6018E46D96CDF70873662 (void);
// 0x000000AA System.UInt32 Niantic.Lightship.SharedAR.Networking.PeerID::ToUint32()
extern void PeerID_ToUint32_m9D6CACCABBA90D8AB7E108382865734D6EE23AB0 (void);
// 0x000000AB System.Boolean Niantic.Lightship.SharedAR.Networking.PeerID::Equals(Niantic.Lightship.SharedAR.Networking.PeerID)
extern void PeerID_Equals_m2333D269A229489B896D7E086E7A38ADFFFA259D (void);
// 0x000000AC System.Int32 Niantic.Lightship.SharedAR.Networking.PeerID::GetHashCode()
extern void PeerID_GetHashCode_mB032CBA309B57C743ADBC8399C2F6FEA915DD552 (void);
// 0x000000AD System.String Niantic.Lightship.SharedAR.Networking.PeerID::ToString()
extern void PeerID_ToString_m500D528E00E6DF96EB45D1C2C0FA5556447BD0BF (void);
// 0x000000AE System.Void Niantic.Lightship.SharedAR.Networking.PeerID::.cctor()
extern void PeerID__cctor_mEF2EC060CD72433C6F6A04235BB735C5FBB94574 (void);
// 0x000000AF System.IntPtr Niantic.Lightship.SharedAR.Networking.API.INetworkingApi::Init(System.String,System.String,System.String)
// 0x000000B0 System.Void Niantic.Lightship.SharedAR.Networking.API.INetworkingApi::Join(System.IntPtr)
// 0x000000B1 System.Void Niantic.Lightship.SharedAR.Networking.API.INetworkingApi::Leave(System.IntPtr)
// 0x000000B2 System.Void Niantic.Lightship.SharedAR.Networking.API.INetworkingApi::Release(System.IntPtr)
// 0x000000B3 System.Void Niantic.Lightship.SharedAR.Networking.API.INetworkingApi::SendData(System.IntPtr,System.UInt32,System.Byte[],System.UInt64,System.UInt32[])
// 0x000000B4 System.Byte Niantic.Lightship.SharedAR.Networking.API.INetworkingApi::GetNetworkingState(System.IntPtr)
// 0x000000B5 System.UInt32 Niantic.Lightship.SharedAR.Networking.API.INetworkingApi::GetSelfPeerId(System.IntPtr)
// 0x000000B6 System.UInt64 Niantic.Lightship.SharedAR.Networking.API.INetworkingApi::GetPeerIds(System.IntPtr,System.UInt32[],System.UInt64)
// 0x000000B7 System.Void Niantic.Lightship.SharedAR.Networking.API.INetworkingApi::SetNetworkEventCallback(System.IntPtr,System.IntPtr,Niantic.Lightship.SharedAR.Networking.API.INetworkingApi/NetworkEventCallback)
// 0x000000B8 System.Void Niantic.Lightship.SharedAR.Networking.API.INetworkingApi::SetPeerAddedCallback(System.IntPtr,System.IntPtr,Niantic.Lightship.SharedAR.Networking.API.INetworkingApi/PeerAddedOrRemovedCallback)
// 0x000000B9 System.Void Niantic.Lightship.SharedAR.Networking.API.INetworkingApi::SetPeerRemovedCallback(System.IntPtr,System.IntPtr,Niantic.Lightship.SharedAR.Networking.API.INetworkingApi/PeerAddedOrRemovedCallback)
// 0x000000BA System.Void Niantic.Lightship.SharedAR.Networking.API.INetworkingApi::SetDataReceivedCallback(System.IntPtr,System.IntPtr,Niantic.Lightship.SharedAR.Networking.API.INetworkingApi/DataReceivedCallback)
// 0x000000BB System.Void Niantic.Lightship.SharedAR.Networking.API.INetworkingApi/NetworkEventCallback::.ctor(System.Object,System.IntPtr)
extern void NetworkEventCallback__ctor_mCE754C9071DA2B898A035777C7BCDC6D925CDA67 (void);
// 0x000000BC System.Void Niantic.Lightship.SharedAR.Networking.API.INetworkingApi/NetworkEventCallback::Invoke(System.IntPtr,System.Byte,System.UInt32)
extern void NetworkEventCallback_Invoke_mA607644D2C7C244256E17B5C65DD7BC2F5E8587C (void);
// 0x000000BD System.IAsyncResult Niantic.Lightship.SharedAR.Networking.API.INetworkingApi/NetworkEventCallback::BeginInvoke(System.IntPtr,System.Byte,System.UInt32,System.AsyncCallback,System.Object)
extern void NetworkEventCallback_BeginInvoke_mCC6D65BE4A2A605AC15FBF2E4AFAEC9EE24609EE (void);
// 0x000000BE System.Void Niantic.Lightship.SharedAR.Networking.API.INetworkingApi/NetworkEventCallback::EndInvoke(System.IAsyncResult)
extern void NetworkEventCallback_EndInvoke_mBCF907BFB7D4DDFB3CE57A3224A9D4D8417C8AAB (void);
// 0x000000BF System.Void Niantic.Lightship.SharedAR.Networking.API.INetworkingApi/PeerAddedOrRemovedCallback::.ctor(System.Object,System.IntPtr)
extern void PeerAddedOrRemovedCallback__ctor_mEBD33ECBB544AD492B803788E84F2A965CBE8203 (void);
// 0x000000C0 System.Void Niantic.Lightship.SharedAR.Networking.API.INetworkingApi/PeerAddedOrRemovedCallback::Invoke(System.IntPtr,System.UInt32)
extern void PeerAddedOrRemovedCallback_Invoke_m8C63A1E3C4FE9880AB223E1696785767D7FA1112 (void);
// 0x000000C1 System.IAsyncResult Niantic.Lightship.SharedAR.Networking.API.INetworkingApi/PeerAddedOrRemovedCallback::BeginInvoke(System.IntPtr,System.UInt32,System.AsyncCallback,System.Object)
extern void PeerAddedOrRemovedCallback_BeginInvoke_m050B9AABEB4DBDF0C86ACCB3990CA7D70D1195E1 (void);
// 0x000000C2 System.Void Niantic.Lightship.SharedAR.Networking.API.INetworkingApi/PeerAddedOrRemovedCallback::EndInvoke(System.IAsyncResult)
extern void PeerAddedOrRemovedCallback_EndInvoke_m4CC4188D6065667675FDDA6BEB40EF098A98D9D1 (void);
// 0x000000C3 System.Void Niantic.Lightship.SharedAR.Networking.API.INetworkingApi/DataReceivedCallback::.ctor(System.Object,System.IntPtr)
extern void DataReceivedCallback__ctor_mF0C32AA68F94CF6DE00B6FFB5DB221B2AA1FB788 (void);
// 0x000000C4 System.Void Niantic.Lightship.SharedAR.Networking.API.INetworkingApi/DataReceivedCallback::Invoke(System.IntPtr,System.UInt32,System.UInt32,System.IntPtr,System.UInt64)
extern void DataReceivedCallback_Invoke_mA6AAEB51D0DA9E12F5B9357F75BBFC4B0182BE73 (void);
// 0x000000C5 System.IAsyncResult Niantic.Lightship.SharedAR.Networking.API.INetworkingApi/DataReceivedCallback::BeginInvoke(System.IntPtr,System.UInt32,System.UInt32,System.IntPtr,System.UInt64,System.AsyncCallback,System.Object)
extern void DataReceivedCallback_BeginInvoke_mB62654F088593AAB1DA9D9E706E06B8F6E401B2C (void);
// 0x000000C6 System.Void Niantic.Lightship.SharedAR.Networking.API.INetworkingApi/DataReceivedCallback::EndInvoke(System.IAsyncResult)
extern void DataReceivedCallback_EndInvoke_m13080A42F2AD7E8BC76E398D787A83ADFC864E40 (void);
// 0x000000C7 System.IntPtr Niantic.Lightship.SharedAR.Networking.API.LightshipNetworkingApi::Init(System.String,System.String,System.String)
extern void LightshipNetworkingApi_Init_mAD25B2834CE55C9F20781DFE4D59CFDD4D3753DA (void);
// 0x000000C8 System.Void Niantic.Lightship.SharedAR.Networking.API.LightshipNetworkingApi::Join(System.IntPtr)
extern void LightshipNetworkingApi_Join_mEDC126FB4286666C4E7A42B58CDE5CCA37C0C89E (void);
// 0x000000C9 System.Void Niantic.Lightship.SharedAR.Networking.API.LightshipNetworkingApi::Leave(System.IntPtr)
extern void LightshipNetworkingApi_Leave_m9CA9D69BEEA224CD4C01559913BDB0A1028EB74C (void);
// 0x000000CA System.Void Niantic.Lightship.SharedAR.Networking.API.LightshipNetworkingApi::Release(System.IntPtr)
extern void LightshipNetworkingApi_Release_m05E2481BA6C2689E114D31DC845C57F01F5DD8DF (void);
// 0x000000CB System.Void Niantic.Lightship.SharedAR.Networking.API.LightshipNetworkingApi::SendData(System.IntPtr,System.UInt32,System.Byte[],System.UInt64,System.UInt32[])
extern void LightshipNetworkingApi_SendData_m0E548FEA3670575460A7CB8EC0EE3C4BD90C5D7E (void);
// 0x000000CC System.Byte Niantic.Lightship.SharedAR.Networking.API.LightshipNetworkingApi::GetNetworkingState(System.IntPtr)
extern void LightshipNetworkingApi_GetNetworkingState_mC6490BD42EDC819FFC7ADDEBA8C241A3E6F610B1 (void);
// 0x000000CD System.UInt32 Niantic.Lightship.SharedAR.Networking.API.LightshipNetworkingApi::GetSelfPeerId(System.IntPtr)
extern void LightshipNetworkingApi_GetSelfPeerId_m2167EC56DBF7A6D68A1966DA90A562BFC7D6C621 (void);
// 0x000000CE System.UInt64 Niantic.Lightship.SharedAR.Networking.API.LightshipNetworkingApi::GetPeerIds(System.IntPtr,System.UInt32[],System.UInt64)
extern void LightshipNetworkingApi_GetPeerIds_m6C2C516104C44910C58838563AA2118AE7559F9F (void);
// 0x000000CF System.Void Niantic.Lightship.SharedAR.Networking.API.LightshipNetworkingApi::SetNetworkEventCallback(System.IntPtr,System.IntPtr,Niantic.Lightship.SharedAR.Networking.API.INetworkingApi/NetworkEventCallback)
extern void LightshipNetworkingApi_SetNetworkEventCallback_mC562C63D9B5937DA1E9831BFCA32409878E0B5EC (void);
// 0x000000D0 System.Void Niantic.Lightship.SharedAR.Networking.API.LightshipNetworkingApi::SetPeerAddedCallback(System.IntPtr,System.IntPtr,Niantic.Lightship.SharedAR.Networking.API.INetworkingApi/PeerAddedOrRemovedCallback)
extern void LightshipNetworkingApi_SetPeerAddedCallback_m9CC5871C5B544C167ABE8528B5918A69F811C51C (void);
// 0x000000D1 System.Void Niantic.Lightship.SharedAR.Networking.API.LightshipNetworkingApi::SetPeerRemovedCallback(System.IntPtr,System.IntPtr,Niantic.Lightship.SharedAR.Networking.API.INetworkingApi/PeerAddedOrRemovedCallback)
extern void LightshipNetworkingApi_SetPeerRemovedCallback_mAC56E6198FB32B8CE31A37BAB1FAA95EB8C59592 (void);
// 0x000000D2 System.Void Niantic.Lightship.SharedAR.Networking.API.LightshipNetworkingApi::SetDataReceivedCallback(System.IntPtr,System.IntPtr,Niantic.Lightship.SharedAR.Networking.API.INetworkingApi/DataReceivedCallback)
extern void LightshipNetworkingApi_SetDataReceivedCallback_mC62AFB55B7EAC6DD577BE624894B9D648B0624AD (void);
// 0x000000D3 System.IntPtr Niantic.Lightship.SharedAR.Networking.API.LightshipNetworkingApi::_InitRoom(System.IntPtr,System.String,System.String)
extern void LightshipNetworkingApi__InitRoom_m13500E9995EFC0F17F89A78BA5C820E0469B3DC6 (void);
// 0x000000D4 System.Void Niantic.Lightship.SharedAR.Networking.API.LightshipNetworkingApi::_Join(System.IntPtr)
extern void LightshipNetworkingApi__Join_m4392A638689ED31AFE83FC417B136EEA609CF39C (void);
// 0x000000D5 System.Void Niantic.Lightship.SharedAR.Networking.API.LightshipNetworkingApi::_Leave(System.IntPtr)
extern void LightshipNetworkingApi__Leave_m7A84753FAAF30C389DB8A35A5F887ED10B8F6440 (void);
// 0x000000D6 System.Void Niantic.Lightship.SharedAR.Networking.API.LightshipNetworkingApi::_Release(System.IntPtr)
extern void LightshipNetworkingApi__Release_m1E0352E36F197E3D74D7B5274D56C4E256E676F7 (void);
// 0x000000D7 System.Void Niantic.Lightship.SharedAR.Networking.API.LightshipNetworkingApi::_SendData(System.IntPtr,System.UInt32,System.Byte[],System.UInt64,System.UInt32[],System.UInt64)
extern void LightshipNetworkingApi__SendData_m475D4FE09DA5DA1E0C68F5B307CD023B5B9956FA (void);
// 0x000000D8 System.Byte Niantic.Lightship.SharedAR.Networking.API.LightshipNetworkingApi::_GetNetworkingState(System.IntPtr)
extern void LightshipNetworkingApi__GetNetworkingState_m3309B84B7D2AB9F758D95F26EF1ABC500DB384D5 (void);
// 0x000000D9 System.UInt32 Niantic.Lightship.SharedAR.Networking.API.LightshipNetworkingApi::_GetSelfPeerId(System.IntPtr)
extern void LightshipNetworkingApi__GetSelfPeerId_m5F219233758CCD0240E981A5A702ACE3C39B2C7D (void);
// 0x000000DA System.UInt64 Niantic.Lightship.SharedAR.Networking.API.LightshipNetworkingApi::_GetPeerIds(System.IntPtr,System.UInt32[],System.UInt64)
extern void LightshipNetworkingApi__GetPeerIds_mE27806087216620883E97125281E6BB6CE86DF42 (void);
// 0x000000DB System.Void Niantic.Lightship.SharedAR.Networking.API.LightshipNetworkingApi::_SetConnectionEventCallback(System.IntPtr,System.IntPtr,Niantic.Lightship.SharedAR.Networking.API.INetworkingApi/NetworkEventCallback)
extern void LightshipNetworkingApi__SetConnectionEventCallback_m3DCAAC7DE8F94D3EE4FD9B160247DB197D28E07D (void);
// 0x000000DC System.Void Niantic.Lightship.SharedAR.Networking.API.LightshipNetworkingApi::_SetPeerAddedCallback(System.IntPtr,System.IntPtr,Niantic.Lightship.SharedAR.Networking.API.INetworkingApi/PeerAddedOrRemovedCallback)
extern void LightshipNetworkingApi__SetPeerAddedCallback_m83D08410390243F27523FCB8C9F046D2610B6B76 (void);
// 0x000000DD System.Void Niantic.Lightship.SharedAR.Networking.API.LightshipNetworkingApi::_SetPeerRemovedCallback(System.IntPtr,System.IntPtr,Niantic.Lightship.SharedAR.Networking.API.INetworkingApi/PeerAddedOrRemovedCallback)
extern void LightshipNetworkingApi__SetPeerRemovedCallback_m96F81F31049ACFA47389B0FB392B5A0B6D2509C6 (void);
// 0x000000DE System.Void Niantic.Lightship.SharedAR.Networking.API.LightshipNetworkingApi::_SetDataReceivedCallback(System.IntPtr,System.IntPtr,Niantic.Lightship.SharedAR.Networking.API.INetworkingApi/DataReceivedCallback)
extern void LightshipNetworkingApi__SetDataReceivedCallback_m41EA386F432AB929EEE5C759BEC1AFD97FA9B322 (void);
// 0x000000DF System.Void Niantic.Lightship.SharedAR.Networking.API.LightshipNetworkingApi::.ctor()
extern void LightshipNetworkingApi__ctor_m6B9889E2EE2EC466BDEE27FD4FF41B59C4756E10 (void);
// 0x000000E0 Niantic.Lightship.SharedAR.Netcode.LightshipNetcodeTransport/NetcodeSessionStats Niantic.Lightship.SharedAR.Netcode.LightshipNetcodeTransport::GetNetcodeSessionStats()
extern void LightshipNetcodeTransport_GetNetcodeSessionStats_mB3710483DCDCB88011267E5A17B59607F0DFD7BE (void);
// 0x000000E1 System.Void Niantic.Lightship.SharedAR.Netcode.LightshipNetcodeTransport::OnDestroy()
extern void LightshipNetcodeTransport_OnDestroy_mF851DE4806824214790E420241D5FD5C2E0A3E02 (void);
// 0x000000E2 System.Void Niantic.Lightship.SharedAR.Netcode.LightshipNetcodeTransport::Send(System.UInt64,System.ArraySegment`1<System.Byte>,Unity.Netcode.NetworkDelivery)
extern void LightshipNetcodeTransport_Send_m117DB2CA07E8A33492128021F71F138778051D16 (void);
// 0x000000E3 Unity.Netcode.NetworkEvent Niantic.Lightship.SharedAR.Netcode.LightshipNetcodeTransport::PollEvent(System.UInt64&,System.ArraySegment`1<System.Byte>&,System.Single&)
extern void LightshipNetcodeTransport_PollEvent_m5ADABF11C270083CBCC39C9A5D44FCDA820421B3 (void);
// 0x000000E4 System.Void Niantic.Lightship.SharedAR.Netcode.LightshipNetcodeTransport::QueueNetworkEvent(Unity.Netcode.NetworkEvent,System.UInt64,System.ArraySegment`1<System.Byte>,System.Single)
extern void LightshipNetcodeTransport_QueueNetworkEvent_m39ADE2DE0D9E2007AD36D4EF90D58BC75E70EC20 (void);
// 0x000000E5 System.Void Niantic.Lightship.SharedAR.Netcode.LightshipNetcodeTransport::SetRoom(Niantic.Lightship.SharedAR.Rooms.IRoom)
extern void LightshipNetcodeTransport_SetRoom_mD319D458D0EEC34C019C7DE99ABFF2829410E322 (void);
// 0x000000E6 System.Void Niantic.Lightship.SharedAR.Netcode.LightshipNetcodeTransport::PrepareNetworkSession()
extern void LightshipNetcodeTransport_PrepareNetworkSession_m80C7D733FF39923C74613FE77060343896DD4BCD (void);
// 0x000000E7 System.Boolean Niantic.Lightship.SharedAR.Netcode.LightshipNetcodeTransport::StartClient()
extern void LightshipNetcodeTransport_StartClient_m7E5C01C348324BB8B688243F6A26B64082CADCDB (void);
// 0x000000E8 System.Boolean Niantic.Lightship.SharedAR.Netcode.LightshipNetcodeTransport::StartServer()
extern void LightshipNetcodeTransport_StartServer_m7CE486D06F868673A50D8F1AA935E84FD4FD2278 (void);
// 0x000000E9 System.Single Niantic.Lightship.SharedAR.Netcode.LightshipNetcodeTransport::GetTimeMS()
extern void LightshipNetcodeTransport_GetTimeMS_m361FC83860B70A0F3A875755ED87A3B25B60ECA1 (void);
// 0x000000EA System.Void Niantic.Lightship.SharedAR.Netcode.LightshipNetcodeTransport::DisconnectRemoteClient(System.UInt64)
extern void LightshipNetcodeTransport_DisconnectRemoteClient_m86D479F978AD3650DF4DCB2EEA8ACB51CA4EC213 (void);
// 0x000000EB System.Void Niantic.Lightship.SharedAR.Netcode.LightshipNetcodeTransport::DisconnectLocalClient()
extern void LightshipNetcodeTransport_DisconnectLocalClient_mB426293DB42E657E902DBB8E7AB01661EC343169 (void);
// 0x000000EC System.UInt64 Niantic.Lightship.SharedAR.Netcode.LightshipNetcodeTransport::GetCurrentRtt(System.UInt64)
extern void LightshipNetcodeTransport_GetCurrentRtt_mDA0319AF727FBEBA5B6D6671574C7AD15B3D3353 (void);
// 0x000000ED System.Void Niantic.Lightship.SharedAR.Netcode.LightshipNetcodeTransport::Shutdown()
extern void LightshipNetcodeTransport_Shutdown_m9E67C054A04F1D35F852C75C30702A209DAF58B5 (void);
// 0x000000EE System.Void Niantic.Lightship.SharedAR.Netcode.LightshipNetcodeTransport::Initialize(Unity.Netcode.NetworkManager)
extern void LightshipNetcodeTransport_Initialize_m098178B2257E204AFA827DF8C2DE5B35F1B9B2E5 (void);
// 0x000000EF System.Void Niantic.Lightship.SharedAR.Netcode.LightshipNetcodeTransport::SetupServer()
extern void LightshipNetcodeTransport_SetupServer_mE0249CFE8F6A4FB0FD1A82EA2F56A96AE70C03BF (void);
// 0x000000F0 System.Void Niantic.Lightship.SharedAR.Netcode.LightshipNetcodeTransport::SetupClient()
extern void LightshipNetcodeTransport_SetupClient_mB5E6CCCE10A82F014E7FF0B501B2FC8D8F90F919 (void);
// 0x000000F1 System.Void Niantic.Lightship.SharedAR.Netcode.LightshipNetcodeTransport::OnNetworkEvent(Niantic.Lightship.SharedAR.Networking.NetworkEventArgs)
extern void LightshipNetcodeTransport_OnNetworkEvent_m5D3F0039685B360B2076BE6F448C60A75521F57D (void);
// 0x000000F2 System.Void Niantic.Lightship.SharedAR.Netcode.LightshipNetcodeTransport::OnPeerRemoved(Niantic.Lightship.SharedAR.Networking.PeerIDArgs)
extern void LightshipNetcodeTransport_OnPeerRemoved_m9144EF8F008C08AD6B6D23F1876DEBEC63F78D78 (void);
// 0x000000F3 System.Void Niantic.Lightship.SharedAR.Netcode.LightshipNetcodeTransport::OnPeerAdded(Niantic.Lightship.SharedAR.Networking.PeerIDArgs)
extern void LightshipNetcodeTransport_OnPeerAdded_m571620EB5A9871A42E2ACCBDF57BD36217412CBF (void);
// 0x000000F4 System.Void Niantic.Lightship.SharedAR.Netcode.LightshipNetcodeTransport::OnPeerDataReceived(Niantic.Lightship.SharedAR.Networking.DataReceivedArgs)
extern void LightshipNetcodeTransport_OnPeerDataReceived_m30D5907AB178342C7E3B4CE88FF81C7AC0089CBD (void);
// 0x000000F5 System.UInt64 Niantic.Lightship.SharedAR.Netcode.LightshipNetcodeTransport::get_ServerClientId()
extern void LightshipNetcodeTransport_get_ServerClientId_m58F3EA11D40B47AFCDBE33D0AF0CDFF6FE849A95 (void);
// 0x000000F6 System.UInt32 Niantic.Lightship.SharedAR.Netcode.LightshipNetcodeTransport::GetLastNetworkError()
extern void LightshipNetcodeTransport_GetLastNetworkError_m8D729387D3539C4BA9FFCB8374ADF3A87BD44DB7 (void);
// 0x000000F7 System.Void Niantic.Lightship.SharedAR.Netcode.LightshipNetcodeTransport::.ctor()
extern void LightshipNetcodeTransport__ctor_m9A1D9F9A70D3A30384AB35E24E85E62757E3B623 (void);
// 0x000000F8 System.Void Niantic.Lightship.SharedAR.Netcode.LightshipNetcodeTransport/NetcodeSessionStats::GetPerSecondStats(Niantic.Lightship.SharedAR.Netcode.LightshipNetcodeTransport/NetcodeSessionStats,Niantic.Lightship.SharedAR.Netcode.LightshipNetcodeTransport/NetcodeSessionStats,System.Single&,System.Single&,System.Single&,System.Single&)
extern void NetcodeSessionStats_GetPerSecondStats_m4659FE380201810C94B5C04841958CD7FB0BF684 (void);
// 0x000000F9 System.Void Niantic.Lightship.SharedAR.Netcode.LightshipNetcodeTransportStatsDisplay::OnNetworkSpawn()
extern void LightshipNetcodeTransportStatsDisplay_OnNetworkSpawn_mB7C94EA643439BC154F4924614E7740EFBD656B6 (void);
// 0x000000FA System.Void Niantic.Lightship.SharedAR.Netcode.LightshipNetcodeTransportStatsDisplay::Start()
extern void LightshipNetcodeTransportStatsDisplay_Start_mA8F757E199692F6893F117C35B0032806223563F (void);
// 0x000000FB System.Void Niantic.Lightship.SharedAR.Netcode.LightshipNetcodeTransportStatsDisplay::Update()
extern void LightshipNetcodeTransportStatsDisplay_Update_m6E75EC91D2A992EF3D094F243F5015DFD7CFD562 (void);
// 0x000000FC System.Void Niantic.Lightship.SharedAR.Netcode.LightshipNetcodeTransportStatsDisplay::Hide()
extern void LightshipNetcodeTransportStatsDisplay_Hide_mD45EA11FFA8BDB164F9065CA4ABD57CBD64193BD (void);
// 0x000000FD System.Void Niantic.Lightship.SharedAR.Netcode.LightshipNetcodeTransportStatsDisplay::Show()
extern void LightshipNetcodeTransportStatsDisplay_Show_m30E38E13A3278E4B9F41C57939BF682B48295FCC (void);
// 0x000000FE System.String Niantic.Lightship.SharedAR.Netcode.LightshipNetcodeTransportStatsDisplay::GetFilePath()
extern void LightshipNetcodeTransportStatsDisplay_GetFilePath_mB6E0DE7EEDA924FCCAED11085B2B96AAFCA8AC2D (void);
// 0x000000FF System.Void Niantic.Lightship.SharedAR.Netcode.LightshipNetcodeTransportStatsDisplay::RttPingPongClientRpc(Unity.Netcode.ClientRpcParams)
extern void LightshipNetcodeTransportStatsDisplay_RttPingPongClientRpc_m0D9ACAF1C1BA6133F9D8691B2DCA62CF360E4CD9 (void);
// 0x00000100 System.Void Niantic.Lightship.SharedAR.Netcode.LightshipNetcodeTransportStatsDisplay::RttPingPongServerRpc(System.UInt64)
extern void LightshipNetcodeTransportStatsDisplay_RttPingPongServerRpc_m112267943CCFE690BF5A18FA09CA9831721615C2 (void);
// 0x00000101 System.Void Niantic.Lightship.SharedAR.Netcode.LightshipNetcodeTransportStatsDisplay::.ctor()
extern void LightshipNetcodeTransportStatsDisplay__ctor_m5C9318FF7C7FAC7761C070A31E6DC09BB88BAB0A (void);
// 0x00000102 System.Void Niantic.Lightship.SharedAR.Netcode.LightshipNetcodeTransportStatsDisplay::__initializeVariables()
extern void LightshipNetcodeTransportStatsDisplay___initializeVariables_m4843F1ED280269DAE66971BB759BFEEFDD28460D (void);
// 0x00000103 System.Void Niantic.Lightship.SharedAR.Netcode.LightshipNetcodeTransportStatsDisplay::.cctor()
extern void LightshipNetcodeTransportStatsDisplay__cctor_m69C378AB28085DE81607C04C963497183E37B835 (void);
// 0x00000104 System.Void Niantic.Lightship.SharedAR.Netcode.LightshipNetcodeTransportStatsDisplay::__rpc_handler_1170446303(Unity.Netcode.NetworkBehaviour,Unity.Netcode.FastBufferReader,Unity.Netcode.__RpcParams)
extern void LightshipNetcodeTransportStatsDisplay___rpc_handler_1170446303_mD6BE313F9BAC1B622477D21A5069EE8D85CFA37A (void);
// 0x00000105 System.Void Niantic.Lightship.SharedAR.Netcode.LightshipNetcodeTransportStatsDisplay::__rpc_handler_441455352(Unity.Netcode.NetworkBehaviour,Unity.Netcode.FastBufferReader,Unity.Netcode.__RpcParams)
extern void LightshipNetcodeTransportStatsDisplay___rpc_handler_441455352_m532BCFDE1293808857AAFF329DD56004B3D03A3E (void);
// 0x00000106 System.String Niantic.Lightship.SharedAR.Netcode.LightshipNetcodeTransportStatsDisplay::__getTypeName()
extern void LightshipNetcodeTransportStatsDisplay___getTypeName_mFEFF3AFC3DA3A346C1A7228779FBBF173E3123BC (void);
// 0x00000107 System.Void Niantic.Lightship.SharedAR.Netcode.LightshipNetworkObject::AttemptToReroot()
extern void LightshipNetworkObject_AttemptToReroot_mC56D19123A8E1D97305973A1D461BB9C2C512C6E (void);
// 0x00000108 System.Void Niantic.Lightship.SharedAR.Netcode.LightshipNetworkObject::Start()
extern void LightshipNetworkObject_Start_mF1E103C7628DB598A9026FF7B93833AEA83FEA4A (void);
// 0x00000109 System.Void Niantic.Lightship.SharedAR.Netcode.LightshipNetworkObject::.ctor()
extern void LightshipNetworkObject__ctor_m00A26C3E8B6E96D4B5F146F52FBEC370667A031D (void);
// 0x0000010A System.Void Niantic.Lightship.SharedAR.Netcode.LightshipNetworkObject::__initializeVariables()
extern void LightshipNetworkObject___initializeVariables_mD778D9BAFD3D071CC4B9DEFF7442EFE079FC5E23 (void);
// 0x0000010B System.String Niantic.Lightship.SharedAR.Netcode.LightshipNetworkObject::__getTypeName()
extern void LightshipNetworkObject___getTypeName_m678B999F4181A41EE8785ADFCBE1347EEA52C542 (void);
// 0x0000010C Niantic.Lightship.SharedAR.Datastore.DatastoreOperationType Niantic.Lightship.SharedAR.Datastore.DatastoreCallbackArgs::get_OperationType()
extern void DatastoreCallbackArgs_get_OperationType_mB20BA8D6CF470B187FC5CD4EDF9C18E4BB0C7571 (void);
// 0x0000010D System.Void Niantic.Lightship.SharedAR.Datastore.DatastoreCallbackArgs::set_OperationType(Niantic.Lightship.SharedAR.Datastore.DatastoreOperationType)
extern void DatastoreCallbackArgs_set_OperationType_m81FE8A5EF3CE13FEEB41DB7680C343BA29BA3F12 (void);
// 0x0000010E Niantic.Lightship.SharedAR.Datastore.Result Niantic.Lightship.SharedAR.Datastore.DatastoreCallbackArgs::get_Result()
extern void DatastoreCallbackArgs_get_Result_m9F094E54F50602D45BB0202739C047A35D810B0B (void);
// 0x0000010F System.Void Niantic.Lightship.SharedAR.Datastore.DatastoreCallbackArgs::set_Result(Niantic.Lightship.SharedAR.Datastore.Result)
extern void DatastoreCallbackArgs_set_Result_mB574552DFE15B47DCA3E26B737B99FE369C804BC (void);
// 0x00000110 System.UInt32 Niantic.Lightship.SharedAR.Datastore.DatastoreCallbackArgs::get_RequestId()
extern void DatastoreCallbackArgs_get_RequestId_mADE13C6E8C8D547FA6F60C0881D032474D296499 (void);
// 0x00000111 System.Void Niantic.Lightship.SharedAR.Datastore.DatastoreCallbackArgs::set_RequestId(System.UInt32)
extern void DatastoreCallbackArgs_set_RequestId_m29E39098E96291CE0135FC77699586A4DDA80487 (void);
// 0x00000112 System.String Niantic.Lightship.SharedAR.Datastore.DatastoreCallbackArgs::get_Key()
extern void DatastoreCallbackArgs_get_Key_m2BAB3F3F2A28D0A52BFAAEC85B304A774ED4C97E (void);
// 0x00000113 System.Void Niantic.Lightship.SharedAR.Datastore.DatastoreCallbackArgs::set_Key(System.String)
extern void DatastoreCallbackArgs_set_Key_mB8BCE91AAB5CFBDCDF4C968C831C889809A991F4 (void);
// 0x00000114 System.Byte[] Niantic.Lightship.SharedAR.Datastore.DatastoreCallbackArgs::get_Value()
extern void DatastoreCallbackArgs_get_Value_mE4F4C6CEE70C0FF0B6295020B168EB4C55FE2AA0 (void);
// 0x00000115 System.Void Niantic.Lightship.SharedAR.Datastore.DatastoreCallbackArgs::set_Value(System.Byte[])
extern void DatastoreCallbackArgs_set_Value_m1F376030748C3C514A666687E49103913906DC60 (void);
// 0x00000116 System.UInt32 Niantic.Lightship.SharedAR.Datastore.DatastoreCallbackArgs::get_Version()
extern void DatastoreCallbackArgs_get_Version_m49089D600AD70409365A9D1DE4F9C228B6D11DEB (void);
// 0x00000117 System.Void Niantic.Lightship.SharedAR.Datastore.DatastoreCallbackArgs::set_Version(System.UInt32)
extern void DatastoreCallbackArgs_set_Version_m1C6EA6D2664E6B7608B6695BC923201E076CA0C5 (void);
// 0x00000118 System.Void Niantic.Lightship.SharedAR.Datastore.DatastoreCallbackArgs::.ctor(Niantic.Lightship.SharedAR.Datastore.DatastoreOperationType,Niantic.Lightship.SharedAR.Datastore.Result,System.UInt32,System.String,System.Byte[],System.UInt32)
extern void DatastoreCallbackArgs__ctor_m076BEF31F075241EB8CF3AF3909F28854B078A22 (void);
// 0x00000119 System.Void Niantic.Lightship.SharedAR.Datastore.IDatastore::SetData(System.UInt32,System.String,System.Byte[])
// 0x0000011A System.Void Niantic.Lightship.SharedAR.Datastore.IDatastore::GetData(System.UInt32,System.String)
// 0x0000011B System.Void Niantic.Lightship.SharedAR.Datastore.IDatastore::DeleteData(System.UInt32,System.String)
// 0x0000011C System.Void Niantic.Lightship.SharedAR.Datastore.IDatastore::add_DatastoreCallback(System.Action`1<Niantic.Lightship.SharedAR.Datastore.DatastoreCallbackArgs>)
// 0x0000011D System.Void Niantic.Lightship.SharedAR.Datastore.IDatastore::remove_DatastoreCallback(System.Action`1<Niantic.Lightship.SharedAR.Datastore.DatastoreCallbackArgs>)
// 0x0000011E System.IntPtr Niantic.Lightship.SharedAR.Datastore.LightshipDatastore::get__managedHandle()
extern void LightshipDatastore_get__managedHandle_m5D4DAA679542E2E25CD9811C1EF66EF7CBDA2951 (void);
// 0x0000011F System.Void Niantic.Lightship.SharedAR.Datastore.LightshipDatastore::add_DatastoreCallback(System.Action`1<Niantic.Lightship.SharedAR.Datastore.DatastoreCallbackArgs>)
extern void LightshipDatastore_add_DatastoreCallback_m93A5EF3B696331296095FFDEB19FC69091BD2EE6 (void);
// 0x00000120 System.Void Niantic.Lightship.SharedAR.Datastore.LightshipDatastore::remove_DatastoreCallback(System.Action`1<Niantic.Lightship.SharedAR.Datastore.DatastoreCallbackArgs>)
extern void LightshipDatastore_remove_DatastoreCallback_m861F8202538E7CFA212A37B4CC36FF1EA2A5D796 (void);
// 0x00000121 System.Void Niantic.Lightship.SharedAR.Datastore.LightshipDatastore::.ctor(System.IntPtr)
extern void LightshipDatastore__ctor_m19DEE8AA332BF4014F25F8ADA5BE426FC15E02D6 (void);
// 0x00000122 System.Void Niantic.Lightship.SharedAR.Datastore.LightshipDatastore::.ctor(System.IntPtr,Niantic.Lightship.SharedAR.Datastore.Api.IApi)
extern void LightshipDatastore__ctor_mC9E57D15B61ED836EDB7525DDF85E80BD14C3E86 (void);
// 0x00000123 System.Void Niantic.Lightship.SharedAR.Datastore.LightshipDatastore::Dispose()
extern void LightshipDatastore_Dispose_m274B9F22959479D3C5A22FD7FB600486EB8F6E1C (void);
// 0x00000124 System.Boolean Niantic.Lightship.SharedAR.Datastore.LightshipDatastore::IsNativeHandleValid()
extern void LightshipDatastore_IsNativeHandleValid_m69394B572257CA281588725EDE096A52146B503D (void);
// 0x00000125 System.Void Niantic.Lightship.SharedAR.Datastore.LightshipDatastore::SetData(System.UInt32,System.String,System.Byte[])
extern void LightshipDatastore_SetData_m5F0F9FC7C6FB5B0A9A804CDFCCCADDFF4E59876D (void);
// 0x00000126 System.Void Niantic.Lightship.SharedAR.Datastore.LightshipDatastore::GetData(System.UInt32,System.String)
extern void LightshipDatastore_GetData_m9ECF6B976CCD66D66CEE91F98E47478EC6999B5A (void);
// 0x00000127 System.Void Niantic.Lightship.SharedAR.Datastore.LightshipDatastore::DeleteData(System.UInt32,System.String)
extern void LightshipDatastore_DeleteData_m52810BE537AD7CE2DBEB3456A535158389F4F431 (void);
// 0x00000128 System.Void Niantic.Lightship.SharedAR.Datastore.LightshipDatastore::Update()
extern void LightshipDatastore_Update_m620F805A7687767E8F9FD8E5FCFD104710A7E621 (void);
// 0x00000129 System.Void Niantic.Lightship.SharedAR.Datastore.LightshipDatastore::HandleDatastoreCallback(System.Byte,System.Byte,System.UInt32,System.String,System.Byte[],System.UInt32)
extern void LightshipDatastore_HandleDatastoreCallback_mE2C313B2FFE7B891DC24ACD05C4414380DA04C4A (void);
// 0x0000012A System.Void Niantic.Lightship.SharedAR.Datastore.LightshipDatastore::_handleDatastoreCallback(System.IntPtr,System.Byte,System.Byte,System.UInt32,System.String,System.IntPtr,System.UInt64,System.UInt32)
extern void LightshipDatastore__handleDatastoreCallback_mAA4817C83C6C72545AA5F31DEA2DD88D034630DE (void);
// 0x0000012B System.Void Niantic.Lightship.SharedAR.Datastore.Api.IApi::SetData(System.IntPtr,System.UInt32,System.String,System.Byte[],System.UInt64)
// 0x0000012C System.Void Niantic.Lightship.SharedAR.Datastore.Api.IApi::GetData(System.IntPtr,System.UInt32,System.String)
// 0x0000012D System.Void Niantic.Lightship.SharedAR.Datastore.Api.IApi::DeleteData(System.IntPtr,System.UInt32,System.String)
// 0x0000012E System.Void Niantic.Lightship.SharedAR.Datastore.Api.IApi::SetDatastoreCallback(System.IntPtr,System.IntPtr,Niantic.Lightship.SharedAR.Datastore.Api.IApi/DatastoreCallback)
// 0x0000012F System.Void Niantic.Lightship.SharedAR.Datastore.Api.IApi/DatastoreCallback::.ctor(System.Object,System.IntPtr)
extern void DatastoreCallback__ctor_m3EA348CEE4AC48FD118487A1995B83E3A8D111DF (void);
// 0x00000130 System.Void Niantic.Lightship.SharedAR.Datastore.Api.IApi/DatastoreCallback::Invoke(System.IntPtr,System.Byte,System.Byte,System.UInt32,System.String,System.IntPtr,System.UInt64,System.UInt32)
extern void DatastoreCallback_Invoke_m6AF57A1092CF15D75A0557F5614BEC1B3FA53BFE (void);
// 0x00000131 System.IAsyncResult Niantic.Lightship.SharedAR.Datastore.Api.IApi/DatastoreCallback::BeginInvoke(System.IntPtr,System.Byte,System.Byte,System.UInt32,System.String,System.IntPtr,System.UInt64,System.UInt32,System.AsyncCallback,System.Object)
extern void DatastoreCallback_BeginInvoke_mEEA044D875517D5309FF7B2776A07DB2B1ED3A9E (void);
// 0x00000132 System.Void Niantic.Lightship.SharedAR.Datastore.Api.IApi/DatastoreCallback::EndInvoke(System.IAsyncResult)
extern void DatastoreCallback_EndInvoke_m847E08432E5FB292F110CFCB53A20ACEBC1F8337 (void);
// 0x00000133 System.Void Niantic.Lightship.SharedAR.Datastore.Api.NativeApi::SetData(System.IntPtr,System.UInt32,System.String,System.Byte[],System.UInt64)
extern void NativeApi_SetData_m4DF2523928C90707C9E5CF288370E3EA584B66FF (void);
// 0x00000134 System.Void Niantic.Lightship.SharedAR.Datastore.Api.NativeApi::GetData(System.IntPtr,System.UInt32,System.String)
extern void NativeApi_GetData_m7952652B40610F8B203FD058AF6FAF4B9CC208C5 (void);
// 0x00000135 System.Void Niantic.Lightship.SharedAR.Datastore.Api.NativeApi::DeleteData(System.IntPtr,System.UInt32,System.String)
extern void NativeApi_DeleteData_mAC52816E72B4AED9A2FA4ABC4DA4A4480145B827 (void);
// 0x00000136 System.Void Niantic.Lightship.SharedAR.Datastore.Api.NativeApi::SetDatastoreCallback(System.IntPtr,System.IntPtr,Niantic.Lightship.SharedAR.Datastore.Api.IApi/DatastoreCallback)
extern void NativeApi_SetDatastoreCallback_m6BF37C9455AC53C152A822BC10D2547BC122696A (void);
// 0x00000137 System.Void Niantic.Lightship.SharedAR.Datastore.Api.NativeApi::.ctor()
extern void NativeApi__ctor_m0BE20EB9ECAE67F0FF7899A7DA7C52B7BB0D48E8 (void);
// 0x00000138 System.Void Niantic.Lightship.SharedAR.Datastore.Api.NativeApi/Native::SetData(System.IntPtr,System.UInt32,System.String,System.Byte[],System.UInt64)
extern void Native_SetData_m2FFAC4451A948E18985818C34BACF64378D22018 (void);
// 0x00000139 System.Void Niantic.Lightship.SharedAR.Datastore.Api.NativeApi/Native::GetData(System.IntPtr,System.UInt32,System.String)
extern void Native_GetData_m29C913EFD9B89B08CEE85223B0119B96B65567CC (void);
// 0x0000013A System.Void Niantic.Lightship.SharedAR.Datastore.Api.NativeApi/Native::DeleteData(System.IntPtr,System.UInt32,System.String)
extern void Native_DeleteData_m9C72C58FDB461E84DFD56E07F3D5703C858568E8 (void);
// 0x0000013B System.Void Niantic.Lightship.SharedAR.Datastore.Api.NativeApi/Native::SetDatastoreCallback(System.IntPtr,System.IntPtr,Niantic.Lightship.SharedAR.Datastore.Api.IApi/DatastoreCallback)
extern void Native_SetDatastoreCallback_m29BFC12213AFACE3AE69C54CA3F21BE923D8F920 (void);
// 0x0000013C System.Void Niantic.Lightship.SharedAR.Colocalization.ImageTargetColocalization::.ctor(UnityEngine.XR.ARFoundation.ARTrackedImageManager,Niantic.Lightship.SharedAR.Colocalization.RuntimeImageLibrary)
extern void ImageTargetColocalization__ctor_m8C554B7EC6B95DA60A4BC21908393DA29D6DCE26 (void);
// 0x0000013D System.Void Niantic.Lightship.SharedAR.Colocalization.ImageTargetColocalization::InitializeWithTrackingManager(UnityEngine.XR.ARFoundation.ARTrackedImageManager,Niantic.Lightship.SharedAR.Colocalization.RuntimeImageLibrary)
extern void ImageTargetColocalization_InitializeWithTrackingManager_mCE6DB3F8BFA5DE3677E3CC5A619D59C881607AF0 (void);
// 0x0000013E System.Void Niantic.Lightship.SharedAR.Colocalization.ImageTargetColocalization::Start()
extern void ImageTargetColocalization_Start_mCFAAC9B906502E103CFED901D44751CF1650086B (void);
// 0x0000013F System.Void Niantic.Lightship.SharedAR.Colocalization.ImageTargetColocalization::Stop()
extern void ImageTargetColocalization_Stop_m9FF8893CDAD14ED572581C9632E5565A3702A115 (void);
// 0x00000140 UnityEngine.Matrix4x4 Niantic.Lightship.SharedAR.Colocalization.ImageTargetColocalization::get_AlignedSpaceOrigin()
extern void ImageTargetColocalization_get_AlignedSpaceOrigin_m2BD4B1A3FC66505A7D3B5B4F90DE4BD71688236A (void);
// 0x00000141 System.Void Niantic.Lightship.SharedAR.Colocalization.ImageTargetColocalization::set_AlignedSpaceOrigin(UnityEngine.Matrix4x4)
extern void ImageTargetColocalization_set_AlignedSpaceOrigin_mA0BAE50842190364E79472ED82DA21939B597D01 (void);
// 0x00000142 System.Void Niantic.Lightship.SharedAR.Colocalization.ImageTargetColocalization::add__stateUpdated(System.Action`1<Niantic.Lightship.SharedAR.Colocalization.ImageTargetColocalization/ColocalizationStateUpdatedArgs>)
extern void ImageTargetColocalization_add__stateUpdated_m683A8D92B94208474CDA41C22F071332B35181A5 (void);
// 0x00000143 System.Void Niantic.Lightship.SharedAR.Colocalization.ImageTargetColocalization::remove__stateUpdated(System.Action`1<Niantic.Lightship.SharedAR.Colocalization.ImageTargetColocalization/ColocalizationStateUpdatedArgs>)
extern void ImageTargetColocalization_remove__stateUpdated_m970820324B484D8E75B3DDA1B68C70E60280ABB2 (void);
// 0x00000144 System.Void Niantic.Lightship.SharedAR.Colocalization.ImageTargetColocalization::add_ColocalizationStateUpdated(System.Action`1<Niantic.Lightship.SharedAR.Colocalization.ImageTargetColocalization/ColocalizationStateUpdatedArgs>)
extern void ImageTargetColocalization_add_ColocalizationStateUpdated_mD52166D315985F04060403E297139E355448AC4D (void);
// 0x00000145 System.Void Niantic.Lightship.SharedAR.Colocalization.ImageTargetColocalization::remove_ColocalizationStateUpdated(System.Action`1<Niantic.Lightship.SharedAR.Colocalization.ImageTargetColocalization/ColocalizationStateUpdatedArgs>)
extern void ImageTargetColocalization_remove_ColocalizationStateUpdated_mF39D0722705ADABEB2C9BE2147D2A99300001D37 (void);
// 0x00000146 Niantic.Lightship.SharedAR.Colocalization.ImageTargetColocalization/ColocalizationAlignmentResult Niantic.Lightship.SharedAR.Colocalization.ImageTargetColocalization::AlignedPoseToLocal(UnityEngine.Matrix4x4,UnityEngine.Matrix4x4&)
extern void ImageTargetColocalization_AlignedPoseToLocal_m5888DF6AC8F640960467A13C0C0AB09AECEFD1EF (void);
// 0x00000147 System.Void Niantic.Lightship.SharedAR.Colocalization.ImageTargetColocalization::OnTrackingChanged(UnityEngine.XR.ARFoundation.ARTrackedImagesChangedEventArgs)
extern void ImageTargetColocalization_OnTrackingChanged_m9AAEC1DC1BA34162725F15E12C89CADDE4509BE9 (void);
// 0x00000148 UnityEngine.Matrix4x4 Niantic.Lightship.SharedAR.Colocalization.ImageTargetColocalization::ConvertToWorldSpace(UnityEngine.Matrix4x4)
extern void ImageTargetColocalization_ConvertToWorldSpace_mD10001E7164C615279AC368D88DCC852247D111D (void);
// 0x00000149 System.Void Niantic.Lightship.SharedAR.Colocalization.ImageTargetColocalization::InvokeStateUpdated(Niantic.Lightship.SharedAR.Colocalization.ImageTargetColocalization/ColocalizationState)
extern void ImageTargetColocalization_InvokeStateUpdated_mD9435C6903CA21ED5B1EF9C316F9E1B9FE7E25A8 (void);
// 0x0000014A System.Void Niantic.Lightship.SharedAR.Colocalization.ImageTargetColocalization/ColocalizationStateUpdatedArgs::.ctor(Niantic.Lightship.SharedAR.Colocalization.ImageTargetColocalization/ColocalizationState)
extern void ColocalizationStateUpdatedArgs__ctor_m311BCB4870D41ACA1D1F00C992BD08FAA4A8878A (void);
// 0x0000014B Niantic.Lightship.SharedAR.Colocalization.ImageTargetColocalization/ColocalizationState Niantic.Lightship.SharedAR.Colocalization.ImageTargetColocalization/ColocalizationStateUpdatedArgs::get_State()
extern void ColocalizationStateUpdatedArgs_get_State_mE2A966CC19375D5CFC4F07FFAA8D4A96DB7038FD (void);
// 0x0000014C System.Void Niantic.Lightship.SharedAR.Colocalization.ImageTargetColocalization/ColocalizationStateUpdatedArgs::set_State(Niantic.Lightship.SharedAR.Colocalization.ImageTargetColocalization/ColocalizationState)
extern void ColocalizationStateUpdatedArgs_set_State_m33F6BDE34D4711F45AAC7534F4D9802FDF732D07 (void);
// 0x0000014D System.Void Niantic.Lightship.SharedAR.Colocalization.ImageTrackingSharedAROrigin::Start()
extern void ImageTrackingSharedAROrigin_Start_m68A6A827CA8F97E373651B77A56262E09947A6AF (void);
// 0x0000014E System.Void Niantic.Lightship.SharedAR.Colocalization.ImageTrackingSharedAROrigin::OnDisable()
extern void ImageTrackingSharedAROrigin_OnDisable_m186288F227D23E8B3E1A1BB1CF68F10519CAE83B (void);
// 0x0000014F System.Void Niantic.Lightship.SharedAR.Colocalization.ImageTrackingSharedAROrigin::Update()
extern void ImageTrackingSharedAROrigin_Update_m9BA6B1B06EC5A90CB098C06B1C1A870F23AC85A8 (void);
// 0x00000150 System.Void Niantic.Lightship.SharedAR.Colocalization.ImageTrackingSharedAROrigin::.ctor()
extern void ImageTrackingSharedAROrigin__ctor_mF321618FE749FD4629DA4779D75A6ED3DD3F3488 (void);
// 0x00000151 Niantic.Lightship.SharedAR.Rooms.IRoom Niantic.Lightship.SharedAR.Colocalization.ISharedSpaceRoomOptions::get_Room()
// 0x00000152 Niantic.Lightship.SharedAR.Colocalization.ISharedSpaceRoomOptions Niantic.Lightship.SharedAR.Colocalization.ISharedSpaceRoomOptions::CreateVpsRoomOptions(Niantic.Lightship.SharedAR.Colocalization.ISharedSpaceTrackingOptions,System.String,System.Int32,System.String,System.Boolean)
extern void ISharedSpaceRoomOptions_CreateVpsRoomOptions_mD6A5143F5B13B8CA6D0EDB16E0860E30C688721C (void);
// 0x00000153 Niantic.Lightship.SharedAR.Colocalization.ISharedSpaceRoomOptions Niantic.Lightship.SharedAR.Colocalization.ISharedSpaceRoomOptions::CreateLightshipRoomOptions(System.String,System.Int32,System.String,System.Boolean)
extern void ISharedSpaceRoomOptions_CreateLightshipRoomOptions_m16F93A620A0C72CE94BA6D06C6A5793BEF53B25B (void);
// 0x00000154 Niantic.Lightship.SharedAR.Colocalization.ISharedSpaceRoomOptions Niantic.Lightship.SharedAR.Colocalization.ISharedSpaceRoomOptions::CreateCustomRoomOptions()
extern void ISharedSpaceRoomOptions_CreateCustomRoomOptions_m592954D5A1BAF88FF371FB250647FF73A13121F2 (void);
// 0x00000155 Niantic.Lightship.SharedAR.Colocalization.ISharedSpaceTrackingOptions Niantic.Lightship.SharedAR.Colocalization.ISharedSpaceTrackingOptions::CreateVpsTrackingOptions(System.String)
extern void ISharedSpaceTrackingOptions_CreateVpsTrackingOptions_mD2AEC51D4557D23D8FEE17315EAB1A392AF08826 (void);
// 0x00000156 Niantic.Lightship.SharedAR.Colocalization.ISharedSpaceTrackingOptions Niantic.Lightship.SharedAR.Colocalization.ISharedSpaceTrackingOptions::CreateVpsTrackingOptions(Niantic.Lightship.AR.LocationAR.ARLocation)
extern void ISharedSpaceTrackingOptions_CreateVpsTrackingOptions_m75148DB45596CDF907FEC8E1E9FD83F8B005AA80 (void);
// 0x00000157 Niantic.Lightship.SharedAR.Colocalization.ISharedSpaceTrackingOptions Niantic.Lightship.SharedAR.Colocalization.ISharedSpaceTrackingOptions::CreateImageTrackingOptions(UnityEngine.Texture2D,System.Single)
extern void ISharedSpaceTrackingOptions_CreateImageTrackingOptions_mAE422FED8119E91A88085E9CF03920CD06352C82 (void);
// 0x00000158 Niantic.Lightship.SharedAR.Colocalization.ISharedSpaceTrackingOptions Niantic.Lightship.SharedAR.Colocalization.ISharedSpaceTrackingOptions::CreateMockTrackingOptions()
extern void ISharedSpaceTrackingOptions_CreateMockTrackingOptions_m6E71D9CCC215055A79D23E4CB0B971D8CBBE6B73 (void);
// 0x00000159 System.String Niantic.Lightship.SharedAR.Colocalization.RuntimeImageLibrary::get_TrackingImageName()
extern void RuntimeImageLibrary_get_TrackingImageName_mD97412F7C0BBEE66AB8EA4E39741F3B603148A7F (void);
// 0x0000015A System.Void Niantic.Lightship.SharedAR.Colocalization.RuntimeImageLibrary::set_TrackingImageName(System.String)
extern void RuntimeImageLibrary_set_TrackingImageName_mFC90557C0E3BD2089D3C849CF827DC303A5F0943 (void);
// 0x0000015B System.Void Niantic.Lightship.SharedAR.Colocalization.RuntimeImageLibrary::Start()
extern void RuntimeImageLibrary_Start_m8C34801DEC197DA47D7484B7847CCABE3100581D (void);
// 0x0000015C System.Void Niantic.Lightship.SharedAR.Colocalization.RuntimeImageLibrary::OnDisable()
extern void RuntimeImageLibrary_OnDisable_m8309D32DF785B3561AE9577C04021898BEE0D53A (void);
// 0x0000015D System.Void Niantic.Lightship.SharedAR.Colocalization.RuntimeImageLibrary::OnArSessionStateChange(UnityEngine.XR.ARFoundation.ARSessionStateChangedEventArgs)
extern void RuntimeImageLibrary_OnArSessionStateChange_m858161353A3E96959D03843C93692871D8ADE36E (void);
// 0x0000015E System.Void Niantic.Lightship.SharedAR.Colocalization.RuntimeImageLibrary::InitializeRuntimeImageLibrary()
extern void RuntimeImageLibrary_InitializeRuntimeImageLibrary_m381EB9F9E0A002EE02DFEFDB5D206C23F4AC6FB7 (void);
// 0x0000015F System.Void Niantic.Lightship.SharedAR.Colocalization.RuntimeImageLibrary::Update()
extern void RuntimeImageLibrary_Update_m7495CE804EE93322B4838BE3B6C64BD5947E1D45 (void);
// 0x00000160 System.Void Niantic.Lightship.SharedAR.Colocalization.RuntimeImageLibrary::.ctor()
extern void RuntimeImageLibrary__ctor_m43141FEE5BE0C9E7FC343E028209998219F079B2 (void);
// 0x00000161 System.Void Niantic.Lightship.SharedAR.Colocalization.SharedAROrigin::.ctor()
extern void SharedAROrigin__ctor_mA77FD921752479C5B6EB4F97B37397A15E54F15F (void);
// 0x00000162 Niantic.Lightship.SharedAR.Rooms.IRoom Niantic.Lightship.SharedAR.Colocalization.SharedSpaceCustomRoomOptions::get_Room()
extern void SharedSpaceCustomRoomOptions_get_Room_m2ED7E09697941D76D8595B4534111157E8F3BCCF (void);
// 0x00000163 System.Void Niantic.Lightship.SharedAR.Colocalization.SharedSpaceCustomRoomOptions::.ctor()
extern void SharedSpaceCustomRoomOptions__ctor_mACAB533E9E091B0CD5F80FFDD8AA928D09DF39E8 (void);
// 0x00000164 System.Void Niantic.Lightship.SharedAR.Colocalization.SharedSpaceImageTrackingOptions::.ctor(UnityEngine.Texture2D,System.Single)
extern void SharedSpaceImageTrackingOptions__ctor_mBE3CB3F31BEA4FCD3D0AB897CCCF9C24E8551E98 (void);
// 0x00000165 Niantic.Lightship.SharedAR.Rooms.IRoom Niantic.Lightship.SharedAR.Colocalization.SharedSpaceLightshipRoomOptions::get_Room()
extern void SharedSpaceLightshipRoomOptions_get_Room_m46FECC9B89F042E80EC6BAAE7BAF9FD5490051A2 (void);
// 0x00000166 System.Void Niantic.Lightship.SharedAR.Colocalization.SharedSpaceLightshipRoomOptions::set_Room(Niantic.Lightship.SharedAR.Rooms.IRoom)
extern void SharedSpaceLightshipRoomOptions_set_Room_mAA27B57CEA311B7DF9B05915F8C4F71EE828260A (void);
// 0x00000167 System.Void Niantic.Lightship.SharedAR.Colocalization.SharedSpaceLightshipRoomOptions::.ctor(System.String,System.Int32,System.String,System.Boolean)
extern void SharedSpaceLightshipRoomOptions__ctor_m92D871E48F82C6E2250D4D4837FCD04BD6909300 (void);
// 0x00000168 System.Void Niantic.Lightship.SharedAR.Colocalization.SharedSpaceLightshipRoomOptions::.ctor(Niantic.Lightship.SharedAR.Colocalization.SharedSpaceVpsTrackingOptions,System.String,System.Int32,System.String,System.Boolean)
extern void SharedSpaceLightshipRoomOptions__ctor_m42958511A32AA6DB06FB440F596C4B769D33B1D4 (void);
// 0x00000169 System.Void Niantic.Lightship.SharedAR.Colocalization.SharedSpaceLightshipRoomOptions::PrepareRoom()
extern void SharedSpaceLightshipRoomOptions_PrepareRoom_m56FB2F99F99BB66728BE1D946A06E8584E8DA300 (void);
// 0x0000016A System.Void Niantic.Lightship.SharedAR.Colocalization.SharedSpaceManager::add_sharedSpaceManagerStateChanged(System.Action`1<Niantic.Lightship.SharedAR.Colocalization.SharedSpaceManager/SharedSpaceManagerStateChangeEventArgs>)
extern void SharedSpaceManager_add_sharedSpaceManagerStateChanged_mE9DD4BABC924A44944CF0FE49018200DDBA03875 (void);
// 0x0000016B System.Void Niantic.Lightship.SharedAR.Colocalization.SharedSpaceManager::remove_sharedSpaceManagerStateChanged(System.Action`1<Niantic.Lightship.SharedAR.Colocalization.SharedSpaceManager/SharedSpaceManagerStateChangeEventArgs>)
extern void SharedSpaceManager_remove_sharedSpaceManagerStateChanged_mDFFCC7AFEFBB2230735020D4F84D9A69B61EF33B (void);
// 0x0000016C UnityEngine.GameObject Niantic.Lightship.SharedAR.Colocalization.SharedSpaceManager::get_SharedArOriginObject()
extern void SharedSpaceManager_get_SharedArOriginObject_mB59692BD6AE4DA175E73A120CC14AD19E5CE6F58 (void);
// 0x0000016D System.Void Niantic.Lightship.SharedAR.Colocalization.SharedSpaceManager::set_SharedArOriginObject(UnityEngine.GameObject)
extern void SharedSpaceManager_set_SharedArOriginObject_m656DE2A5DF0A04E3BBA5C8B8314817A50E10A870 (void);
// 0x0000016E Niantic.Lightship.SharedAR.Colocalization.SharedSpaceManager/ColocalizationType Niantic.Lightship.SharedAR.Colocalization.SharedSpaceManager::GetColocalizationType()
extern void SharedSpaceManager_GetColocalizationType_mEC137974E23758CC32B27BD301DCC75E42F4D1EE (void);
// 0x0000016F Niantic.Lightship.SharedAR.Colocalization.ISharedSpaceTrackingOptions Niantic.Lightship.SharedAR.Colocalization.SharedSpaceManager::get_SharedSpaceTrackingOptions()
extern void SharedSpaceManager_get_SharedSpaceTrackingOptions_m9986D7AE4462711B7B45058FC9DD858A3414305E (void);
// 0x00000170 System.Void Niantic.Lightship.SharedAR.Colocalization.SharedSpaceManager::set_SharedSpaceTrackingOptions(Niantic.Lightship.SharedAR.Colocalization.ISharedSpaceTrackingOptions)
extern void SharedSpaceManager_set_SharedSpaceTrackingOptions_m27DD79F1F2012791FE27E8B051DC86B6A57D98C9 (void);
// 0x00000171 Niantic.Lightship.SharedAR.Colocalization.ISharedSpaceRoomOptions Niantic.Lightship.SharedAR.Colocalization.SharedSpaceManager::get_SharedSpaceRoomOptions()
extern void SharedSpaceManager_get_SharedSpaceRoomOptions_m4E827CED857E2DC57AB04DF32740E47E00B68BEA (void);
// 0x00000172 System.Void Niantic.Lightship.SharedAR.Colocalization.SharedSpaceManager::set_SharedSpaceRoomOptions(Niantic.Lightship.SharedAR.Colocalization.ISharedSpaceRoomOptions)
extern void SharedSpaceManager_set_SharedSpaceRoomOptions_m6E30055632033A4A82E90467EF21987814647C75 (void);
// 0x00000173 System.Void Niantic.Lightship.SharedAR.Colocalization.SharedSpaceManager::Awake()
extern void SharedSpaceManager_Awake_m175B9EEE6D0F174A2934E1657BFFB9DD1938A0FD (void);
// 0x00000174 System.Void Niantic.Lightship.SharedAR.Colocalization.SharedSpaceManager::Start()
extern void SharedSpaceManager_Start_m7D20C0BF330D6758D72944C068D27C474BDD6BDB (void);
// 0x00000175 System.Void Niantic.Lightship.SharedAR.Colocalization.SharedSpaceManager::OnDestroy()
extern void SharedSpaceManager_OnDestroy_m46AA0289BF9413043290B84629D1BDAF49EC6683 (void);
// 0x00000176 System.Void Niantic.Lightship.SharedAR.Colocalization.SharedSpaceManager::StartSharedSpace(Niantic.Lightship.SharedAR.Colocalization.ISharedSpaceTrackingOptions,Niantic.Lightship.SharedAR.Colocalization.ISharedSpaceRoomOptions)
extern void SharedSpaceManager_StartSharedSpace_m1C652BD9783377DF726F4B6DE4C5D6110395026E (void);
// 0x00000177 System.Void Niantic.Lightship.SharedAR.Colocalization.SharedSpaceManager::OnARLocationStateChanged(Niantic.Lightship.AR.PersistentAnchors.ARLocationTrackedEventArgs)
extern void SharedSpaceManager_OnARLocationStateChanged_mEA66C2D95386796E98055FC0A2F311A62D3493FF (void);
// 0x00000178 System.Void Niantic.Lightship.SharedAR.Colocalization.SharedSpaceManager::OnImageTrackingColocalizationStateUpdated(Niantic.Lightship.SharedAR.Colocalization.ImageTargetColocalization/ColocalizationStateUpdatedArgs)
extern void SharedSpaceManager_OnImageTrackingColocalizationStateUpdated_m602C863579DAEC34E03F3015F7DDC771BB609CF7 (void);
// 0x00000179 T Niantic.Lightship.SharedAR.Colocalization.SharedSpaceManager::MakeOriginAndAdd(UnityEngine.Transform)
// 0x0000017A System.Void Niantic.Lightship.SharedAR.Colocalization.SharedSpaceManager::.ctor()
extern void SharedSpaceManager__ctor_m5A0E1C38885613D95A654A49A7C36D09044EE12C (void);
// 0x0000017B System.Void Niantic.Lightship.SharedAR.Colocalization.SharedSpaceManager/<>c__32`1::.cctor()
// 0x0000017C System.Void Niantic.Lightship.SharedAR.Colocalization.SharedSpaceManager/<>c__32`1::.ctor()
// 0x0000017D System.Boolean Niantic.Lightship.SharedAR.Colocalization.SharedSpaceManager/<>c__32`1::<MakeOriginAndAdd>b__32_0(System.UInt64)
// 0x0000017E System.Void Niantic.Lightship.SharedAR.Colocalization.SharedSpaceMockTrackingOptions::.ctor()
extern void SharedSpaceMockTrackingOptions__ctor_m126CA126AB9D8EAD86EEE3987B84C3AE337A496D (void);
// 0x0000017F System.Boolean Niantic.Lightship.SharedAR.Colocalization.SharedSpaceVpsTrackingOptions::get__arLocationCreated()
extern void SharedSpaceVpsTrackingOptions_get__arLocationCreated_mA6AB4FB0B40D036E5CD615403683A7CF6E6811D9 (void);
// 0x00000180 System.Void Niantic.Lightship.SharedAR.Colocalization.SharedSpaceVpsTrackingOptions::set__arLocationCreated(System.Boolean)
extern void SharedSpaceVpsTrackingOptions_set__arLocationCreated_mF86FD9510C04D6F890DAF69ED8483D6C73F64916 (void);
// 0x00000181 System.Void Niantic.Lightship.SharedAR.Colocalization.SharedSpaceVpsTrackingOptions::.ctor(Niantic.Lightship.AR.LocationAR.ARLocation)
extern void SharedSpaceVpsTrackingOptions__ctor_mC7D848B91701934547AD15F67B72925CB20BC806 (void);
// 0x00000182 System.Void Niantic.Lightship.SharedAR.Colocalization.SharedSpaceVpsTrackingOptions::.ctor(System.String)
extern void SharedSpaceVpsTrackingOptions__ctor_mD41748912912F3C979C04EFDECFF104F2006BBA5 (void);
static Il2CppMethodPointer s_methodPointers[386] = 
{
	U3CModuleU3E__cctor_m37EB60C8B311A5C89A2CC8A0488756D876CF1510,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	Room__ctor_m0B6C50003B31A180D09ECF480661F548907B4CD4,
	Room_get_RoomParams_m1B5456B312ABE490A7EAEE090D40C40BACBF6FC1,
	Room_set_RoomParams_mF48D08D4EFA3664508F9CAA32943F0ED13629432,
	Room_get_Networking_m2911F39B88583A7CE9E4EDC11B0C3AAAC44D8E95,
	Room_set_Networking_mF630A268667E5D941B66F05A4B64CA0848B77574,
	Room_get_Datastore_mD099F6DA4B86386C33B4C7186CCC89CA2CCC18E2,
	Room_set_Datastore_mD20C8D9A53E45A780CD571237050186E3B935E01,
	Room_Initialize_mB21FE6BA24B86F3268D18B31A4E969258A72859B,
	Room_Join_m83B5AA6916C61A99E4DE32187DDDB3F783CE58F8,
	Room_Leave_m463E8CFD0D52C5D96CB51FCC60911ECF74C5B510,
	Room_Dispose_m78F48EA6438A63E0F5AB5DC1E74073A246E5F9D4,
	RoomID__ctor_m8282BA176805723E1F88CB33C672B035A9EE0B85,
	RoomID_op_Implicit_mF8E8242811052A8CF356330BE2D60403B078EC9E,
	RoomID_op_Implicit_m4F1815211AC26BA6C8B7A47E354111404009020F,
	RoomID_ToString_mCBD228853412D0651450118CBE6B8DD4A6FB6CA7,
	RoomID_GetHashCode_mD457DE3AF1BDB505DD8E005B87F4A445300E9DFC,
	RoomID_Equals_m9B5D5222269EF2E088D3E1F9EC2E4193080E3875,
	RoomID_Equals_mBF547702D20FC0740454E96F3F1BE8AECBCA1C76,
	RoomID__cctor_m6746CC01DD90912B2B8886B4A22F6237C0173D78,
	RoomManagementService_get_DefaultExperienceId_m619745546CF1BB25B83EA95D794806CA1F804AD6,
	RoomManagementService_set_DefaultExperienceId_mD79A88DC35369A267811476F8756CCFEB11B71A8,
	RoomManagementService__cctor_mF037EEBACA5BFDCCAA0916B6C0AEAD7E46247E67,
	RoomManagementService__InitializeServiceForIntegrationTesting_mC6D7F2058A791203D02ABF6425E7ACC67DED2479,
	RoomManagementService__InitializeServiceForTesting_mA1DB0FAB27706B345956EF2B8D9317011B1E5D32,
	RoomManagementService_CreateRoom_m7A667190749C8774999A7E5AA73ECC54FFA6C9C5,
	RoomManagementService_GetRoomsForExperience_m1A03719032D0B7DD494505814F44941967ED7652,
	RoomManagementService_DeleteRoom_m80A213B7F301EFD81EAC1C8CA660D0440850B299,
	RoomManagementService_GetRoom_mBE99D86A61DC940B119911BFFCD7C074F5798F1F,
	RoomManagementService_QueryRoomsByName_m47B5865ED378D533AE92E5B54876F42A766356AC,
	RoomManagementService_GetAllRooms_mD849DFC1E8D1335E50F39E75BAD573CE1133BD5F,
	RoomManagementService_GetOrCreateRoomForName_m769CD8EB0ADD017AB825F9F997030769103BA022,
	RoomManagementService_StaticGetOrCreateRoomCallback_m2A100A37156064354EA9E7F320F8F31C3DDBEA6F,
	RoomManagementService_GetOrCreateRoomAsync_m534E2E4D9412DCC42EE41260662A8E152B1E919F,
	RoomManagementService_GetOrCreateRoomAsync_m63054FECFE10C1FE0D509C4D2773B91F9E007328,
	RoomManagementService__GetOrCreateRoom_m527457898D8A0F426B8CD0CBB531F98DC5935E30,
	GetOrCreateRoomCallback__ctor_m984AE8779CEE0446C69F9B38EEE740DD499FD8E7,
	GetOrCreateRoomCallback_Invoke_m57B7EBC33FA8C9029DB25236AD0FE438016E3E7F,
	GetOrCreateRoomCallback_BeginInvoke_m02D45864977FD6C6686528DF9E7063C152D4FC03,
	GetOrCreateRoomCallback_EndInvoke_m03E5BDCE04F4984D008B49AB7BF82BCBE2C2E2FF,
	GetOrCreateRoomAsyncTaskResult_get_RoomId_m1FAE164BCE27FFC4206F19F95EBBF05BC9B0A5D0,
	GetOrCreateRoomAsyncTaskResult__ctor_m840058D29140F5E4A54266FA3288440314A75718,
	InternalGetOrCreateRoomCallback__ctor_m906A5CEBB2654142C18DDAFBC232D1F958A69DAF,
	InternalGetOrCreateRoomCallback_Invoke_mD8F3E504D55054685EF037B6AD5FCE5957D411B1,
	InternalGetOrCreateRoomCallback_BeginInvoke_mB1C54111747F36FC0FF9682BF2E2094C0EAA1381,
	InternalGetOrCreateRoomCallback_EndInvoke_m14DF2744E2CD2A594D58AC6D1797E4339933C278,
	U3CGetOrCreateRoomAsyncU3Ed__22_MoveNext_m063F0F3F9E0CF9D6555253B6FAC81B902F4484D4,
	U3CGetOrCreateRoomAsyncU3Ed__22_SetStateMachine_m3FF3234345478195B2E93752D193EB9D9252BA0A,
	RoomParams_get_RoomID_m99535DFF66305820B52BEBC17482F04757AF5F55,
	RoomParams_set_RoomID_m3E445600CFA6F875A048D3527376CBFA77D7FE11,
	RoomParams_get_Visibility_m3586D17761F982BA9A36A21FD44EBD96FC9EF6B3,
	RoomParams_set_Visibility_m06F6EC05CABC6939F59CD71B622E4F50EDAF6EB7,
	RoomParams_get_Capacity_mFCE18DA57BDEE644DD741D30E7410127DE68CF84,
	RoomParams_set_Capacity_m79DB879724AE609678B6FAFDC99F3384C7176B85,
	RoomParams_get_Name_m94B870ABD1CBF93A26093793F21E783059F8EFBE,
	RoomParams_set_Name_m3BFEC9FABA63F8D1454BB94E82B5D781684BB746,
	RoomParams_get_ExperienceId_m94C28BE43DA043DB9286B0A8134B3A20949FA13D,
	RoomParams_set_ExperienceId_m0C6327CDBA10F3558E95A69E7252DB004AA43C37,
	RoomParams_get_Description_m835C256631025EA2801207491DE7342F1D2A1404,
	RoomParams_set_Description_m7B4A2F299E10B0F5564B2B1CA67E065045135013,
	RoomParams_get_Passcode_mB582DEA0B58860DEFA8E74AD3B696A7FE538C8B8,
	RoomParams_set_Passcode_mD58EE28A0B86D33D01B41E1C28667CEE02B88893,
	RoomParams_get_Endpoint_mB83B4513D0B6A7243D3417D23119CF1D93930B73,
	RoomParams_set_Endpoint_m09BC3BE2332856792495554FFDFC3BB105D192E1,
	RoomParams__ctor_m48B595306679851DE9F5F5B597AC1936DE759FFB,
	RoomParams__ctor_m5DDB8F17C6110BC1B612D19CDC289E274019D381,
	RoomParams__ctor_mC0520AAF0D81F1C1C746EE5340B8DF187E9D475C,
	_RoomInternal_op_Implicit_mAA8089DB6E76192E8F5478D2A4A58F5FAC7E439A,
	_FakeRoomManagementServiceImpl_InitializeService_mAF190602476FA64F18EC545C48749609BDB2C12B,
	_FakeRoomManagementServiceImpl_CreateRoom_m54EED3151AB16F71B2F18DCE5951FA0FD798D1E0,
	_FakeRoomManagementServiceImpl_GetRoom_m2DC939EB7054F1E7321DA48039826B0C7DFD995C,
	_FakeRoomManagementServiceImpl_GetRoomsForExperience_m384D85CE0BD44D1B6167C9D21FDE7E97F6ED3578,
	_FakeRoomManagementServiceImpl_DestroyRoom_m8065FAD41CC6587A4B486F4B7E2D495409AEA96F,
	_FakeRoomManagementServiceImpl_ReleaseService_m342529E4C415A7DC9E97499C1F961E6B41027E45,
	_FakeRoomManagementServiceImpl_CreateRoomAsync_m24CE2682EB466F4EFA5458C4A260146F3A89B6C6,
	_FakeRoomManagementServiceImpl_GetRoomsForExperienceAsync_m3B4CBC1EB7311DC75E2AEEB5DCCBF47BBC689FE1,
	_FakeRoomManagementServiceImpl__ctor_m1B7AD5D059F9A9162ADA235021C1AB2130B84118,
	_FakeRoomManagementServiceImpl__cctor_mB2006E19B9FE66E3264432409A0A1B75009624BA,
	_HttpRoomManagementServiceImpl_InitializeService_mE04D61AAFF78E1336EA1B50BB1093FD043AF7464,
	_HttpRoomManagementServiceImpl_CreateRoom_mCE3BF9CC0141AC6B0F780F378E998AF1A46A9D34,
	_HttpRoomManagementServiceImpl_GetRoom_m3ABD17444B14A3AF49093050C80611F014C54755,
	_HttpRoomManagementServiceImpl_GetRoomsForExperience_mC16380246AE4E0232AED098FA271F55E3F2A6BA8,
	_HttpRoomManagementServiceImpl_DestroyRoom_mDE78EEE85F165670802AE16100187716770B7BE8,
	_HttpRoomManagementServiceImpl_ReleaseService_mEBBC3FD49DAA38826200EB98AC8CE198E1D7CB0F,
	_HttpRoomManagementServiceImpl_CreateRoomAsync_mCD0E5490A5E3A4B50B44B00FD113CB60D662D29B,
	_HttpRoomManagementServiceImpl_GetRoomsForExperienceAsync_m8324D419F05C4DBE0E5B0899FC57DA8F22095ACA,
	_HttpRoomManagementServiceImpl_SendBlockingWebRequest_m2DF420438A3DD44A2A3C2351939770C1CC06CBC6,
	_HttpRoomManagementServiceImpl_SendWebRequestAsync_m78EDB0CAD704CD9B72709ACD99B12B062F8E91C2,
	_HttpRoomManagementServiceImpl__ctor_mDCB3948AD5FF4024DC37533B83EC5E097F4D2A21,
	_HttpRoomManagementServiceImpl__cctor_m41AFAFB95684216D1D5A4C7F92D7166CA0FD2633,
	U3CCreateRoomAsyncU3Ed__16_MoveNext_m5E823496CF5D88202FFD0244454FA84D4289BB90,
	U3CCreateRoomAsyncU3Ed__16_SetStateMachine_m74EDA2945523E3255E08AF07D94D8475504E849E,
	U3CGetRoomsForExperienceAsyncU3Ed__17_MoveNext_m59B273C332618C00A9D9AA1B6B5FF1FB9F54B80A,
	U3CGetRoomsForExperienceAsyncU3Ed__17_SetStateMachine_mF4E9D76AC29CF93E2DC7CF0798C377A6FBF23E63,
	U3CSendWebRequestAsyncU3Ed__20_MoveNext_mF1BC634A785387A07528267967515E4137E966F3,
	U3CSendWebRequestAsyncU3Ed__20_SetStateMachine_m3F57B043E63DA8FE8FBC7942C07F8605CAA848EA,
	NetworkEventArgs_get_networkEvent_mA1BE9B63147714FC77569A8E938859832ECED70B,
	NetworkEventArgs_set_networkEvent_m34062446A4455AAC438F735E07A18CBAD5F8F0B3,
	NetworkEventArgs_get_errorCode_mA7937D1CFF090A4478030893254CB5342DEB051A,
	NetworkEventArgs_set_errorCode_mF5A56EB733C263E0A55C75233A5953F2B08CE02B,
	NetworkEventArgs__ctor_m3FF0E5BF0FB5F6CC19F30C8AE7A881A23418562D,
	PeerIDArgs_get_PeerID_mA8FE27DF03CB61BCD338069860B3239B5581A148,
	PeerIDArgs_set_PeerID_m54E45AC72F75706CD617EC02559CF1BDB3957A41,
	PeerIDArgs__ctor_m8514FE4CFAC7E401D9CE4C98994E9A46574A00A2,
	DataReceivedArgs_get_PeerID_mC05DBFCC023F68EB35319D025A9CA4ADFDDD354B,
	DataReceivedArgs_set_PeerID_mC2524B7ECE4725E934F3745B4D34D9C3A12DD713,
	DataReceivedArgs_get_Tag_m13DE57EB0B6DC96A10F64A7B5184C5CC74CB5442,
	DataReceivedArgs_set_Tag_m9A2203F720D56ABCD008AA611C54A0E76670ADFD,
	DataReceivedArgs_get_DataLength_mE31583C6A2F1292F3A6C2592F6E05E816A524DD8,
	DataReceivedArgs__ctor_mF99243FAAA78F1FE534B5E47781D4D457BE40F41,
	DataReceivedArgs_CreateDataReader_m442AFFC841C59DC7461E29FC36FD7DDE1602D8F3,
	DataReceivedArgs_CopyData_m154A000CD998EC3F5A4EBB09681815538796B9FE,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	LightshipNetworking_get__managedHandle_m55B832EEC2CDF5822E63A0D807D89FB03F49356C,
	LightshipNetworking_get_SessionId_m08B2C8B3664E74AEA1EF198B061F11BA508411CA,
	LightshipNetworking_set_SessionId_mFDAAFC8E916CD2C5AB51464410C7F4CC7DF7F758,
	LightshipNetworking_add_NetworkEvent_m7583B4CA35F06E8626EE6437E80B78D334C8A9B4,
	LightshipNetworking_remove_NetworkEvent_mF24D6965D13C24D230258BC05550590D29A863E6,
	LightshipNetworking_add_PeerAdded_m22394B80C91CD1D70F47018B62C04C740046EF4D,
	LightshipNetworking_remove_PeerAdded_m9F65195E48E9E6D4F3062DE10DFEDD62AA376513,
	LightshipNetworking_add_PeerRemoved_mB510F83E0B82A54AD190102D340F6BE6079D2CE8,
	LightshipNetworking_remove_PeerRemoved_m57A10004F16BE2F91EFD43E0878C299EE895A989,
	LightshipNetworking_add_DataReceived_m99BEBC487BA9E0471EBAAC707469CBD7DFD99E3D,
	LightshipNetworking_remove_DataReceived_mE791339D98704DF9A3F294366B22AE29E672B60C,
	LightshipNetworking__ctor_mC9CCC76EA2BF0F876C18342E10CB7F86BE69F250,
	LightshipNetworking__ctor_m83EB5138FD7DF125828828BA5E8778A6494B26D2,
	LightshipNetworking_IsNativeHandleValid_m5205819AF043F650DED0AAA158E59B634C6CC91D,
	LightshipNetworking_Join_mE50B586D1AF32E549554567571CCEE9A5E1E9809,
	LightshipNetworking_SendData_m608439580A38D0994A8A39CECDCD5F3C62112F6F,
	LightshipNetworking_get_NetworkState_mA08834D7032013978FEBEE5F56BAB53469BD87A2,
	LightshipNetworking_get_SelfPeerID_m47DEFDA1454C802B0E8D4000C731743B583E75CE,
	LightshipNetworking_get_PeerIDs_m586BA8FA4AACF29E74F6B7E26AD509BABB32ED82,
	LightshipNetworking_Leave_m34EF25521C507A0D6D9A1F25FCBA6790F34CE8EE,
	LightshipNetworking_Dispose_m509E1B917CA3F1C7E1BFB2F5105E71382C6A41F2,
	LightshipNetworking_SubscribeToNativeCallbacks_m27522AC3E6C9BEF4A60BBB4020FCEE488C71A779,
	LightshipNetworking_HandleArdkDeinitialized_mE23A33C24C868FD5F82603043480B06CC4551584,
	LightshipNetworking__networkEventReceivedNative_m634E52EACF05D2C5EE8A1404531486AEC55C27E6,
	LightshipNetworking__didAddPeerNative_m8067BF2FC04846D632CEBCF6A2DC33CF2E691B01,
	LightshipNetworking__didRemovePeerNative_m9BBF6A906DD5EF11529086865FFB883397E7976C,
	LightshipNetworking__dataReceivedNative_m00BC3A1BFF879E0061D7F99195E0068E2C4F38BD,
	PeerID__ctor_mB8B65823D23F53BB0D9EB56A92911FEC5D65C98B,
	PeerID_get_Identifier_m942B378CFC91E9F133E6018E46D96CDF70873662,
	PeerID_ToUint32_m9D6CACCABBA90D8AB7E108382865734D6EE23AB0,
	PeerID_Equals_m2333D269A229489B896D7E086E7A38ADFFFA259D,
	PeerID_GetHashCode_mB032CBA309B57C743ADBC8399C2F6FEA915DD552,
	PeerID_ToString_m500D528E00E6DF96EB45D1C2C0FA5556447BD0BF,
	PeerID__cctor_mEF2EC060CD72433C6F6A04235BB735C5FBB94574,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NetworkEventCallback__ctor_mCE754C9071DA2B898A035777C7BCDC6D925CDA67,
	NetworkEventCallback_Invoke_mA607644D2C7C244256E17B5C65DD7BC2F5E8587C,
	NetworkEventCallback_BeginInvoke_mCC6D65BE4A2A605AC15FBF2E4AFAEC9EE24609EE,
	NetworkEventCallback_EndInvoke_mBCF907BFB7D4DDFB3CE57A3224A9D4D8417C8AAB,
	PeerAddedOrRemovedCallback__ctor_mEBD33ECBB544AD492B803788E84F2A965CBE8203,
	PeerAddedOrRemovedCallback_Invoke_m8C63A1E3C4FE9880AB223E1696785767D7FA1112,
	PeerAddedOrRemovedCallback_BeginInvoke_m050B9AABEB4DBDF0C86ACCB3990CA7D70D1195E1,
	PeerAddedOrRemovedCallback_EndInvoke_m4CC4188D6065667675FDDA6BEB40EF098A98D9D1,
	DataReceivedCallback__ctor_mF0C32AA68F94CF6DE00B6FFB5DB221B2AA1FB788,
	DataReceivedCallback_Invoke_mA6AAEB51D0DA9E12F5B9357F75BBFC4B0182BE73,
	DataReceivedCallback_BeginInvoke_mB62654F088593AAB1DA9D9E706E06B8F6E401B2C,
	DataReceivedCallback_EndInvoke_m13080A42F2AD7E8BC76E398D787A83ADFC864E40,
	LightshipNetworkingApi_Init_mAD25B2834CE55C9F20781DFE4D59CFDD4D3753DA,
	LightshipNetworkingApi_Join_mEDC126FB4286666C4E7A42B58CDE5CCA37C0C89E,
	LightshipNetworkingApi_Leave_m9CA9D69BEEA224CD4C01559913BDB0A1028EB74C,
	LightshipNetworkingApi_Release_m05E2481BA6C2689E114D31DC845C57F01F5DD8DF,
	LightshipNetworkingApi_SendData_m0E548FEA3670575460A7CB8EC0EE3C4BD90C5D7E,
	LightshipNetworkingApi_GetNetworkingState_mC6490BD42EDC819FFC7ADDEBA8C241A3E6F610B1,
	LightshipNetworkingApi_GetSelfPeerId_m2167EC56DBF7A6D68A1966DA90A562BFC7D6C621,
	LightshipNetworkingApi_GetPeerIds_m6C2C516104C44910C58838563AA2118AE7559F9F,
	LightshipNetworkingApi_SetNetworkEventCallback_mC562C63D9B5937DA1E9831BFCA32409878E0B5EC,
	LightshipNetworkingApi_SetPeerAddedCallback_m9CC5871C5B544C167ABE8528B5918A69F811C51C,
	LightshipNetworkingApi_SetPeerRemovedCallback_mAC56E6198FB32B8CE31A37BAB1FAA95EB8C59592,
	LightshipNetworkingApi_SetDataReceivedCallback_mC62AFB55B7EAC6DD577BE624894B9D648B0624AD,
	LightshipNetworkingApi__InitRoom_m13500E9995EFC0F17F89A78BA5C820E0469B3DC6,
	LightshipNetworkingApi__Join_m4392A638689ED31AFE83FC417B136EEA609CF39C,
	LightshipNetworkingApi__Leave_m7A84753FAAF30C389DB8A35A5F887ED10B8F6440,
	LightshipNetworkingApi__Release_m1E0352E36F197E3D74D7B5274D56C4E256E676F7,
	LightshipNetworkingApi__SendData_m475D4FE09DA5DA1E0C68F5B307CD023B5B9956FA,
	LightshipNetworkingApi__GetNetworkingState_m3309B84B7D2AB9F758D95F26EF1ABC500DB384D5,
	LightshipNetworkingApi__GetSelfPeerId_m5F219233758CCD0240E981A5A702ACE3C39B2C7D,
	LightshipNetworkingApi__GetPeerIds_mE27806087216620883E97125281E6BB6CE86DF42,
	LightshipNetworkingApi__SetConnectionEventCallback_m3DCAAC7DE8F94D3EE4FD9B160247DB197D28E07D,
	LightshipNetworkingApi__SetPeerAddedCallback_m83D08410390243F27523FCB8C9F046D2610B6B76,
	LightshipNetworkingApi__SetPeerRemovedCallback_m96F81F31049ACFA47389B0FB392B5A0B6D2509C6,
	LightshipNetworkingApi__SetDataReceivedCallback_m41EA386F432AB929EEE5C759BEC1AFD97FA9B322,
	LightshipNetworkingApi__ctor_m6B9889E2EE2EC466BDEE27FD4FF41B59C4756E10,
	LightshipNetcodeTransport_GetNetcodeSessionStats_mB3710483DCDCB88011267E5A17B59607F0DFD7BE,
	LightshipNetcodeTransport_OnDestroy_mF851DE4806824214790E420241D5FD5C2E0A3E02,
	LightshipNetcodeTransport_Send_m117DB2CA07E8A33492128021F71F138778051D16,
	LightshipNetcodeTransport_PollEvent_m5ADABF11C270083CBCC39C9A5D44FCDA820421B3,
	LightshipNetcodeTransport_QueueNetworkEvent_m39ADE2DE0D9E2007AD36D4EF90D58BC75E70EC20,
	LightshipNetcodeTransport_SetRoom_mD319D458D0EEC34C019C7DE99ABFF2829410E322,
	LightshipNetcodeTransport_PrepareNetworkSession_m80C7D733FF39923C74613FE77060343896DD4BCD,
	LightshipNetcodeTransport_StartClient_m7E5C01C348324BB8B688243F6A26B64082CADCDB,
	LightshipNetcodeTransport_StartServer_m7CE486D06F868673A50D8F1AA935E84FD4FD2278,
	LightshipNetcodeTransport_GetTimeMS_m361FC83860B70A0F3A875755ED87A3B25B60ECA1,
	LightshipNetcodeTransport_DisconnectRemoteClient_m86D479F978AD3650DF4DCB2EEA8ACB51CA4EC213,
	LightshipNetcodeTransport_DisconnectLocalClient_mB426293DB42E657E902DBB8E7AB01661EC343169,
	LightshipNetcodeTransport_GetCurrentRtt_mDA0319AF727FBEBA5B6D6671574C7AD15B3D3353,
	LightshipNetcodeTransport_Shutdown_m9E67C054A04F1D35F852C75C30702A209DAF58B5,
	LightshipNetcodeTransport_Initialize_m098178B2257E204AFA827DF8C2DE5B35F1B9B2E5,
	LightshipNetcodeTransport_SetupServer_mE0249CFE8F6A4FB0FD1A82EA2F56A96AE70C03BF,
	LightshipNetcodeTransport_SetupClient_mB5E6CCCE10A82F014E7FF0B501B2FC8D8F90F919,
	LightshipNetcodeTransport_OnNetworkEvent_m5D3F0039685B360B2076BE6F448C60A75521F57D,
	LightshipNetcodeTransport_OnPeerRemoved_m9144EF8F008C08AD6B6D23F1876DEBEC63F78D78,
	LightshipNetcodeTransport_OnPeerAdded_m571620EB5A9871A42E2ACCBDF57BD36217412CBF,
	LightshipNetcodeTransport_OnPeerDataReceived_m30D5907AB178342C7E3B4CE88FF81C7AC0089CBD,
	LightshipNetcodeTransport_get_ServerClientId_m58F3EA11D40B47AFCDBE33D0AF0CDFF6FE849A95,
	LightshipNetcodeTransport_GetLastNetworkError_m8D729387D3539C4BA9FFCB8374ADF3A87BD44DB7,
	LightshipNetcodeTransport__ctor_m9A1D9F9A70D3A30384AB35E24E85E62757E3B623,
	NetcodeSessionStats_GetPerSecondStats_m4659FE380201810C94B5C04841958CD7FB0BF684,
	LightshipNetcodeTransportStatsDisplay_OnNetworkSpawn_mB7C94EA643439BC154F4924614E7740EFBD656B6,
	LightshipNetcodeTransportStatsDisplay_Start_mA8F757E199692F6893F117C35B0032806223563F,
	LightshipNetcodeTransportStatsDisplay_Update_m6E75EC91D2A992EF3D094F243F5015DFD7CFD562,
	LightshipNetcodeTransportStatsDisplay_Hide_mD45EA11FFA8BDB164F9065CA4ABD57CBD64193BD,
	LightshipNetcodeTransportStatsDisplay_Show_m30E38E13A3278E4B9F41C57939BF682B48295FCC,
	LightshipNetcodeTransportStatsDisplay_GetFilePath_mB6E0DE7EEDA924FCCAED11085B2B96AAFCA8AC2D,
	LightshipNetcodeTransportStatsDisplay_RttPingPongClientRpc_m0D9ACAF1C1BA6133F9D8691B2DCA62CF360E4CD9,
	LightshipNetcodeTransportStatsDisplay_RttPingPongServerRpc_m112267943CCFE690BF5A18FA09CA9831721615C2,
	LightshipNetcodeTransportStatsDisplay__ctor_m5C9318FF7C7FAC7761C070A31E6DC09BB88BAB0A,
	LightshipNetcodeTransportStatsDisplay___initializeVariables_m4843F1ED280269DAE66971BB759BFEEFDD28460D,
	LightshipNetcodeTransportStatsDisplay__cctor_m69C378AB28085DE81607C04C963497183E37B835,
	LightshipNetcodeTransportStatsDisplay___rpc_handler_1170446303_mD6BE313F9BAC1B622477D21A5069EE8D85CFA37A,
	LightshipNetcodeTransportStatsDisplay___rpc_handler_441455352_m532BCFDE1293808857AAFF329DD56004B3D03A3E,
	LightshipNetcodeTransportStatsDisplay___getTypeName_mFEFF3AFC3DA3A346C1A7228779FBBF173E3123BC,
	LightshipNetworkObject_AttemptToReroot_mC56D19123A8E1D97305973A1D461BB9C2C512C6E,
	LightshipNetworkObject_Start_mF1E103C7628DB598A9026FF7B93833AEA83FEA4A,
	LightshipNetworkObject__ctor_m00A26C3E8B6E96D4B5F146F52FBEC370667A031D,
	LightshipNetworkObject___initializeVariables_mD778D9BAFD3D071CC4B9DEFF7442EFE079FC5E23,
	LightshipNetworkObject___getTypeName_m678B999F4181A41EE8785ADFCBE1347EEA52C542,
	DatastoreCallbackArgs_get_OperationType_mB20BA8D6CF470B187FC5CD4EDF9C18E4BB0C7571,
	DatastoreCallbackArgs_set_OperationType_m81FE8A5EF3CE13FEEB41DB7680C343BA29BA3F12,
	DatastoreCallbackArgs_get_Result_m9F094E54F50602D45BB0202739C047A35D810B0B,
	DatastoreCallbackArgs_set_Result_mB574552DFE15B47DCA3E26B737B99FE369C804BC,
	DatastoreCallbackArgs_get_RequestId_mADE13C6E8C8D547FA6F60C0881D032474D296499,
	DatastoreCallbackArgs_set_RequestId_m29E39098E96291CE0135FC77699586A4DDA80487,
	DatastoreCallbackArgs_get_Key_m2BAB3F3F2A28D0A52BFAAEC85B304A774ED4C97E,
	DatastoreCallbackArgs_set_Key_mB8BCE91AAB5CFBDCDF4C968C831C889809A991F4,
	DatastoreCallbackArgs_get_Value_mE4F4C6CEE70C0FF0B6295020B168EB4C55FE2AA0,
	DatastoreCallbackArgs_set_Value_m1F376030748C3C514A666687E49103913906DC60,
	DatastoreCallbackArgs_get_Version_m49089D600AD70409365A9D1DE4F9C228B6D11DEB,
	DatastoreCallbackArgs_set_Version_m1C6EA6D2664E6B7608B6695BC923201E076CA0C5,
	DatastoreCallbackArgs__ctor_m076BEF31F075241EB8CF3AF3909F28854B078A22,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	LightshipDatastore_get__managedHandle_m5D4DAA679542E2E25CD9811C1EF66EF7CBDA2951,
	LightshipDatastore_add_DatastoreCallback_m93A5EF3B696331296095FFDEB19FC69091BD2EE6,
	LightshipDatastore_remove_DatastoreCallback_m861F8202538E7CFA212A37B4CC36FF1EA2A5D796,
	LightshipDatastore__ctor_m19DEE8AA332BF4014F25F8ADA5BE426FC15E02D6,
	LightshipDatastore__ctor_mC9E57D15B61ED836EDB7525DDF85E80BD14C3E86,
	LightshipDatastore_Dispose_m274B9F22959479D3C5A22FD7FB600486EB8F6E1C,
	LightshipDatastore_IsNativeHandleValid_m69394B572257CA281588725EDE096A52146B503D,
	LightshipDatastore_SetData_m5F0F9FC7C6FB5B0A9A804CDFCCCADDFF4E59876D,
	LightshipDatastore_GetData_m9ECF6B976CCD66D66CEE91F98E47478EC6999B5A,
	LightshipDatastore_DeleteData_m52810BE537AD7CE2DBEB3456A535158389F4F431,
	LightshipDatastore_Update_m620F805A7687767E8F9FD8E5FCFD104710A7E621,
	LightshipDatastore_HandleDatastoreCallback_mE2C313B2FFE7B891DC24ACD05C4414380DA04C4A,
	LightshipDatastore__handleDatastoreCallback_mAA4817C83C6C72545AA5F31DEA2DD88D034630DE,
	NULL,
	NULL,
	NULL,
	NULL,
	DatastoreCallback__ctor_m3EA348CEE4AC48FD118487A1995B83E3A8D111DF,
	DatastoreCallback_Invoke_m6AF57A1092CF15D75A0557F5614BEC1B3FA53BFE,
	DatastoreCallback_BeginInvoke_mEEA044D875517D5309FF7B2776A07DB2B1ED3A9E,
	DatastoreCallback_EndInvoke_m847E08432E5FB292F110CFCB53A20ACEBC1F8337,
	NativeApi_SetData_m4DF2523928C90707C9E5CF288370E3EA584B66FF,
	NativeApi_GetData_m7952652B40610F8B203FD058AF6FAF4B9CC208C5,
	NativeApi_DeleteData_mAC52816E72B4AED9A2FA4ABC4DA4A4480145B827,
	NativeApi_SetDatastoreCallback_m6BF37C9455AC53C152A822BC10D2547BC122696A,
	NativeApi__ctor_m0BE20EB9ECAE67F0FF7899A7DA7C52B7BB0D48E8,
	Native_SetData_m2FFAC4451A948E18985818C34BACF64378D22018,
	Native_GetData_m29C913EFD9B89B08CEE85223B0119B96B65567CC,
	Native_DeleteData_m9C72C58FDB461E84DFD56E07F3D5703C858568E8,
	Native_SetDatastoreCallback_m29BFC12213AFACE3AE69C54CA3F21BE923D8F920,
	ImageTargetColocalization__ctor_m8C554B7EC6B95DA60A4BC21908393DA29D6DCE26,
	ImageTargetColocalization_InitializeWithTrackingManager_mCE6DB3F8BFA5DE3677E3CC5A619D59C881607AF0,
	ImageTargetColocalization_Start_mCFAAC9B906502E103CFED901D44751CF1650086B,
	ImageTargetColocalization_Stop_m9FF8893CDAD14ED572581C9632E5565A3702A115,
	ImageTargetColocalization_get_AlignedSpaceOrigin_m2BD4B1A3FC66505A7D3B5B4F90DE4BD71688236A,
	ImageTargetColocalization_set_AlignedSpaceOrigin_mA0BAE50842190364E79472ED82DA21939B597D01,
	ImageTargetColocalization_add__stateUpdated_m683A8D92B94208474CDA41C22F071332B35181A5,
	ImageTargetColocalization_remove__stateUpdated_m970820324B484D8E75B3DDA1B68C70E60280ABB2,
	ImageTargetColocalization_add_ColocalizationStateUpdated_mD52166D315985F04060403E297139E355448AC4D,
	ImageTargetColocalization_remove_ColocalizationStateUpdated_mF39D0722705ADABEB2C9BE2147D2A99300001D37,
	ImageTargetColocalization_AlignedPoseToLocal_m5888DF6AC8F640960467A13C0C0AB09AECEFD1EF,
	ImageTargetColocalization_OnTrackingChanged_m9AAEC1DC1BA34162725F15E12C89CADDE4509BE9,
	ImageTargetColocalization_ConvertToWorldSpace_mD10001E7164C615279AC368D88DCC852247D111D,
	ImageTargetColocalization_InvokeStateUpdated_mD9435C6903CA21ED5B1EF9C316F9E1B9FE7E25A8,
	ColocalizationStateUpdatedArgs__ctor_m311BCB4870D41ACA1D1F00C992BD08FAA4A8878A,
	ColocalizationStateUpdatedArgs_get_State_mE2A966CC19375D5CFC4F07FFAA8D4A96DB7038FD,
	ColocalizationStateUpdatedArgs_set_State_m33F6BDE34D4711F45AAC7534F4D9802FDF732D07,
	ImageTrackingSharedAROrigin_Start_m68A6A827CA8F97E373651B77A56262E09947A6AF,
	ImageTrackingSharedAROrigin_OnDisable_m186288F227D23E8B3E1A1BB1CF68F10519CAE83B,
	ImageTrackingSharedAROrigin_Update_m9BA6B1B06EC5A90CB098C06B1C1A870F23AC85A8,
	ImageTrackingSharedAROrigin__ctor_mF321618FE749FD4629DA4779D75A6ED3DD3F3488,
	NULL,
	ISharedSpaceRoomOptions_CreateVpsRoomOptions_mD6A5143F5B13B8CA6D0EDB16E0860E30C688721C,
	ISharedSpaceRoomOptions_CreateLightshipRoomOptions_m16F93A620A0C72CE94BA6D06C6A5793BEF53B25B,
	ISharedSpaceRoomOptions_CreateCustomRoomOptions_m592954D5A1BAF88FF371FB250647FF73A13121F2,
	ISharedSpaceTrackingOptions_CreateVpsTrackingOptions_mD2AEC51D4557D23D8FEE17315EAB1A392AF08826,
	ISharedSpaceTrackingOptions_CreateVpsTrackingOptions_m75148DB45596CDF907FEC8E1E9FD83F8B005AA80,
	ISharedSpaceTrackingOptions_CreateImageTrackingOptions_mAE422FED8119E91A88085E9CF03920CD06352C82,
	ISharedSpaceTrackingOptions_CreateMockTrackingOptions_m6E71D9CCC215055A79D23E4CB0B971D8CBBE6B73,
	RuntimeImageLibrary_get_TrackingImageName_mD97412F7C0BBEE66AB8EA4E39741F3B603148A7F,
	RuntimeImageLibrary_set_TrackingImageName_mFC90557C0E3BD2089D3C849CF827DC303A5F0943,
	RuntimeImageLibrary_Start_m8C34801DEC197DA47D7484B7847CCABE3100581D,
	RuntimeImageLibrary_OnDisable_m8309D32DF785B3561AE9577C04021898BEE0D53A,
	RuntimeImageLibrary_OnArSessionStateChange_m858161353A3E96959D03843C93692871D8ADE36E,
	RuntimeImageLibrary_InitializeRuntimeImageLibrary_m381EB9F9E0A002EE02DFEFDB5D206C23F4AC6FB7,
	RuntimeImageLibrary_Update_m7495CE804EE93322B4838BE3B6C64BD5947E1D45,
	RuntimeImageLibrary__ctor_m43141FEE5BE0C9E7FC343E028209998219F079B2,
	SharedAROrigin__ctor_mA77FD921752479C5B6EB4F97B37397A15E54F15F,
	SharedSpaceCustomRoomOptions_get_Room_m2ED7E09697941D76D8595B4534111157E8F3BCCF,
	SharedSpaceCustomRoomOptions__ctor_mACAB533E9E091B0CD5F80FFDD8AA928D09DF39E8,
	SharedSpaceImageTrackingOptions__ctor_mBE3CB3F31BEA4FCD3D0AB897CCCF9C24E8551E98,
	SharedSpaceLightshipRoomOptions_get_Room_m46FECC9B89F042E80EC6BAAE7BAF9FD5490051A2,
	SharedSpaceLightshipRoomOptions_set_Room_mAA27B57CEA311B7DF9B05915F8C4F71EE828260A,
	SharedSpaceLightshipRoomOptions__ctor_m92D871E48F82C6E2250D4D4837FCD04BD6909300,
	SharedSpaceLightshipRoomOptions__ctor_m42958511A32AA6DB06FB440F596C4B769D33B1D4,
	SharedSpaceLightshipRoomOptions_PrepareRoom_m56FB2F99F99BB66728BE1D946A06E8584E8DA300,
	SharedSpaceManager_add_sharedSpaceManagerStateChanged_mE9DD4BABC924A44944CF0FE49018200DDBA03875,
	SharedSpaceManager_remove_sharedSpaceManagerStateChanged_mDFFCC7AFEFBB2230735020D4F84D9A69B61EF33B,
	SharedSpaceManager_get_SharedArOriginObject_mB59692BD6AE4DA175E73A120CC14AD19E5CE6F58,
	SharedSpaceManager_set_SharedArOriginObject_m656DE2A5DF0A04E3BBA5C8B8314817A50E10A870,
	SharedSpaceManager_GetColocalizationType_mEC137974E23758CC32B27BD301DCC75E42F4D1EE,
	SharedSpaceManager_get_SharedSpaceTrackingOptions_m9986D7AE4462711B7B45058FC9DD858A3414305E,
	SharedSpaceManager_set_SharedSpaceTrackingOptions_m27DD79F1F2012791FE27E8B051DC86B6A57D98C9,
	SharedSpaceManager_get_SharedSpaceRoomOptions_m4E827CED857E2DC57AB04DF32740E47E00B68BEA,
	SharedSpaceManager_set_SharedSpaceRoomOptions_m6E30055632033A4A82E90467EF21987814647C75,
	SharedSpaceManager_Awake_m175B9EEE6D0F174A2934E1657BFFB9DD1938A0FD,
	SharedSpaceManager_Start_m7D20C0BF330D6758D72944C068D27C474BDD6BDB,
	SharedSpaceManager_OnDestroy_m46AA0289BF9413043290B84629D1BDAF49EC6683,
	SharedSpaceManager_StartSharedSpace_m1C652BD9783377DF726F4B6DE4C5D6110395026E,
	SharedSpaceManager_OnARLocationStateChanged_mEA66C2D95386796E98055FC0A2F311A62D3493FF,
	SharedSpaceManager_OnImageTrackingColocalizationStateUpdated_m602C863579DAEC34E03F3015F7DDC771BB609CF7,
	NULL,
	SharedSpaceManager__ctor_m5A0E1C38885613D95A654A49A7C36D09044EE12C,
	NULL,
	NULL,
	NULL,
	SharedSpaceMockTrackingOptions__ctor_m126CA126AB9D8EAD86EEE3987B84C3AE337A496D,
	SharedSpaceVpsTrackingOptions_get__arLocationCreated_mA6AB4FB0B40D036E5CD615403683A7CF6E6811D9,
	SharedSpaceVpsTrackingOptions_set__arLocationCreated_mF86FD9510C04D6F890DAF69ED8483D6C73F64916,
	SharedSpaceVpsTrackingOptions__ctor_mC7D848B91701934547AD15F67B72925CB20BC806,
	SharedSpaceVpsTrackingOptions__ctor_mD41748912912F3C979C04EFDECFF104F2006BBA5,
};
extern void GetOrCreateRoomAsyncTaskResult_get_RoomId_m1FAE164BCE27FFC4206F19F95EBBF05BC9B0A5D0_AdjustorThunk (void);
extern void GetOrCreateRoomAsyncTaskResult__ctor_m840058D29140F5E4A54266FA3288440314A75718_AdjustorThunk (void);
extern void U3CGetOrCreateRoomAsyncU3Ed__22_MoveNext_m063F0F3F9E0CF9D6555253B6FAC81B902F4484D4_AdjustorThunk (void);
extern void U3CGetOrCreateRoomAsyncU3Ed__22_SetStateMachine_m3FF3234345478195B2E93752D193EB9D9252BA0A_AdjustorThunk (void);
extern void RoomParams_get_RoomID_m99535DFF66305820B52BEBC17482F04757AF5F55_AdjustorThunk (void);
extern void RoomParams_set_RoomID_m3E445600CFA6F875A048D3527376CBFA77D7FE11_AdjustorThunk (void);
extern void RoomParams_get_Visibility_m3586D17761F982BA9A36A21FD44EBD96FC9EF6B3_AdjustorThunk (void);
extern void RoomParams_set_Visibility_m06F6EC05CABC6939F59CD71B622E4F50EDAF6EB7_AdjustorThunk (void);
extern void RoomParams_get_Capacity_mFCE18DA57BDEE644DD741D30E7410127DE68CF84_AdjustorThunk (void);
extern void RoomParams_set_Capacity_m79DB879724AE609678B6FAFDC99F3384C7176B85_AdjustorThunk (void);
extern void RoomParams_get_Name_m94B870ABD1CBF93A26093793F21E783059F8EFBE_AdjustorThunk (void);
extern void RoomParams_set_Name_m3BFEC9FABA63F8D1454BB94E82B5D781684BB746_AdjustorThunk (void);
extern void RoomParams_get_ExperienceId_m94C28BE43DA043DB9286B0A8134B3A20949FA13D_AdjustorThunk (void);
extern void RoomParams_set_ExperienceId_m0C6327CDBA10F3558E95A69E7252DB004AA43C37_AdjustorThunk (void);
extern void RoomParams_get_Description_m835C256631025EA2801207491DE7342F1D2A1404_AdjustorThunk (void);
extern void RoomParams_set_Description_m7B4A2F299E10B0F5564B2B1CA67E065045135013_AdjustorThunk (void);
extern void RoomParams_get_Passcode_mB582DEA0B58860DEFA8E74AD3B696A7FE538C8B8_AdjustorThunk (void);
extern void RoomParams_set_Passcode_mD58EE28A0B86D33D01B41E1C28667CEE02B88893_AdjustorThunk (void);
extern void RoomParams_get_Endpoint_mB83B4513D0B6A7243D3417D23119CF1D93930B73_AdjustorThunk (void);
extern void RoomParams_set_Endpoint_m09BC3BE2332856792495554FFDFC3BB105D192E1_AdjustorThunk (void);
extern void RoomParams__ctor_m48B595306679851DE9F5F5B597AC1936DE759FFB_AdjustorThunk (void);
extern void RoomParams__ctor_m5DDB8F17C6110BC1B612D19CDC289E274019D381_AdjustorThunk (void);
extern void RoomParams__ctor_mC0520AAF0D81F1C1C746EE5340B8DF187E9D475C_AdjustorThunk (void);
extern void U3CCreateRoomAsyncU3Ed__16_MoveNext_m5E823496CF5D88202FFD0244454FA84D4289BB90_AdjustorThunk (void);
extern void U3CCreateRoomAsyncU3Ed__16_SetStateMachine_m74EDA2945523E3255E08AF07D94D8475504E849E_AdjustorThunk (void);
extern void U3CGetRoomsForExperienceAsyncU3Ed__17_MoveNext_m59B273C332618C00A9D9AA1B6B5FF1FB9F54B80A_AdjustorThunk (void);
extern void U3CGetRoomsForExperienceAsyncU3Ed__17_SetStateMachine_mF4E9D76AC29CF93E2DC7CF0798C377A6FBF23E63_AdjustorThunk (void);
extern void U3CSendWebRequestAsyncU3Ed__20_MoveNext_mF1BC634A785387A07528267967515E4137E966F3_AdjustorThunk (void);
extern void U3CSendWebRequestAsyncU3Ed__20_SetStateMachine_m3F57B043E63DA8FE8FBC7942C07F8605CAA848EA_AdjustorThunk (void);
extern void NetworkEventArgs_get_networkEvent_mA1BE9B63147714FC77569A8E938859832ECED70B_AdjustorThunk (void);
extern void NetworkEventArgs_set_networkEvent_m34062446A4455AAC438F735E07A18CBAD5F8F0B3_AdjustorThunk (void);
extern void NetworkEventArgs_get_errorCode_mA7937D1CFF090A4478030893254CB5342DEB051A_AdjustorThunk (void);
extern void NetworkEventArgs_set_errorCode_mF5A56EB733C263E0A55C75233A5953F2B08CE02B_AdjustorThunk (void);
extern void NetworkEventArgs__ctor_m3FF0E5BF0FB5F6CC19F30C8AE7A881A23418562D_AdjustorThunk (void);
extern void PeerIDArgs_get_PeerID_mA8FE27DF03CB61BCD338069860B3239B5581A148_AdjustorThunk (void);
extern void PeerIDArgs_set_PeerID_m54E45AC72F75706CD617EC02559CF1BDB3957A41_AdjustorThunk (void);
extern void PeerIDArgs__ctor_m8514FE4CFAC7E401D9CE4C98994E9A46574A00A2_AdjustorThunk (void);
extern void DataReceivedArgs_get_PeerID_mC05DBFCC023F68EB35319D025A9CA4ADFDDD354B_AdjustorThunk (void);
extern void DataReceivedArgs_set_PeerID_mC2524B7ECE4725E934F3745B4D34D9C3A12DD713_AdjustorThunk (void);
extern void DataReceivedArgs_get_Tag_m13DE57EB0B6DC96A10F64A7B5184C5CC74CB5442_AdjustorThunk (void);
extern void DataReceivedArgs_set_Tag_m9A2203F720D56ABCD008AA611C54A0E76670ADFD_AdjustorThunk (void);
extern void DataReceivedArgs_get_DataLength_mE31583C6A2F1292F3A6C2592F6E05E816A524DD8_AdjustorThunk (void);
extern void DataReceivedArgs__ctor_mF99243FAAA78F1FE534B5E47781D4D457BE40F41_AdjustorThunk (void);
extern void DataReceivedArgs_CreateDataReader_m442AFFC841C59DC7461E29FC36FD7DDE1602D8F3_AdjustorThunk (void);
extern void DataReceivedArgs_CopyData_m154A000CD998EC3F5A4EBB09681815538796B9FE_AdjustorThunk (void);
extern void PeerID__ctor_mB8B65823D23F53BB0D9EB56A92911FEC5D65C98B_AdjustorThunk (void);
extern void PeerID_get_Identifier_m942B378CFC91E9F133E6018E46D96CDF70873662_AdjustorThunk (void);
extern void PeerID_ToUint32_m9D6CACCABBA90D8AB7E108382865734D6EE23AB0_AdjustorThunk (void);
extern void PeerID_Equals_m2333D269A229489B896D7E086E7A38ADFFFA259D_AdjustorThunk (void);
extern void PeerID_GetHashCode_mB032CBA309B57C743ADBC8399C2F6FEA915DD552_AdjustorThunk (void);
extern void PeerID_ToString_m500D528E00E6DF96EB45D1C2C0FA5556447BD0BF_AdjustorThunk (void);
extern void DatastoreCallbackArgs_get_OperationType_mB20BA8D6CF470B187FC5CD4EDF9C18E4BB0C7571_AdjustorThunk (void);
extern void DatastoreCallbackArgs_set_OperationType_m81FE8A5EF3CE13FEEB41DB7680C343BA29BA3F12_AdjustorThunk (void);
extern void DatastoreCallbackArgs_get_Result_m9F094E54F50602D45BB0202739C047A35D810B0B_AdjustorThunk (void);
extern void DatastoreCallbackArgs_set_Result_mB574552DFE15B47DCA3E26B737B99FE369C804BC_AdjustorThunk (void);
extern void DatastoreCallbackArgs_get_RequestId_mADE13C6E8C8D547FA6F60C0881D032474D296499_AdjustorThunk (void);
extern void DatastoreCallbackArgs_set_RequestId_m29E39098E96291CE0135FC77699586A4DDA80487_AdjustorThunk (void);
extern void DatastoreCallbackArgs_get_Key_m2BAB3F3F2A28D0A52BFAAEC85B304A774ED4C97E_AdjustorThunk (void);
extern void DatastoreCallbackArgs_set_Key_mB8BCE91AAB5CFBDCDF4C968C831C889809A991F4_AdjustorThunk (void);
extern void DatastoreCallbackArgs_get_Value_mE4F4C6CEE70C0FF0B6295020B168EB4C55FE2AA0_AdjustorThunk (void);
extern void DatastoreCallbackArgs_set_Value_m1F376030748C3C514A666687E49103913906DC60_AdjustorThunk (void);
extern void DatastoreCallbackArgs_get_Version_m49089D600AD70409365A9D1DE4F9C228B6D11DEB_AdjustorThunk (void);
extern void DatastoreCallbackArgs_set_Version_m1C6EA6D2664E6B7608B6695BC923201E076CA0C5_AdjustorThunk (void);
extern void DatastoreCallbackArgs__ctor_m076BEF31F075241EB8CF3AF3909F28854B078A22_AdjustorThunk (void);
extern void ColocalizationStateUpdatedArgs__ctor_m311BCB4870D41ACA1D1F00C992BD08FAA4A8878A_AdjustorThunk (void);
extern void ColocalizationStateUpdatedArgs_get_State_mE2A966CC19375D5CFC4F07FFAA8D4A96DB7038FD_AdjustorThunk (void);
extern void ColocalizationStateUpdatedArgs_set_State_m33F6BDE34D4711F45AAC7534F4D9802FDF732D07_AdjustorThunk (void);
static Il2CppTokenAdjustorThunkPair s_adjustorThunks[67] = 
{
	{ 0x06000037, GetOrCreateRoomAsyncTaskResult_get_RoomId_m1FAE164BCE27FFC4206F19F95EBBF05BC9B0A5D0_AdjustorThunk },
	{ 0x06000038, GetOrCreateRoomAsyncTaskResult__ctor_m840058D29140F5E4A54266FA3288440314A75718_AdjustorThunk },
	{ 0x0600003D, U3CGetOrCreateRoomAsyncU3Ed__22_MoveNext_m063F0F3F9E0CF9D6555253B6FAC81B902F4484D4_AdjustorThunk },
	{ 0x0600003E, U3CGetOrCreateRoomAsyncU3Ed__22_SetStateMachine_m3FF3234345478195B2E93752D193EB9D9252BA0A_AdjustorThunk },
	{ 0x0600003F, RoomParams_get_RoomID_m99535DFF66305820B52BEBC17482F04757AF5F55_AdjustorThunk },
	{ 0x06000040, RoomParams_set_RoomID_m3E445600CFA6F875A048D3527376CBFA77D7FE11_AdjustorThunk },
	{ 0x06000041, RoomParams_get_Visibility_m3586D17761F982BA9A36A21FD44EBD96FC9EF6B3_AdjustorThunk },
	{ 0x06000042, RoomParams_set_Visibility_m06F6EC05CABC6939F59CD71B622E4F50EDAF6EB7_AdjustorThunk },
	{ 0x06000043, RoomParams_get_Capacity_mFCE18DA57BDEE644DD741D30E7410127DE68CF84_AdjustorThunk },
	{ 0x06000044, RoomParams_set_Capacity_m79DB879724AE609678B6FAFDC99F3384C7176B85_AdjustorThunk },
	{ 0x06000045, RoomParams_get_Name_m94B870ABD1CBF93A26093793F21E783059F8EFBE_AdjustorThunk },
	{ 0x06000046, RoomParams_set_Name_m3BFEC9FABA63F8D1454BB94E82B5D781684BB746_AdjustorThunk },
	{ 0x06000047, RoomParams_get_ExperienceId_m94C28BE43DA043DB9286B0A8134B3A20949FA13D_AdjustorThunk },
	{ 0x06000048, RoomParams_set_ExperienceId_m0C6327CDBA10F3558E95A69E7252DB004AA43C37_AdjustorThunk },
	{ 0x06000049, RoomParams_get_Description_m835C256631025EA2801207491DE7342F1D2A1404_AdjustorThunk },
	{ 0x0600004A, RoomParams_set_Description_m7B4A2F299E10B0F5564B2B1CA67E065045135013_AdjustorThunk },
	{ 0x0600004B, RoomParams_get_Passcode_mB582DEA0B58860DEFA8E74AD3B696A7FE538C8B8_AdjustorThunk },
	{ 0x0600004C, RoomParams_set_Passcode_mD58EE28A0B86D33D01B41E1C28667CEE02B88893_AdjustorThunk },
	{ 0x0600004D, RoomParams_get_Endpoint_mB83B4513D0B6A7243D3417D23119CF1D93930B73_AdjustorThunk },
	{ 0x0600004E, RoomParams_set_Endpoint_m09BC3BE2332856792495554FFDFC3BB105D192E1_AdjustorThunk },
	{ 0x0600004F, RoomParams__ctor_m48B595306679851DE9F5F5B597AC1936DE759FFB_AdjustorThunk },
	{ 0x06000050, RoomParams__ctor_m5DDB8F17C6110BC1B612D19CDC289E274019D381_AdjustorThunk },
	{ 0x06000051, RoomParams__ctor_mC0520AAF0D81F1C1C746EE5340B8DF187E9D475C_AdjustorThunk },
	{ 0x06000069, U3CCreateRoomAsyncU3Ed__16_MoveNext_m5E823496CF5D88202FFD0244454FA84D4289BB90_AdjustorThunk },
	{ 0x0600006A, U3CCreateRoomAsyncU3Ed__16_SetStateMachine_m74EDA2945523E3255E08AF07D94D8475504E849E_AdjustorThunk },
	{ 0x0600006B, U3CGetRoomsForExperienceAsyncU3Ed__17_MoveNext_m59B273C332618C00A9D9AA1B6B5FF1FB9F54B80A_AdjustorThunk },
	{ 0x0600006C, U3CGetRoomsForExperienceAsyncU3Ed__17_SetStateMachine_mF4E9D76AC29CF93E2DC7CF0798C377A6FBF23E63_AdjustorThunk },
	{ 0x0600006D, U3CSendWebRequestAsyncU3Ed__20_MoveNext_mF1BC634A785387A07528267967515E4137E966F3_AdjustorThunk },
	{ 0x0600006E, U3CSendWebRequestAsyncU3Ed__20_SetStateMachine_m3F57B043E63DA8FE8FBC7942C07F8605CAA848EA_AdjustorThunk },
	{ 0x0600006F, NetworkEventArgs_get_networkEvent_mA1BE9B63147714FC77569A8E938859832ECED70B_AdjustorThunk },
	{ 0x06000070, NetworkEventArgs_set_networkEvent_m34062446A4455AAC438F735E07A18CBAD5F8F0B3_AdjustorThunk },
	{ 0x06000071, NetworkEventArgs_get_errorCode_mA7937D1CFF090A4478030893254CB5342DEB051A_AdjustorThunk },
	{ 0x06000072, NetworkEventArgs_set_errorCode_mF5A56EB733C263E0A55C75233A5953F2B08CE02B_AdjustorThunk },
	{ 0x06000073, NetworkEventArgs__ctor_m3FF0E5BF0FB5F6CC19F30C8AE7A881A23418562D_AdjustorThunk },
	{ 0x06000074, PeerIDArgs_get_PeerID_mA8FE27DF03CB61BCD338069860B3239B5581A148_AdjustorThunk },
	{ 0x06000075, PeerIDArgs_set_PeerID_m54E45AC72F75706CD617EC02559CF1BDB3957A41_AdjustorThunk },
	{ 0x06000076, PeerIDArgs__ctor_m8514FE4CFAC7E401D9CE4C98994E9A46574A00A2_AdjustorThunk },
	{ 0x06000077, DataReceivedArgs_get_PeerID_mC05DBFCC023F68EB35319D025A9CA4ADFDDD354B_AdjustorThunk },
	{ 0x06000078, DataReceivedArgs_set_PeerID_mC2524B7ECE4725E934F3745B4D34D9C3A12DD713_AdjustorThunk },
	{ 0x06000079, DataReceivedArgs_get_Tag_m13DE57EB0B6DC96A10F64A7B5184C5CC74CB5442_AdjustorThunk },
	{ 0x0600007A, DataReceivedArgs_set_Tag_m9A2203F720D56ABCD008AA611C54A0E76670ADFD_AdjustorThunk },
	{ 0x0600007B, DataReceivedArgs_get_DataLength_mE31583C6A2F1292F3A6C2592F6E05E816A524DD8_AdjustorThunk },
	{ 0x0600007C, DataReceivedArgs__ctor_mF99243FAAA78F1FE534B5E47781D4D457BE40F41_AdjustorThunk },
	{ 0x0600007D, DataReceivedArgs_CreateDataReader_m442AFFC841C59DC7461E29FC36FD7DDE1602D8F3_AdjustorThunk },
	{ 0x0600007E, DataReceivedArgs_CopyData_m154A000CD998EC3F5A4EBB09681815538796B9FE_AdjustorThunk },
	{ 0x060000A8, PeerID__ctor_mB8B65823D23F53BB0D9EB56A92911FEC5D65C98B_AdjustorThunk },
	{ 0x060000A9, PeerID_get_Identifier_m942B378CFC91E9F133E6018E46D96CDF70873662_AdjustorThunk },
	{ 0x060000AA, PeerID_ToUint32_m9D6CACCABBA90D8AB7E108382865734D6EE23AB0_AdjustorThunk },
	{ 0x060000AB, PeerID_Equals_m2333D269A229489B896D7E086E7A38ADFFFA259D_AdjustorThunk },
	{ 0x060000AC, PeerID_GetHashCode_mB032CBA309B57C743ADBC8399C2F6FEA915DD552_AdjustorThunk },
	{ 0x060000AD, PeerID_ToString_m500D528E00E6DF96EB45D1C2C0FA5556447BD0BF_AdjustorThunk },
	{ 0x0600010C, DatastoreCallbackArgs_get_OperationType_mB20BA8D6CF470B187FC5CD4EDF9C18E4BB0C7571_AdjustorThunk },
	{ 0x0600010D, DatastoreCallbackArgs_set_OperationType_m81FE8A5EF3CE13FEEB41DB7680C343BA29BA3F12_AdjustorThunk },
	{ 0x0600010E, DatastoreCallbackArgs_get_Result_m9F094E54F50602D45BB0202739C047A35D810B0B_AdjustorThunk },
	{ 0x0600010F, DatastoreCallbackArgs_set_Result_mB574552DFE15B47DCA3E26B737B99FE369C804BC_AdjustorThunk },
	{ 0x06000110, DatastoreCallbackArgs_get_RequestId_mADE13C6E8C8D547FA6F60C0881D032474D296499_AdjustorThunk },
	{ 0x06000111, DatastoreCallbackArgs_set_RequestId_m29E39098E96291CE0135FC77699586A4DDA80487_AdjustorThunk },
	{ 0x06000112, DatastoreCallbackArgs_get_Key_m2BAB3F3F2A28D0A52BFAAEC85B304A774ED4C97E_AdjustorThunk },
	{ 0x06000113, DatastoreCallbackArgs_set_Key_mB8BCE91AAB5CFBDCDF4C968C831C889809A991F4_AdjustorThunk },
	{ 0x06000114, DatastoreCallbackArgs_get_Value_mE4F4C6CEE70C0FF0B6295020B168EB4C55FE2AA0_AdjustorThunk },
	{ 0x06000115, DatastoreCallbackArgs_set_Value_m1F376030748C3C514A666687E49103913906DC60_AdjustorThunk },
	{ 0x06000116, DatastoreCallbackArgs_get_Version_m49089D600AD70409365A9D1DE4F9C228B6D11DEB_AdjustorThunk },
	{ 0x06000117, DatastoreCallbackArgs_set_Version_m1C6EA6D2664E6B7608B6695BC923201E076CA0C5_AdjustorThunk },
	{ 0x06000118, DatastoreCallbackArgs__ctor_m076BEF31F075241EB8CF3AF3909F28854B078A22_AdjustorThunk },
	{ 0x0600014A, ColocalizationStateUpdatedArgs__ctor_m311BCB4870D41ACA1D1F00C992BD08FAA4A8878A_AdjustorThunk },
	{ 0x0600014B, ColocalizationStateUpdatedArgs_get_State_mE2A966CC19375D5CFC4F07FFAA8D4A96DB7038FD_AdjustorThunk },
	{ 0x0600014C, ColocalizationStateUpdatedArgs_set_State_m33F6BDE34D4711F45AAC7534F4D9802FDF732D07_AdjustorThunk },
};
static const int32_t s_InvokerIndices[386] = 
{
	17043,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	7762,
	9672,
	7762,
	9628,
	7717,
	9628,
	7717,
	9763,
	9763,
	9763,
	9763,
	7717,
	15686,
	15686,
	9628,
	9582,
	5457,
	5457,
	17043,
	16993,
	16090,
	17043,
	14304,
	17043,
	13620,
	13609,
	15485,
	13609,
	13609,
	15465,
	13620,
	12954,
	11790,
	12394,
	10367,
	4176,
	3840,
	1204,
	7717,
	9628,
	3840,
	4176,
	2126,
	616,
	7717,
	9763,
	7717,
	9628,
	7717,
	9499,
	7585,
	9582,
	7673,
	9628,
	7717,
	9628,
	7717,
	9628,
	7717,
	9628,
	7717,
	9628,
	7717,
	673,
	4161,
	154,
	15766,
	2081,
	4382,
	4384,
	4383,
	4309,
	9763,
	6817,
	6818,
	9763,
	17043,
	2081,
	4382,
	4384,
	4383,
	4309,
	9763,
	6817,
	6818,
	1797,
	3204,
	9763,
	17043,
	9763,
	7717,
	9763,
	7717,
	9763,
	7717,
	9499,
	7585,
	9748,
	7824,
	3467,
	9634,
	7723,
	7723,
	9634,
	7723,
	9748,
	7824,
	9582,
	2102,
	9628,
	9628,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	9584,
	9628,
	7717,
	7717,
	7717,
	7717,
	7717,
	7717,
	7717,
	7717,
	7717,
	2081,
	1455,
	9499,
	9763,
	2098,
	9499,
	9634,
	9628,
	9763,
	9763,
	9763,
	9763,
	12786,
	14211,
	14211,
	11013,
	7824,
	9561,
	9748,
	5462,
	9582,
	9628,
	17043,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	4176,
	2016,
	591,
	7717,
	4176,
	4117,
	1207,
	7717,
	4176,
	685,
	198,
	7717,
	1759,
	7675,
	7675,
	7675,
	684,
	5415,
	7017,
	1846,
	2018,
	2018,
	2018,
	2018,
	12322,
	16086,
	16086,
	16086,
	10368,
	15314,
	15946,
	12485,
	12803,
	12803,
	12803,
	12803,
	9763,
	9908,
	9763,
	2130,
	1706,
	1356,
	7717,
	9763,
	9499,
	9499,
	9689,
	7825,
	9763,
	7025,
	9763,
	7717,
	9763,
	9763,
	7711,
	7724,
	7724,
	7611,
	9749,
	9748,
	9763,
	10386,
	9763,
	9763,
	9763,
	9763,
	9763,
	9628,
	7588,
	7825,
	9763,
	9763,
	17043,
	12894,
	12894,
	9628,
	9763,
	9763,
	9763,
	9763,
	9628,
	9499,
	7585,
	9499,
	7585,
	9748,
	7824,
	9628,
	7717,
	9628,
	7717,
	9748,
	7824,
	319,
	0,
	0,
	0,
	0,
	0,
	9584,
	7717,
	7717,
	7675,
	4116,
	9763,
	9499,
	2124,
	4273,
	4273,
	9763,
	319,
	10151,
	0,
	0,
	0,
	0,
	4176,
	146,
	43,
	7717,
	683,
	2021,
	2021,
	2018,
	9763,
	11011,
	12811,
	12811,
	12803,
	4181,
	4181,
	9763,
	9763,
	9606,
	7694,
	7717,
	7717,
	7717,
	7717,
	2466,
	7561,
	6713,
	7673,
	7673,
	9582,
	7673,
	9763,
	9763,
	9763,
	9763,
	0,
	10782,
	11603,
	16993,
	15686,
	15686,
	13768,
	16993,
	9628,
	7717,
	9763,
	9763,
	7557,
	9763,
	9763,
	9763,
	9763,
	9628,
	9763,
	4188,
	9628,
	7717,
	1422,
	719,
	9763,
	7717,
	7717,
	9628,
	7717,
	9582,
	9628,
	7717,
	9628,
	7717,
	9763,
	9763,
	9763,
	4181,
	7544,
	7991,
	0,
	9763,
	0,
	0,
	0,
	9763,
	9499,
	7585,
	7717,
	7717,
};
static const Il2CppTokenIndexMethodTuple s_reversePInvokeIndices[6] = 
{
	{ 0x0600002F, 42,  (void**)&RoomManagementService_StaticGetOrCreateRoomCallback_m2A100A37156064354EA9E7F320F8F31C3DDBEA6F_RuntimeMethod_var, 0 },
	{ 0x060000A4, 17,  (void**)&LightshipNetworking__networkEventReceivedNative_m634E52EACF05D2C5EE8A1404531486AEC55C27E6_RuntimeMethod_var, 0 },
	{ 0x060000A5, 15,  (void**)&LightshipNetworking__didAddPeerNative_m8067BF2FC04846D632CEBCF6A2DC33CF2E691B01_RuntimeMethod_var, 0 },
	{ 0x060000A6, 16,  (void**)&LightshipNetworking__didRemovePeerNative_m9BBF6A906DD5EF11529086865FFB883397E7976C_RuntimeMethod_var, 0 },
	{ 0x060000A7, 14,  (void**)&LightshipNetworking__dataReceivedNative_m00BC3A1BFF879E0061D7F99195E0068E2C4F38BD_RuntimeMethod_var, 0 },
	{ 0x0600012A, 13,  (void**)&LightshipDatastore__handleDatastoreCallback_mAA4817C83C6C72545AA5F31DEA2DD88D034630DE_RuntimeMethod_var, 0 },
};
static const Il2CppTokenRangePair s_rgctxIndices[2] = 
{
	{ 0x0200004C, { 3, 3 } },
	{ 0x06000179, { 0, 3 } },
};
extern const uint32_t g_rgctx_U3CU3Ec__32_1_t73B1AD492849451D6F9F4FC4EFFC8EE1A6FB509B;
extern const uint32_t g_rgctx_U3CU3Ec__32_1_U3CMakeOriginAndAddU3Eb__32_0_m5DCEBCA38F085A70433A644DE1404A90DB750CAC;
extern const uint32_t g_rgctx_GameObject_AddComponent_TisT_t8472DE8C7469CACE2D7440A25BEB125C80CCD962_m49E3159E35233437FBD1E55EE711C12153148458;
extern const uint32_t g_rgctx_U3CU3Ec__32_1_t4A1E2FFBE42A60DE15CF7C5CBD78C3ED260403E4;
extern const uint32_t g_rgctx_U3CU3Ec__32_1__ctor_m7CDE62D07FDA7D1454D6195EA32F06046C075CC5;
extern const uint32_t g_rgctx_U3CU3Ec__32_1_t4A1E2FFBE42A60DE15CF7C5CBD78C3ED260403E4;
static const Il2CppRGCTXDefinition s_rgctxValues[6] = 
{
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_U3CU3Ec__32_1_t73B1AD492849451D6F9F4FC4EFFC8EE1A6FB509B },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_U3CU3Ec__32_1_U3CMakeOriginAndAddU3Eb__32_0_m5DCEBCA38F085A70433A644DE1404A90DB750CAC },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_GameObject_AddComponent_TisT_t8472DE8C7469CACE2D7440A25BEB125C80CCD962_m49E3159E35233437FBD1E55EE711C12153148458 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_U3CU3Ec__32_1_t4A1E2FFBE42A60DE15CF7C5CBD78C3ED260403E4 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_U3CU3Ec__32_1__ctor_m7CDE62D07FDA7D1454D6195EA32F06046C075CC5 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_U3CU3Ec__32_1_t4A1E2FFBE42A60DE15CF7C5CBD78C3ED260403E4 },
};
IL2CPP_EXTERN_C const Il2CppCodeGenModule g_Niantic_Lightship_SharedAR_CodeGenModule;
const Il2CppCodeGenModule g_Niantic_Lightship_SharedAR_CodeGenModule = 
{
	"Niantic.Lightship.SharedAR.dll",
	386,
	s_methodPointers,
	67,
	s_adjustorThunks,
	s_InvokerIndices,
	6,
	s_reversePInvokeIndices,
	2,
	s_rgctxIndices,
	6,
	s_rgctxValues,
	NULL,
	U3CModuleU3E__cctor_m37EB60C8B311A5C89A2CC8A0488756D876CF1510, // module initializer,
	NULL,
	NULL,
	NULL,
};
