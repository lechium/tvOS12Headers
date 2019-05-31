/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:04:06 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Symbolication/Symbolication-Structs.h>
@interface VMUVMRegionRangeInfo : NSObject {

	unsigned long long address;
	unsigned long long size;
	unsigned long long stackIdentifier;
	unsigned userTag;

}

@property (assign) unsigned long long address; 
@property (assign) unsigned long long size; 
@property (readonly) VMURange range; 
@property (assign) unsigned long long stackIdentifier; 
@property (assign) unsigned userTag; 
-(void)setAddress:(unsigned long long)arg1 ;
-(unsigned long long)address;
-(unsigned)userTag;
-(unsigned long long)stackIdentifier;
-(void)setStackIdentifier:(unsigned long long)arg1 ;
-(void)setUserTag:(unsigned)arg1 ;
-(unsigned long long)size;
-(id)init;
-(void)setSize:(unsigned long long)arg1 ;
-(VMURange)range;
@end

