/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:01:46 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Vision/Vision-Structs.h>
#import <Vision/VNObservation.h>

@class NSNumber;

@interface VNImageScoreObservation : VNObservation {

	NSNumber* _blurScore;
	NSNumber* _exposureScore;

}

@property (nonatomic,retain) NSNumber * blurScore;                  //@synthesize blurScore=_blurScore - In the implementation block
@property (nonatomic,retain) NSNumber * exposureScore;              //@synthesize exposureScore=_exposureScore - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSNumber *)blurScore;
-(void)setExposureScore:(NSNumber *)arg1 ;
-(void)setBlurScore:(NSNumber *)arg1 ;
-(NSNumber *)exposureScore;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
