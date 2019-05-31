/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:07:38 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/SampleAnalysis.framework/SampleAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SampleAnalysis/SampleAnalysis-Structs.h>
#import <libobjc.A.dylib/SASerializable.h>

@class NSMutableArray, SATimestamp, NSString, NSArray;

@interface SAThread : NSObject <SASerializable> {

	NSMutableArray* _threadStates;
	BOOL _isGlobalForcedIdle;
	BOOL _isMainThread;
	unsigned long long _threadId;
	SATimestamp* _creationTimestamp;
	SATimestamp* _exitTimestamp;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (retain) SATimestamp * creationTimestamp;                 //@synthesize creationTimestamp=_creationTimestamp - In the implementation block
@property (retain) SATimestamp * exitTimestamp;                     //@synthesize exitTimestamp=_exitTimestamp - In the implementation block
@property (assign) BOOL isGlobalForcedIdle;                         //@synthesize isGlobalForcedIdle=_isGlobalForcedIdle - In the implementation block
@property (assign) BOOL isMainThread;                               //@synthesize isMainThread=_isMainThread - In the implementation block
@property (readonly) unsigned long long threadId;                   //@synthesize threadId=_threadId - In the implementation block
@property (readonly) BOOL isProcessorIdleThread; 
@property (readonly) NSArray * threadStates;                        //@synthesize threadStates=_threadStates - In the implementation block
+(id)classDictionaryKey;
+(id)newInstanceWithoutReferencesFromSerializedBuffer:(const SCD_Struct_SA28*)arg1 bufferLength:(unsigned long long)arg2 ;
+(id)threadWithId:(unsigned long long)arg1 ;
-(unsigned long long)sizeInBytesForSerializedVersion;
-(void)addSelfToSerializationDictionary:(NSMutableDictionary*)arg1 ;
-(BOOL)addSelfToBuffer:(SCD_Struct_SA28*)arg1 bufferLength:(unsigned long long)arg2 withCompletedSerializationDictionary:(NSMutableDictionary*)arg3 ;
-(void)populateReferencesUsingBuffer:(const SCD_Struct_SA28*)arg1 bufferLength:(unsigned long long)arg2 andDeserializationDictionary:(NSMutableDictionary*)arg3 andDataBufferDictionary:(NSMutableDictionary*)arg4 ;
-(SATimestamp *)exitTimestamp;
-(void)setExitTimestamp:(SATimestamp *)arg1 ;
-(void)setIsMainThread:(BOOL)arg1 ;
-(void)setIsGlobalForcedIdle:(BOOL)arg1 ;
-(void)setCreationTimestamp:(SATimestamp *)arg1 ;
-(NSArray *)threadStates;
-(unsigned long long)threadId;
-(unsigned long long)addState:(id)arg1 ;
-(void)enumerateThreadStatesBetweenStartTime:(id)arg1 endTime:(id)arg2 reverseOrder:(BOOL)arg3 withSampleIndex:(BOOL)arg4 block:(/*^block*/id)arg5 ;
-(SATimestamp *)creationTimestamp;
-(BOOL)isGlobalForcedIdle;
-(id)initWithId:(unsigned long long)arg1 ;
-(unsigned long long)indexOfFirstThreadStateOnOrAfterTime:(id)arg1 withSampleIndex:(BOOL)arg2 ;
-(unsigned long long)indexOfLastThreadStateOnOrBeforeTime:(id)arg1 withSampleIndex:(BOOL)arg2 ;
-(BOOL)isProcessorIdleThread;
-(id)firstThreadStateOnOrAfterTime:(id)arg1 withSampleIndex:(BOOL)arg2 ;
-(id)lastThreadStateOnOrBeforeTime:(id)arg1 withSampleIndex:(BOOL)arg2 ;
-(unsigned long long)sampleCountInTimestampRangeStart:(id)arg1 end:(id)arg2 ;
-(void)forwardFillMonotonicallyIncreasingData;
-(NSString *)debugDescription;
-(BOOL)isMainThread;
@end

