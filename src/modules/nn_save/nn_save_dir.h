#pragma once
#include <string>
#include "nn_save_core.h"
#include "filesystem/filesystem_path.h"
#include "modules/coreinit/coreinit_fs.h"

SaveStatus
SAVEInitSaveDir(uint8_t userID);

SaveStatus
SAVEGetSharedDataTitlePath(uint64_t titleID,
                           const char *dir,
                           char *buffer,
                           uint32_t bufferSize);

SaveStatus
SAVEGetSharedSaveDataPath(uint64_t titleID,
                          const char *dir,
                          char *buffer,
                          uint32_t bufferSize);

FSStatus
SAVEMakeDir(FSClient *client,
            FSCmdBlock *block,
            uint8_t accountSlotNo,
            const char *path,
            uint32_t flags);

FSStatus
SAVEMakeDirAsync(FSClient *client,
                 FSCmdBlock *block,
                 uint8_t accountSlotNo,
                 const char *path,
                 uint32_t flags,
                 FSAsyncData *asyncData);

namespace nn_save
{

namespace internal
{

fs::Path
getSaveDirectory(uint32_t account);

fs::Path
getSavePath(uint32_t account, const char *path);

} // namespace internal

} // namespace nn_save