#ifndef IOS_USR_CFG_ENUM_H
#define IOS_USR_CFG_ENUM_H

#include <common/enum_start.h>

ENUM_NAMESPACE_BEG(ios)

ENUM_NAMESPACE_BEG(dev)

ENUM_NAMESPACE_BEG(usr_cfg)

ENUM_BEG(UCCommand, uint32_t)
   ENUM_VALUE(ReadSysConfig,        0x30)
   ENUM_VALUE(WriteSysConfig,       0x31)
ENUM_END(UCCommand)

ENUM_BEG(UCDataType, uint32_t)
   ENUM_VALUE(Undefined,            0x00)
   ENUM_VALUE(UnsignedByte,         0x01)
   ENUM_VALUE(UnsignedShort,        0x02)
   ENUM_VALUE(UnsignedInt,          0x03)
   ENUM_VALUE(SignedInt,            0x04)
   ENUM_VALUE(Float,                0x05)
   ENUM_VALUE(String,               0x06)
   ENUM_VALUE(HexBinary,            0x07)
   ENUM_VALUE(Complex,              0x08)
   ENUM_VALUE(Invalid,              0xFF)
ENUM_END(UCDataType)

ENUM_BEG(UCError, int32_t)
   ENUM_VALUE(OK,                   0)
   ENUM_VALUE(Error,                1)
   ENUM_VALUE(Other,                -0x200001)
   ENUM_VALUE(System,               -0x200002)
   ENUM_VALUE(Alloc,                -0x200003)
   ENUM_VALUE(Opcode,               -0x200004)
   ENUM_VALUE(InvalidParam,         -0x200005)
   ENUM_VALUE(InvalidType,          -0x200006)
   ENUM_VALUE(Unsupported,          -0x200007)
   ENUM_VALUE(NonLeafNode,          -0x200008)
   ENUM_VALUE(KeyNotFound,          -0x200009)
   ENUM_VALUE(Modify,               -0x20000A)
   ENUM_VALUE(StringTooLong,        -0x20000B)
   ENUM_VALUE(RootKeysDiffer,       -0x20000C)
   ENUM_VALUE(InvalidLocation,      -0x20000D)
   ENUM_VALUE(BadComment,           -0x20000E)
   ENUM_VALUE(ReadAccess,           -0x20000F)
   ENUM_VALUE(WriteAccess,          -0x200010)
   ENUM_VALUE(CreateAccess,         -0x200011)
   ENUM_VALUE(FileSysName,          -0x200012)
   ENUM_VALUE(FileSysInit,          -0x200013)
   ENUM_VALUE(FileSysMount,         -0x200014)
   ENUM_VALUE(FileOpen,             -0x200015)
   ENUM_VALUE(FileStat,             -0x200016)
   ENUM_VALUE(FileRead,             -0x200017)
   ENUM_VALUE(FileWrite,            -0x200018)
   ENUM_VALUE(FileTooBig,           -0x200019)
   ENUM_VALUE(FileRemove,           -0x20001A)
   ENUM_VALUE(FileRename,           -0x20001B)
   ENUM_VALUE(FileClose,            -0x20001C)
   ENUM_VALUE(FileSeek,             -0x20001D)
   ENUM_VALUE(FileConfirm,          -0x20001E)
   ENUM_VALUE(FileBackup,           -0x20001F)
   ENUM_VALUE(MalformedXML,         -0x200020)
   ENUM_VALUE(Version,              -0x200021)
   ENUM_VALUE(NoIPCBuffers,         -0x200022)
   ENUM_VALUE(FileLockNeeded,       -0x200024)
   ENUM_VALUE(SysProt,              -0x200028)
ENUM_END(UCError)

ENUM_NAMESPACE_END(usr_cfg)

ENUM_NAMESPACE_END(dev)

ENUM_NAMESPACE_END(ios)

#include <common/enum_end.h>

#endif // ifdef IOS_USR_CFG_ENUM_H
