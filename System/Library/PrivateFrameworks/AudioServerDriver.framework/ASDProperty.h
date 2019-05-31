/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:05:42 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/AudioServerDriver.framework/AudioServerDriver
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AudioServerDriver/AudioServerDriver-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class ASDPropertyAddress;

@interface ASDProperty : NSObject <NSCopying> {

	ASDPropertyAddress* _address;
	id _value;

}

@property (nonatomic,readonly) ASDPropertyAddress * address;              //@synthesize address=_address - In the implementation block
@property (nonatomic,retain) id value;                                    //@synthesize value=_value - In the implementation block
-(ASDPropertyAddress *)address;
-(id)initWithAddress:(id)arg1 value:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)value;
-(void)setValue:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
@end

