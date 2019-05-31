/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:06:10 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <HMFoundation/HMFObject.h>

@interface HMDTLVCreator : HMFObject {

	SCD_Struct_HM25 _tlv;
	BOOL _addHasFailed;

}
+(id)creator;
+(id)creatorWithBufferSize:(unsigned long long)arg1 ;
-(BOOL)addTLV:(unsigned long long)arg1 number:(id)arg2 ;
-(id)serialize;
-(BOOL)addTLV:(unsigned long long)arg1 length:(unsigned long long)arg2 number:(id)arg3 ;
-(BOOL)addTLV:(unsigned long long)arg1 data:(id)arg2 ;
-(BOOL)addTLV:(unsigned long long)arg1 string:(id)arg2 ;
-(BOOL)addTLV:(unsigned long long)arg1 uuid:(id)arg2 ;
-(BOOL)addTLV:(unsigned long long)arg1 length:(unsigned long long)arg2 floatNumber:(id)arg3 ;
-(id)initWithBufferSize:(unsigned long long)arg1 ;
-(void)dealloc;
@end

