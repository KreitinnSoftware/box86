#if !(defined(GO) && defined(GOM) && defined(GO2) && defined(DATA))
#error Meh....
#endif

GO(GetExecutionEnvironment, pFp)
//GO(libVersionPoint, 
//GO(LL_MaxInt, 
//GO(LL_MaxUint, 
//GO(LL_MinInt, 
//GO(LL_Zero, 
//GO(PR_Abort, 
//GO(PR_Accept, 
//GO(PR_AcceptRead, 
//GO(PR_Access, 
//GO(PR_AddToCounter, 
//GO(PR_AddWaitFileDesc, 
//GO(PR_AllocFileDesc, 
//GO(PR_Assert, 
GO(PR_AssertCurrentThreadInMonitor, vFp)
GO(PR_AssertCurrentThreadOwnsLock, vFp)
//GO(PR_AtomicAdd, 
//GO(PR_AtomicDecrement, 
//GO(PR_AtomicIncrement, 
//GO(PR_AtomicSet, 
//GO(PR_AttachSharedMemory, 
GO(PR_AttachThread, pFiip)
//GO(PR_Available, 
//GO(PR_Available64, 
//GO(PR_Bind, 
//GO(PR_BlockClockInterrupts, 
GO(PR_BlockInterrupt, vFv)
//GO(PR_Calloc, 
//GO(PR_CallOnce, 
GOM(PR_CallOnceWithArg, iFEppp)
//GO(PR_CancelJob, 
//GO(PR_CancelWaitFileDesc, 
//GO(PR_CancelWaitGroup, 
//GO(PR_CeilingLog2, 
//GO(PR_CEnterMonitor, 
//GO(PR_CExitMonitor, 
//GO(PR_ChangeFileDescNativeHandle, 
//GO(PR_Cleanup, 
GO(PR_ClearInterrupt, vFv)
GO(PR_ClearThreadGCAble, vFv)
GO(PR_Close, iFp)
//GO(PR_CloseDir, 
//GO(PR_CloseFileMap, 
GO(PR_CloseSemaphore, iFp)
//GO(PR_CloseSharedMemory, 
//GO(PR_CNotify, 
//GO(PR_CNotifyAll, 
//GO(PR_cnvtf, 
//GO(PR_Connect, 
//GO(PR_ConnectContinue, 
GO(PR_ConvertIPv4AddrToIPv6, vFup)
//GO(PR_CreateAlarm, 
//GO(PR_CreateCounter, 
//GO(PR_CreateFileMap, 
//GO(PR_CreateIOLayer, 
//GO(PR_CreateIOLayerStub, 
//GO(PR_CreateMWaitEnumerator, 
//GO(PR_CreateOrderedLock, 
//GO(PR_CreatePipe, 
//GO(PR_CreateProcess, 
//GO(PR_CreateProcessDetached, 
//GO(PR_CreateSocketPollFd, 
//GO(PR_CreateStack, 
//GOM(PR_CreateThread, pFEipiiiu)
//GOM(PR_CreateThreadGCAble, pFEipiiiu)
//GO(PR_CreateThreadPool, 
//GO(PR_CreateTrace, 
//GO(PR_CreateWaitGroup, 
//GO(PR_CSetOnMonitorRecycle, 
//GO(PR_CWait, 
//GO(PR_DecrementCounter, 
//GO(PR_Delete, 
GO(PR_DeleteSemaphore, iFp)
//GO(PR_DeleteSharedMemory, 
//GO(PR_DestroyAlarm, 
GO(PR_DestroyCondVar, vFp)
//GO(PR_DestroyCounter, 
GO(PR_DestroyLock, vFp)
GO(PR_DestroyMonitor, vFp)
//GO(PR_DestroyMWaitEnumerator, 
//GO(PR_DestroyOrderedLock, 
//GO(PR_DestroyPollableEvent, 
//GO(PR_DestroyProcessAttr, 
//GO(PR_DestroyRWLock, 
GO(PR_DestroySem, vFp)
//GO(PR_DestroySocketPollFd, 
//GO(PR_DestroyStack, 
//GO(PR_DestroyTrace, 
//GO(PR_DestroyWaitGroup, 
//GO(PR_DetachProcess, 
//GO(PR_DetachSharedMemory, 
GO(PR_DetachThread, vFv)
//GO(PR_DisableClockInterrupts, 
//GO(PR_dtoa, 
//GO(PR_DuplicateEnvironment, 
GO(PR_EmulateAcceptRead, iFppppiu)
GO(PR_EmulateSendFile, iFppiu)
//GO(PR_EnableClockInterrupts, 
GO(PR_EnterMonitor, vFp)
//GO(PR_EnumerateAddrInfo, 
//GO(PR_EnumerateHostEnt, 
//GOM(PR_EnumerateThreads, iFEBp)
//GO(PR_EnumerateWaitGroup, 
//GO(PR_ErrorInstallCallback, 
//GO(PR_ErrorInstallTable, 
//GO(PR_ErrorLanguages, 
//GO(PR_ErrorToName, 
//GO(PR_ErrorToString, 
GO(PR_ExitMonitor, iFp)
//GO(PR_ExplodeTime, 
//GO(PR_ExportFileMapAsString, 
//GO(PR_FD_CLR, 
//GO(PR_FD_ISSET, 
//GO(PR_FD_NCLR, 
//GO(PR_FD_NISSET, 
//GO(PR_FD_NSET, 
//GO(PR_FD_SET, 
//GO(PR_FD_ZERO, 
//GO(PR_FileDesc2NativeHandle, 
GOM(PR_FindFunctionSymbol, pFEpp)
//GO(PR_FindFunctionSymbolAndLibrary, 
//GO(PR_FindNextCounterQname, 
//GO(PR_FindNextCounterRname, 
//GO(PR_FindNextTraceQname, 
//GO(PR_FindNextTraceRname, 
//GO(PR_FindSymbol, 
//GO(PR_FindSymbolAndLibrary, 
//GO(PR_FloorLog2, 
//GO(PR_FormatTime, 
//GO(PR_FormatTimeUSEnglish, 
//GO(PR_fprintf, 
//GO(PR_FPrintZoneStats, 
GO(PR_Free, vFp)
//GO(PR_FreeAddrInfo, 
GO(PR_FreeLibraryName, vFp)
//GO(PR_GetAddrInfoByName, 
//GO(PR_GetCanonNameFromAddrInfo, 
//GO(PR_GetConnectStatus, 
//GO(PR_GetCounter, 
//GO(PR_GetCounterHandleFromName, 
//GO(PR_GetCounterNameFromHandle, 
//GO(PR_GetCurrentThread, 
GO(PR_GetDefaultIOMethods, pFv)
//GO(PR_GetDescType, 
//GO(PR_GetDirectorySeparator, 
//GO(PR_GetDirectorySepartor, 
//GO(PR_GetEnv, 
//GO(PR_GetEnvSecure, 
GO(PR_GetError, iFv)
//GO(PR_GetErrorText, 
GO(PR_GetErrorTextLength, iFv)
//GO(PR_GetFileInfo, 
//GO(PR_GetFileInfo64, 
//GO(PR_GetFileMethods, 
//GO(PR_GetGCRegisters, 
//GO(PR_GetHostByAddr, 
//GO(PR_GetHostByName, 
GO(PR_GetIdentitiesLayer, pFpi)
//GO(PR_GetInheritedFD, 
//GO(PR_GetInheritedFileMap, 
//GO(PR_GetIPNodeByName, 
//GO(PR_GetLayersIdentity, 
GO(PR_GetLibraryFilePathname, pFpp)
GO(PR_GetLibraryName, pFpp)
GO(PR_GetLibraryPath, pFv)
//GO(PR_GetMemMapAlignment, 
GO(PR_GetMonitorEntryCount, iFp)
//GO(PR_GetNameForIdentity, 
//GO(PR_GetNumberOfProcessors, 
//GO(PR_GetOpenFileInfo, 
//GO(PR_GetOpenFileInfo64, 
GO(PR_GetOSError, iFv)
//GO(PR_GetPageShift, 
//GO(PR_GetPageSize, 
//GO(PR_GetPathSeparator, 
//GO(PR_GetPeerName, 
//GO(PR_GetPhysicalMemorySize, 
//GO(PR_GetPipeMethods, 
//GO(PR_GetProtoByName, 
//GO(PR_GetProtoByNumber, 
//GO(PR_GetRandomNoise, 
GO(PR_GetSocketOption, iFpp)
//GO(PR_GetSockName, 
GO(PR_GetSP, pFp)
//GO(PR_GetSpecialFD, 
//GO(PR_GetStackSpaceLeft, 
//GO(PR_GetSysfdTableMax, 
//GO(PR_GetSystemInfo, 
//GO(PR_GetTCPMethods, 
GO(PR_GetThreadAffinityMask, iFpp)
GO(PR_GetThreadID, uFp)
GO(PR_GetThreadName, pFp)
GO(PR_GetThreadPriority, iFp)
//GO(PR_GetThreadPrivate, 
GO(PR_GetThreadScope, iFp)
GO(PR_GetThreadState, iFp)
GO(PR_GetThreadType, iFp)
//GO(PR_GetTraceEntries, 
//GO(PR_GetTraceHandleFromName, 
//GO(PR_GetTraceNameFromHandle, 
//GO(PR_GetTraceOption, 
//GO(PR_GetUDPMethods, 
GO(PR_GetUniqueIdentity, iFp)
//GO(PR_GetVersion, 
//GO(PR_GMTParameters, 
//GO(PR_htonl, 
//GO(PR_htonll, 
//GO(PR_htons, 
//GO(PR_ImplodeTime, 
//GO(PR_ImportFile, 
//GO(PR_ImportFileMapFromString, 
//GO(PR_ImportPipe, 
GO(PR_ImportTCPSocket, pFi)
//GO(PR_ImportUDPSocket, 
//GO(PR_IncrementCounter, 
GO(PR_Init, vFiii)
//GO(PR_Initialize, 
GO(PR_Initialized, iFv)
//GO(PR_InitializeNetAddr, 
GO(PR_Interrupt, iFp)
GO(PR_IntervalNow, iFv)
GO(PR_IntervalToMicroseconds, uFi)
GO(PR_IntervalToMilliseconds, uFi)
GO(PR_IntervalToSeconds, uFi)
//GO(PR_IsNetAddrType, 
//GO(PR_JoinJob, 
GO(PR_JoinThread, iFp)
//GO(PR_JoinThreadPool, 
//GO(PR_KillProcess, 
//GO(PR_Listen, 
//GO(PR_LoadLibrary, 
GO(PR_LoadLibraryWithFlags, pFipppi) // TODO!!!, need to wrapped and use dlopen kind of wrapping!
//GO(PR_LoadStaticLibrary, 
//GO(PR_LocalTimeParameters, 
GO(PR_Lock, vFp)
//GO(PR_LockFile, 
//GO(PR_LockOrderedLock, 
//GO(PR_LogFlush, 
//GO(PR_LogPrint, 
//GO(PR_MakeDir, 
//GO(PR_Malloc, 
//GO(PR_MemMap, 
//GO(PR_MemUnmap, 
GO(PR_MicrosecondsToInterval, iFu)
GO(PR_MillisecondsToInterval, iFu)
//GO(PR_MkDir, 
//GO(PR_NetAddrToString, 
//GO(PR_NewCondVar, 
GO(PR_NewLock, pFv)
//GO(PR_NewLogModule, 
GO(PR_NewMonitor, pFv)
GO(PR_NewNamedMonitor, pFp)
//GO(PR_NewPollableEvent, 
//GO(PR_NewProcessAttr, 
//GO(PR_NewRWLock, 
GO(PR_NewSem, pFu)
//GO(PR_NewTCPSocket, 
//GO(PR_NewTCPSocketPair, 
//GO(PR_NewThreadPrivateIndex, 
//GO(PR_NewUDPSocket, 
//GO(PR_NormalizeTime, 
GO(PR_Notify, iFp)
GO(PR_NotifyAll, iFp)
//GO(PR_NotifyAllCondVar, 
//GO(PR_NotifyCondVar, 
GO(PR_Now, pFv)
//GO(PR_ntohl, 
//GO(PR_ntohll, 
//GO(PR_ntohs, 
//GO(PR_Open, 
//GO(PR_OpenAnonFileMap, 
//GO(PR_OpenDir, 
//GO(PR_OpenFile, 
GO(PR_OpenSemaphore, pFpiiu)
//GO(PR_OpenSharedMemory, 
//GO(PR_OpenTCPSocket, 
//GO(PR_OpenUDPSocket, 
//GO(PR_ParseTimeString, 
//GO(PR_ParseTimeStringToExplodedTime, 
//GO(PRP_DestroyNakedCondVar, 
//GO(PRP_NakedBroadcast, 
//GO(PRP_NakedNotify, 
//GO(PRP_NakedWait, 
//GO(PRP_NewNakedCondVar, 
//GO(PR_Poll, 
//GO(PR_PopIOLayer, 
GO(PR_PostSem, vFp)
GO(PR_PostSemaphore, iFp)
//GO(PR_ProcessAttrSetCurrentDirectory, 
//GO(PR_ProcessAttrSetInheritableFD, 
//GO(PR_ProcessAttrSetInheritableFileMap, 
//GO(PR_ProcessAttrSetStdioRedirect, 
GO(PR_ProcessExit, vFi)
//GO(PRP_TryLock, 
//GO(PR_PushIOLayer, 
//GO(_pr_push_ipv6toipv4_layer, 
//GO(PR_QueueJob, 
//GO(PR_QueueJob_Accept, 
//GO(PR_QueueJob_Connect, 
//GO(PR_QueueJob_Read, 
//GO(PR_QueueJob_Timer, 
//GO(PR_QueueJob_Write, 
GO(PR_Read, iFppi)
//GO(PR_ReadDir, 
//GO(PR_Realloc, 
//GO(PR_RecordTraceEntries, 
//GO(PR_Recv, 
//GO(PR_RecvFrom, 
//GO(PR_Rename, 
//GO(PR_ResetAlarm, 
//GO(PR_ResetProcessAttr, 
GO(PR_ResumeAll, vFv)
//GO(PR_RmDir, 
//GO(PR_RWLock_Rlock, 
//GO(PR_RWLock_Unlock, 
//GO(PR_RWLock_Wlock, 
//GO(PR_ScanStackPointers, 
GO(PR_SecondsToInterval, iFu)
//GO(PR_Seek, 
//GO(PR_Seek64, 
//GO(PR_Select, 
//GO(PR_Send, 
//GO(PR_SendFile, 
//GO(PR_SendTo, 
//GO(PR_SetAlarm, 
//GO(PR_SetConcurrency, 
//GO(PR_SetCounter, 
GO(PR_SetCurrentThreadName, iFp)
//GO(PR_SetEnv, 
GO(PR_SetError, vFii)
GO(PR_SetErrorText, vFp)
//GO(PR_SetFDCacheSize, 
//GO(PR_SetFDInheritable, 
GO(PR_SetLibraryPath,  iFp)
//GO(PR_SetLogBuffering, 
//GO(PR_SetLogFile, 
//GO(PR_SetNetAddr, 
//GO(PR_SetPollableEvent, 
GO(PR_SetSocketOption, iFpp)
//GO(PR_SetStdioRedirect, 
//GO(PR_SetSysfdTableSize, 
//GO(PR_SetThreadAffinityMask, iFpu)
//GOM(PR_SetThreadDumpProc, vFEpBp)
GO(PR_SetThreadGCAble, vFv)
GO(PR_SetThreadPriority, vFpi)
//GO(PR_SetThreadPrivate, 
//GO(PR_SetThreadRecycleMode, 
//GO(PR_SetTraceOption, 
//GO(PR_Shutdown, 
//GO(PR_ShutdownThreadPool, 
GO(PR_Sleep, iFu)
//GO(PR_smprintf, 
//GO(PR_smprintf_free, 
//GO(PR_snprintf, 
//GO(PR_Socket, 
//GO(PR_sprintf_append, 
//GO(PR_sscanf, 
//GO(PR_StackPop, 
//GO(PR_StackPush, 
//GO(PR_Stat, 
GO(PR_StringToNetAddr, iFpp)
//GO(PR_strtod, 
//GO(PR_SubtractFromCounter, 
GO(PR_SuspendAll, vFv)
//GO(PR_sxprintf, 
//GO(PR_Sync, 
//GO(PR_SyncMemMap, 
//GO(_pr_test_ipv6_socket, 
//GO(PR_ThreadScanStackPointers, 
GO(PR_TicksPerSecond, uFv)
//GO(PR_TLockFile, 
//GO(PR_Trace, 
//GO(PR_TransmitFile, 
//GO(PR_UnblockClockInterrupts, 
GO(PR_UnblockInterrupt, vFv)
GO(PR_UnloadLibrary, iFp)
GO(PR_Unlock, iFp)
//GO(PR_UnlockFile, 
//GO(PR_UnlockOrderedLock, 
//GO(PR_USPacificTimeParameters, 
//GO(PR_VersionCheck, 
//GO(PR_vfprintf, 
//GO(PR_vsmprintf, 
//GO(PR_vsnprintf, 
//GO(PR_vsprintf_append, 
//GO(PR_vsxprintf, 
GO(PR_Wait, iFpi)
GO(PR_WaitCondVar, iFpi)
//GO(PR_WaitForPollableEvent, 
//GO(PR_WaitProcess, 
//GO(PR_WaitRecvReady, 
GO(PR_WaitSem, iFp)
GO(PR_WaitSemaphore, iFp)
GO(PR_Write, iFppi)
//GO(PR_Writev, 
GO(PR_Yield, iFv)
//GO(PT_FPrintStats, 
GO(SetExecutionEnvironment, vFpp)
