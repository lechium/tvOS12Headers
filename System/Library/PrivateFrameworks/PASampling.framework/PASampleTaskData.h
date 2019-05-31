/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:05:05 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/PASampling.framework/PASampling
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PASampling/PASampling-Structs.h>
#import <PASampling/PASerializable.h>

@class NSMutableDictionary, PASampleTimeInsensitiveTaskData, PASampleTaskDataPrivateData, NSSet, NSString, NSDictionary, NSArray, NSUUID;

@interface PASampleTaskData : NSObject <PASerializable> {

	NSMutableDictionary* _sampleThreadsDict;
	PASampleTimeInsensitiveTaskData* _timeInsensitiveTaskData;
	PASampleTaskDataPrivateData* _privateData;
	NSSet* _donatingUniqueIds;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) NSDictionary * sampleThreads;                                    //@synthesize sampleThreadsDict=_sampleThreadsDict - In the implementation block
@property (readonly) int pid; 
@property (readonly) int ppid; 
@property (readonly) int rpid; 
@property (readonly) unsigned uid; 
@property (readonly) unsigned long long uniquePid; 
@property (copy) NSString * name; 
@property (readonly) NSString * bundleName; 
@property (readonly) NSString * mainBinaryPath; 
@property (readonly) NSArray * imageInfos; 
@property (readonly) NSUUID * mainBinaryUuid; 
@property (readonly) unsigned long long mainBinaryOffset; 
@property (readonly) BOOL isUnresponsive; 
@property (readonly) double timeOfLastResponse; 
@property (readonly) BOOL usesSuddenTermination; 
@property (readonly) BOOL allowsIdleExit; 
@property (readonly) BOOL isThirdParty; 
@property (readonly) BOOL isTranslocated; 
@property (readonly) BOOL wqAndDirtyAreStatic; 
@property (readonly) int suspendCount; 
@property (readonly) long long taskSizeInBytes; 
@property (readonly) int numberOfPageFaults; 
@property (readonly) int numberOfPageIns; 
@property (readonly) int numberOfCopyOnWritePageFaults; 
@property (readonly) unsigned latency_qos; 
@property (readonly) unsigned long long terminatedThreadsUserTimeInNs; 
@property (readonly) unsigned long long terminatedThreadsSystemTimeInNs; 
@property (readonly) unsigned long long terminatedThreadsInstructions; 
@property (readonly) unsigned long long terminatedThreadsCycles; 
@property (retain) NSSet * donatingUniqueIds;                                         //@synthesize donatingUniqueIds=_donatingUniqueIds - In the implementation block
@property (readonly) double mostRecentTimeSamplingOnlyMainThread; 
@property (readonly) unsigned long long ss_flags; 
@property (readonly) BOOL isTaskResourceFlagged; 
@property (readonly) BOOL isTerminatedSnapshot; 
@property (readonly) BOOL isPidSuspended; 
@property (readonly) BOOL isFrozen; 
@property (readonly) BOOL isDarwinBG; 
@property (readonly) BOOL isDarwinExtBG; 
@property (readonly) BOOL isVisible; 
@property (readonly) BOOL isNonVisible; 
@property (readonly) BOOL isForeground; 
@property (readonly) BOOL isBoosted; 
@property (readonly) BOOL isSuppressed; 
@property (readonly) BOOL isTimerThrottled; 
@property (readonly) BOOL isImpDonor; 
@property (readonly) BOOL isLiveImpDonor; 
@property (readonly) BOOL isDirty; 
@property (readonly) BOOL wqExceededConstrainedThreadLimit; 
@property (readonly) BOOL wqExceededTotalThreadLimit; 
+(id)newInstanceWithoutReferencesFromBufferPosition:(const void*)arg1 ;
+(id)classDictionaryKey;
-(int)suspendCount;
-(NSString *)bundleName;
-(BOOL)isDirty;
-(BOOL)isForeground;
-(NSArray *)imageInfos;
-(BOOL)addSelfToBufferAtPosition:(void*)arg1 withCompletedSerializationDictionary:(id)arg2 ;
-(void)populateReferencesUsingBufferPosition:(const void*)arg1 andDeserializationDictionary:(id)arg2 andDataBufferDictionary:(id)arg3 ;
-(id)initWithTimeInsensitiveTaskData:(id)arg1 ;
-(id)sampleThreadForTid:(unsigned long long)arg1 ;
-(id)mutableSampleThreads;
-(id)timeInsensitiveTaskData;
-(NSDictionary *)sampleThreads;
-(unsigned long long)mainBinaryOffset;
-(double)mostRecentTimeSamplingOnlyMainThread;
-(NSUUID *)mainBinaryUuid;
-(BOOL)wqAndDirtyAreStatic;
-(int)numberOfPageIns;
-(NSSet *)donatingUniqueIds;
-(int)numberOfPageFaults;
-(int)numberOfCopyOnWritePageFaults;
-(void)setSampleThreads:(NSDictionary *)arg1 ;
-(id)initWithStackshotTask:(id)arg1 andTimeInsensitiveTaskData:(id)arg2 machTimebase:(mach_timebase_info)arg3 ;
-(id)initWithKCDataStackshotTask:(const task_snapshot_v2*)arg1 andTimeInsensitiveTaskData:(id)arg2 andTerminatedThreadsInstructionCycles:(const instrs_cycles_snapshot*)arg3 machTimebase:(mach_timebase_info)arg4 ;
-(id)initWithKCDataStackshotDeltaTask:(const task_delta_snapshot_v2*)arg1 andTimeInsensitiveTaskData:(id)arg2 andTerminatedThreadsInstructionCycles:(const instrs_cycles_snapshot*)arg3 machTimebase:(mach_timebase_info)arg4 ;
-(BOOL)isSameAsTask:(id)arg1 ;
-(void)setDonatingUniqueIds:(NSSet *)arg1 ;
-(int)pid;
-(int)ppid;
-(unsigned long long)sizeInBytesForSerializedVersion;
-(void)addSelfToSerializationDictionary:(id)arg1 ;
-(unsigned long long)uniquePid;
-(NSString *)mainBinaryPath;
-(BOOL)isDarwinBG;
-(CSArchitecture)architecture;
-(long long)taskSizeInBytes;
-(unsigned long long)ss_flags;
-(unsigned)latency_qos;
-(unsigned long long)terminatedThreadsUserTimeInNs;
-(unsigned long long)terminatedThreadsSystemTimeInNs;
-(unsigned long long)terminatedThreadsInstructions;
-(unsigned long long)terminatedThreadsCycles;
-(BOOL)isPidSuspended;
-(BOOL)isSuppressed;
-(int)rpid;
-(BOOL)isTranslocated;
-(BOOL)isUnresponsive;
-(double)timeOfLastResponse;
-(id)architectureString;
-(BOOL)wqExceededTotalThreadLimit;
-(BOOL)wqExceededConstrainedThreadLimit;
-(BOOL)isTerminatedSnapshot;
-(BOOL)usesSuddenTermination;
-(BOOL)allowsIdleExit;
-(BOOL)isBoosted;
-(BOOL)isThirdParty;
-(BOOL)isTaskResourceFlagged;
-(BOOL)isDarwinExtBG;
-(BOOL)isNonVisible;
-(BOOL)isTimerThrottled;
-(BOOL)isImpDonor;
-(BOOL)isLiveImpDonor;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(NSString *)debugDescription;
-(BOOL)isVisible;
-(unsigned)uid;
-(BOOL)isFrozen;
@end

