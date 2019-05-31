/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:07:37 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/SampleAnalysis.framework/SampleAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <SampleAnalysis/SampleAnalysis-Structs.h>
@class SAMountStatusTracker;

@interface SAPAStyleMountStatusTracker : NSObject {

	SAMountStatusTracker* _tracker;

}

@property (retain) SAMountStatusTracker * tracker;              //@synthesize tracker=_tracker - In the implementation block
+(id)classDictionaryKey;
+(id)newInstanceWithoutReferencesFromSerializedBuffer:(const SCD_Struct_SA21*)arg1 bufferLength:(unsigned long long)arg2 ;
-(unsigned long long)sizeInBytesForSerializedVersion;
-(void)addSelfToSerializationDictionary:(id)arg1 ;
-(BOOL)addSelfToBuffer:(void*)arg1 bufferLength:(unsigned long long)arg2 withCompletedSerializationDictionary:(NSMutableDictionary*)arg3 ;
-(void)populateReferencesUsingBuffer:(const SCD_Struct_SA21*)arg1 bufferLength:(unsigned long long)arg2 andDeserializationDictionary:(id)arg3 andDataBufferDictionary:(id)arg4 ;
-(SAMountStatusTracker *)tracker;
-(void)setTracker:(SAMountStatusTracker *)arg1 ;
@end

