/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:58:36 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface AVAssetTrackSegment : NSObject <NSSecureCoding> {

	SCD_Struct_CM9 _timeMapping;

}

@property (nonatomic,readonly) SCD_Struct_CM9 timeMapping;              //@synthesize timeMapping=_timeMapping - In the implementation block
@property (getter=isEmpty,nonatomic,readonly) BOOL empty; 
+(BOOL)supportsSecureCoding;
-(id)_initWithTimeMapping:(SCD_Struct_CM9)arg1 ;
-(SCD_Struct_CM9)timeMapping;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(BOOL)isEmpty;
@end

