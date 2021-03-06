/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:06:34 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/TimeSync.framework/TimeSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, NSString;

@interface TSMTIEMask : NSObject {

	NSArray* _elements;
	NSString* _name;

}

@property (nonatomic,copy) NSArray * elements;              //@synthesize elements=_elements - In the implementation block
@property (nonatomic,copy) NSString * name;                 //@synthesize name=_name - In the implementation block
+(id)UDPHardwareMask;
+(id)UDPSoftwareMask;
+(id)gPTPMask1;
+(id)gPTPMask2;
+(id)gPTPMask3;
+(id)gPTP7Hop;
+(id)gPTP1Hop;
-(BOOL)mtieConformsToMask:(id)arg1 withErrors:(id*)arg2 ;
-(id)mtieMaskFromStart:(double)arg1 toEnd:(double)arg2 withStep:(double)arg3 ;
-(void)dealloc;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSArray *)elements;
-(void)setElements:(NSArray *)arg1 ;
@end

