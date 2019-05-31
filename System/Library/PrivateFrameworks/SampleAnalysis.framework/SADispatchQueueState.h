/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:07:38 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/SampleAnalysis.framework/SampleAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SampleAnalysis/SampleAnalysis-Structs.h>
#import <libobjc.A.dylib/SASerializable.h>

@class SAThread, NSString, SAThreadState;

@interface SADispatchQueueState : NSObject <SASerializable> {

	SAThread* _thread;
	unsigned long long _threadStateIndex;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) SAThread * thread;                                //@synthesize thread=_thread - In the implementation block
@property (readonly) unsigned long long threadStateIndex;              //@synthesize threadStateIndex=_threadStateIndex - In the implementation block
@property (readonly) SAThreadState * threadState; 
+(id)classDictionaryKey;
+(id)newInstanceWithoutReferencesFromSerializedBuffer:(const SCD_Struct_SA33*)arg1 bufferLength:(unsigned long long)arg2 ;
+(id)stateWithThread:(id)arg1 threadStateIndex:(unsigned long long)arg2 ;
-(SAThread *)thread;
-(unsigned long long)sizeInBytesForSerializedVersion;
-(void)addSelfToSerializationDictionary:(NSMutableDictionary*)arg1 ;
-(BOOL)addSelfToBuffer:(SCD_Struct_SA33*)arg1 bufferLength:(unsigned long long)arg2 withCompletedSerializationDictionary:(NSMutableDictionary*)arg3 ;
-(void)populateReferencesUsingBuffer:(const SCD_Struct_SA33*)arg1 bufferLength:(unsigned long long)arg2 andDeserializationDictionary:(NSMutableDictionary*)arg3 andDataBufferDictionary:(NSMutableDictionary*)arg4 ;
-(SAThreadState *)threadState;
-(unsigned long long)threadStateIndex;
-(id)initWithThread:(id)arg1 threadStateIndex:(unsigned long long)arg2 ;
-(id)debugDescriptionWithDispatchQueue:(id)arg1 ;
@end

